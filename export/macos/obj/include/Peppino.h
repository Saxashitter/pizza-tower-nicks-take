#ifndef INCLUDED_Peppino
#define INCLUDED_Peppino

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Peppino)
HX_DECLARE_CLASS0(States)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,util,FlxFSM)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Peppino_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Peppino_obj OBJ_;
		Peppino_obj();

	public:
		enum { _hx_ClassId = 0x052ff111 };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Peppino")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Peppino"); }
		static ::hx::ObjectPtr< Peppino_obj > __new(Float x,Float y);
		static ::hx::ObjectPtr< Peppino_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Peppino_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Peppino",b5,78,f9,27); }

		 ::flixel::addons::util::FlxFSM fsm;
		Float movespeed;
		Float maxMachVelo;
		bool machrunning;
		 ::States curState;
		 ::States prevState;
		bool hasTransitioned;
		void changeState( ::States state);
		::Dynamic changeState_dyn();

		void update(Float elapsed);

		void playAnim(::String animationName, ::Dynamic force);
		::Dynamic playAnim_dyn();

		void walkMovement();
		::Dynamic walkMovement_dyn();

		 ::Dynamic getMovementType();
		::Dynamic getMovementType_dyn();

		int getMachSpeed();
		::Dynamic getMachSpeed_dyn();

		void machMovement();
		::Dynamic machMovement_dyn();

};


#endif /* INCLUDED_Peppino */ 
