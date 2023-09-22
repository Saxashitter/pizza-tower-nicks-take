#include <hxcpp.h>

#ifndef INCLUDED_Peppino
#include <Peppino.h>
#endif
#ifndef INCLUDED_Skid
#include <Skid.h>
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
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c959e7b1b6f2cb47_273_new,"Skid","new",0x9b1a2905,"Skid.new","Peppino.hx",273,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_c959e7b1b6f2cb47_276_enter,"Skid","enter",0x0c0ff8fd,"Skid.enter","Peppino.hx",276,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_c959e7b1b6f2cb47_284_update,"Skid","update",0x03d66284,"Skid.update","Peppino.hx",284,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_c959e7b1b6f2cb47_291_exit,"Skid","exit",0x15e52ed9,"Skid.exit","Peppino.hx",291,0x23086929)

void Skid_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c959e7b1b6f2cb47_273_new)
HXDLIN( 273)		super::__construct();
            	}

Dynamic Skid_obj::__CreateEmpty() { return new Skid_obj; }

void *Skid_obj::_hx_vtable = 0;

Dynamic Skid_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Skid_obj > _hx_result = new Skid_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Skid_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b8138b7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0b8138b7;
	} else {
		return inClassId==(int)0x210771b2;
	}
}

void Skid_obj::enter( ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm){
            	HX_STACKFRAME(&_hx_pos_c959e7b1b6f2cb47_276_enter)
HXLINE( 277)		 ::Peppino peppino = ( ( ::Peppino)(_tmp_peppino) );
HXDLIN( 277)		 ::flixel::addons::util::FlxFSM fsm = _tmp_fsm;
HXDLIN( 277)		peppino->machrunning = false;
HXLINE( 279)		peppino->changeState(::States_obj::SKID_dyn());
HXLINE( 280)		peppino->playAnim(HX_("mach_stop",48,72,3e,26),null());
            	}


void Skid_obj::update(Float elapsed, ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm){
            	HX_STACKFRAME(&_hx_pos_c959e7b1b6f2cb47_284_update)
HXLINE( 285)		 ::Peppino peppino = ( ( ::Peppino)(_tmp_peppino) );
HXDLIN( 285)		 ::flixel::addons::util::FlxFSM fsm = _tmp_fsm;
HXDLIN( 285)		 ::Peppino peppino1 = peppino;
HXDLIN( 285)		peppino1->movespeed = (peppino1->movespeed - ( (Float)(30) ));
HXLINE( 286)		int turn;
HXDLIN( 286)		if (peppino->flipX) {
HXLINE( 286)			turn = -1;
            		}
            		else {
HXLINE( 286)			turn = 1;
            		}
HXLINE( 287)		peppino->velocity->set_x((peppino->movespeed * ( (Float)(turn) )));
            	}


void Skid_obj::exit( ::Dynamic _tmp_peppino){
            	HX_STACKFRAME(&_hx_pos_c959e7b1b6f2cb47_291_exit)
HXLINE( 292)		 ::Peppino peppino = ( ( ::Peppino)(_tmp_peppino) );
HXDLIN( 292)		peppino->movespeed = ( (Float)(350) );
HXLINE( 293)		peppino->velocity->set_x(( (Float)(0) ));
            	}



::hx::ObjectPtr< Skid_obj > Skid_obj::__new() {
	::hx::ObjectPtr< Skid_obj > __this = new Skid_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Skid_obj > Skid_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Skid_obj *__this = (Skid_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Skid_obj), false, "Skid"));
	*(void **)__this = Skid_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Skid_obj::Skid_obj()
{
}

::hx::Val Skid_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *Skid_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Skid_obj_sStaticStorageInfo = 0;
#endif

static ::String Skid_obj_sMemberFields[] = {
	HX_("enter",18,6d,86,70),
	HX_("update",09,86,05,87),
	HX_("exit",1e,f7,1d,43),
	::String(null()) };

::hx::Class Skid_obj::__mClass;

void Skid_obj::__register()
{
	Skid_obj _hx_dummy;
	Skid_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Skid",93,42,2e,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Skid_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Skid_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Skid_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Skid_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

