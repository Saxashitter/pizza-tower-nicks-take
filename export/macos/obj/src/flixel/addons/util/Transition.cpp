#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_util_Transition
#include <flixel/addons/util/Transition.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e3119914950b9fe4_719_new,"flixel.addons.util.Transition","new",0x093e1fea,"flixel.addons.util.Transition.new","flixel/addons/util/FlxFSM.hx",719,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_e3119914950b9fe4_697_evaluate,"flixel.addons.util.Transition","evaluate",0xc6e77c8f,"flixel.addons.util.Transition.evaluate","flixel/addons/util/FlxFSM.hx",697,0xe233084c)
namespace flixel{
namespace addons{
namespace util{

void Transition_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e3119914950b9fe4_719_new)
HXDLIN( 719)		this->remove = false;
            	}

Dynamic Transition_obj::__CreateEmpty() { return new Transition_obj; }

void *Transition_obj::_hx_vtable = 0;

Dynamic Transition_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Transition_obj > _hx_result = new Transition_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Transition_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x28c1b38e;
}

bool Transition_obj::evaluate( ::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_e3119914950b9fe4_697_evaluate)
HXDLIN( 697)		return ( (bool)(this->condition(target)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transition_obj,evaluate,return )


Transition_obj::Transition_obj()
{
}

void Transition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transition);
	HX_MARK_MEMBER_NAME(from,"from");
	HX_MARK_MEMBER_NAME(to,"to");
	HX_MARK_MEMBER_NAME(condition,"condition");
	HX_MARK_MEMBER_NAME(remove,"remove");
	HX_MARK_END_CLASS();
}

void Transition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(from,"from");
	HX_VISIT_MEMBER_NAME(to,"to");
	HX_VISIT_MEMBER_NAME(condition,"condition");
	HX_VISIT_MEMBER_NAME(remove,"remove");
}

::hx::Val Transition_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { return ::hx::Val( to ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"from") ) { return ::hx::Val( from ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"evaluate") ) { return ::hx::Val( evaluate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"condition") ) { return ::hx::Val( condition ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Transition_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { to=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"from") ) { from=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { remove=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"condition") ) { condition=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("from",6a,a5,c2,43));
	outFields->push(HX_("to",7b,65,00,00));
	outFields->push(HX_("remove",44,9c,88,04));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Transition_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(Transition_obj,from),HX_("from",6a,a5,c2,43)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(Transition_obj,to),HX_("to",7b,65,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Transition_obj,condition),HX_("condition",9b,e9,33,fc)},
	{::hx::fsBool,(int)offsetof(Transition_obj,remove),HX_("remove",44,9c,88,04)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Transition_obj_sStaticStorageInfo = 0;
#endif

static ::String Transition_obj_sMemberFields[] = {
	HX_("evaluate",59,60,50,01),
	HX_("from",6a,a5,c2,43),
	HX_("to",7b,65,00,00),
	HX_("condition",9b,e9,33,fc),
	HX_("remove",44,9c,88,04),
	::String(null()) };

::hx::Class Transition_obj::__mClass;

void Transition_obj::__register()
{
	Transition_obj _hx_dummy;
	Transition_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.util.Transition",f8,a2,a9,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Transition_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Transition_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Transition_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Transition_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace util
