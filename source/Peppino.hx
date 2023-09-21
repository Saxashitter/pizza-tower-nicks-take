package;

import flixel.FlxG;
import flixel.FlxSprite;
#if sys
import sys.io.File;
import sys.io.FileSystem;
#end

class Peppino extends FlxSprite
{
	public override function new(x:Float, y:Float)
	{
		super(x, y);

		frames = AssetPaths.gmlSprite('assets/images/peppino');
		animation.addByPrefix('idle', 'spr_player_idle');
		width = 37;

		height = 60;

		offset.y = 35;

		animation.play('idle');

		maxVelocity.x = 60;
		drag.x = maxVelocity.x * 4;
		acceleration.y = 600;
	}

	public override function update(elapsed:Float)
	{
		super.update(elapsed);
		if (FlxG.keys.justPressed.LEFT)
			acceleration.x = -200;
		else if (FlxG.keys.justPressed.RIGHT)
			acceleration.x = 200;

		if (!flipX)
			offset.x = 27;
		else
			offset.x = 35;
	}
}
