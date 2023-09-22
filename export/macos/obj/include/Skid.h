#ifndef INCLUDED_Skid
#define INCLUDED_Skid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_util_FlxFSMState
#include <flixel/addons/util/FlxFSMState.h>
#endif
HX_DECLARE_CLASS0(Skid)
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSM)
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSMState)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Skid_obj : public  ::flixel::addons::util::FlxFSMState_obj
{
	public:
		typedef  ::flixel::addons::util::FlxFSMState_obj super;
		typedef Skid_obj OBJ_;
		Skid_obj();

	public:
		enum { _hx_ClassId = 0x0b8138b7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Skid")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Skid"); }
		static ::hx::ObjectPtr< Skid_obj > __new();
		static ::hx::ObjectPtr< Skid_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Skid_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Skid",93,42,2e,37); }

		void enter( ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm);

		void update(Float elapsed, ::Dynamic _tmp_peppino, ::flixel::addons::util::FlxFSM _tmp_fsm);

		void exit( ::Dynamic _tmp_peppino);

};


#endif /* INCLUDED_Skid */ 
