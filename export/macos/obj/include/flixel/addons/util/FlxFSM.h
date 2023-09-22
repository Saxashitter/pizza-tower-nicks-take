#ifndef INCLUDED_flixel_addons_util_FlxFSM
#define INCLUDED_flixel_addons_util_FlxFSM

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSM)
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSMStack)
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSMState)
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSMTransitionTable)
HX_DECLARE_CLASS4(flixel,addons,util,_FlxFSM,FlxFSMStackSignal)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace flixel{
namespace addons{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxFSM_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxFSM_obj OBJ_;
		FlxFSM_obj();

	public:
		enum { _hx_ClassId = 0x226beaa7 };

		void __construct( ::Dynamic owner, ::flixel::addons::util::FlxFSMState state);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.util.FlxFSM")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.util.FlxFSM"); }
		static ::hx::ObjectPtr< FlxFSM_obj > __new( ::Dynamic owner, ::flixel::addons::util::FlxFSMState state);
		static ::hx::ObjectPtr< FlxFSM_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic owner, ::flixel::addons::util::FlxFSMState state);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxFSM_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxFSM",4e,e9,c8,7b); }

		 ::Dynamic owner;
		 ::flixel::addons::util::FlxFSMState state;
		::hx::Class stateClass;
		Float age;
		::String name;
		int type;
		 ::flixel::addons::util::FlxFSMStack stack;
		 ::flixel::addons::util::FlxFSMTransitionTable transitions;
		 ::haxe::ds::StringMap pools;
		void update(Float elapsed);
		::Dynamic update_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		 ::Dynamic set_owner( ::Dynamic owner);
		::Dynamic set_owner_dyn();

		 ::flixel::addons::util::FlxFSMState set_state( ::flixel::addons::util::FlxFSMState state);
		::Dynamic set_state_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace util

#endif /* INCLUDED_flixel_addons_util_FlxFSM */ 
