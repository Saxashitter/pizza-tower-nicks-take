#ifndef INCLUDED_openfl_utils__IAssetCache_IAssetCache_Fields_
#define INCLUDED_openfl_utils__IAssetCache_IAssetCache_Fields_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,utils,_IAssetCache,IAssetCache_Fields_)

namespace openfl{
namespace utils{
namespace _IAssetCache{


class HXCPP_CLASS_ATTRIBUTES IAssetCache_Fields__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef IAssetCache_Fields__obj OBJ_;
		IAssetCache_Fields__obj();

	public:
		enum { _hx_ClassId = 0x4f5e36d1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.utils._IAssetCache.IAssetCache_Fields_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.utils._IAssetCache.IAssetCache_Fields_"); }

		inline static ::hx::ObjectPtr< IAssetCache_Fields__obj > __new() {
			::hx::ObjectPtr< IAssetCache_Fields__obj > __this = new IAssetCache_Fields__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< IAssetCache_Fields__obj > __alloc(::hx::Ctx *_hx_ctx) {
			IAssetCache_Fields__obj *__this = (IAssetCache_Fields__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IAssetCache_Fields__obj), false, "openfl.utils._IAssetCache.IAssetCache_Fields_"));
			*(void **)__this = IAssetCache_Fields__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IAssetCache_Fields__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IAssetCache_Fields_",02,a4,b7,c3); }

		static void getSoundKeys();
		static ::Dynamic getSoundKeys_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _IAssetCache

#endif /* INCLUDED_openfl_utils__IAssetCache_IAssetCache_Fields_ */ 
