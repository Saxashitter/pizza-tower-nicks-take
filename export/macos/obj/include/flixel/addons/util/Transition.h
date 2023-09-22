#ifndef INCLUDED_flixel_addons_util_Transition
#define INCLUDED_flixel_addons_util_Transition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e3119914950b9fe4_719_new)
HX_DECLARE_CLASS3(flixel,addons,util,Transition)

namespace flixel{
namespace addons{
namespace util{


class HXCPP_CLASS_ATTRIBUTES Transition_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Transition_obj OBJ_;
		Transition_obj();

	public:
		enum { _hx_ClassId = 0x28c1b38e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.util.Transition")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.util.Transition"); }

		inline static ::hx::ObjectPtr< Transition_obj > __new() {
			::hx::ObjectPtr< Transition_obj > __this = new Transition_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Transition_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Transition_obj *__this = (Transition_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Transition_obj), true, "flixel.addons.util.Transition"));
			*(void **)__this = Transition_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e3119914950b9fe4_719_new)
HXDLIN( 719)		( ( ::flixel::addons::util::Transition)(__this) )->remove = false;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Transition_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Transition",b5,91,60,4f); }

		bool evaluate( ::Dynamic target);
		::Dynamic evaluate_dyn();

		::hx::Class from;
		::hx::Class to;
		 ::Dynamic condition;
		Dynamic condition_dyn() { return condition;}
		bool remove;
};

} // end namespace flixel
} // end namespace addons
} // end namespace util

#endif /* INCLUDED_flixel_addons_util_Transition */ 
