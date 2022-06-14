#include <hxcpp.h>

#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_LimitedChars
#include <LimitedChars.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_SelectTypeOfChar
#include <SelectTypeOfChar.h>
#endif
#ifndef INCLUDED_WiiShopChannel
#include <WiiShopChannel.h>
#endif
#ifndef INCLUDED_WiiShopCharacters
#include <WiiShopCharacters.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3e9427fde359fd5a_16_new,"SelectTypeOfChar","new",0x6642ee95,"SelectTypeOfChar.new","SelectTypeOfChar.hx",16,0x41e4ba7b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e9427fde359fd5a_24_create,"SelectTypeOfChar","create",0x2cef57e7,"SelectTypeOfChar.create","SelectTypeOfChar.hx",24,0x41e4ba7b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e9427fde359fd5a_45_update,"SelectTypeOfChar","update",0x37e576f4,"SelectTypeOfChar.update","SelectTypeOfChar.hx",45,0x41e4ba7b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e9427fde359fd5a_56_update,"SelectTypeOfChar","update",0x37e576f4,"SelectTypeOfChar.update","SelectTypeOfChar.hx",56,0x41e4ba7b)
HX_LOCAL_STACK_FRAME(_hx_pos_3e9427fde359fd5a_76_update,"SelectTypeOfChar","update",0x37e576f4,"SelectTypeOfChar.update","SelectTypeOfChar.hx",76,0x41e4ba7b)

void SelectTypeOfChar_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_3e9427fde359fd5a_16_new)
HXDLIN(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic SelectTypeOfChar_obj::__CreateEmpty() { return new SelectTypeOfChar_obj; }

void *SelectTypeOfChar_obj::_hx_vtable = 0;

Dynamic SelectTypeOfChar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectTypeOfChar_obj > _hx_result = new SelectTypeOfChar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SelectTypeOfChar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x61e2b2e3) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x61e2b2e3;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void SelectTypeOfChar_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_3e9427fde359fd5a_24_create)
HXLINE(  27)		::DiscordClient_obj::changePresence(HX_("Type of Character to unlock?",f0,fa,9c,ec),null(),null(),null(),null());
HXLINE(  30)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-15,0,null());
HXDLIN(  30)		::String library = null();
HXDLIN(  30)		this->bg = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/charselectionbg",1f,a0,01,1e)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  31)		this->add(this->bg);
HXLINE(  33)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,93,218,null());
HXDLIN(  33)		::String library1 = null();
HXDLIN(  33)		this->normal = _hx_tmp1->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/normalchar",d9,00,3e,3d)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  34)		this->normal->set_alpha(((Float)0.5));
HXLINE(  35)		this->add(this->normal);
HXLINE(  37)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,734,221,null());
HXDLIN(  37)		::String library2 = null();
HXDLIN(  37)		this->limited = _hx_tmp2->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/limited",7e,da,0a,b6)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2),null(),null(),null(),null(),null());
HXLINE(  38)		this->limited->set_alpha(((Float)0.5));
HXLINE(  39)		this->add(this->limited);
HXLINE(  41)		this->super::create();
            	}


void SelectTypeOfChar_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_3e9427fde359fd5a_45_update)
HXLINE(  46)		if (::flixel::FlxG_obj::mouse->overlaps(this->normal,null())) {
HXLINE(  48)			this->normal->set_alpha(( (Float)(1) ));
HXLINE(  49)			::flixel::tweens::FlxTween_obj::tween(this->normal->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("x",78,00,00,00),((Float)1.1))
            				->setFixed(1,HX_("y",79,00,00,00),((Float)1.1))),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            				->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
HXLINE(  50)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_3e9427fde359fd5a_56_update)
HXLINE(  56)					 ::flixel::FlxState nextState =  ::WiiShopCharacters_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  56)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  56)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  52)				this->remove(this->limited,null());
HXLINE(  53)				::WiiShopChannel_obj::pressSound->play(null(),null(),null());
HXLINE(  54)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0()),null());
            			}
            		}
            		else {
HXLINE(  60)			if (!(::flixel::FlxG_obj::mouse->overlaps(this->normal,null()))) {
HXLINE(  62)				this->normal->set_alpha(((Float)0.5));
HXLINE(  63)				::flixel::tweens::FlxTween_obj::tween(this->normal->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("x",78,00,00,00),1)
            					->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            					->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
            			}
            		}
HXLINE(  66)		if (::flixel::FlxG_obj::mouse->overlaps(this->limited,null())) {
HXLINE(  68)			this->limited->set_alpha(( (Float)(1) ));
HXLINE(  69)			::flixel::tweens::FlxTween_obj::tween(this->limited->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("x",78,00,00,00),((Float)1.1))
            				->setFixed(1,HX_("y",79,00,00,00),((Float)1.1))),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            				->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
HXLINE(  70)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_3e9427fde359fd5a_76_update)
HXLINE(  76)					 ::flixel::FlxState nextState =  ::LimitedChars_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  76)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  76)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  72)				this->remove(this->normal,null());
HXLINE(  73)				::WiiShopChannel_obj::pressSound->play(null(),null(),null());
HXLINE(  74)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_1()),null());
            			}
            		}
            		else {
HXLINE(  80)			if (!(::flixel::FlxG_obj::mouse->overlaps(this->limited,null()))) {
HXLINE(  82)				this->limited->set_alpha(((Float)0.5));
HXLINE(  83)				::flixel::tweens::FlxTween_obj::tween(this->limited->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("x",78,00,00,00),1)
            					->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            					->setFixed(1,HX_("type",ba,f2,08,4d),::flixel::tweens::FlxTween_obj::ONESHOT)));
            			}
            		}
HXLINE(  86)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  86)		if (_this->keyManager->checkStatusUnsafe(27,_this->status)) {
HXLINE(  88)			 ::flixel::FlxState nextState =  ::WiiShopChannel_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  88)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  88)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            	}



::hx::ObjectPtr< SelectTypeOfChar_obj > SelectTypeOfChar_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< SelectTypeOfChar_obj > __this = new SelectTypeOfChar_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< SelectTypeOfChar_obj > SelectTypeOfChar_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	SelectTypeOfChar_obj *__this = (SelectTypeOfChar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectTypeOfChar_obj), true, "SelectTypeOfChar"));
	*(void **)__this = SelectTypeOfChar_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

SelectTypeOfChar_obj::SelectTypeOfChar_obj()
{
}

void SelectTypeOfChar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SelectTypeOfChar);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(normal,"normal");
	HX_MARK_MEMBER_NAME(limited,"limited");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SelectTypeOfChar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(normal,"normal");
	HX_VISIT_MEMBER_NAME(limited,"limited");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SelectTypeOfChar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { return ::hx::Val( normal ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"limited") ) { return ::hx::Val( limited ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SelectTypeOfChar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { normal=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"limited") ) { limited=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SelectTypeOfChar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("normal",27,72,69,30));
	outFields->push(HX_("limited",5a,fc,f3,8e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SelectTypeOfChar_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectTypeOfChar_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectTypeOfChar_obj,normal),HX_("normal",27,72,69,30)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(SelectTypeOfChar_obj,limited),HX_("limited",5a,fc,f3,8e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SelectTypeOfChar_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectTypeOfChar_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("normal",27,72,69,30),
	HX_("limited",5a,fc,f3,8e),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class SelectTypeOfChar_obj::__mClass;

void SelectTypeOfChar_obj::__register()
{
	SelectTypeOfChar_obj _hx_dummy;
	SelectTypeOfChar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("SelectTypeOfChar",23,00,01,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectTypeOfChar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectTypeOfChar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectTypeOfChar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectTypeOfChar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

