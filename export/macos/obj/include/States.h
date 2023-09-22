#ifndef INCLUDED_States
#define INCLUDED_States

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(States)


class States_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef States_obj OBJ_;

	public:
		States_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("States",62,4d,90,3a); }
		::String __ToString() const { return HX_("States.",8c,68,b3,03) + _hx_tag; }

		static ::States FALL;
		static inline ::States FALL_dyn() { return FALL; }
		static ::States JUMP;
		static inline ::States JUMP_dyn() { return JUMP; }
		static ::States MACH;
		static inline ::States MACH_dyn() { return MACH; }
		static ::States SKID;
		static inline ::States SKID_dyn() { return SKID; }
		static ::States STAND;
		static inline ::States STAND_dyn() { return STAND; }
};


#endif /* INCLUDED_States */ 
