#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_util_FlxFSM
#include <flixel/addons/util/FlxFSM.h>
#endif
#ifndef INCLUDED_flixel_addons_util_FlxFSMState
#include <flixel/addons/util/FlxFSMState.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_487a221ef185b4f7_14_new,"flixel.addons.util.FlxFSMState","new",0x1681cc32,"flixel.addons.util.FlxFSMState.new","flixel/addons/util/FlxFSM.hx",14,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_487a221ef185b4f7_22_enter,"flixel.addons.util.FlxFSMState","enter",0xeb08816a,"flixel.addons.util.FlxFSMState.enter","flixel/addons/util/FlxFSM.hx",22,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_487a221ef185b4f7_30_update,"flixel.addons.util.FlxFSMState","update",0x3e553977,"flixel.addons.util.FlxFSMState.update","flixel/addons/util/FlxFSM.hx",30,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_487a221ef185b4f7_37_exit,"flixel.addons.util.FlxFSMState","exit",0x952c530c,"flixel.addons.util.FlxFSMState.exit","flixel/addons/util/FlxFSM.hx",37,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_487a221ef185b4f7_39_destroy,"flixel.addons.util.FlxFSMState","destroy",0xd2f379cc,"flixel.addons.util.FlxFSMState.destroy","flixel/addons/util/FlxFSM.hx",39,0xe233084c)
namespace flixel{
namespace addons{
namespace util{

void FlxFSMState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_487a221ef185b4f7_14_new)
            	}

Dynamic FlxFSMState_obj::__CreateEmpty() { return new FlxFSMState_obj; }

void *FlxFSMState_obj::_hx_vtable = 0;

Dynamic FlxFSMState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxFSMState_obj > _hx_result = new FlxFSMState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxFSMState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x210771b2;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_util_FlxFSMState__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::util::FlxFSMState_obj::destroy,
};

void *FlxFSMState_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_util_FlxFSMState__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxFSMState_obj::enter( ::Dynamic owner, ::flixel::addons::util::FlxFSM fsm){
            	HX_STACKFRAME(&_hx_pos_487a221ef185b4f7_22_enter)
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFSMState_obj,enter,(void))

void FlxFSMState_obj::update(Float elapsed, ::Dynamic owner, ::flixel::addons::util::FlxFSM fsm){
            	HX_STACKFRAME(&_hx_pos_487a221ef185b4f7_30_update)
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxFSMState_obj,update,(void))

void FlxFSMState_obj::exit( ::Dynamic owner){
            	HX_STACKFRAME(&_hx_pos_487a221ef185b4f7_37_exit)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFSMState_obj,exit,(void))

void FlxFSMState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_487a221ef185b4f7_39_destroy)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFSMState_obj,destroy,(void))


::hx::ObjectPtr< FlxFSMState_obj > FlxFSMState_obj::__new() {
	::hx::ObjectPtr< FlxFSMState_obj > __this = new FlxFSMState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxFSMState_obj > FlxFSMState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxFSMState_obj *__this = (FlxFSMState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxFSMState_obj), false, "flixel.addons.util.FlxFSMState"));
	*(void **)__this = FlxFSMState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxFSMState_obj::FlxFSMState_obj()
{
}

::hx::Val FlxFSMState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { return ::hx::Val( exit_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"enter") ) { return ::hx::Val( enter_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxFSMState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxFSMState_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxFSMState_obj_sMemberFields[] = {
	HX_("enter",18,6d,86,70),
	HX_("update",09,86,05,87),
	HX_("exit",1e,f7,1d,43),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class FlxFSMState_obj::__mClass;

void FlxFSMState_obj::__register()
{
	FlxFSMState_obj _hx_dummy;
	FlxFSMState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.util.FlxFSMState",40,8b,ff,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxFSMState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxFSMState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxFSMState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxFSMState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace util
