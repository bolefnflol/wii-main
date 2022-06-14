#include <hxcpp.h>

#ifndef INCLUDED_ConfirmationLogging
#include <ConfirmationLogging.h>
#endif
#ifndef INCLUDED_CustomizeGameJolt
#include <CustomizeGameJolt.h>
#endif
#ifndef INCLUDED_GamejoltLogInState
#include <GamejoltLogInState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_cc8b88dadd160f95_697_new,"CustomizeGameJolt","new",0x35739cd4,"CustomizeGameJolt.new","Options.hx",697,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_cc8b88dadd160f95_703_press,"CustomizeGameJolt","press",0x5e8b24f7,"CustomizeGameJolt.press","Options.hx",703,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_cc8b88dadd160f95_714_updateDisplay,"CustomizeGameJolt","updateDisplay",0x9ad7f4ad,"CustomizeGameJolt.updateDisplay","Options.hx",714,0x9d9a0240)

void CustomizeGameJolt_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_cc8b88dadd160f95_697_new)
HXLINE( 698)		super::__construct();
HXLINE( 699)		this->description = desc;
            	}

Dynamic CustomizeGameJolt_obj::__CreateEmpty() { return new CustomizeGameJolt_obj; }

void *CustomizeGameJolt_obj::_hx_vtable = 0;

Dynamic CustomizeGameJolt_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CustomizeGameJolt_obj > _hx_result = new CustomizeGameJolt_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CustomizeGameJolt_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x432a9822;
	}
}

bool CustomizeGameJolt_obj::press(){
            	HX_GC_STACKFRAME(&_hx_pos_cc8b88dadd160f95_703_press)
HXLINE( 704)		::haxe::Log_obj::trace(HX_("switch",f4,49,79,c5),::hx::SourceInfo(HX_("source/Options.hx",34,ca,fe,29),704,HX_("CustomizeGameJolt",e2,e2,8f,f3),HX_("press",83,53,88,c8)));
HXLINE( 705)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("loggedInToGameJolt",21,ba,92,e7),::hx::paccDynamic)) )) {
HXLINE( 706)			 ::flixel::FlxState nextState =  ::ConfirmationLogging_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 706)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 706)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            		else {
HXLINE( 708)			 ::flixel::FlxState nextState =  ::GamejoltLogInState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 708)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 708)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 709)		return false;
            	}


::String CustomizeGameJolt_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_cc8b88dadd160f95_714_updateDisplay)
HXDLIN( 714)		return HX_("Gamejolt API Settings",8a,32,b7,e9);
            	}



::hx::ObjectPtr< CustomizeGameJolt_obj > CustomizeGameJolt_obj::__new(::String desc) {
	::hx::ObjectPtr< CustomizeGameJolt_obj > __this = new CustomizeGameJolt_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< CustomizeGameJolt_obj > CustomizeGameJolt_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	CustomizeGameJolt_obj *__this = (CustomizeGameJolt_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CustomizeGameJolt_obj), true, "CustomizeGameJolt"));
	*(void **)__this = CustomizeGameJolt_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

CustomizeGameJolt_obj::CustomizeGameJolt_obj()
{
}

::hx::Val CustomizeGameJolt_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CustomizeGameJolt_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CustomizeGameJolt_obj_sStaticStorageInfo = 0;
#endif

static ::String CustomizeGameJolt_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class CustomizeGameJolt_obj::__mClass;

void CustomizeGameJolt_obj::__register()
{
	CustomizeGameJolt_obj _hx_dummy;
	CustomizeGameJolt_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CustomizeGameJolt",e2,e2,8f,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CustomizeGameJolt_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CustomizeGameJolt_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CustomizeGameJolt_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CustomizeGameJolt_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

