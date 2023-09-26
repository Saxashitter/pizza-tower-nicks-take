package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.util.FlxFSM;
import flixel.input.gamepad.lists.FlxGamepadPointerValueList;

using StringTools;

enum States
{
	STAND;
	JUMP;
	FALL;
	MACH;
	SKID;
	DRIFT;
	SUPER_JUMP;
}

class Peppino extends FlxSprite
{
	var fsm:FlxFSM<Peppino>;

	public var movespeed:Float = 0.5; // FOR MACH

	var maxMachVelo:Float = 35;

	public var machrunning:Bool = false;

	public var curState = States.STAND;
	public var prevState = States.STAND;

	public var abletoFlipSprite:Bool = true;

	public var hasTransitioned:Bool = false;

	public var daAccel:Float = 0.25;

	public function changeState(state:States)
	{
		hasTransitioned = false;
		prevState = curState;
		curState = state;
	}

	public override function new(x:Float, y:Float)
	{
		super(x, y);

		frames = AssetPaths.gmlSprite('assets/images/peppino');

		// animations
		// the rest arent really loaded because flxatlasframes has a limit and is kept in sprites.json instead
		animation.addByPrefix('idle//transition-$SKID', 'spr_player_machslideend', 24, false);
		animation.addByPrefix('idle//transition-$FALL', 'spr_player_land', 24, false);
		animation.addByPrefix('idle//transition-$SUPER_JUMP', 'spr_player_land', 24, false);
		animation.addByPrefix('idle_', 'spr_player_idle_', 24);

		animation.addByPrefix('walk', 'spr_player_move', 24);

		animation.addByIndices('jump//transition_', 'spr_player_jump_', [0, 1, 2, 3, 4, 5], '', 24, false);
		animation.addByIndices('jump_', 'spr_player_jump_', [6, 7], '', 24, true);
		animation.addByIndices('fall//transition-$JUMP', 'spr_player_jump_', [8], '', 24, false);
		animation.addByIndices('fall_', 'spr_player_jump_', [9, 10, 11], '', 24, true);

		animation.addByPrefix('mach_1', 'spr_player_mach1_', 24, false);
		animation.addByPrefix('mach_2', 'spr_player_mach4', 24);

		animation.addByPrefix('mach_stop//transition_', 'spr_player_machslidestart', 24, false);
		animation.addByPrefix('mach_stop_', 'spr_player_machslide_', 24, true);

		animation.addByPrefix('mach_jump//transition_', 'spr_player_secondjump1', 24, false);
		animation.addByPrefix('mach_jump_', 'spr_player_secondjump2', 24, true);

		animation.addByPrefix('mach_drift//transition_', 'spr_player_machslideboost3_', 24, false);
		animation.addByPrefix('mach_drift', 'spr_player_machslideboost3fall', 24);

		animation.addByPrefix('superjump_prep//transition_', 'spr_player_superjumpprep_', 24, false);
		animation.addByPrefix('superjump_prep_', 'spr_player_superjumppreplight', 24);
		animation.addByPrefix('superjump_prep_left', 'spr_player_superjumpleft', 24);
		animation.addByPrefix('superjump_prep_right', 'spr_player_superjumpright', 24);

		animation.addByPrefix('superjump_', 'spr_player_superjump_', 24);

		animation.addByPrefix('superjump_cancel_startup', 'spr_player_Sjumpcancelstart', 24, false);
		animation.addByPrefix('superjump_cancel', 'spr_player_Sjumpcancel_', 24);

		width = 37;
		height = 60;

		offset.y = 35;

		// animation.play('idle');

		maxVelocity.x = 15;
		drag.x = maxVelocity.x * 4;
		acceleration.y = daAccel;

		animation.finishCallback = (name:String) ->
		{
			var names = name.split('//');
			if (names[1] != null && names[1].startsWith('transition'))
			{
				animation.play(names[0] + '_');
			}
		}

		fsm = new FlxFSM(this);
		fsm.transitions.add(Idle, Jump, (_) -> FlxG.keys.justPressed.SPACE);
		fsm.transitions.add(Idle, Fall, (_) -> !isTouching(DOWN));
		fsm.transitions.add(Idle, Mach, (_) -> FlxG.keys.pressed.SHIFT && isTouching(DOWN));

		fsm.transitions.add(Jump, Idle, (_) -> isTouching(DOWN));
		fsm.transitions.add(Jump, Fall, (_) -> !isTouching(DOWN) && velocity.y >= 0);

		fsm.transitions.add(Fall, Idle, (_) -> isTouching(DOWN) && !machrunning);
		fsm.transitions.add(Fall, Mach, (_) -> isTouching(DOWN) && machrunning);

		fsm.transitions.start(Idle);
	}

	public override function update(elapsed:Float)
	{
		if (abletoFlipSprite)
			if (velocity.x < 0 && !flipX)
				flipX = true;
			else if (velocity.x > 0 && flipX)
				flipX = false;

		if (!flipX)
			offset.x = 27;
		else
			offset.x = 35;

		if (velocity.y > 0)
			acceleration.y = daAccel * 2;
		else
			acceleration.y = daAccel;

		fsm.update(elapsed);
		super.update(elapsed);
	}

	public function playAnim(animationName:String, ?force:Bool = false)
	{
		var animToPlay = animationName;

		if (animation.getByName(animationName + '_') != null)
			animToPlay = animationName + '_';

		if (!hasTransitioned)
		{
			if (animation.getByName('$animationName//transition_') != null)
			{
				animToPlay = '$animationName//transition_';
				hasTransitioned = true;
			}

			var state = Std.string(prevState);
			// TODO: somethings wrong here and idk what it is, help
			if (animation.getByName('$animationName//transition-$state') != null)
			{
				animToPlay = '$animationName//transition-$state';
				hasTransitioned = true;
			}
		}

		animation.play(animToPlay, force);
	}

	// MOVEMENT CODE
	public function walkMovement()
	{
		final speed = 2;
		if (FlxG.keys.pressed.A)
			acceleration.x = -speed;
		else if (FlxG.keys.pressed.D)
			acceleration.x = speed;
		else
		{
			velocity.x = 0;
			acceleration.x = 0;
		}

		if (FlxG.keys.justReleased.A || FlxG.keys.justReleased.D)
			velocity.x = 0;
	}

	public function getMovementType()
	{
		if (machrunning)
			return machMovement;
		else
			return walkMovement;
	}

	public function getMachSpeed(val:Int = 0):Float
	{
		switch (val)
		{
			default:
				if (movespeed >= 20)
					return 2;
				else if (movespeed >= 8)
					return 1;

				return 0;
			case 1:
				if (movespeed >= 20)
					return 20;
				else if (movespeed >= 8)
					return 8;

				return 0;
			case 2:
				if (movespeed >= 20)
					return 0.025;
				else if (movespeed >= 8)
					return 0.1;

				return 0.75;
		}
	}

	public function machMovement()
	{
		if (isTouching(DOWN))
			if (movespeed < maxMachVelo)
				movespeed += 0.075;

		var turn = (flipX ? -1 : 1);
		velocity.x = movespeed * turn;
	}
}

class Idle extends FlxFSMState<Peppino>
{
	override function enter(peppino:Peppino, fsm:FlxFSM<Peppino>)
	{
		peppino.changeState(STAND);
		peppino.playAnim('idle');
	}

	override function update(elapsed:Float, peppino:Peppino, fsm:FlxFSM<Peppino>)
	{
		final speed = 825;

		peppino.walkMovement();

		if (Math.abs(peppino.velocity.x) > 0 && peppino.animation.curAnim.name != "walk")
			peppino.playAnim('walk');
		else if (Math.abs(peppino.velocity.x) == 0 && !peppino.animation.curAnim.name.startsWith('idle'))
			peppino.playAnim('idle');
	}
}

class Jump extends FlxFSMState<Peppino>
{
	var isHoldingSpace:Bool = true;

	override function enter(peppino:Peppino, fsm:FlxFSM<Peppino>)
	{
		peppino.changeState(JUMP);
		peppino.velocity.y = -4;

		if (!peppino.machrunning)
			peppino.playAnim('jump');
		else
			peppino.playAnim('mach_jump');
	}

	override function update(elapsed:Float, peppino:Peppino, fsm:FlxFSM<Peppino>)
	{
		final speed = 825;

		var movement = peppino.getMovementType();
		movement();

		if (isHoldingSpace && FlxG.keys.released.SPACE && peppino.velocity.y < 0)
		{
			peppino.velocity.y = 0;
			isHoldingSpace = false;
		}
	}

	override function exit(peppino:Peppino)
	{
		isHoldingSpace = true;
	}
}

class Fall extends FlxFSMState<Peppino>
{
	override function enter(peppino:Peppino, fsm:FlxFSM<Peppino>)
	{
		peppino.changeState(FALL);
		if (!peppino.machrunning)
			peppino.playAnim('fall');
		else if (!peppino.animation.curAnim.name.startsWith('mach_jump'))
			peppino.playAnim('mach_jump');
	}

	override function update(elapsed:Float, peppino:Peppino, fsm:FlxFSM<Peppino>)
	{
		var movement = peppino.getMovementType();
		movement();
	}
}
