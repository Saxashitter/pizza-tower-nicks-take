#ifndef INCLUDED_flixel_addons_util__FlxFSM_FlxFSMStackSignal
#define INCLUDED_flixel_addons_util__FlxFSM_FlxFSMStackSignal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,util,_FlxFSM,FlxFSMStackSignal)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal1)

namespace flixel{
namespace addons{
namespace util{
namespace _FlxFSM{


class HXCPP_CLASS_ATTRIBUTES FlxFSMStackSignal_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxFSMStackSignal_obj OBJ_;
		FlxFSMStackSignal_obj();

	public:
		enum { _hx_ClassId = 0x16adf8a6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.addons.util._FlxFSM.FlxFSMStackSignal")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.addons.util._FlxFSM.FlxFSMStackSignal"); }
		static ::hx::ObjectPtr< FlxFSMStackSignal_obj > __new();
		static ::hx::ObjectPtr< FlxFSMStackSignal_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxFSMStackSignal_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxFSMStackSignal",22,65,ba,8c); }

		static  ::flixel::util::_FlxSignal::FlxSignal1 _lockSignal;
		void globalLock(int type);
		::Dynamic globalLock_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace util
} // end namespace _FlxFSM

#endif /* INCLUDED_flixel_addons_util__FlxFSM_FlxFSMStackSignal */ 
