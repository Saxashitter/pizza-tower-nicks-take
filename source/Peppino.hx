package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.util.FlxFSM;

using StringTools;

enum States
{
	STAND;
	JUMP;
	FALL;
	MACH;
	SKID;
}

class Peppino extends FlxSprite
{
	var fsm:FlxFSM<Peppino>;

	public var movespeed:Float = 350; // FOR MACH

	var maxMachVelo:Float = 1400;

	public var machrunning:Bool = false;

	public var curState = States.STAND;
	public var prevState = States.STAND;

	var hasTransitioned:Bool = true;

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

		width = 37;
		height = 60;

		offset.y = 35;

		// animation.play('idle');

		maxVelocity.x = 250;
		drag.x = maxVelocity.x * 4;
		acceleration.y = 900;

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

		fsm.transitions.add(Mach, Skid, (_) -> FlxG.keys.released.SHIFT && isTouching(DOWN));
		fsm.transitions.add(Mach, Jump, (_) -> FlxG.keys.justPressed.SPACE && isTouching(DOWN));
		fsm.transitions.add(Mach, Fall, (_) -> !isTouching(DOWN));

		fsm.transitions.add(Skid, Idle, (_) -> movespeed <= 120);

		fsm.transitions.start(Idle);
	}

	public override function update(elapsed:Float)
	{
		fsm.update(elapsed);
		super.update(elapsed);

		if (velocity.x < 0 && !flipX)
			flipX = true;
		else if (velocity.x > 0 && flipX)
			flipX = false;

		if (!flipX)
			offset.x = 27;
		else
			offset.x = 35;
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
		final speed = 825;
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

	public function getMachSpeed()
	{
		if (movespeed > 600)
			return 1;

		return 0;
	}

	public function machMovement()
	{
		if (isTouching(DOWN))
			if (movespeed < maxMachVelo)
				movespeed += 10;

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
		peppino.velocity.y = -475;

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

class Mach extends FlxFSMState<Peppino>
{
	override function enter(peppino:Peppino, fsm:FlxFSM<Peppino>)
	{
		peppino.changeState(MACH);
		peppino.machrunning = true;
		peppino.playAnim('mach_1');
	}

	override function update(elapsed:Float, peppino:Peppino, fsm:FlxFSM<Peppino>)
	{
		peppino.machMovement();
		if (peppino.getMachSpeed() == 1 && peppino.animation.curAnim.name != 'mach_2')
			peppino.playAnim('mach_2');
	}

	override function exit(peppino:Peppino) {}
}

class Skid extends FlxFSMState<Peppino>
{
	override function enter(peppino:Peppino, fsm:FlxFSM<Peppino>)
	{
		peppino.machrunning = false;

		peppino.changeState(SKID);
		peppino.playAnim('mach_stop');
	}

	override function update(elapsed:Float, peppino:Peppino, fsm:FlxFSM<Peppino>)
	{
		peppino.movespeed -= 30;
		var turn = peppino.flipX ? -1 : 1;
		peppino.velocity.x = peppino.movespeed * turn;
	}

	override function exit(peppino:Peppino)
	{
		peppino.movespeed = 350;
		peppino.velocity.x = 0;
	}
}
