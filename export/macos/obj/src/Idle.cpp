#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Idle
#include <Idle.h>
#endif
#ifndef INCLUDED_Peppino
#include <Peppino.h>
#endif
#ifndef INCLUDED_States
#include <States.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_11808598d1a4a54e_191_new,"Idle","new",0x02841e26,"Idle.new","Peppino.hx",191,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_11808598d1a4a54e_194_enter,"Idle","enter",0x99ba385e,"Idle.enter","Peppino.hx",194,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_11808598d1a4a54e_200_update,"Idle","update",0x6b239803,"Idle.update","Peppino.hx",200,0x23086929)

void Idle_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_11808598d1a4a54e_191_new)
HXDLIN( 191)		super::__construct();
            	}

Dynamic Idle_obj::__CreateEmpty() { return new Idle_obj; }

void *Idle_obj::_hx_vtable = 0;

Dynamic Idle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Idle_obj > _hx_result = new Idle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Idle_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x04dfc958) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x04dfc958;
	} else {
		return inClassId==(int)0x210771b2;
	}
}

void Idle_obj::enter( ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm){
            	HX_STACKFRAME(&_hx_pos_11808598d1a4a54e_194_enter)
HXLINE( 195)		 ::Peppino peppino = ( ( ::Peppino)(_tmp_peppino) );
HXDLIN( 195)		 ::flixel::addons::util::FlxFSM fsm = _tmp_fsm;
HXDLIN( 195)		peppino->changeState(::States_obj::STAND_dyn());
HXLINE( 196)		peppino->playAnim(HX_("idle",14,a7,b3,45),null());
            	}


void Idle_obj::update(Float elapsed, ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm){
            	HX_STACKFRAME(&_hx_pos_11808598d1a4a54e_200_update)
HXLINE( 201)		 ::Peppino peppino = ( ( ::Peppino)(_tmp_peppino) );
HXDLIN( 201)		 ::flixel::addons::util::FlxFSM fsm = _tmp_fsm;
HXDLIN( 201)		int speed = 825;
HXLINE( 203)		peppino->walkMovement();
HXLINE( 205)		bool _hx_tmp;
HXDLIN( 205)		if ((::Math_obj::abs(peppino->velocity->x) > 0)) {
HXLINE( 205)			_hx_tmp = (peppino->animation->_curAnim->name != HX_("walk",09,5d,f2,4e));
            		}
            		else {
HXLINE( 205)			_hx_tmp = false;
            		}
HXDLIN( 205)		if (_hx_tmp) {
HXLINE( 206)			peppino->playAnim(HX_("walk",09,5d,f2,4e),null());
            		}
            		else {
HXLINE( 207)			bool _hx_tmp;
HXDLIN( 207)			if ((::Math_obj::abs(peppino->velocity->x) == 0)) {
HXLINE( 207)				_hx_tmp = !(::StringTools_obj::startsWith(peppino->animation->_curAnim->name,HX_("idle",14,a7,b3,45)));
            			}
            			else {
HXLINE( 207)				_hx_tmp = false;
            			}
HXDLIN( 207)			if (_hx_tmp) {
HXLINE( 208)				peppino->playAnim(HX_("idle",14,a7,b3,45),null());
            			}
            		}
            	}



::hx::ObjectPtr< Idle_obj > Idle_obj::__new() {
	::hx::ObjectPtr< Idle_obj > __this = new Idle_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Idle_obj > Idle_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Idle_obj *__this = (Idle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Idle_obj), false, "Idle"));
	*(void **)__this = Idle_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Idle_obj::Idle_obj()
{
}

::hx::Val Idle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *Idle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Idle_obj_sStaticStorageInfo = 0;
#endif

static ::String Idle_obj_sMemberFields[] = {
	HX_("enter",18,6d,86,70),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Idle_obj::__mClass;

void Idle_obj::__register()
{
	Idle_obj _hx_dummy;
	Idle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Idle",34,d3,8c,30);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Idle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Idle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Idle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Idle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

