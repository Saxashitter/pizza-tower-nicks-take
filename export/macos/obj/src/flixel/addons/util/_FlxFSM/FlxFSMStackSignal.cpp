#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_util__FlxFSM_FlxFSMStackSignal
#include <flixel/addons/util/_FlxFSM/FlxFSMStackSignal.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0f6f2060c5b36e1e_419_new,"flixel.addons.util._FlxFSM.FlxFSMStackSignal","new",0xaae99570,"flixel.addons.util._FlxFSM.FlxFSMStackSignal.new","flixel/addons/util/FlxFSM.hx",419,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6f2060c5b36e1e_431_globalLock,"flixel.addons.util._FlxFSM.FlxFSMStackSignal","globalLock",0xa55ee3de,"flixel.addons.util._FlxFSM.FlxFSMStackSignal.globalLock","flixel/addons/util/FlxFSM.hx",431,0xe233084c)
namespace flixel{
namespace addons{
namespace util{
namespace _FlxFSM{

void FlxFSMStackSignal_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_0f6f2060c5b36e1e_419_new)
HXDLIN( 419)		if (::hx::IsNull( ::flixel::addons::util::_FlxFSM::FlxFSMStackSignal_obj::_lockSignal )) {
HXLINE( 421)			::flixel::addons::util::_FlxFSM::FlxFSMStackSignal_obj::_lockSignal =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
            		}
            	}

Dynamic FlxFSMStackSignal_obj::__CreateEmpty() { return new FlxFSMStackSignal_obj; }

void *FlxFSMStackSignal_obj::_hx_vtable = 0;

Dynamic FlxFSMStackSignal_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxFSMStackSignal_obj > _hx_result = new FlxFSMStackSignal_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxFSMStackSignal_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x16adf8a6;
}

void FlxFSMStackSignal_obj::globalLock(int type){
            	HX_STACKFRAME(&_hx_pos_0f6f2060c5b36e1e_431_globalLock)
HXDLIN( 431)		::flixel::addons::util::_FlxFSM::FlxFSMStackSignal_obj::_lockSignal->dispatch(type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFSMStackSignal_obj,globalLock,(void))

 ::flixel::util::_FlxSignal::FlxSignal1 FlxFSMStackSignal_obj::_lockSignal;


::hx::ObjectPtr< FlxFSMStackSignal_obj > FlxFSMStackSignal_obj::__new() {
	::hx::ObjectPtr< FlxFSMStackSignal_obj > __this = new FlxFSMStackSignal_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxFSMStackSignal_obj > FlxFSMStackSignal_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxFSMStackSignal_obj *__this = (FlxFSMStackSignal_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxFSMStackSignal_obj), false, "flixel.addons.util._FlxFSM.FlxFSMStackSignal"));
	*(void **)__this = FlxFSMStackSignal_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxFSMStackSignal_obj::FlxFSMStackSignal_obj()
{
}

::hx::Val FlxFSMStackSignal_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"globalLock") ) { return ::hx::Val( globalLock_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxFSMStackSignal_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_lockSignal") ) { outValue = ( _lockSignal ); return true; }
	}
	return false;
}

bool FlxFSMStackSignal_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_lockSignal") ) { _lockSignal=ioValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxFSMStackSignal_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxFSMStackSignal_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(void *) &FlxFSMStackSignal_obj::_lockSignal,HX_("_lockSignal",d2,4d,b6,d1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxFSMStackSignal_obj_sMemberFields[] = {
	HX_("globalLock",ee,e6,5a,3e),
	::String(null()) };

static void FlxFSMStackSignal_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFSMStackSignal_obj::_lockSignal,"_lockSignal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxFSMStackSignal_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFSMStackSignal_obj::_lockSignal,"_lockSignal");
};

#endif

::hx::Class FlxFSMStackSignal_obj::__mClass;

static ::String FlxFSMStackSignal_obj_sStaticFields[] = {
	HX_("_lockSignal",d2,4d,b6,d1),
	::String(null())
};

void FlxFSMStackSignal_obj::__register()
{
	FlxFSMStackSignal_obj _hx_dummy;
	FlxFSMStackSignal_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.util._FlxFSM.FlxFSMStackSignal",7e,5d,be,84);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxFSMStackSignal_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxFSMStackSignal_obj::__SetStatic;
	__mClass->mMarkFunc = FlxFSMStackSignal_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxFSMStackSignal_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxFSMStackSignal_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxFSMStackSignal_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxFSMStackSignal_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxFSMStackSignal_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxFSMStackSignal_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace util
} // end namespace _FlxFSM
