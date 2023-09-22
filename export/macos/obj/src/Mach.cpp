#include <hxcpp.h>

#ifndef INCLUDED_Mach
#include <Mach.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f52883f39b731738_254_new,"Mach","new",0x8b8b008b,"Mach.new","Peppino.hx",254,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_f52883f39b731738_257_enter,"Mach","enter",0x9c0a3e03,"Mach.enter","Peppino.hx",257,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_f52883f39b731738_264_update,"Mach","update",0x6ed882be,"Mach.update","Peppino.hx",264,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_f52883f39b731738_270_exit,"Mach","exit",0x8830ec93,"Mach.exit","Peppino.hx",270,0x23086929)

void Mach_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f52883f39b731738_254_new)
HXDLIN( 254)		super::__construct();
            	}

Dynamic Mach_obj::__CreateEmpty() { return new Mach_obj; }

void *Mach_obj::_hx_vtable = 0;

Dynamic Mach_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Mach_obj > _hx_result = new Mach_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mach_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0782553d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0782553d;
	} else {
		return inClassId==(int)0x210771b2;
	}
}

void Mach_obj::enter( ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm){
            	HX_STACKFRAME(&_hx_pos_f52883f39b731738_257_enter)
HXLINE( 258)		 ::Peppino peppino = ( ( ::Peppino)(_tmp_peppino) );
HXDLIN( 258)		 ::flixel::addons::util::FlxFSM fsm = _tmp_fsm;
HXDLIN( 258)		peppino->changeState(::States_obj::MACH_dyn());
HXLINE( 259)		peppino->machrunning = true;
HXLINE( 260)		peppino->playAnim(HX_("mach_1",2b,f6,83,b0),null());
            	}


void Mach_obj::update(Float elapsed, ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm){
            	HX_STACKFRAME(&_hx_pos_f52883f39b731738_264_update)
HXLINE( 265)		 ::Peppino peppino = ( ( ::Peppino)(_tmp_peppino) );
HXDLIN( 265)		 ::flixel::addons::util::FlxFSM fsm = _tmp_fsm;
HXDLIN( 265)		peppino->machMovement();
HXLINE( 266)		bool _hx_tmp;
HXDLIN( 266)		if ((peppino->getMachSpeed() == 1)) {
HXLINE( 266)			_hx_tmp = (peppino->animation->_curAnim->name != HX_("mach_2",2c,f6,83,b0));
            		}
            		else {
HXLINE( 266)			_hx_tmp = false;
            		}
HXDLIN( 266)		if (_hx_tmp) {
HXLINE( 267)			peppino->playAnim(HX_("mach_2",2c,f6,83,b0),null());
            		}
            	}


void Mach_obj::exit( ::Dynamic _tmp_peppino){
            	HX_STACKFRAME(&_hx_pos_f52883f39b731738_270_exit)
HXDLIN( 270)		 ::Peppino peppino = ( ( ::Peppino)(_tmp_peppino) );
            	}



::hx::ObjectPtr< Mach_obj > Mach_obj::__new() {
	::hx::ObjectPtr< Mach_obj > __this = new Mach_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Mach_obj > Mach_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Mach_obj *__this = (Mach_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Mach_obj), false, "Mach"));
	*(void **)__this = Mach_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Mach_obj::Mach_obj()
{
}

::hx::Val Mach_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Mach_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Mach_obj_sStaticStorageInfo = 0;
#endif

static ::String Mach_obj_sMemberFields[] = {
	HX_("enter",18,6d,86,70),
	HX_("update",09,86,05,87),
	HX_("exit",1e,f7,1d,43),
	::String(null()) };

::hx::Class Mach_obj::__mClass;

void Mach_obj::__register()
{
	Mach_obj _hx_dummy;
	Mach_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Mach",19,5f,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Mach_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Mach_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mach_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mach_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

