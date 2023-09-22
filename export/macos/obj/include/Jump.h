#ifndef INCLUDED_Jump
#define INCLUDED_Jump

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_util_FlxFSMState
#include <flixel/addons/util/FlxFSMState.h>
#endif
HX_DECLARE_CLASS0(Jump)
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSM)
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSMState)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Jump_obj : public  ::flixel::addons::util::FlxFSMState_obj
{
	public:
		typedef  ::flixel::addons::util::FlxFSMState_obj super;
		typedef Jump_obj OBJ_;
		Jump_obj();

	public:
		enum { _hx_ClassId = 0x0595e732 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Jump")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Jump"); }
		static ::hx::ObjectPtr< Jump_obj > __new();
		static ::hx::ObjectPtr< Jump_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Jump_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Jump",0e,f1,42,31); }

		bool isHoldingSpace;
		void enter( ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm);

		void update(Float elapsed, ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm);

		void exit( ::Dynamic _tmp_peppino);

};


#endif /* INCLUDED_Jump */ 
