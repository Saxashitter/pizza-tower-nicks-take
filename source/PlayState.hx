package;

import Peppino;
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

		add(peppino = new Peppino(0, 0));

		FlxG.worldBounds.set(0, 0, collision.width, collision.height);

		FlxG.camera.follow(peppino);
		FlxG.camera.followLerp = 15 / FlxG.updateFramerate;

		var northwest:Array<Int> = [];
		var northeast:Array<Int> = [];
		var southwest:Array<Int> = [];
		var southeast:Array<Int> = [];

		for (i in 0...collision.totalTiles)
		{
			var tile = collision.getTileByIndex(i);

			if (tile == 15)
				northwest.push(tile);

			if (tile == 14)
				northeast.push(tile);
		}

		collision.setSlopes(northwest, northeast, southwest, southeast);
		collision.setDownwardsGlue(true);
	}

	override public function update(elapsed:Float)
	{
		FlxG.overlap(collision, peppino, null, (_, _) ->
		{
			var return_val = FlxObject.separate(collision, peppino);

			if (!return_val)
			{
				var tile = collision.getTileIndexByCoords(new FlxPoint(peppino.getMidpoint().x, peppino.y + peppino.height + 2));

				if (tile == 15)
				{
					peppino.y = collision.getTileCoordsByIndex(tile).y;
					return_val = true;
					trace('SLOPEEEE');
				}
			}

			return return_val;
		});
		super.update(elapsed);
	}
}
