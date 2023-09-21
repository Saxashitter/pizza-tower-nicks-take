package;

import Peppino;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;

class PlayState extends FlxState
{
	var peppino:Peppino;
	var stage:FlxSprite;

	override public function create()
	{
		super.create();
		add(stage = new FlxSprite(0, FlxG.height / 2).makeGraphic(FlxG.width, Std.int(FlxG.height / 2)));
		stage.immovable = true;
		add(peppino = new Peppino(0, 0));

		// FlxG.camera.follow(peppino);
	}

	override public function update(elapsed:Float)
	{
		FlxG.collide(peppino, stage);
		super.update(elapsed);
	}
}
