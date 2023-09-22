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
		var bg:FlxSprite = new FlxSprite(0, 0).makeGraphic(FlxG.width, FlxG.height, FlxColor.GRAY);
		bg.scrollFactor.set(0, 0);
		add(bg);
		add(stage = new FlxSprite(0, FlxG.height / 2).makeGraphic(FlxG.width * 4, Std.int(FlxG.height / 2)));
		stage.immovable = true;
		add(peppino = new Peppino(0, 0));

		FlxG.worldBounds.set(0, 0, FlxG.width * 4, FlxG.height);

		FlxG.camera.follow(peppino);
		FlxG.camera.followLerp = 30 / FlxG.updateFramerate;
		// FlxG.camera.follow(peppino);
	}

	override public function update(elapsed:Float)
	{
		FlxG.collide(peppino, stage);
		super.update(elapsed);
	}
}
