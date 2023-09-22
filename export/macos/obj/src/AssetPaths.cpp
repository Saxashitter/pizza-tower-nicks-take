#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_tjson_TJSON
#include <tjson/TJSON.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_814219dbbef64044_34_script,"AssetPaths","script",0xb6fd193b,"AssetPaths.script","AssetPaths.hx",34,0xc62bce40)
HX_LOCAL_STACK_FRAME(_hx_pos_814219dbbef64044_39_data,"AssetPaths","data",0x80b5f55a,"AssetPaths.data","AssetPaths.hx",39,0xc62bce40)
HX_LOCAL_STACK_FRAME(_hx_pos_814219dbbef64044_44_map,"AssetPaths","map",0xa02c616c,"AssetPaths.map","AssetPaths.hx",44,0xc62bce40)
HX_LOCAL_STACK_FRAME(_hx_pos_814219dbbef64044_49_room,"AssetPaths","room",0x8a018d4b,"AssetPaths.room","AssetPaths.hx",49,0xc62bce40)
HX_LOCAL_STACK_FRAME(_hx_pos_814219dbbef64044_54_font,"AssetPaths","font",0x8212fcff,"AssetPaths.font","AssetPaths.hx",54,0xc62bce40)
HX_LOCAL_STACK_FRAME(_hx_pos_814219dbbef64044_59_music,"AssetPaths","music",0x5a537b75,"AssetPaths.music","AssetPaths.hx",59,0xc62bce40)
HX_LOCAL_STACK_FRAME(_hx_pos_814219dbbef64044_64_shaderFragment,"AssetPaths","shaderFragment",0xc6168345,"AssetPaths.shaderFragment","AssetPaths.hx",64,0xc62bce40)
HX_LOCAL_STACK_FRAME(_hx_pos_814219dbbef64044_69_shaderVertex,"AssetPaths","shaderVertex",0x6efdc799,"AssetPaths.shaderVertex","AssetPaths.hx",69,0xc62bce40)
HX_LOCAL_STACK_FRAME(_hx_pos_814219dbbef64044_74_sound,"AssetPaths","sound",0xcac5379f,"AssetPaths.sound","AssetPaths.hx",74,0xc62bce40)
HX_LOCAL_STACK_FRAME(_hx_pos_814219dbbef64044_79_background,"AssetPaths","background",0x8eb7b71e,"AssetPaths.background","AssetPaths.hx",79,0xc62bce40)
HX_LOCAL_STACK_FRAME(_hx_pos_814219dbbef64044_84_sprite,"AssetPaths","sprite",0x3332a735,"AssetPaths.sprite","AssetPaths.hx",84,0xc62bce40)
HX_LOCAL_STACK_FRAME(_hx_pos_814219dbbef64044_89_peppino,"AssetPaths","peppino",0x943d4fa5,"AssetPaths.peppino","AssetPaths.hx",89,0xc62bce40)
HX_LOCAL_STACK_FRAME(_hx_pos_814219dbbef64044_93_gmlSprite,"AssetPaths","gmlSprite",0x44c292fb,"AssetPaths.gmlSprite","AssetPaths.hx",93,0xc62bce40)

void AssetPaths_obj::__construct() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return new AssetPaths_obj; }

void *AssetPaths_obj::_hx_vtable = 0;

Dynamic AssetPaths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetPaths_obj > _hx_result = new AssetPaths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetPaths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78a931fe;
}

::String AssetPaths_obj::script(::String key){
            	HX_STACKFRAME(&_hx_pos_814219dbbef64044_34_script)
HXDLIN(  34)		return ((HX_("assets/data/",f9,10,73,a0) + key) + HX_(".hx",be,42,23,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,script,return )

::String AssetPaths_obj::data(::String key){
            	HX_STACKFRAME(&_hx_pos_814219dbbef64044_39_data)
HXDLIN(  39)		return ((HX_("assets/data/",f9,10,73,a0) + key) + HX_(".json",56,f1,d6,c2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,data,return )

::String AssetPaths_obj::map(::String key){
            	HX_STACKFRAME(&_hx_pos_814219dbbef64044_44_map)
HXDLIN(  44)		return ((HX_("",00,00,00,00) + key) + HX_(".tmx",71,35,c0,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,map,return )

::String AssetPaths_obj::room(::String key){
            	HX_STACKFRAME(&_hx_pos_814219dbbef64044_49_room)
HXDLIN(  49)		return ((HX_("assets/data/",f9,10,73,a0) + key) + HX_(".xml",69,3e,c3,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,room,return )

::String AssetPaths_obj::font(::String key){
            	HX_STACKFRAME(&_hx_pos_814219dbbef64044_54_font)
HXDLIN(  54)		return ((HX_("assets/fonts/",37,ff,a5,9c) + key) + HX_(".ttf",78,3b,c0,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,font,return )

::String AssetPaths_obj::music(::String key){
            	HX_STACKFRAME(&_hx_pos_814219dbbef64044_59_music)
HXDLIN(  59)		return ((HX_("assets/music/",36,ab,d2,e0) + key) + HX_(".ogg",e1,64,bc,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,music,return )

::String AssetPaths_obj::shaderFragment(::String key){
            	HX_STACKFRAME(&_hx_pos_814219dbbef64044_64_shaderFragment)
HXDLIN(  64)		return ((HX_("assets/shaders/",0d,4d,ec,e3) + key) + HX_(".frag",60,48,31,c0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,shaderFragment,return )

::String AssetPaths_obj::shaderVertex(::String key){
            	HX_STACKFRAME(&_hx_pos_814219dbbef64044_69_shaderVertex)
HXDLIN(  69)		return ((HX_("assets/shaders/",0d,4d,ec,e3) + key) + HX_(".vert",df,e3,ba,ca));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,shaderVertex,return )

::String AssetPaths_obj::sound(::String key){
            	HX_STACKFRAME(&_hx_pos_814219dbbef64044_74_sound)
HXDLIN(  74)		return ((HX_("assets/sounds/",1f,fa,fb,94) + key) + HX_(".wav",be,71,c2,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,sound,return )

::String AssetPaths_obj::background(::String key){
            	HX_STACKFRAME(&_hx_pos_814219dbbef64044_79_background)
HXDLIN(  79)		return ((HX_("assets/images/backgrounds/",f5,eb,4a,b6) + key) + HX_(".png",3b,2d,bd,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,background,return )

::String AssetPaths_obj::sprite(::String key){
            	HX_STACKFRAME(&_hx_pos_814219dbbef64044_84_sprite)
HXDLIN(  84)		return ((HX_("assets/images/sprites/",4c,76,f4,f7) + key) + HX_(".png",3b,2d,bd,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,sprite,return )

::String AssetPaths_obj::peppino(::String key){
            	HX_STACKFRAME(&_hx_pos_814219dbbef64044_89_peppino)
HXDLIN(  89)		return ((HX_("assets/images/peppino/",65,d4,c9,b6) + key) + HX_(".png",3b,2d,bd,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,peppino,return )

 ::flixel::graphics::frames::FlxAtlasFrames AssetPaths_obj::gmlSprite(::String key){
            	HX_GC_STACKFRAME(&_hx_pos_814219dbbef64044_93_gmlSprite)
HXLINE(  94)		 ::flixel::graphics::atlas::FlxAtlas atlas =  ::flixel::graphics::atlas::FlxAtlas_obj::__alloc( HX_CTX ,HX_("theatlasever",58,47,ac,a8),null(),null(),null(),null(),null());
HXLINE(  95)		::Array< ::String > list = ::openfl::utils::Assets_obj::list(null());
HXLINE(  97)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(  97)		{
HXLINE(  97)			int _g1 = 0;
HXDLIN(  97)			::Array< ::String > _g2 = list;
HXDLIN(  97)			while((_g1 < _g2->length)){
HXLINE(  97)				::String v = _g2->__get(_g1);
HXDLIN(  97)				_g1 = (_g1 + 1);
HXDLIN(  97)				if (::StringTools_obj::startsWith(v,((HX_("",00,00,00,00) + key) + HX_("/spr_",39,2d,2e,5c)))) {
HXLINE(  97)					_g->push(v);
            				}
            			}
            		}
HXDLIN(  97)		::Array< ::String > all_files = _g;
HXLINE(  99)		if (!(::openfl::utils::Assets_obj::exists(((HX_("",00,00,00,00) + key) + HX_("/sprites.json",77,a8,86,ef)),HX_("TEXT",ad,94,ba,37)))) {
HXLINE( 101)			::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 101)			{
HXLINE( 101)				int _g1 = 0;
HXDLIN( 101)				::Array< ::String > _g2 = all_files;
HXDLIN( 101)				while((_g1 < _g2->length)){
HXLINE( 101)					::String v = _g2->__get(_g1);
HXDLIN( 101)					_g1 = (_g1 + 1);
HXDLIN( 101)					if (::StringTools_obj::endsWith(v,HX_(".yy",8e,51,23,00))) {
HXLINE( 101)						_g->push(v);
            					}
            				}
            			}
HXDLIN( 101)			::Array< ::String > jsons = _g;
HXLINE( 103)			{
HXLINE( 103)				int _g3 = 0;
HXDLIN( 103)				while((_g3 < jsons->length)){
HXLINE( 103)					::String j = jsons->__get(_g3);
HXDLIN( 103)					_g3 = (_g3 + 1);
HXLINE( 105)					 ::Dynamic json = ::tjson::TJSON_obj::parse(::openfl::utils::Assets_obj::getText(j),null(),null());
HXLINE( 106)					::String name = ( (::String)(json->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 108)					{
HXLINE( 108)						int _g = 0;
HXDLIN( 108)						int _g1 = ( (::Array< ::Dynamic>)(json->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic)) )->length;
HXDLIN( 108)						while((_g < _g1)){
HXLINE( 108)							_g = (_g + 1);
HXDLIN( 108)							int i = (_g - 1);
HXLINE( 110)							::String png_name = ( (::String)( ::Dynamic(json->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 111)							atlas->addNode(::openfl::utils::Assets_obj::getBitmapData(((((((HX_("",00,00,00,00) + key) + HX_("/",2f,00,00,00)) + name) + HX_("/",2f,00,00,00)) + png_name) + HX_(".png",3b,2d,bd,1e)),false),((name + HX_("_",5f,00,00,00)) + i));
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 117)			 ::Dynamic json = ::tjson::TJSON_obj::parse(::openfl::utils::Assets_obj::getText(((HX_("",00,00,00,00) + key) + HX_("/sprites.json",77,a8,86,ef))),null(),null());
HXLINE( 119)			{
HXLINE( 119)				int _g = 0;
HXDLIN( 119)				int _g1 = ( (::Array< ::String >)(json->__Field(HX_("sprites",ce,a8,8a,5f),::hx::paccDynamic)) )->length;
HXDLIN( 119)				while((_g < _g1)){
HXLINE( 119)					_g = (_g + 1);
HXDLIN( 119)					int iterate = (_g - 1);
HXLINE( 121)					::String path = ( (::String)( ::Dynamic(json->__Field(HX_("sprites",ce,a8,8a,5f),::hx::paccDynamic))->__GetItem(iterate)) );
HXLINE( 122)					if (list->contains(((((((HX_("",00,00,00,00) + key) + HX_("/",2f,00,00,00)) + path) + HX_("/",2f,00,00,00)) + path) + HX_(".yy",8e,51,23,00)))) {
HXLINE( 124)						 ::Dynamic data = ::tjson::TJSON_obj::parse(::openfl::utils::Assets_obj::getText(((((((HX_("",00,00,00,00) + key) + HX_("/",2f,00,00,00)) + path) + HX_("/",2f,00,00,00)) + path) + HX_(".yy",8e,51,23,00))),null(),null());
HXLINE( 125)						::String name = ( (::String)(data->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 127)						{
HXLINE( 127)							int _g = 0;
HXDLIN( 127)							int _g1 = ( (::Array< ::Dynamic>)(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic)) )->length;
HXDLIN( 127)							while((_g < _g1)){
HXLINE( 127)								_g = (_g + 1);
HXDLIN( 127)								int i = (_g - 1);
HXLINE( 129)								::String png_name = ( (::String)( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 130)								atlas->addNode(::openfl::utils::Assets_obj::getBitmapData(((((((HX_("",00,00,00,00) + key) + HX_("/",2f,00,00,00)) + path) + HX_("/",2f,00,00,00)) + png_name) + HX_(".png",3b,2d,bd,1e)),false),((name + HX_("_",5f,00,00,00)) + i));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 136)		return atlas->getAtlasFrames();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,gmlSprite,return )


AssetPaths_obj::AssetPaths_obj()
{
}

bool AssetPaths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { outValue = data_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"room") ) { outValue = room_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"font") ) { outValue = font_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { outValue = music_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sound") ) { outValue = sound_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { outValue = script_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sprite") ) { outValue = sprite_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"peppino") ) { outValue = peppino_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gmlSprite") ) { outValue = gmlSprite_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { outValue = background_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shaderVertex") ) { outValue = shaderVertex_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shaderFragment") ) { outValue = shaderFragment_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AssetPaths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AssetPaths_obj_sStaticStorageInfo = 0;
#endif

::hx::Class AssetPaths_obj::__mClass;

static ::String AssetPaths_obj_sStaticFields[] = {
	HX_("script",0b,4e,60,47),
	HX_("data",2a,56,63,42),
	HX_("map",9c,0a,53,00),
	HX_("room",1b,ee,ae,4b),
	HX_("font",cf,5d,c0,43),
	HX_("music",a5,d0,5a,10),
	HX_("shaderFragment",15,08,f3,5e),
	HX_("shaderVertex",69,78,30,11),
	HX_("sound",cf,8c,cc,80),
	HX_("background",ee,93,1d,26),
	HX_("sprite",05,dc,95,c3),
	HX_("peppino",d5,50,a8,5a),
	HX_("gmlSprite",2b,40,d4,bc),
	::String(null())
};

void AssetPaths_obj::__register()
{
	AssetPaths_obj _hx_dummy;
	AssetPaths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AssetPaths",3e,0f,e6,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetPaths_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AssetPaths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AssetPaths_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetPaths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetPaths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

