#ifndef INCLUDED_AssetPaths
#define INCLUDED_AssetPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(AssetPaths)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxAtlasFrames)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES AssetPaths_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AssetPaths_obj OBJ_;
		AssetPaths_obj();

	public:
		enum { _hx_ClassId = 0x78a931fe };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="AssetPaths")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"AssetPaths"); }

		inline static ::hx::ObjectPtr< AssetPaths_obj > __new() {
			::hx::ObjectPtr< AssetPaths_obj > __this = new AssetPaths_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AssetPaths_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AssetPaths_obj *__this = (AssetPaths_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetPaths_obj), false, "AssetPaths"));
			*(void **)__this = AssetPaths_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AssetPaths_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AssetPaths",3e,0f,e6,60); }

		static ::String script(::String key);
		static ::Dynamic script_dyn();

		static ::String data(::String key);
		static ::Dynamic data_dyn();

		static ::String map(::String key);
		static ::Dynamic map_dyn();

		static ::String room(::String key);
		static ::Dynamic room_dyn();

		static ::String font(::String key);
		static ::Dynamic font_dyn();

		static ::String music(::String key);
		static ::Dynamic music_dyn();

		static ::String shaderFragment(::String key);
		static ::Dynamic shaderFragment_dyn();

		static ::String shaderVertex(::String key);
		static ::Dynamic shaderVertex_dyn();

		static ::String sound(::String key);
		static ::Dynamic sound_dyn();

		static ::String background(::String key);
		static ::Dynamic background_dyn();

		static ::String sprite(::String key);
		static ::Dynamic sprite_dyn();

		static ::String peppino(::String key);
		static ::Dynamic peppino_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames gmlSprite(::String key);
		static ::Dynamic gmlSprite_dyn();

};


#endif /* INCLUDED_AssetPaths */ 
