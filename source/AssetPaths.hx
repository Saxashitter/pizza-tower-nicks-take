package;

import flixel.FlxG;
import flixel.graphics.atlas.FlxAtlas;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.math.FlxPoint;
import haxe.Json;
import openfl.utils.Assets;
import tjson.TJSON;

using StringTools;

typedef SpriteSheetData =
{
	key:String,
	sheet:Array<SheetData>
}

typedef SheetData =
{
	animation:String,
	path:String,
	frames:Array<
		{
			lowestFrame:Int,
			?highestFrame:Int
		}>
}

class AssetPaths
{
	public static inline function script(key:String):String
	{
		return 'assets/data/$key.hx';
	}

	public static inline function data(key:String):String
	{
		return 'assets/data/$key.json';
	}

	public static inline function map(key:String):String
	{
		return '$key.tmx';
	}

	public static inline function room(key:String):String
	{
		return 'assets/data/$key.xml';
	}

	public static inline function font(key:String):String
	{
		return 'assets/fonts/$key.ttf';
	}

	public static inline function music(key:String):String
	{
		return 'assets/music/$key.ogg';
	}

	public static inline function shaderFragment(key:String):String
	{
		return 'assets/shaders/$key.frag';
	}

	public static inline function shaderVertex(key:String):String
	{
		return 'assets/shaders/$key.vert';
	}

	public static inline function sound(key:String):String
	{
		return 'assets/sounds/$key.wav';
	}

	public static inline function background(key:String):String
	{
		return 'assets/images/backgrounds/$key.png';
	}

	public static inline function sprite(key:String):String
	{
		return 'assets/images/sprites/$key.png';
	}

	public static inline function peppino(key:String):String
	{
		return 'assets/images/peppino/$key.png';
	}

	public static function gmlSprite(key:String):FlxAtlasFrames
	{
		var atlas:FlxAtlas = new FlxAtlas('theatlasever');
		var list = Assets.list();

		var all_files = list.filter(folder -> folder.startsWith('$key/spr_'));

		if (!Assets.exists('$key/sprites.json', TEXT))
		{
			var jsons = all_files.filter(folder -> folder.endsWith('.yy'));

			for (j in jsons)
			{
				var json = TJSON.parse(Assets.getText(j));
				var name = json.name;

				for (i in 0...json.frames.length)
				{
					var png_name = json.frames[i].name;
					atlas.addNode(Assets.getBitmapData('$key/$name/$png_name.png', false), name + '_' + i);
				}
			}
		}
		else
		{
			var json = TJSON.parse(Assets.getText('$key/sprites.json'));

			for (iterate in 0...json.sprites.length)
			{
				var path = json.sprites[iterate];
				if (list.contains('$key/$path/$path.yy'))
				{
					var data = TJSON.parse(Assets.getText('$key/$path/$path.yy'));
					var name = data.name;

					for (i in 0...data.frames.length)
					{
						var png_name = data.frames[i].name;
						atlas.addNode(Assets.getBitmapData('$key/$path/$png_name.png', false), name + '_' + i);
					}
				}
			}
		}

		return atlas.getAtlasFrames();
	}
	/*public static function fromSparrow(folderPath:FlxXmlAsset):FlxAtlasFrames
		{
			for (texture in data.nodes.SubTexture)
			{
				var name = texture.att.name;
				var trimmed = texture.has.frameX;
				var rotated = (texture.has.rotated && texture.att.rotated == "true");
				var flipX = (texture.has.flipX && texture.att.flipX == "true");
				var flipY = (texture.has.flipY && texture.att.flipY == "true");

				var rect = FlxRect.get(Std.parseFloat(texture.att.x), Std.parseFloat(texture.att.y), Std.parseFloat(texture.att.width),
					Std.parseFloat(texture.att.height));

				var size = if (trimmed)
				{
					new Rectangle(Std.parseInt(texture.att.frameX), Std.parseInt(texture.att.frameY), Std.parseInt(texture.att.frameWidth),
						Std.parseInt(texture.att.frameHeight));
				}
				else
				{
					new Rectangle(0, 0, rect.width, rect.height);
				}

				var angle = rotated ? FlxFrameAngle.ANGLE_NEG_90 : FlxFrameAngle.ANGLE_0;

				var offset = FlxPoint.get(-size.left, -size.top);
				var sourceSize = FlxPoint.get(size.width, size.height);

				if (rotated && !trimmed)
					sourceSize.set(size.height, size.width);

				frames.addAtlasFrame(rect, sourceSize, offset, name, angle, flipX, flipY);
			}

			return frames;
	}*/
}
