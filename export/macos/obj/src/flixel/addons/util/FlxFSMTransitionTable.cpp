#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_util_FlxFSMTransitionTable
#include <flixel/addons/util/FlxFSMTransitionTable.h>
#endif
#ifndef INCLUDED_flixel_addons_util_Transition
#include <flixel/addons/util/Transition.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0b47c9d1a9ab64c7_438_new,"flixel.addons.util.FlxFSMTransitionTable","new",0xc95a191a,"flixel.addons.util.FlxFSMTransitionTable.new","flixel/addons/util/FlxFSM.hx",438,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_0b47c9d1a9ab64c7_456_poll,"flixel.addons.util.FlxFSMTransitionTable","poll",0x66d5d845,"flixel.addons.util.FlxFSMTransitionTable.poll","flixel/addons/util/FlxFSM.hx",456,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_0b47c9d1a9ab64c7_507_add,"flixel.addons.util.FlxFSMTransitionTable","add",0xc9503adb,"flixel.addons.util.FlxFSMTransitionTable.add","flixel/addons/util/FlxFSM.hx",507,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_0b47c9d1a9ab64c7_525_addGlobal,"flixel.addons.util.FlxFSMTransitionTable","addGlobal",0xf15af69e,"flixel.addons.util.FlxFSMTransitionTable.addGlobal","flixel/addons/util/FlxFSM.hx",525,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_0b47c9d1a9ab64c7_542_addTransition,"flixel.addons.util.FlxFSMTransitionTable","addTransition",0x7f430c50,"flixel.addons.util.FlxFSMTransitionTable.addTransition","flixel/addons/util/FlxFSM.hx",542,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_0b47c9d1a9ab64c7_553_start,"flixel.addons.util.FlxFSMTransitionTable","start",0x51c0df9c,"flixel.addons.util.FlxFSMTransitionTable.start","flixel/addons/util/FlxFSM.hx",553,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_0b47c9d1a9ab64c7_565_replace,"flixel.addons.util.FlxFSMTransitionTable","replace",0x617a75ee,"flixel.addons.util.FlxFSMTransitionTable.replace","flixel/addons/util/FlxFSM.hx",565,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_0b47c9d1a9ab64c7_598_remove,"flixel.addons.util.FlxFSMTransitionTable","remove",0x359103ca,"flixel.addons.util.FlxFSMTransitionTable.remove","flixel/addons/util/FlxFSM.hx",598,0xe233084c)
HX_LOCAL_STACK_FRAME(_hx_pos_0b47c9d1a9ab64c7_647_hasTransition,"flixel.addons.util.FlxFSMTransitionTable","hasTransition",0x2f507ac9,"flixel.addons.util.FlxFSMTransitionTable.hasTransition","flixel/addons/util/FlxFSM.hx",647,0xe233084c)
namespace flixel{
namespace addons{
namespace util{

void FlxFSMTransitionTable_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0b47c9d1a9ab64c7_438_new)
HXLINE( 442)		this->_garbagecollect = false;
HXLINE( 446)		this->_table = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic FlxFSMTransitionTable_obj::__CreateEmpty() { return new FlxFSMTransitionTable_obj; }

void *FlxFSMTransitionTable_obj::_hx_vtable = 0;

Dynamic FlxFSMTransitionTable_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxFSMTransitionTable_obj > _hx_result = new FlxFSMTransitionTable_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxFSMTransitionTable_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33d46d1a;
}

::hx::Class FlxFSMTransitionTable_obj::poll(::hx::Class currentState, ::Dynamic owner){
            	HX_STACKFRAME(&_hx_pos_0b47c9d1a9ab64c7_456_poll)
HXLINE( 457)		bool _hx_tmp;
HXDLIN( 457)		if (::hx::IsNull( currentState )) {
HXLINE( 457)			_hx_tmp = ::hx::IsNotNull( this->_startState );
            		}
            		else {
HXLINE( 457)			_hx_tmp = false;
            		}
HXDLIN( 457)		if (_hx_tmp) {
HXLINE( 459)			return this->_startState;
            		}
HXLINE( 462)		if (this->_garbagecollect) {
HXLINE( 464)			this->_garbagecollect = false;
HXLINE( 465)			::Array< ::Dynamic> removeThese = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 466)			{
HXLINE( 466)				int _g = 0;
HXDLIN( 466)				::Array< ::Dynamic> _g1 = this->_table;
HXDLIN( 466)				while((_g < _g1->length)){
HXLINE( 466)					 ::flixel::addons::util::Transition transition = _g1->__get(_g).StaticCast<  ::flixel::addons::util::Transition >();
HXDLIN( 466)					_g = (_g + 1);
HXLINE( 468)					if ((transition->remove == true)) {
HXLINE( 470)						if (::hx::IsPointerEq( transition->from,currentState )) {
HXLINE( 472)							this->_garbagecollect = true;
            						}
            						else {
HXLINE( 476)							removeThese->push(transition);
            						}
            					}
            				}
            			}
HXLINE( 480)			{
HXLINE( 480)				int _g2 = 0;
HXDLIN( 480)				while((_g2 < removeThese->length)){
HXLINE( 480)					 ::flixel::addons::util::Transition transition = removeThese->__get(_g2).StaticCast<  ::flixel::addons::util::Transition >();
HXDLIN( 480)					_g2 = (_g2 + 1);
HXLINE( 482)					this->_table->remove(transition);
            				}
            			}
            		}
HXLINE( 486)		{
HXLINE( 486)			int _g = 0;
HXDLIN( 486)			::Array< ::Dynamic> _g1 = this->_table;
HXDLIN( 486)			while((_g < _g1->length)){
HXLINE( 486)				 ::flixel::addons::util::Transition transition = _g1->__get(_g).StaticCast<  ::flixel::addons::util::Transition >();
HXDLIN( 486)				_g = (_g + 1);
HXLINE( 488)				bool _hx_tmp;
HXDLIN( 488)				if (::hx::IsPointerNotEq( transition->from,currentState )) {
HXLINE( 488)					_hx_tmp = ::hx::IsNull( transition->from );
            				}
            				else {
HXLINE( 488)					_hx_tmp = true;
            				}
HXDLIN( 488)				if (_hx_tmp) {
HXLINE( 490)					if ((transition->evaluate(owner) == true)) {
HXLINE( 492)						return transition->to;
            					}
            				}
            			}
            		}
HXLINE( 497)		return currentState;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFSMTransitionTable_obj,poll,return )

 ::flixel::addons::util::FlxFSMTransitionTable FlxFSMTransitionTable_obj::add(::hx::Class from,::hx::Class to, ::Dynamic condition){
            	HX_GC_STACKFRAME(&_hx_pos_0b47c9d1a9ab64c7_507_add)
HXLINE( 508)		if ((this->hasTransition(from,to,condition) == false)) {
HXLINE( 510)			 ::flixel::addons::util::Transition row =  ::flixel::addons::util::Transition_obj::__alloc( HX_CTX );
HXLINE( 511)			row->from = from;
HXLINE( 512)			row->to = to;
HXLINE( 513)			row->condition = condition;
HXLINE( 514)			this->_table->push(row);
            		}
HXLINE( 516)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxFSMTransitionTable_obj,add,return )

 ::flixel::addons::util::FlxFSMTransitionTable FlxFSMTransitionTable_obj::addGlobal(::hx::Class to, ::Dynamic condition){
            	HX_GC_STACKFRAME(&_hx_pos_0b47c9d1a9ab64c7_525_addGlobal)
HXLINE( 526)		if ((this->hasTransition(null(),to,condition) == false)) {
HXLINE( 528)			 ::flixel::addons::util::Transition row =  ::flixel::addons::util::Transition_obj::__alloc( HX_CTX );
HXLINE( 529)			row->to = to;
HXLINE( 530)			row->condition = condition;
HXLINE( 531)			this->_table->push(row);
            		}
HXLINE( 533)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFSMTransitionTable_obj,addGlobal,return )

void FlxFSMTransitionTable_obj::addTransition( ::flixel::addons::util::Transition transition){
            	HX_STACKFRAME(&_hx_pos_0b47c9d1a9ab64c7_542_addTransition)
HXDLIN( 542)		if ((this->_table->indexOf(transition,null()) == -1)) {
HXLINE( 544)			this->_table->push(transition);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFSMTransitionTable_obj,addTransition,(void))

 ::flixel::addons::util::FlxFSMTransitionTable FlxFSMTransitionTable_obj::start(::hx::Class with){
            	HX_STACKFRAME(&_hx_pos_0b47c9d1a9ab64c7_553_start)
HXLINE( 554)		this->_startState = with;
HXLINE( 555)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFSMTransitionTable_obj,start,return )

void FlxFSMTransitionTable_obj::replace(::hx::Class target,::hx::Class replacement){
            	HX_STACKFRAME(&_hx_pos_0b47c9d1a9ab64c7_565_replace)
HXDLIN( 565)		int _g = 0;
HXDLIN( 565)		::Array< ::Dynamic> _g1 = this->_table;
HXDLIN( 565)		while((_g < _g1->length)){
HXDLIN( 565)			 ::flixel::addons::util::Transition transition = _g1->__get(_g).StaticCast<  ::flixel::addons::util::Transition >();
HXDLIN( 565)			_g = (_g + 1);
HXLINE( 567)			if (::hx::IsPointerEq( transition->to,target )) {
HXLINE( 569)				transition->remove = true;
HXLINE( 570)				if (::hx::IsNull( transition->from )) {
HXLINE( 572)					this->addGlobal(replacement,transition->condition);
            				}
            				else {
HXLINE( 576)					this->add(transition->from,replacement,transition->condition);
            				}
HXLINE( 578)				this->_garbagecollect = true;
            			}
HXLINE( 580)			if (::hx::IsPointerEq( transition->from,target )) {
HXLINE( 582)				transition->remove = true;
HXLINE( 583)				this->add(replacement,transition->to,transition->condition);
HXLINE( 584)				this->_garbagecollect = true;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFSMTransitionTable_obj,replace,(void))

void FlxFSMTransitionTable_obj::remove(::hx::Class from,::hx::Class to, ::Dynamic condition){
            	HX_STACKFRAME(&_hx_pos_0b47c9d1a9ab64c7_598_remove)
HXDLIN( 598)		if (::hx::IsNull( to )) {
HXLINE( 600)			if (::hx::IsNull( condition )) {
HXLINE( 600)				::hx::Class f = from;
HXLINE( 601)				{
HXLINE( 601)					int _g = 0;
HXDLIN( 601)					::Array< ::Dynamic> _g1 = this->_table;
HXDLIN( 601)					while((_g < _g1->length)){
HXLINE( 601)						 ::flixel::addons::util::Transition transition = _g1->__get(_g).StaticCast<  ::flixel::addons::util::Transition >();
HXDLIN( 601)						_g = (_g + 1);
HXLINE( 603)						if (::hx::IsPointerEq( from,transition->from )) {
HXLINE( 605)							transition->remove = true;
HXLINE( 606)							this->_garbagecollect = true;
            						}
            					}
            				}
            			}
            			else {
HXLINE( 618)				if (::hx::IsNull( from )) {
HXLINE( 618)					::hx::Class t = to;
HXDLIN( 618)					 ::Dynamic c = condition;
HXLINE( 619)					{
HXLINE( 619)						int _g = 0;
HXDLIN( 619)						::Array< ::Dynamic> _g1 = this->_table;
HXDLIN( 619)						while((_g < _g1->length)){
HXLINE( 619)							 ::flixel::addons::util::Transition transition = _g1->__get(_g).StaticCast<  ::flixel::addons::util::Transition >();
HXDLIN( 619)							_g = (_g + 1);
HXLINE( 621)							bool _hx_tmp;
HXDLIN( 621)							if (::hx::IsPointerEq( to,transition->to )) {
HXLINE( 621)								_hx_tmp = ::hx::IsEq( condition,transition->condition );
            							}
            							else {
HXLINE( 621)								_hx_tmp = false;
            							}
HXDLIN( 621)							if (_hx_tmp) {
HXLINE( 623)								transition->remove = true;
HXLINE( 624)								this->_garbagecollect = true;
            							}
            						}
            					}
            				}
            				else {
HXLINE( 627)					::hx::Class t = to;
HXDLIN( 627)					 ::Dynamic c = condition;
HXDLIN( 627)					::hx::Class f = from;
HXLINE( 628)					{
HXLINE( 628)						int _g = 0;
HXDLIN( 628)						::Array< ::Dynamic> _g1 = this->_table;
HXDLIN( 628)						while((_g < _g1->length)){
HXLINE( 628)							 ::flixel::addons::util::Transition transition = _g1->__get(_g).StaticCast<  ::flixel::addons::util::Transition >();
HXDLIN( 628)							_g = (_g + 1);
HXLINE( 630)							bool _hx_tmp;
HXDLIN( 630)							bool _hx_tmp1;
HXDLIN( 630)							if (::hx::IsPointerEq( from,transition->from )) {
HXLINE( 630)								_hx_tmp1 = ::hx::IsPointerEq( to,transition->to );
            							}
            							else {
HXLINE( 630)								_hx_tmp1 = false;
            							}
HXDLIN( 630)							if (_hx_tmp1) {
HXLINE( 630)								_hx_tmp = ::hx::IsEq( condition,transition->condition );
            							}
            							else {
HXLINE( 630)								_hx_tmp = false;
            							}
HXDLIN( 630)							if (_hx_tmp) {
HXLINE( 632)								transition->remove = true;
HXLINE( 633)								this->_garbagecollect = true;
            							}
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 609)			if (::hx::IsNull( condition )) {
HXLINE( 609)				::hx::Class t = to;
HXDLIN( 609)				::hx::Class f = from;
HXLINE( 610)				{
HXLINE( 610)					int _g = 0;
HXDLIN( 610)					::Array< ::Dynamic> _g1 = this->_table;
HXDLIN( 610)					while((_g < _g1->length)){
HXLINE( 610)						 ::flixel::addons::util::Transition transition = _g1->__get(_g).StaticCast<  ::flixel::addons::util::Transition >();
HXDLIN( 610)						_g = (_g + 1);
HXLINE( 612)						bool _hx_tmp;
HXDLIN( 612)						if (::hx::IsPointerEq( from,transition->from )) {
HXLINE( 612)							_hx_tmp = ::hx::IsPointerEq( to,transition->to );
            						}
            						else {
HXLINE( 612)							_hx_tmp = false;
            						}
HXDLIN( 612)						if (_hx_tmp) {
HXLINE( 614)							transition->remove = true;
HXLINE( 615)							this->_garbagecollect = true;
            						}
            					}
            				}
            			}
            			else {
HXLINE( 618)				if (::hx::IsNull( from )) {
HXLINE( 618)					::hx::Class t = to;
HXDLIN( 618)					 ::Dynamic c = condition;
HXLINE( 619)					{
HXLINE( 619)						int _g = 0;
HXDLIN( 619)						::Array< ::Dynamic> _g1 = this->_table;
HXDLIN( 619)						while((_g < _g1->length)){
HXLINE( 619)							 ::flixel::addons::util::Transition transition = _g1->__get(_g).StaticCast<  ::flixel::addons::util::Transition >();
HXDLIN( 619)							_g = (_g + 1);
HXLINE( 621)							bool _hx_tmp;
HXDLIN( 621)							if (::hx::IsPointerEq( to,transition->to )) {
HXLINE( 621)								_hx_tmp = ::hx::IsEq( condition,transition->condition );
            							}
            							else {
HXLINE( 621)								_hx_tmp = false;
            							}
HXDLIN( 621)							if (_hx_tmp) {
HXLINE( 623)								transition->remove = true;
HXLINE( 624)								this->_garbagecollect = true;
            							}
            						}
            					}
            				}
            				else {
HXLINE( 627)					::hx::Class t = to;
HXDLIN( 627)					 ::Dynamic c = condition;
HXDLIN( 627)					::hx::Class f = from;
HXLINE( 628)					{
HXLINE( 628)						int _g = 0;
HXDLIN( 628)						::Array< ::Dynamic> _g1 = this->_table;
HXDLIN( 628)						while((_g < _g1->length)){
HXLINE( 628)							 ::flixel::addons::util::Transition transition = _g1->__get(_g).StaticCast<  ::flixel::addons::util::Transition >();
HXDLIN( 628)							_g = (_g + 1);
HXLINE( 630)							bool _hx_tmp;
HXDLIN( 630)							bool _hx_tmp1;
HXDLIN( 630)							if (::hx::IsPointerEq( from,transition->from )) {
HXLINE( 630)								_hx_tmp1 = ::hx::IsPointerEq( to,transition->to );
            							}
            							else {
HXLINE( 630)								_hx_tmp1 = false;
            							}
HXDLIN( 630)							if (_hx_tmp1) {
HXLINE( 630)								_hx_tmp = ::hx::IsEq( condition,transition->condition );
            							}
            							else {
HXLINE( 630)								_hx_tmp = false;
            							}
HXDLIN( 630)							if (_hx_tmp) {
HXLINE( 632)								transition->remove = true;
HXLINE( 633)								this->_garbagecollect = true;
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxFSMTransitionTable_obj,remove,(void))

bool FlxFSMTransitionTable_obj::hasTransition(::hx::Class from,::hx::Class to, ::Dynamic condition){
            	HX_STACKFRAME(&_hx_pos_0b47c9d1a9ab64c7_647_hasTransition)
HXLINE( 648)		if (::hx::IsNull( to )) {
HXLINE( 650)			if (::hx::IsNull( condition )) {
HXLINE( 650)				::hx::Class f = from;
HXLINE( 651)				{
HXLINE( 651)					int _g = 0;
HXDLIN( 651)					::Array< ::Dynamic> _g1 = this->_table;
HXDLIN( 651)					while((_g < _g1->length)){
HXLINE( 651)						 ::flixel::addons::util::Transition transition = _g1->__get(_g).StaticCast<  ::flixel::addons::util::Transition >();
HXDLIN( 651)						_g = (_g + 1);
HXLINE( 653)						bool _hx_tmp;
HXDLIN( 653)						if (::hx::IsPointerEq( from,transition->from )) {
HXLINE( 653)							_hx_tmp = (transition->remove == false);
            						}
            						else {
HXLINE( 653)							_hx_tmp = false;
            						}
HXDLIN( 653)						if (_hx_tmp) {
HXLINE( 655)							return true;
            						}
            					}
            				}
            			}
            			else {
HXLINE( 666)				if (::hx::IsNull( from )) {
HXLINE( 666)					::hx::Class t = to;
HXDLIN( 666)					 ::Dynamic c = condition;
HXLINE( 667)					{
HXLINE( 667)						int _g = 0;
HXDLIN( 667)						::Array< ::Dynamic> _g1 = this->_table;
HXDLIN( 667)						while((_g < _g1->length)){
HXLINE( 667)							 ::flixel::addons::util::Transition transition = _g1->__get(_g).StaticCast<  ::flixel::addons::util::Transition >();
HXDLIN( 667)							_g = (_g + 1);
HXLINE( 669)							bool _hx_tmp;
HXDLIN( 669)							bool _hx_tmp1;
HXDLIN( 669)							if (::hx::IsPointerEq( to,transition->to )) {
HXLINE( 669)								_hx_tmp1 = ::hx::IsEq( condition,transition->condition );
            							}
            							else {
HXLINE( 669)								_hx_tmp1 = false;
            							}
HXDLIN( 669)							if (_hx_tmp1) {
HXLINE( 669)								_hx_tmp = (transition->remove == false);
            							}
            							else {
HXLINE( 669)								_hx_tmp = false;
            							}
HXDLIN( 669)							if (_hx_tmp) {
HXLINE( 671)								return true;
            							}
            						}
            					}
            				}
            				else {
HXLINE( 674)					::hx::Class t = to;
HXDLIN( 674)					 ::Dynamic c = condition;
HXDLIN( 674)					::hx::Class f = from;
HXLINE( 675)					{
HXLINE( 675)						int _g = 0;
HXDLIN( 675)						::Array< ::Dynamic> _g1 = this->_table;
HXDLIN( 675)						while((_g < _g1->length)){
HXLINE( 675)							 ::flixel::addons::util::Transition transition = _g1->__get(_g).StaticCast<  ::flixel::addons::util::Transition >();
HXDLIN( 675)							_g = (_g + 1);
HXLINE( 677)							bool _hx_tmp;
HXDLIN( 677)							bool _hx_tmp1;
HXDLIN( 677)							bool _hx_tmp2;
HXDLIN( 677)							if (::hx::IsPointerEq( from,transition->from )) {
HXLINE( 677)								_hx_tmp2 = ::hx::IsPointerEq( to,transition->to );
            							}
            							else {
HXLINE( 677)								_hx_tmp2 = false;
            							}
HXDLIN( 677)							if (_hx_tmp2) {
HXLINE( 677)								_hx_tmp1 = ::hx::IsEq( condition,transition->condition );
            							}
            							else {
HXLINE( 677)								_hx_tmp1 = false;
            							}
HXDLIN( 677)							if (_hx_tmp1) {
HXLINE( 677)								_hx_tmp = (transition->remove == false);
            							}
            							else {
HXLINE( 677)								_hx_tmp = false;
            							}
HXDLIN( 677)							if (_hx_tmp) {
HXLINE( 679)								return true;
            							}
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 658)			if (::hx::IsNull( condition )) {
HXLINE( 658)				::hx::Class t = to;
HXDLIN( 658)				::hx::Class f = from;
HXLINE( 659)				{
HXLINE( 659)					int _g = 0;
HXDLIN( 659)					::Array< ::Dynamic> _g1 = this->_table;
HXDLIN( 659)					while((_g < _g1->length)){
HXLINE( 659)						 ::flixel::addons::util::Transition transition = _g1->__get(_g).StaticCast<  ::flixel::addons::util::Transition >();
HXDLIN( 659)						_g = (_g + 1);
HXLINE( 661)						bool _hx_tmp;
HXDLIN( 661)						bool _hx_tmp1;
HXDLIN( 661)						if (::hx::IsPointerEq( from,transition->from )) {
HXLINE( 661)							_hx_tmp1 = ::hx::IsPointerEq( to,transition->to );
            						}
            						else {
HXLINE( 661)							_hx_tmp1 = false;
            						}
HXDLIN( 661)						if (_hx_tmp1) {
HXLINE( 661)							_hx_tmp = (transition->remove == false);
            						}
            						else {
HXLINE( 661)							_hx_tmp = false;
            						}
HXDLIN( 661)						if (_hx_tmp) {
HXLINE( 663)							return true;
            						}
            					}
            				}
            			}
            			else {
HXLINE( 666)				if (::hx::IsNull( from )) {
HXLINE( 666)					::hx::Class t = to;
HXDLIN( 666)					 ::Dynamic c = condition;
HXLINE( 667)					{
HXLINE( 667)						int _g = 0;
HXDLIN( 667)						::Array< ::Dynamic> _g1 = this->_table;
HXDLIN( 667)						while((_g < _g1->length)){
HXLINE( 667)							 ::flixel::addons::util::Transition transition = _g1->__get(_g).StaticCast<  ::flixel::addons::util::Transition >();
HXDLIN( 667)							_g = (_g + 1);
HXLINE( 669)							bool _hx_tmp;
HXDLIN( 669)							bool _hx_tmp1;
HXDLIN( 669)							if (::hx::IsPointerEq( to,transition->to )) {
HXLINE( 669)								_hx_tmp1 = ::hx::IsEq( condition,transition->condition );
            							}
            							else {
HXLINE( 669)								_hx_tmp1 = false;
            							}
HXDLIN( 669)							if (_hx_tmp1) {
HXLINE( 669)								_hx_tmp = (transition->remove == false);
            							}
            							else {
HXLINE( 669)								_hx_tmp = false;
            							}
HXDLIN( 669)							if (_hx_tmp) {
HXLINE( 671)								return true;
            							}
            						}
            					}
            				}
            				else {
HXLINE( 674)					::hx::Class t = to;
HXDLIN( 674)					 ::Dynamic c = condition;
HXDLIN( 674)					::hx::Class f = from;
HXLINE( 675)					{
HXLINE( 675)						int _g = 0;
HXDLIN( 675)						::Array< ::Dynamic> _g1 = this->_table;
HXDLIN( 675)						while((_g < _g1->length)){
HXLINE( 675)							 ::flixel::addons::util::Transition transition = _g1->__get(_g).StaticCast<  ::flixel::addons::util::Transition >();
HXDLIN( 675)							_g = (_g + 1);
HXLINE( 677)							bool _hx_tmp;
HXDLIN( 677)							bool _hx_tmp1;
HXDLIN( 677)							bool _hx_tmp2;
HXDLIN( 677)							if (::hx::IsPointerEq( from,transition->from )) {
HXLINE( 677)								_hx_tmp2 = ::hx::IsPointerEq( to,transition->to );
            							}
            							else {
HXLINE( 677)								_hx_tmp2 = false;
            							}
HXDLIN( 677)							if (_hx_tmp2) {
HXLINE( 677)								_hx_tmp1 = ::hx::IsEq( condition,transition->condition );
            							}
            							else {
HXLINE( 677)								_hx_tmp1 = false;
            							}
HXDLIN( 677)							if (_hx_tmp1) {
HXLINE( 677)								_hx_tmp = (transition->remove == false);
            							}
            							else {
HXLINE( 677)								_hx_tmp = false;
            							}
HXDLIN( 677)							if (_hx_tmp) {
HXLINE( 679)								return true;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 683)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxFSMTransitionTable_obj,hasTransition,return )


::hx::ObjectPtr< FlxFSMTransitionTable_obj > FlxFSMTransitionTable_obj::__new() {
	::hx::ObjectPtr< FlxFSMTransitionTable_obj > __this = new FlxFSMTransitionTable_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxFSMTransitionTable_obj > FlxFSMTransitionTable_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxFSMTransitionTable_obj *__this = (FlxFSMTransitionTable_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxFSMTransitionTable_obj), true, "flixel.addons.util.FlxFSMTransitionTable"));
	*(void **)__this = FlxFSMTransitionTable_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxFSMTransitionTable_obj::FlxFSMTransitionTable_obj()
{
}

void FlxFSMTransitionTable_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFSMTransitionTable);
	HX_MARK_MEMBER_NAME(_table,"_table");
	HX_MARK_MEMBER_NAME(_startState,"_startState");
	HX_MARK_MEMBER_NAME(_garbagecollect,"_garbagecollect");
	HX_MARK_END_CLASS();
}

void FlxFSMTransitionTable_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_table,"_table");
	HX_VISIT_MEMBER_NAME(_startState,"_startState");
	HX_VISIT_MEMBER_NAME(_garbagecollect,"_garbagecollect");
}

::hx::Val FlxFSMTransitionTable_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"poll") ) { return ::hx::Val( poll_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_table") ) { return ::hx::Val( _table ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"replace") ) { return ::hx::Val( replace_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addGlobal") ) { return ::hx::Val( addGlobal_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_startState") ) { return ::hx::Val( _startState ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addTransition") ) { return ::hx::Val( addTransition_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasTransition") ) { return ::hx::Val( hasTransition_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_garbagecollect") ) { return ::hx::Val( _garbagecollect ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxFSMTransitionTable_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_table") ) { _table=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_startState") ) { _startState=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_garbagecollect") ) { _garbagecollect=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFSMTransitionTable_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_table",4f,ff,ca,06));
	outFields->push(HX_("_startState",6e,1b,ac,72));
	outFields->push(HX_("_garbagecollect",34,98,10,e1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxFSMTransitionTable_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxFSMTransitionTable_obj,_table),HX_("_table",4f,ff,ca,06)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(FlxFSMTransitionTable_obj,_startState),HX_("_startState",6e,1b,ac,72)},
	{::hx::fsBool,(int)offsetof(FlxFSMTransitionTable_obj,_garbagecollect),HX_("_garbagecollect",34,98,10,e1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxFSMTransitionTable_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxFSMTransitionTable_obj_sMemberFields[] = {
	HX_("_table",4f,ff,ca,06),
	HX_("_startState",6e,1b,ac,72),
	HX_("_garbagecollect",34,98,10,e1),
	HX_("poll",3f,7e,5c,4a),
	HX_("add",21,f2,49,00),
	HX_("addGlobal",64,66,d6,5f),
	HX_("addTransition",16,d7,f8,c2),
	HX_("start",62,74,0b,84),
	HX_("replace",34,48,28,ab),
	HX_("remove",44,9c,88,04),
	HX_("hasTransition",8f,45,06,73),
	::String(null()) };

::hx::Class FlxFSMTransitionTable_obj::__mClass;

void FlxFSMTransitionTable_obj::__register()
{
	FlxFSMTransitionTable_obj _hx_dummy;
	FlxFSMTransitionTable_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.util.FlxFSMTransitionTable",28,44,a5,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxFSMTransitionTable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxFSMTransitionTable_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxFSMTransitionTable_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxFSMTransitionTable_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace util
