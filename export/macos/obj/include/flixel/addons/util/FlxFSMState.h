#ifndef INCLUDED_flixel_addons_util_FlxFSMState
#define INCLUDED_flixel_addons_util_FlxFSMState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSM)
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSMState)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxFSMState_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxFSMState_obj OBJ_;
		FlxFSMState_obj();

	public:
		enum { _hx_ClassId = 0x210771b2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.addons.util.FlxFSMState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.addons.util.FlxFSMState"); }
		static ::hx::ObjectPtr< FlxFSMState_obj > __new();
		static ::hx::ObjectPtr< FlxFSMState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxFSMState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxFSMState",e3,81,59,3d); }

		virtual void enter( ::Dynamic owner, ::flixel::addons::util::FlxFSM fsm);
		::Dynamic enter_dyn();

		virtual void update(Float elapsed, ::Dynamic owner, ::flixel::addons::util::FlxFSM fsm);
		::Dynamic update_dyn();

		virtual void exit( ::Dynamic owner);
		::Dynamic exit_dyn();

		void destroy();
		::Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace util

#endif /* INCLUDED_flixel_addons_util_FlxFSMState */ 
