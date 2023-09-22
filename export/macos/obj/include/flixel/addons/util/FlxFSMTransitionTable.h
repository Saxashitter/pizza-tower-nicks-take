#ifndef INCLUDED_flixel_addons_util_FlxFSMTransitionTable
#define INCLUDED_flixel_addons_util_FlxFSMTransitionTable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,util,FlxFSMTransitionTable)
HX_DECLARE_CLASS3(flixel,addons,util,Transition)

namespace flixel{
namespace addons{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxFSMTransitionTable_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxFSMTransitionTable_obj OBJ_;
		FlxFSMTransitionTable_obj();

	public:
		enum { _hx_ClassId = 0x33d46d1a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.util.FlxFSMTransitionTable")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.util.FlxFSMTransitionTable"); }
		static ::hx::ObjectPtr< FlxFSMTransitionTable_obj > __new();
		static ::hx::ObjectPtr< FlxFSMTransitionTable_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxFSMTransitionTable_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxFSMTransitionTable",8b,04,ed,3b); }

		::Array< ::Dynamic> _table;
		::hx::Class _startState;
		bool _garbagecollect;
		::hx::Class poll(::hx::Class currentState, ::Dynamic owner);
		::Dynamic poll_dyn();

		 ::flixel::addons::util::FlxFSMTransitionTable add(::hx::Class from,::hx::Class to, ::Dynamic condition);
		::Dynamic add_dyn();

		 ::flixel::addons::util::FlxFSMTransitionTable addGlobal(::hx::Class to, ::Dynamic condition);
		::Dynamic addGlobal_dyn();

		void addTransition( ::flixel::addons::util::Transition transition);
		::Dynamic addTransition_dyn();

		 ::flixel::addons::util::FlxFSMTransitionTable start(::hx::Class with);
		::Dynamic start_dyn();

		void replace(::hx::Class target,::hx::Class replacement);
		::Dynamic replace_dyn();

		void remove(::hx::Class from,::hx::Class to, ::Dynamic condition);
		::Dynamic remove_dyn();

		bool hasTransition(::hx::Class from,::hx::Class to, ::Dynamic condition);
		::Dynamic hasTransition_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace util

#endif /* INCLUDED_flixel_addons_util_FlxFSMTransitionTable */ 
