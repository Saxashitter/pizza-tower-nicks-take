#ifndef INCLUDED_Mach
#define INCLUDED_Mach

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_util_FlxFSMState
#include <flixel/addons/util/FlxFSMState.h>
#endif
HX_DECLARE_CLASS0(Mach)
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSM)
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSMState)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Mach_obj : public  ::flixel::addons::util::FlxFSMState_obj
{
	public:
		typedef  ::flixel::addons::util::FlxFSMState_obj super;
		typedef Mach_obj OBJ_;
		Mach_obj();

	public:
		enum { _hx_ClassId = 0x0782553d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Mach")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Mach"); }
		static ::hx::ObjectPtr< Mach_obj > __new();
		static ::hx::ObjectPtr< Mach_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Mach_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Mach",19,5f,2f,33); }

		void enter( ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm);

		void update(Float elapsed, ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm);

		void exit( ::Dynamic _tmp_peppino);

};


#endif /* INCLUDED_Mach */ 
