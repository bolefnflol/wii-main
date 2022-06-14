#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PressA
#include <PressA.h>
#endif
#ifndef INCLUDED_WiiMenu
#include <WiiMenu.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
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
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1a3cf7a5eebbe7ac_16_new,"PressA","new",0xcca36b70,"PressA.new","PressA.hx",16,0x2918d200)
HX_LOCAL_STACK_FRAME(_hx_pos_1a3cf7a5eebbe7ac_25_create,"PressA","create",0x89c615ec,"PressA.create","PressA.hx",25,0x2918d200)
HX_LOCAL_STACK_FRAME(_hx_pos_1a3cf7a5eebbe7ac_49_update,"PressA","update",0x94bc34f9,"PressA.update","PressA.hx",49,0x2918d200)
HX_LOCAL_STACK_FRAME(_hx_pos_1a3cf7a5eebbe7ac_69_update,"PressA","update",0x94bc34f9,"PressA.update","PressA.hx",69,0x2918d200)
HX_LOCAL_STACK_FRAME(_hx_pos_1a3cf7a5eebbe7ac_60_update,"PressA","update",0x94bc34f9,"PressA.update","PressA.hx",60,0x2918d200)

void PressA_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_1a3cf7a5eebbe7ac_16_new)
HXLINE(  22)		this->aSine = ((Float)0);
HXLINE(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic PressA_obj::__CreateEmpty() { return new PressA_obj; }

void *PressA_obj::_hx_vtable = 0;

Dynamic PressA_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PressA_obj > _hx_result = new PressA_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PressA_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x449ff63e) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x449ff63e;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void PressA_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_1a3cf7a5eebbe7ac_25_create)
HXLINE(  28)		::DiscordClient_obj::changePresence(HX_("Pressing A",40,bb,f2,fe),null(),null(),null(),null());
HXLINE(  31)		{
HXLINE(  31)			 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  31)			_this->cleanup(_this->autoDestroy,true);
            		}
HXLINE(  33)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  33)		::String library = null();
HXDLIN(  33)		this->bg = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("startup/pressABG",f5,cc,4c,cb)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  34)		this->add(this->bg);
HXLINE(  36)		this->pressA =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  37)		 ::flixel::FlxSprite _hx_tmp1 = this->pressA;
HXDLIN(  37)		::String library1 = null();
HXDLIN(  37)		::String _hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("startup/pressA",30,67,00,3d)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN(  37)		_hx_tmp1->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp2,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("startup/pressA",30,67,00,3d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1)));
HXLINE(  38)		this->pressA->animation->addByPrefix(HX_("waiting",8d,e9,27,df),HX_("press a instance 1",02,23,af,7c),24,true,null(),null());
HXLINE(  39)		this->pressA->animation->play(HX_("waiting",8d,e9,27,df),null(),null(),null());
HXLINE(  40)		this->pressA->set_antialiasing(true);
HXLINE(  41)		this->add(this->pressA);
HXLINE(  43)		 ::flixel::_hx_system::FlxSound _hx_tmp3 =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXDLIN(  43)		this->pressAsound = _hx_tmp3->loadEmbedded(::Paths_obj::sound(HX_("a-button",9e,7f,43,d5),null()),null(),null(),null());
HXLINE(  45)		this->super::create();
            	}


void PressA_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_1a3cf7a5eebbe7ac_49_update)
HXDLIN(  49)		 ::PressA _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  50)		if (this->pressA->visible) {
HXLINE(  51)			 ::PressA _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  51)			_hx_tmp->aSine = (_hx_tmp->aSine + (( (Float)(180) ) * elapsed));
HXLINE(  52)			this->pressA->set_alpha((( (Float)(1) ) - ::Math_obj::sin(((::Math_obj::PI * this->aSine) / ( (Float)(180) )))));
            		}
HXLINE(  55)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  55)		if (_this->keyManager->checkStatusUnsafe(65,_this->status)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::PressA,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_1a3cf7a5eebbe7ac_69_update)
HXLINE(  69)					 ::flixel::FlxState nextState =  ::WiiMenu_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  69)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  69)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_GC_STACKFRAME(&_hx_pos_1a3cf7a5eebbe7ac_60_update)
HXLINE(  61)				 ::flixel::FlxSprite fh = _gthis->bg;
HXDLIN(  61)				fh->set_alpha((fh->alpha - ((Float)0.09)));
HXLINE(  62)				if ((_gthis->bg->alpha > 0)) {
HXLINE(  64)					tmr->reset(((Float)0.1));
            				}
HXLINE(  67)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_0()),null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  57)			this->remove(this->pressA,true);
HXLINE(  58)			this->pressAsound->play(null(),null(),null());
HXLINE(  59)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.1), ::Dynamic(new _hx_Closure_1(_gthis)),null());
            		}
            	}



::hx::ObjectPtr< PressA_obj > PressA_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< PressA_obj > __this = new PressA_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< PressA_obj > PressA_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	PressA_obj *__this = (PressA_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PressA_obj), true, "PressA"));
	*(void **)__this = PressA_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

PressA_obj::PressA_obj()
{
}

void PressA_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PressA);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(pressA,"pressA");
	HX_MARK_MEMBER_NAME(pressAsound,"pressAsound");
	HX_MARK_MEMBER_NAME(aSine,"aSine");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PressA_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(pressA,"pressA");
	HX_VISIT_MEMBER_NAME(pressAsound,"pressAsound");
	HX_VISIT_MEMBER_NAME(aSine,"aSine");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PressA_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"aSine") ) { return ::hx::Val( aSine ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pressA") ) { return ::hx::Val( pressA ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pressAsound") ) { return ::hx::Val( pressAsound ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PressA_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"aSine") ) { aSine=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pressA") ) { pressA=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pressAsound") ) { pressAsound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PressA_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("pressA",5e,bf,c0,ae));
	outFields->push(HX_("pressAsound",b1,58,83,19));
	outFields->push(HX_("aSine",4e,07,0b,11));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PressA_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PressA_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PressA_obj,pressA),HX_("pressA",5e,bf,c0,ae)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PressA_obj,pressAsound),HX_("pressAsound",b1,58,83,19)},
	{::hx::fsFloat,(int)offsetof(PressA_obj,aSine),HX_("aSine",4e,07,0b,11)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PressA_obj_sStaticStorageInfo = 0;
#endif

static ::String PressA_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("pressA",5e,bf,c0,ae),
	HX_("pressAsound",b1,58,83,19),
	HX_("aSine",4e,07,0b,11),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PressA_obj::__mClass;

void PressA_obj::__register()
{
	PressA_obj _hx_dummy;
	PressA_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PressA",7e,33,55,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PressA_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PressA_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PressA_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PressA_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

