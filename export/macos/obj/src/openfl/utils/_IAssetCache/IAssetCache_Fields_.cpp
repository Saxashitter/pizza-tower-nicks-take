#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_exceptions_NotImplementedException
#include <haxe/exceptions/NotImplementedException.h>
#endif
#ifndef INCLUDED_haxe_exceptions_PosException
#include <haxe/exceptions/PosException.h>
#endif
#ifndef INCLUDED_openfl_utils__IAssetCache_IAssetCache_Fields_
#include <openfl/utils/_IAssetCache/IAssetCache_Fields_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ac4733f5c7975c48_135_getSoundKeys,"openfl.utils._IAssetCache.IAssetCache_Fields_","getSoundKeys",0xd64b2ed0,"openfl.utils._IAssetCache.IAssetCache_Fields_.getSoundKeys","openfl/utils/IAssetCache.hx",135,0x5081d740)
namespace openfl{
namespace utils{
namespace _IAssetCache{

void IAssetCache_Fields__obj::__construct() { }

Dynamic IAssetCache_Fields__obj::__CreateEmpty() { return new IAssetCache_Fields__obj; }

void *IAssetCache_Fields__obj::_hx_vtable = 0;

Dynamic IAssetCache_Fields__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IAssetCache_Fields__obj > _hx_result = new IAssetCache_Fields__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IAssetCache_Fields__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4f5e36d1;
}

void IAssetCache_Fields__obj::getSoundKeys(){
            	HX_GC_STACKFRAME(&_hx_pos_ac4733f5c7975c48_135_getSoundKeys)
HXDLIN( 135)		HX_STACK_DO_THROW( ::haxe::exceptions::NotImplementedException_obj::__alloc( HX_CTX ,null(),null(),::hx::SourceInfo(HX_("openfl/utils/IAssetCache.hx",40,d7,81,50),135,HX_("openfl.utils._IAssetCache.IAssetCache_Fields_",6b,42,07,c9),HX_("getSoundKeys",ed,4a,2b,61))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(IAssetCache_Fields__obj,getSoundKeys,(void))


IAssetCache_Fields__obj::IAssetCache_Fields__obj()
{
}

bool IAssetCache_Fields__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"getSoundKeys") ) { outValue = getSoundKeys_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *IAssetCache_Fields__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *IAssetCache_Fields__obj_sStaticStorageInfo = 0;
#endif

::hx::Class IAssetCache_Fields__obj::__mClass;

static ::String IAssetCache_Fields__obj_sStaticFields[] = {
	HX_("getSoundKeys",ed,4a,2b,61),
	::String(null())
};

void IAssetCache_Fields__obj::__register()
{
	IAssetCache_Fields__obj _hx_dummy;
	IAssetCache_Fields__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._IAssetCache.IAssetCache_Fields_",6b,42,07,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &IAssetCache_Fields__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(IAssetCache_Fields__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< IAssetCache_Fields__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IAssetCache_Fields__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IAssetCache_Fields__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
} // end namespace _IAssetCache
