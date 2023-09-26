package;

import Peppino;
import flixel.FlxCamera.FlxCameraFollowStyle;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.editors.ogmo.FlxOgmo3Loader;
import flixel.addons.tile.FlxTilemapExt;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.util.FlxColor;
import tjson.TJSON;

class PlayState extends FlxState
{
	var peppino:Peppino;
	var loader:FlxOgmo3Loader;
	var stage:FlxTilemap;
	var collision:FlxTilemapExt;

	public static var stageName:String = 'gutter';

	override public function create()
	{
		super.create();
		var bg:FlxSprite = new FlxSprite(0, 0).makeGraphic(FlxG.width, FlxG.height, FlxColor.GRAY);
		bg.scrollFactor.set(0, 0);
		add(bg);

		loader = new FlxOgmo3Loader(AssetPaths.map(stageName), AssetPaths.map(stageName, 'json'));
		// var data = TJSON.parse(AssetPaths.data('$stageName/map'));

		collision = loader.loadTilemapExt(AssetPaths.tileset('collisions'), "collision");
		stage = loader.loadTilemap(AssetPaths.tileset(stageName, 'tower'), "visuals");

		add(collision);
		collision.visible = false;
		add(stage);

		var spawn = {x: 0, y: 0};
		loader.loadEntities((entity) ->
		{
			if (entity.name == 'Spawn')
			{
				spawn.x = entity.x;
				spawn.y = entity.y - 60;
				trace(entity.x, entity.y);
			}
		}, "spawns");

		peppino = new Peppino(spawn.x, spawn.y);
		add(peppino);

		FlxG.worldBounds.set(0, 0, collision.width, collision.height);
		// FlxG.camera.setScrollBounds(0, stage.width, 0, stage.height);
		FlxG.camera.follow(peppino, FlxCameraFollowStyle.LOCKON, 1.2);
	}

	override public function update(elapsed:Float)
	{
		FlxG.collide(collision, peppino);
		super.update(elapsed);
	}
}
