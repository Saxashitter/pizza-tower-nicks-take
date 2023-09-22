#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_addons_util_FlxFSM
#include <flixel/addons/util/FlxFSM.h>
#endif
#ifndef INCLUDED_flixel_addons_util_FlxFSMStack
#include <flixel/addons/util/FlxFSMStack.h>
#endif
#ifndef INCLUDED_flixel_addons_util_FlxFSMState
#include <flixel/addons/util/FlxFSMState.h>
#endif
#ifndef INCLUDED_flixel_addons_util_FlxFSMTransitionTable
#include <flixel/addons/util/FlxFSMTransitionTable.h>
#endif
#ifndef INCLUDED_flixel_addons_util__FlxFSM_FlxFSMStackSignal
#include <flixel/addons/util/_FlxFSM/FlxFSMStackSignal.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_082b20f1ef41e56d_98_new,"flixel.addons.util.FlxFSM","new",0x42375a83,"flixel.addons.util.FlxFSM.new","flixel/addons/util/FlxFSM.hx",98,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_082b20f1ef41e56d_111_update,"flixel.addons.util.FlxFSM","update",0xa396b3c6,"flixel.addons.util.FlxFSM.update","flixel/addons/util/FlxFSM.hx",111,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_082b20f1ef41e56d_150_destroy,"flixel.addons.util.FlxFSM","destroy",0x06fd049d,"flixel.addons.util.FlxFSM.destroy","flixel/addons/util/FlxFSM.hx",150,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_082b20f1ef41e56d_160_set_owner,"flixel.addons.util.FlxFSM","set_owner",0xef0726f9,"flixel.addons.util.FlxFSM.set_owner","flixel/addons/util/FlxFSM.hx",160,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_082b20f1ef41e56d_178_set_state,"flixel.addons.util.FlxFSM","set_state",0x3a9c04d7,"flixel.addons.util.FlxFSM.set_state","flixel/addons/util/FlxFSM.hx",178,0xe233084c)
namespace flixel{
namespace addons{
namespace util{

void FlxFSM_obj::__construct( ::Dynamic owner, ::flixel::addons::util::FlxFSMState state){
            	HX_GC_STACKFRAME(&_hx_pos_082b20f1ef41e56d_98_new)
HXLINE(  99)		this->age = ( (Float)(0) );
HXLINE( 100)		this->set_owner(owner);
HXLINE( 101)		this->set_state(state);
HXLINE( 102)		this->type = 0;
HXLINE( 103)		this->transitions =  ::flixel::addons::util::FlxFSMTransitionTable_obj::__alloc( HX_CTX );
HXLINE( 104)		this->pools =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic FlxFSM_obj::__CreateEmpty() { return new FlxFSM_obj; }

void *FlxFSM_obj::_hx_vtable = 0;

Dynamic FlxFSM_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxFSM_obj > _hx_result = new FlxFSM_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxFSM_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x226beaa7;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_util_FlxFSM__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::util::FlxFSM_obj::destroy,
};

void *FlxFSM_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_util_FlxFSM__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxFSM_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_082b20f1ef41e56d_111_update)
HXLINE( 112)		bool _hx_tmp;
HXDLIN( 112)		if (::hx::IsNotNull( this->state )) {
HXLINE( 112)			_hx_tmp = ::hx::IsNotNull( this->owner );
            		}
            		else {
HXLINE( 112)			_hx_tmp = false;
            		}
HXDLIN( 112)		if (_hx_tmp) {
HXLINE( 114)			 ::flixel::addons::util::FlxFSM _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 114)			_hx_tmp->age = (_hx_tmp->age + elapsed);
HXLINE( 115)			this->state->update(elapsed,this->owner,::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 118)		bool _hx_tmp1;
HXDLIN( 118)		if (::hx::IsNotNull( this->transitions )) {
HXLINE( 118)			_hx_tmp1 = ::hx::IsNotNull( this->pools );
            		}
            		else {
HXLINE( 118)			_hx_tmp1 = false;
            		}
HXDLIN( 118)		if (_hx_tmp1) {
HXLINE( 120)			::hx::Class newStateClass = this->transitions->poll(this->stateClass,this->owner);
HXLINE( 122)			if (::hx::IsPointerNotEq( newStateClass,this->stateClass )) {
HXLINE( 124)				::String curName = null();
HXLINE( 125)				if (::hx::IsNotNull( this->stateClass )) {
HXLINE( 126)					curName = ::Type_obj::getClassName(this->stateClass);
            				}
HXLINE( 127)				::String newName = ::Type_obj::getClassName(newStateClass);
HXLINE( 129)				bool _hx_tmp;
HXDLIN( 129)				if (::hx::IsNotNull( newName )) {
HXLINE( 129)					_hx_tmp = !(this->pools->exists(newName));
            				}
            				else {
HXLINE( 129)					_hx_tmp = false;
            				}
HXDLIN( 129)				if (_hx_tmp) {
HXLINE( 131)					::Dynamic this1 = this->pools;
HXDLIN( 131)					( ( ::haxe::ds::StringMap)(this1) )->set(newName, ::flixel::util::FlxPool_obj::__alloc( HX_CTX ,newStateClass));
            				}
HXLINE( 134)				 ::flixel::addons::util::FlxFSMState returnToPool = this->state;
HXLINE( 136)				this->set_state(( ( ::flixel::util::FlxPool)(this->pools->get(newName)) )->get().StaticCast<  ::flixel::addons::util::FlxFSMState >());
HXLINE( 138)				bool _hx_tmp1;
HXDLIN( 138)				bool _hx_tmp2;
HXDLIN( 138)				if (::hx::IsNotNull( this->state )) {
HXLINE( 138)					_hx_tmp2 = ::hx::IsNotNull( curName );
            				}
            				else {
HXLINE( 138)					_hx_tmp2 = false;
            				}
HXDLIN( 138)				if (_hx_tmp2) {
HXLINE( 138)					_hx_tmp1 = this->pools->exists(curName);
            				}
            				else {
HXLINE( 138)					_hx_tmp1 = false;
            				}
HXDLIN( 138)				if (_hx_tmp1) {
HXLINE( 140)					( ( ::flixel::util::FlxPool)(this->pools->get(curName)) )->put(returnToPool);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFSM_obj,update,(void))

void FlxFSM_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_082b20f1ef41e56d_150_destroy)
HXLINE( 151)		this->set_owner(null());
HXLINE( 152)		this->set_state(null());
HXLINE( 153)		this->stack = null();
HXLINE( 154)		this->name = null();
HXLINE( 155)		this->transitions = null();
HXLINE( 156)		this->pools = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFSM_obj,destroy,(void))

 ::Dynamic FlxFSM_obj::set_owner( ::Dynamic owner){
            	HX_STACKFRAME(&_hx_pos_082b20f1ef41e56d_160_set_owner)
HXLINE( 161)		if (::hx::IsNotEq( this->owner,owner )) {
HXLINE( 163)			bool _hx_tmp;
HXDLIN( 163)			if (::hx::IsNotNull( this->owner )) {
HXLINE( 163)				_hx_tmp = ::hx::IsNotNull( this->state );
            			}
            			else {
HXLINE( 163)				_hx_tmp = false;
            			}
HXDLIN( 163)			if (_hx_tmp) {
HXLINE( 165)				this->state->exit(this->owner);
            			}
HXLINE( 167)			this->owner = owner;
HXLINE( 168)			bool _hx_tmp1;
HXDLIN( 168)			if (::hx::IsNotNull( this->owner )) {
HXLINE( 168)				_hx_tmp1 = ::hx::IsNotNull( this->state );
            			}
            			else {
HXLINE( 168)				_hx_tmp1 = false;
            			}
HXDLIN( 168)			if (_hx_tmp1) {
HXLINE( 170)				this->age = ( (Float)(0) );
HXLINE( 171)				this->state->enter(this->owner,::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE( 174)		return this->owner;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFSM_obj,set_owner,return )

 ::flixel::addons::util::FlxFSMState FlxFSM_obj::set_state( ::flixel::addons::util::FlxFSMState state){
            	HX_STACKFRAME(&_hx_pos_082b20f1ef41e56d_178_set_state)
HXLINE( 179)		::hx::Class newClass = ::Type_obj::getClass(state);
HXLINE( 180)		if (::hx::IsPointerNotEq( this->stateClass,newClass )) {
HXLINE( 182)			bool _hx_tmp;
HXDLIN( 182)			if (::hx::IsNotNull( this->owner )) {
HXLINE( 182)				_hx_tmp = ::hx::IsNotNull( this->state );
            			}
            			else {
HXLINE( 182)				_hx_tmp = false;
            			}
HXDLIN( 182)			if (_hx_tmp) {
HXLINE( 184)				this->state->exit(this->owner);
            			}
HXLINE( 186)			this->state = state;
HXLINE( 187)			bool _hx_tmp1;
HXDLIN( 187)			if (::hx::IsNotNull( this->state )) {
HXLINE( 187)				_hx_tmp1 = ::hx::IsNotNull( this->owner );
            			}
            			else {
HXLINE( 187)				_hx_tmp1 = false;
            			}
HXDLIN( 187)			if (_hx_tmp1) {
HXLINE( 189)				this->age = ( (Float)(0) );
HXLINE( 190)				this->state->enter(this->owner,::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 192)			this->stateClass = newClass;
            		}
HXLINE( 194)		return state;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFSM_obj,set_state,return )


::hx::ObjectPtr< FlxFSM_obj > FlxFSM_obj::__new( ::Dynamic owner, ::flixel::addons::util::FlxFSMState state) {
	::hx::ObjectPtr< FlxFSM_obj > __this = new FlxFSM_obj();
	__this->__construct(owner,state);
	return __this;
}

::hx::ObjectPtr< FlxFSM_obj > FlxFSM_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic owner, ::flixel::addons::util::FlxFSMState state) {
	FlxFSM_obj *__this = (FlxFSM_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxFSM_obj), true, "flixel.addons.util.FlxFSM"));
	*(void **)__this = FlxFSM_obj::_hx_vtable;
	__this->__construct(owner,state);
	return __this;
}

FlxFSM_obj::FlxFSM_obj()
{
}

void FlxFSM_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFSM);
	HX_MARK_MEMBER_NAME(owner,"owner");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(stateClass,"stateClass");
	HX_MARK_MEMBER_NAME(age,"age");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(stack,"stack");
	HX_MARK_MEMBER_NAME(transitions,"transitions");
	HX_MARK_MEMBER_NAME(pools,"pools");
	HX_MARK_END_CLASS();
}

void FlxFSM_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(owner,"owner");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(stateClass,"stateClass");
	HX_VISIT_MEMBER_NAME(age,"age");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(stack,"stack");
	HX_VISIT_MEMBER_NAME(transitions,"transitions");
	HX_VISIT_MEMBER_NAME(pools,"pools");
}

::hx::Val FlxFSM_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"age") ) { return ::hx::Val( age ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { return ::hx::Val( owner ); }
		if (HX_FIELD_EQ(inName,"state") ) { return ::hx::Val( state ); }
		if (HX_FIELD_EQ(inName,"stack") ) { return ::hx::Val( stack ); }
		if (HX_FIELD_EQ(inName,"pools") ) { return ::hx::Val( pools ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_owner") ) { return ::hx::Val( set_owner_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_state") ) { return ::hx::Val( set_state_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stateClass") ) { return ::hx::Val( stateClass ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transitions") ) { return ::hx::Val( transitions ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxFSM_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"age") ) { age=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_owner(inValue.Cast<  ::Dynamic >()) );owner=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_state(inValue.Cast<  ::flixel::addons::util::FlxFSMState >()) );state=inValue.Cast<  ::flixel::addons::util::FlxFSMState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stack") ) { stack=inValue.Cast<  ::flixel::addons::util::FlxFSMStack >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pools") ) { pools=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stateClass") ) { stateClass=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transitions") ) { transitions=inValue.Cast<  ::flixel::addons::util::FlxFSMTransitionTable >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFSM_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("owner",33,98,76,38));
	outFields->push(HX_("state",11,76,0b,84));
	outFields->push(HX_("stateClass",67,d4,3f,b8));
	outFields->push(HX_("age",bf,f4,49,00));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("stack",48,67,0b,84));
	outFields->push(HX_("transitions",3e,55,ec,40));
	outFields->push(HX_("pools",17,40,94,c6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxFSM_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxFSM_obj,owner),HX_("owner",33,98,76,38)},
	{::hx::fsObject /*  ::flixel::addons::util::FlxFSMState */ ,(int)offsetof(FlxFSM_obj,state),HX_("state",11,76,0b,84)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(FlxFSM_obj,stateClass),HX_("stateClass",67,d4,3f,b8)},
	{::hx::fsFloat,(int)offsetof(FlxFSM_obj,age),HX_("age",bf,f4,49,00)},
	{::hx::fsString,(int)offsetof(FlxFSM_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(FlxFSM_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::flixel::addons::util::FlxFSMStack */ ,(int)offsetof(FlxFSM_obj,stack),HX_("stack",48,67,0b,84)},
	{::hx::fsObject /*  ::flixel::addons::util::FlxFSMTransitionTable */ ,(int)offsetof(FlxFSM_obj,transitions),HX_("transitions",3e,55,ec,40)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(FlxFSM_obj,pools),HX_("pools",17,40,94,c6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxFSM_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxFSM_obj_sMemberFields[] = {
	HX_("owner",33,98,76,38),
	HX_("state",11,76,0b,84),
	HX_("stateClass",67,d4,3f,b8),
	HX_("age",bf,f4,49,00),
	HX_("name",4b,72,ff,48),
	HX_("type",ba,f2,08,4d),
	HX_("stack",48,67,0b,84),
	HX_("transitions",3e,55,ec,40),
	HX_("pools",17,40,94,c6),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("set_owner",96,e0,70,5f),
	HX_("set_state",74,be,05,ab),
	::String(null()) };

::hx::Class FlxFSM_obj::__mClass;

void FlxFSM_obj::__register()
{
	FlxFSM_obj _hx_dummy;
	FlxFSM_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.util.FlxFSM",11,5d,39,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxFSM_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxFSM_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxFSM_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxFSM_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace util
