#ifndef INCLUDED_Fall
#define INCLUDED_Fall

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_util_FlxFSMState
#include <flixel/addons/util/FlxFSMState.h>
#endif
HX_DECLARE_CLASS0(Fall)
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSM)
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSMState)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Fall_obj : public  ::flixel::addons::util::FlxFSMState_obj
{
	public:
		typedef  ::flixel::addons::util::FlxFSMState_obj super;
		typedef Fall_obj OBJ_;
		Fall_obj();

	public:
		enum { _hx_ClassId = 0x02e1debf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Fall")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Fall"); }
		static ::hx::ObjectPtr< Fall_obj > __new();
		static ::hx::ObjectPtr< Fall_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Fall_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Fall",9b,e8,8e,2e); }

		void enter( ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm);

		void update(Float elapsed, ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm);

};


#endif /* INCLUDED_Fall */ 
