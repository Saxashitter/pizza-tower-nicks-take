#ifndef INCLUDED_flixel_addons_util_FlxFSMStack
#define INCLUDED_flixel_addons_util_FlxFSMStack

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_util__FlxFSM_FlxFSMStackSignal
#include <flixel/addons/util/_FlxFSM/FlxFSMStackSignal.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSM)
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSMStack)
HX_DECLARE_CLASS4(flixel,addons,util,_FlxFSM,FlxFSMStackSignal)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxFSMStack_obj : public  ::flixel::addons::util::_FlxFSM::FlxFSMStackSignal_obj
{
	public:
		typedef  ::flixel::addons::util::_FlxFSM::FlxFSMStackSignal_obj super;
		typedef FlxFSMStack_obj OBJ_;
		FlxFSMStack_obj();

	public:
		enum { _hx_ClassId = 0x210762e9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.util.FlxFSMStack")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.util.FlxFSMStack"); }
		static ::hx::ObjectPtr< FlxFSMStack_obj > __new();
		static ::hx::ObjectPtr< FlxFSMStack_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxFSMStack_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxFSMStack",1a,73,59,3d); }

		::Array< ::Dynamic> _stack;
		::Array< ::Dynamic> _alteredStack;
		bool _hasLocks;
		::Array< ::String > _lockedNames;
		int _lockedTypes;
		bool _lockRemaining;
		void update(Float elapsed);
		::Dynamic update_dyn();

		void lock(::String name);
		::Dynamic lock_dyn();

		void lockRemaining();
		::Dynamic lockRemaining_dyn();

		void lockType(int bitflag);
		::Dynamic lockType_dyn();

		void unshift( ::flixel::addons::util::FlxFSM FSM);
		::Dynamic unshift_dyn();

		 ::flixel::addons::util::FlxFSM shift();
		::Dynamic shift_dyn();

		void push( ::flixel::addons::util::FlxFSM FSM);
		::Dynamic push_dyn();

		 ::flixel::addons::util::FlxFSM pop();
		::Dynamic pop_dyn();

		void remove( ::flixel::addons::util::FlxFSM FSM);
		::Dynamic remove_dyn();

		void removeByName(::String name);
		::Dynamic removeByName_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		bool get_isEmpty();
		::Dynamic get_isEmpty_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace util

#endif /* INCLUDED_flixel_addons_util_FlxFSMStack */ 
