#include <hxcpp.h>

#ifndef INCLUDED_Jump
#include <Jump.h>
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
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5f7dcdfa86ce2af6_212_new,"Jump","new",0xba673100,"Jump.new","Peppino.hx",212,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_5f7dcdfa86ce2af6_217_enter,"Jump","enter",0x5eab35b8,"Jump.enter","Peppino.hx",217,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_5f7dcdfa86ce2af6_224_update,"Jump","update",0xf9104969,"Jump.update","Peppino.hx",224,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_5f7dcdfa86ce2af6_239_exit,"Jump","exit",0x59ff227e,"Jump.exit","Peppino.hx",239,0x23086929)

void Jump_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5f7dcdfa86ce2af6_212_new)
HXLINE( 214)		this->isHoldingSpace = true;
HXLINE( 212)		super::__construct();
            	}

Dynamic Jump_obj::__CreateEmpty() { return new Jump_obj; }

void *Jump_obj::_hx_vtable = 0;

Dynamic Jump_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Jump_obj > _hx_result = new Jump_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Jump_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0595e732) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0595e732;
	} else {
		return inClassId==(int)0x210771b2;
	}
}

void Jump_obj::enter( ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm){
            	HX_STACKFRAME(&_hx_pos_5f7dcdfa86ce2af6_217_enter)
HXLINE( 218)		 ::Peppino peppino = ( ( ::Peppino)(_tmp_peppino) );
HXDLIN( 218)		 ::flixel::addons::util::FlxFSM fsm = _tmp_fsm;
HXDLIN( 218)		peppino->changeState(::States_obj::JUMP_dyn());
HXLINE( 219)		peppino->playAnim(HX_("jump",ee,c4,69,46),null());
HXLINE( 220)		peppino->velocity->set_y(( (Float)(-400) ));
            	}


void Jump_obj::update(Float elapsed, ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm){
            	HX_STACKFRAME(&_hx_pos_5f7dcdfa86ce2af6_224_update)
HXLINE( 225)		 ::Peppino peppino = ( ( ::Peppino)(_tmp_peppino) );
HXDLIN( 225)		 ::flixel::addons::util::FlxFSM fsm = _tmp_fsm;
HXDLIN( 225)		int speed = 825;
HXLINE( 227)		 ::Dynamic movement = peppino->getMovementType();
HXLINE( 228)		movement();
HXLINE( 230)		bool _hx_tmp;
HXDLIN( 230)		bool _hx_tmp1;
HXDLIN( 230)		if (this->isHoldingSpace) {
HXLINE( 230)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->released) );
HXDLIN( 230)			_hx_tmp1 = _this->keyManager->checkStatusUnsafe(32,_this->status);
            		}
            		else {
HXLINE( 230)			_hx_tmp1 = false;
            		}
HXDLIN( 230)		if (_hx_tmp1) {
HXLINE( 230)			_hx_tmp = (peppino->velocity->y < 0);
            		}
            		else {
HXLINE( 230)			_hx_tmp = false;
            		}
HXDLIN( 230)		if (_hx_tmp) {
HXLINE( 232)			peppino->velocity->set_y(( (Float)(0) ));
HXLINE( 233)			this->isHoldingSpace = false;
            		}
            	}


void Jump_obj::exit( ::Dynamic _tmp_peppino){
            	HX_STACKFRAME(&_hx_pos_5f7dcdfa86ce2af6_239_exit)
HXDLIN( 239)		 ::Peppino peppino = ( ( ::Peppino)(_tmp_peppino) );
HXDLIN( 239)		this->isHoldingSpace = true;
            	}



::hx::ObjectPtr< Jump_obj > Jump_obj::__new() {
	::hx::ObjectPtr< Jump_obj > __this = new Jump_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Jump_obj > Jump_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Jump_obj *__this = (Jump_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Jump_obj), false, "Jump"));
	*(void **)__this = Jump_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Jump_obj::Jump_obj()
{
}

::hx::Val Jump_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
	case 14:
		if (HX_FIELD_EQ(inName,"isHoldingSpace") ) { return ::hx::Val( isHoldingSpace ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Jump_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"isHoldingSpace") ) { isHoldingSpace=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Jump_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("isHoldingSpace",cd,7b,ce,a9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Jump_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Jump_obj,isHoldingSpace),HX_("isHoldingSpace",cd,7b,ce,a9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Jump_obj_sStaticStorageInfo = 0;
#endif

static ::String Jump_obj_sMemberFields[] = {
	HX_("isHoldingSpace",cd,7b,ce,a9),
	HX_("enter",18,6d,86,70),
	HX_("update",09,86,05,87),
	HX_("exit",1e,f7,1d,43),
	::String(null()) };

::hx::Class Jump_obj::__mClass;

void Jump_obj::__register()
{
	Jump_obj _hx_dummy;
	Jump_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Jump",0e,f1,42,31);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Jump_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Jump_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Jump_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Jump_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

