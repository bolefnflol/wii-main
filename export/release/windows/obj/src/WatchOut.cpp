#include <hxcpp.h>

#ifndef INCLUDED_Caching
#include <Caching.h>
#endif
#ifndef INCLUDED_Dead
#include <Dead.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_WatchOut
#include <WatchOut.h>
#endif
#ifndef INCLUDED_WiiSaveDataChecker
#include <WiiSaveDataChecker.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_247249672fe9a2a0_20_new,"WatchOut","new",0xa404f611,"WatchOut.new","WatchOut.hx",20,0x814f367f)
HX_LOCAL_STACK_FRAME(_hx_pos_247249672fe9a2a0_27_create,"WatchOut","create",0x66e225eb,"WatchOut.create","WatchOut.hx",27,0x814f367f)
HX_LOCAL_STACK_FRAME(_hx_pos_247249672fe9a2a0_57_update,"WatchOut","update",0x71d844f8,"WatchOut.update","WatchOut.hx",57,0x814f367f)
HX_LOCAL_STACK_FRAME(_hx_pos_247249672fe9a2a0_66_update,"WatchOut","update",0x71d844f8,"WatchOut.update","WatchOut.hx",66,0x814f367f)
HX_LOCAL_STACK_FRAME(_hx_pos_247249672fe9a2a0_24_boot,"WatchOut","boot",0xd86b5961,"WatchOut.boot","WatchOut.hx",24,0x814f367f)

void WatchOut_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_247249672fe9a2a0_20_new)
HXDLIN(  20)		super::__construct(TransIn,TransOut);
            	}

Dynamic WatchOut_obj::__CreateEmpty() { return new WatchOut_obj; }

void *WatchOut_obj::_hx_vtable = 0;

Dynamic WatchOut_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WatchOut_obj > _hx_result = new WatchOut_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool WatchOut_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x34638c5f || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void WatchOut_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_247249672fe9a2a0_27_create)
HXLINE(  28)		if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("comeDead",c8,05,ef,0f),::hx::paccDynamic),true )) {
HXLINE(  30)			 ::flixel::FlxState nextState =  ::Dead_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  30)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  30)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE(  33)		this->bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(1280,780,null(),null(),null());
HXLINE(  34)		this->bg->set_alpha(( (Float)(0) ));
HXLINE(  35)		this->add(this->bg);
HXLINE(  37)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE(  38)		this->super::create();
HXLINE(  40)		this->txt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,((((HX_("Hello there :)",d9,1d,e8,36) + HX_("\nBefore playing, you must know:",84,5f,9b,34)) + HX_("\nThis mod contains flashing lights!",61,cb,49,55)) + HX_("\nTo turn this off, go to the settings.",86,c4,df,79)) + HX_("\nPress Escape to exit, or Enter if you want to continue",ba,ee,26,e1)),32,null());
HXLINE(  48)		this->txt->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,null(),HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  49)		this->txt->set_borderColor(-16777216);
HXLINE(  50)		this->txt->set_borderSize(( (Float)(3) ));
HXLINE(  51)		this->txt->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXLINE(  52)		{
HXLINE(  52)			 ::flixel::text::FlxText _this = this->txt;
HXDLIN(  52)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  52)			bool _hx_tmp;
HXDLIN(  52)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  52)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  52)					_hx_tmp = false;
            				}
            			}
HXDLIN(  52)			if (_hx_tmp) {
HXLINE(  52)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  52)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  52)			bool _hx_tmp1;
HXDLIN(  52)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  52)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  52)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  52)			if (_hx_tmp1) {
HXLINE(  52)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  52)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  53)		this->add(this->txt);
            	}


void WatchOut_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_247249672fe9a2a0_57_update)
HXLINE(  58)		::WiiSaveDataChecker_obj::checkSaveData();
HXLINE(  60)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  60)		if (_this->keyManager->checkStatusUnsafe(13,_this->status)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_247249672fe9a2a0_66_update)
HXLINE(  66)				 ::flixel::FlxState nextState =  ::Caching_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  66)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  66)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  62)			::flixel::effects::FlxFlicker_obj::flicker(this->txt,2,((Float)0.2),false,null(),null(),null());
HXLINE(  63)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  63)			_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.4),null(),null(),null(),null());
HXLINE(  64)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)1.5), ::Dynamic(new _hx_Closure_0()),null());
            		}
HXLINE(  71)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  71)		if (_this1->keyManager->checkStatusUnsafe(27,_this1->status)) {
HXLINE(  73)			::Sys_obj::exit(1);
            		}
HXLINE(  76)		this->super::update(elapsed);
            	}


bool WatchOut_obj::initialized;


::hx::ObjectPtr< WatchOut_obj > WatchOut_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< WatchOut_obj > __this = new WatchOut_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< WatchOut_obj > WatchOut_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	WatchOut_obj *__this = (WatchOut_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WatchOut_obj), true, "WatchOut"));
	*(void **)__this = WatchOut_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

WatchOut_obj::WatchOut_obj()
{
}

void WatchOut_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WatchOut);
	HX_MARK_MEMBER_NAME(txt,"txt");
	HX_MARK_MEMBER_NAME(bg,"bg");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WatchOut_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(txt,"txt");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val WatchOut_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"txt") ) { return ::hx::Val( txt ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool WatchOut_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
	}
	return false;
}

::hx::Val WatchOut_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"txt") ) { txt=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WatchOut_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void WatchOut_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("txt",70,6e,58,00));
	outFields->push(HX_("bg",c5,55,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WatchOut_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(WatchOut_obj,txt),HX_("txt",70,6e,58,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WatchOut_obj,bg),HX_("bg",c5,55,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo WatchOut_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &WatchOut_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String WatchOut_obj_sMemberFields[] = {
	HX_("txt",70,6e,58,00),
	HX_("bg",c5,55,00,00),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

static void WatchOut_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WatchOut_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WatchOut_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WatchOut_obj::initialized,"initialized");
};

#endif

::hx::Class WatchOut_obj::__mClass;

static ::String WatchOut_obj_sStaticFields[] = {
	HX_("initialized",14,f5,0f,37),
	::String(null())
};

void WatchOut_obj::__register()
{
	WatchOut_obj _hx_dummy;
	WatchOut_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("WatchOut",9f,99,d2,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WatchOut_obj::__GetStatic;
	__mClass->mSetStaticField = &WatchOut_obj::__SetStatic;
	__mClass->mMarkFunc = WatchOut_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WatchOut_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WatchOut_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WatchOut_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WatchOut_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WatchOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WatchOut_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WatchOut_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_247249672fe9a2a0_24_boot)
HXDLIN(  24)		initialized = false;
            	}
}

