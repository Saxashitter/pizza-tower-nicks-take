#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_util_FlxFSM
#include <flixel/addons/util/FlxFSM.h>
#endif
#ifndef INCLUDED_flixel_addons_util_FlxFSMStack
#include <flixel/addons/util/FlxFSMStack.h>
#endif
#ifndef INCLUDED_flixel_addons_util__FlxFSM_FlxFSMStackSignal
#include <flixel/addons/util/_FlxFSM/FlxFSMStackSignal.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f4a611baefd38e43_221_new,"flixel.addons.util.FlxFSMStack","new",0xbed824e9,"flixel.addons.util.FlxFSMStack.new","flixel/addons/util/FlxFSM.hx",221,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_f4a611baefd38e43_234_update,"flixel.addons.util.FlxFSMStack","update",0x937bed20,"flixel.addons.util.FlxFSMStack.update","flixel/addons/util/FlxFSM.hx",234,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_f4a611baefd38e43_271_lock,"flixel.addons.util.FlxFSMStack","lock",0x3cfd3f42,"flixel.addons.util.FlxFSMStack.lock","flixel/addons/util/FlxFSM.hx",271,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_f4a611baefd38e43_282_lockRemaining,"flixel.addons.util.FlxFSMStack","lockRemaining",0xffaa6f54,"flixel.addons.util.FlxFSMStack.lockRemaining","flixel/addons/util/FlxFSM.hx",282,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_f4a611baefd38e43_292_lockType,"flixel.addons.util.FlxFSMStack","lockType",0x765d271c,"flixel.addons.util.FlxFSMStack.lockType","flixel/addons/util/FlxFSM.hx",292,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_f4a611baefd38e43_302_unshift,"flixel.addons.util.FlxFSMStack","unshift",0x53d7b092,"flixel.addons.util.FlxFSMStack.unshift","flixel/addons/util/FlxFSM.hx",302,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_f4a611baefd38e43_316_shift,"flixel.addons.util.FlxFSMStack","shift",0x23cc354b,"flixel.addons.util.FlxFSMStack.shift","flixel/addons/util/FlxFSM.hx",316,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_f4a611baefd38e43_331_push,"flixel.addons.util.FlxFSMStack","push",0x3fa6b531,"flixel.addons.util.FlxFSMStack.push","flixel/addons/util/FlxFSM.hx",331,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_f4a611baefd38e43_345_pop,"flixel.addons.util.FlxFSMStack","pop",0xbed9b21a,"flixel.addons.util.FlxFSMStack.pop","flixel/addons/util/FlxFSM.hx",345,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_f4a611baefd38e43_361_remove,"flixel.addons.util.FlxFSMStack","remove",0x10ff035b,"flixel.addons.util.FlxFSMStack.remove","flixel/addons/util/FlxFSM.hx",361,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_f4a611baefd38e43_379_removeByName,"flixel.addons.util.FlxFSMStack","removeByName",0x25a7197d,"flixel.addons.util.FlxFSMStack.removeByName","flixel/addons/util/FlxFSM.hx",379,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_f4a611baefd38e43_392_destroy,"flixel.addons.util.FlxFSMStack","destroy",0xffa9fa03,"flixel.addons.util.FlxFSMStack.destroy","flixel/addons/util/FlxFSM.hx",392,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_f4a611baefd38e43_403_get_isEmpty,"flixel.addons.util.FlxFSMStack","get_isEmpty",0x8e83c3e3,"flixel.addons.util.FlxFSMStack.get_isEmpty","flixel/addons/util/FlxFSM.hx",403,0xe233084c)
namespace flixel{
namespace addons{
namespace util{

void FlxFSMStack_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f4a611baefd38e43_221_new)
HXLINE( 222)		super::__construct();
HXLINE( 223)		this->_stack = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 224)		this->_lockedNames = ::Array_obj< ::String >::__new(0);
HXLINE( 225)		this->_lockedTypes = 0;
HXLINE( 226)		this->_hasLocks = false;
HXLINE( 227)		::flixel::addons::util::_FlxFSM::FlxFSMStackSignal_obj::_lockSignal->add(this->lockType_dyn());
            	}

Dynamic FlxFSMStack_obj::__CreateEmpty() { return new FlxFSMStack_obj; }

void *FlxFSMStack_obj::_hx_vtable = 0;

Dynamic FlxFSMStack_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxFSMStack_obj > _hx_result = new FlxFSMStack_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxFSMStack_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x16adf8a6) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x16adf8a6;
	} else {
		return inClassId==(int)0x210762e9;
	}
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_util_FlxFSMStack__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::util::FlxFSMStack_obj::destroy,
};

void *FlxFSMStack_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_util_FlxFSMStack__hx_flixel_util_IFlxDestroyable;
	}
	return super::_hx_getInterface(inHash);
}

void FlxFSMStack_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_f4a611baefd38e43_234_update)
HXLINE( 235)		if (::hx::IsNotNull( this->_alteredStack )) {
HXLINE( 237)			this->_stack = this->_alteredStack->copy();
HXLINE( 238)			this->_alteredStack = null();
            		}
HXLINE( 241)		{
HXLINE( 241)			int _g = 0;
HXDLIN( 241)			::Array< ::Dynamic> _g1 = this->_stack;
HXDLIN( 241)			while((_g < _g1->length)){
HXLINE( 241)				 ::flixel::addons::util::FlxFSM fsm = _g1->__get(_g).StaticCast<  ::flixel::addons::util::FlxFSM >();
HXDLIN( 241)				_g = (_g + 1);
HXLINE( 243)				if (this->_hasLocks) {
HXLINE( 245)					bool _hx_tmp;
HXDLIN( 245)					bool _hx_tmp1;
HXDLIN( 245)					if ((this->_lockRemaining == false)) {
HXLINE( 245)						_hx_tmp1 = ((fsm->type & this->_lockedTypes) == 0);
            					}
            					else {
HXLINE( 245)						_hx_tmp1 = false;
            					}
HXDLIN( 245)					if (_hx_tmp1) {
HXLINE( 245)						_hx_tmp = (this->_lockedNames->indexOf(fsm->name,null()) == -1);
            					}
            					else {
HXLINE( 245)						_hx_tmp = false;
            					}
HXDLIN( 245)					if (_hx_tmp) {
HXLINE( 247)						fsm->update(elapsed);
            					}
            				}
            				else {
HXLINE( 252)					fsm->update(elapsed);
            				}
            			}
            		}
HXLINE( 256)		if ((this->_lockedNames->length != 0)) {
HXLINE( 258)			this->_lockedNames = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 260)		this->_lockRemaining = false;
HXLINE( 261)		this->_lockedTypes = 0;
HXLINE( 262)		this->_hasLocks = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFSMStack_obj,update,(void))

void FlxFSMStack_obj::lock(::String name){
            	HX_STACKFRAME(&_hx_pos_f4a611baefd38e43_271_lock)
HXDLIN( 271)		if ((this->_lockedNames->indexOf(name,null()) == -1)) {
HXLINE( 273)			this->_lockedNames->push(name);
HXLINE( 274)			this->_hasLocks = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFSMStack_obj,lock,(void))

void FlxFSMStack_obj::lockRemaining(){
            	HX_STACKFRAME(&_hx_pos_f4a611baefd38e43_282_lockRemaining)
HXLINE( 283)		this->_lockRemaining = true;
HXLINE( 284)		this->_hasLocks = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFSMStack_obj,lockRemaining,(void))

void FlxFSMStack_obj::lockType(int bitflag){
            	HX_STACKFRAME(&_hx_pos_f4a611baefd38e43_292_lockType)
HXLINE( 293)		 ::flixel::addons::util::FlxFSMStack _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 293)		_hx_tmp->_lockedTypes = (_hx_tmp->_lockedTypes | bitflag);
HXLINE( 294)		this->_hasLocks = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFSMStack_obj,lockType,(void))

void FlxFSMStack_obj::unshift( ::flixel::addons::util::FlxFSM FSM){
            	HX_STACKFRAME(&_hx_pos_f4a611baefd38e43_302_unshift)
HXLINE( 303)		if (::hx::IsNull( this->_alteredStack )) {
HXLINE( 305)			this->_alteredStack = this->_stack->copy();
            		}
HXLINE( 307)		FSM->stack = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 308)		this->_alteredStack->unshift(FSM);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFSMStack_obj,unshift,(void))

 ::flixel::addons::util::FlxFSM FlxFSMStack_obj::shift(){
            	HX_STACKFRAME(&_hx_pos_f4a611baefd38e43_316_shift)
HXLINE( 317)		if (::hx::IsNull( this->_alteredStack )) {
HXLINE( 319)			this->_alteredStack = this->_stack->copy();
            		}
HXLINE( 321)		 ::flixel::addons::util::FlxFSM FSM = this->_alteredStack->shift().StaticCast<  ::flixel::addons::util::FlxFSM >();
HXLINE( 322)		::flixel::util::FlxDestroyUtil_obj::destroy(FSM);
HXLINE( 323)		return FSM;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFSMStack_obj,shift,return )

void FlxFSMStack_obj::push( ::flixel::addons::util::FlxFSM FSM){
            	HX_STACKFRAME(&_hx_pos_f4a611baefd38e43_331_push)
HXLINE( 332)		if (::hx::IsNull( this->_alteredStack )) {
HXLINE( 334)			this->_alteredStack = this->_stack->copy();
            		}
HXLINE( 336)		FSM->stack = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 337)		this->_alteredStack->push(FSM);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFSMStack_obj,push,(void))

 ::flixel::addons::util::FlxFSM FlxFSMStack_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_f4a611baefd38e43_345_pop)
HXLINE( 346)		if (::hx::IsNull( this->_alteredStack )) {
HXLINE( 348)			this->_alteredStack = this->_stack->copy();
            		}
HXLINE( 350)		 ::flixel::addons::util::FlxFSM FSM = this->_alteredStack->pop().StaticCast<  ::flixel::addons::util::FlxFSM >();
HXLINE( 351)		this->lock(FSM->name);
HXLINE( 352)		::flixel::util::FlxDestroyUtil_obj::destroy(FSM);
HXLINE( 353)		return FSM;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFSMStack_obj,pop,return )

void FlxFSMStack_obj::remove( ::flixel::addons::util::FlxFSM FSM){
            	HX_STACKFRAME(&_hx_pos_f4a611baefd38e43_361_remove)
HXLINE( 362)		if (::hx::IsNull( this->_alteredStack )) {
HXLINE( 364)			this->_alteredStack = this->_stack->copy();
            		}
HXLINE( 366)		if (this->_alteredStack->remove(FSM)) {
HXLINE( 368)			this->lock(FSM->name);
HXLINE( 369)			::flixel::util::FlxDestroyUtil_obj::destroy(FSM);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFSMStack_obj,remove,(void))

void FlxFSMStack_obj::removeByName(::String name){
            	HX_STACKFRAME(&_hx_pos_f4a611baefd38e43_379_removeByName)
HXDLIN( 379)		int _g = 0;
HXDLIN( 379)		::Array< ::Dynamic> _g1 = this->_stack;
HXDLIN( 379)		while((_g < _g1->length)){
HXDLIN( 379)			 ::flixel::addons::util::FlxFSM fsm = _g1->__get(_g).StaticCast<  ::flixel::addons::util::FlxFSM >();
HXDLIN( 379)			_g = (_g + 1);
HXLINE( 381)			if ((fsm->name == name)) {
HXLINE( 383)				this->remove(fsm);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFSMStack_obj,removeByName,(void))

void FlxFSMStack_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_f4a611baefd38e43_392_destroy)
HXLINE( 393)		{
HXLINE( 393)			int _g = 0;
HXDLIN( 393)			::Array< ::Dynamic> _g1 = this->_stack;
HXDLIN( 393)			while((_g < _g1->length)){
HXLINE( 393)				 ::flixel::addons::util::FlxFSM fsm = _g1->__get(_g).StaticCast<  ::flixel::addons::util::FlxFSM >();
HXDLIN( 393)				_g = (_g + 1);
HXLINE( 395)				::flixel::util::FlxDestroyUtil_obj::destroy(fsm);
            			}
            		}
HXLINE( 397)		this->lockRemaining();
HXLINE( 398)		::flixel::addons::util::_FlxFSM::FlxFSMStackSignal_obj::_lockSignal->remove(this->lockType_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFSMStack_obj,destroy,(void))

bool FlxFSMStack_obj::get_isEmpty(){
            	HX_STACKFRAME(&_hx_pos_f4a611baefd38e43_403_get_isEmpty)
HXDLIN( 403)		return (this->_stack->length == 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFSMStack_obj,get_isEmpty,return )


::hx::ObjectPtr< FlxFSMStack_obj > FlxFSMStack_obj::__new() {
	::hx::ObjectPtr< FlxFSMStack_obj > __this = new FlxFSMStack_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxFSMStack_obj > FlxFSMStack_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxFSMStack_obj *__this = (FlxFSMStack_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxFSMStack_obj), true, "flixel.addons.util.FlxFSMStack"));
	*(void **)__this = FlxFSMStack_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxFSMStack_obj::FlxFSMStack_obj()
{
}

void FlxFSMStack_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFSMStack);
	HX_MARK_MEMBER_NAME(_stack,"_stack");
	HX_MARK_MEMBER_NAME(_alteredStack,"_alteredStack");
	HX_MARK_MEMBER_NAME(_hasLocks,"_hasLocks");
	HX_MARK_MEMBER_NAME(_lockedNames,"_lockedNames");
	HX_MARK_MEMBER_NAME(_lockedTypes,"_lockedTypes");
	HX_MARK_MEMBER_NAME(_lockRemaining,"_lockRemaining");
	HX_MARK_END_CLASS();
}

void FlxFSMStack_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_stack,"_stack");
	HX_VISIT_MEMBER_NAME(_alteredStack,"_alteredStack");
	HX_VISIT_MEMBER_NAME(_hasLocks,"_hasLocks");
	HX_VISIT_MEMBER_NAME(_lockedNames,"_lockedNames");
	HX_VISIT_MEMBER_NAME(_lockedTypes,"_lockedTypes");
	HX_VISIT_MEMBER_NAME(_lockRemaining,"_lockRemaining");
}

::hx::Val FlxFSMStack_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { return ::hx::Val( pop_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { return ::hx::Val( lock_dyn() ); }
		if (HX_FIELD_EQ(inName,"push") ) { return ::hx::Val( push_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shift") ) { return ::hx::Val( shift_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_stack") ) { return ::hx::Val( _stack ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isEmpty() ); }
		if (HX_FIELD_EQ(inName,"unshift") ) { return ::hx::Val( unshift_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lockType") ) { return ::hx::Val( lockType_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_hasLocks") ) { return ::hx::Val( _hasLocks ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isEmpty") ) { return ::hx::Val( get_isEmpty_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_lockedNames") ) { return ::hx::Val( _lockedNames ); }
		if (HX_FIELD_EQ(inName,"_lockedTypes") ) { return ::hx::Val( _lockedTypes ); }
		if (HX_FIELD_EQ(inName,"removeByName") ) { return ::hx::Val( removeByName_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_alteredStack") ) { return ::hx::Val( _alteredStack ); }
		if (HX_FIELD_EQ(inName,"lockRemaining") ) { return ::hx::Val( lockRemaining_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_lockRemaining") ) { return ::hx::Val( _lockRemaining ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxFSMStack_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_stack") ) { _stack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_hasLocks") ) { _hasLocks=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_lockedNames") ) { _lockedNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lockedTypes") ) { _lockedTypes=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_alteredStack") ) { _alteredStack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_lockRemaining") ) { _lockRemaining=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFSMStack_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("isEmpty",43,de,5f,0c));
	outFields->push(HX_("_stack",89,ae,f2,7f));
	outFields->push(HX_("_alteredStack",32,b2,20,78));
	outFields->push(HX_("_hasLocks",cd,13,df,4c));
	outFields->push(HX_("_lockedNames",5f,24,f4,2c));
	outFields->push(HX_("_lockedTypes",10,05,3b,b1));
	outFields->push(HX_("_lockRemaining",cc,a5,3f,c0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxFSMStack_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxFSMStack_obj,_stack),HX_("_stack",89,ae,f2,7f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxFSMStack_obj,_alteredStack),HX_("_alteredStack",32,b2,20,78)},
	{::hx::fsBool,(int)offsetof(FlxFSMStack_obj,_hasLocks),HX_("_hasLocks",cd,13,df,4c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(FlxFSMStack_obj,_lockedNames),HX_("_lockedNames",5f,24,f4,2c)},
	{::hx::fsInt,(int)offsetof(FlxFSMStack_obj,_lockedTypes),HX_("_lockedTypes",10,05,3b,b1)},
	{::hx::fsBool,(int)offsetof(FlxFSMStack_obj,_lockRemaining),HX_("_lockRemaining",cc,a5,3f,c0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxFSMStack_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxFSMStack_obj_sMemberFields[] = {
	HX_("_stack",89,ae,f2,7f),
	HX_("_alteredStack",32,b2,20,78),
	HX_("_hasLocks",cd,13,df,4c),
	HX_("_lockedNames",5f,24,f4,2c),
	HX_("_lockedTypes",10,05,3b,b1),
	HX_("_lockRemaining",cc,a5,3f,c0),
	HX_("update",09,86,05,87),
	HX_("lock",eb,9b,b7,47),
	HX_("lockRemaining",8b,b5,ed,81),
	HX_("lockType",45,8c,2d,92),
	HX_("unshift",89,e3,b3,78),
	HX_("shift",82,ec,22,7c),
	HX_("push",da,11,61,4a),
	HX_("pop",91,5d,55,00),
	HX_("remove",44,9c,88,04),
	HX_("removeByName",26,c7,7b,7d),
	HX_("destroy",fa,2c,86,24),
	HX_("get_isEmpty",5a,3e,5a,92),
	::String(null()) };

::hx::Class FlxFSMStack_obj::__mClass;

void FlxFSMStack_obj::__register()
{
	FlxFSMStack_obj _hx_dummy;
	FlxFSMStack_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.util.FlxFSMStack",77,7c,ff,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxFSMStack_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxFSMStack_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxFSMStack_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxFSMStack_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace util
