#include <hxcpp.h>

#ifndef INCLUDED_States
#include <States.h>
#endif

::States States_obj::FALL;

::States States_obj::JUMP;

::States States_obj::MACH;

::States States_obj::SKID;

::States States_obj::STAND;

bool States_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FALL",7b,84,76,2e)) { outValue = States_obj::FALL; return true; }
	if (inName==HX_("JUMP",ee,8c,2a,31)) { outValue = States_obj::JUMP; return true; }
	if (inName==HX_("MACH",f9,fa,16,33)) { outValue = States_obj::MACH; return true; }
	if (inName==HX_("SKID",73,de,15,37)) { outValue = States_obj::SKID; return true; }
	if (inName==HX_("STAND",b6,a8,f9,01)) { outValue = States_obj::STAND; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(States_obj)

int States_obj::__FindIndex(::String inName)
{
	if (inName==HX_("FALL",7b,84,76,2e)) return 2;
	if (inName==HX_("JUMP",ee,8c,2a,31)) return 1;
	if (inName==HX_("MACH",f9,fa,16,33)) return 3;
	if (inName==HX_("SKID",73,de,15,37)) return 4;
	if (inName==HX_("STAND",b6,a8,f9,01)) return 0;
	return super::__FindIndex(inName);
}

int States_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("FALL",7b,84,76,2e)) return 0;
	if (inName==HX_("JUMP",ee,8c,2a,31)) return 0;
	if (inName==HX_("MACH",f9,fa,16,33)) return 0;
	if (inName==HX_("SKID",73,de,15,37)) return 0;
	if (inName==HX_("STAND",b6,a8,f9,01)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val States_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FALL",7b,84,76,2e)) return FALL;
	if (inName==HX_("JUMP",ee,8c,2a,31)) return JUMP;
	if (inName==HX_("MACH",f9,fa,16,33)) return MACH;
	if (inName==HX_("SKID",73,de,15,37)) return SKID;
	if (inName==HX_("STAND",b6,a8,f9,01)) return STAND;
	return super::__Field(inName,inCallProp);
}

static ::String States_obj_sStaticFields[] = {
	HX_("STAND",b6,a8,f9,01),
	HX_("JUMP",ee,8c,2a,31),
	HX_("FALL",7b,84,76,2e),
	HX_("MACH",f9,fa,16,33),
	HX_("SKID",73,de,15,37),
	::String(null())
};

::hx::Class States_obj::__mClass;

Dynamic __Create_States_obj() { return new States_obj; }

void States_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("States",62,4d,90,3a), ::hx::TCanCast< States_obj >,States_obj_sStaticFields,0,
	&__Create_States_obj, &__Create,
	&super::__SGetClass(), &CreateStates_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &States_obj::__GetStatic;
}

void States_obj::__boot()
{
FALL = ::hx::CreateConstEnum< States_obj >(HX_("FALL",7b,84,76,2e),2);
JUMP = ::hx::CreateConstEnum< States_obj >(HX_("JUMP",ee,8c,2a,31),1);
MACH = ::hx::CreateConstEnum< States_obj >(HX_("MACH",f9,fa,16,33),3);
SKID = ::hx::CreateConstEnum< States_obj >(HX_("SKID",73,de,15,37),4);
STAND = ::hx::CreateConstEnum< States_obj >(HX_("STAND",b6,a8,f9,01),0);
}


