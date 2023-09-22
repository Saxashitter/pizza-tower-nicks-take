#include <hxcpp.h>

#ifndef INCLUDED_Fall
#include <Fall.h>
#endif
#ifndef INCLUDED_Peppino
#include <Peppino.h>
#endif
#ifndef INCLUDED_States
#include <States.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_util_FlxFSM
#include <flixel/addons/util/FlxFSM.h>
#endif
#ifndef INCLUDED_flixel_addons_util_FlxFSMState
#include <flixel/addons/util/FlxFSMState.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_05d466a740473583_243_new,"Fall","new",0xe1fa730d,"Fall.new","Peppino.hx",243,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_05d466a740473583_246_enter,"Fall","enter",0x031cd505,"Fall.enter","Peppino.hx",246,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_05d466a740473583_253_update,"Fall","update",0x380a0d7c,"Fall.update","Peppino.hx",253,0x23086929)

void Fall_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_05d466a740473583_243_new)
HXDLIN( 243)		super::__construct();
            	}

Dynamic Fall_obj::__CreateEmpty() { return new Fall_obj; }

void *Fall_obj::_hx_vtable = 0;

Dynamic Fall_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Fall_obj > _hx_result = new Fall_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Fall_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x02e1debf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x02e1debf;
	} else {
		return inClassId==(int)0x210771b2;
	}
}

void Fall_obj::enter( ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm){
            	HX_STACKFRAME(&_hx_pos_05d466a740473583_246_enter)
HXLINE( 247)		 ::Peppino peppino = ( ( ::Peppino)(_tmp_peppino) );
HXDLIN( 247)		 ::flixel::addons::util::FlxFSM fsm = _tmp_fsm;
HXDLIN( 247)		peppino->changeState(::States_obj::FALL_dyn());
HXLINE( 248)		peppino->playAnim(HX_("fall",7b,bc,b5,43),null());
            	}


void Fall_obj::update(Float elapsed, ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm){
            	HX_STACKFRAME(&_hx_pos_05d466a740473583_253_update)
HXDLIN( 253)		 ::Peppino peppino = ( ( ::Peppino)(_tmp_peppino) );
HXDLIN( 253)		 ::flixel::addons::util::FlxFSM fsm = _tmp_fsm;
HXDLIN( 253)		peppino->walkMovement();
            	}



::hx::ObjectPtr< Fall_obj > Fall_obj::__new() {
	::hx::ObjectPtr< Fall_obj > __this = new Fall_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Fall_obj > Fall_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Fall_obj *__this = (Fall_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Fall_obj), false, "Fall"));
	*(void **)__this = Fall_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Fall_obj::Fall_obj()
{
}

::hx::Val Fall_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"enter") ) { return ::hx::Val( enter_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Fall_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Fall_obj_sStaticStorageInfo = 0;
#endif

static ::String Fall_obj_sMemberFields[] = {
	HX_("enter",18,6d,86,70),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Fall_obj::__mClass;

void Fall_obj::__register()
{
	Fall_obj _hx_dummy;
	Fall_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Fall",9b,e8,8e,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Fall_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Fall_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Fall_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Fall_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

