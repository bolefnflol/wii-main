#include <hxcpp.h>

#ifndef INCLUDED_GamejoltLogInState
#include <GamejoltLogInState.h>
#endif
#ifndef INCLUDED_LogInToGamejoltQuestion
#include <LogInToGamejoltQuestion.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_WiiMenu
#include <WiiMenu.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0913ae92f0af4241_19_new,"LogInToGamejoltQuestion","new",0x22a36a9b,"LogInToGamejoltQuestion.new","LogInToGamejoltQuestion.hx",19,0x23be2135)
HX_LOCAL_STACK_FRAME(_hx_pos_0913ae92f0af4241_45_update,"LogInToGamejoltQuestion","update",0x71f1c2ae,"LogInToGamejoltQuestion.update","LogInToGamejoltQuestion.hx",45,0x23be2135)
HX_LOCAL_STACK_FRAME(_hx_pos_0913ae92f0af4241_58_update,"LogInToGamejoltQuestion","update",0x71f1c2ae,"LogInToGamejoltQuestion.update","LogInToGamejoltQuestion.hx",58,0x23be2135)
HX_LOCAL_STACK_FRAME(_hx_pos_0913ae92f0af4241_81_update,"LogInToGamejoltQuestion","update",0x71f1c2ae,"LogInToGamejoltQuestion.update","LogInToGamejoltQuestion.hx",81,0x23be2135)

void LogInToGamejoltQuestion_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_0913ae92f0af4241_19_new)
HXLINE(  20)		super::__construct();
HXLINE(  22)		this->bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(1280,720,-16777216,null(),null());
HXLINE(  23)		this->bg->set_alpha(( (Float)(0) ));
HXLINE(  24)		this->add(this->bg);
HXLINE(  26)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-4,-2,null());
HXDLIN(  26)		::String library = null();
HXDLIN(  26)		this->sign = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gamejolt/ifulogin",41,84,6b,4c)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  27)		this->sign->set_alpha(( (Float)(0) ));
HXLINE(  28)		this->add(this->sign);
HXLINE(  30)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,520,360,null());
HXDLIN(  30)		::String library1 = null();
HXDLIN(  30)		this->ye = _hx_tmp1->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gamejolt/ye",9c,01,fd,2c)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  31)		this->ye->set_alpha(( (Float)(0) ));
HXLINE(  32)		this->add(this->ye);
HXLINE(  34)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,510,480,null());
HXDLIN(  34)		::String library2 = null();
HXDLIN(  34)		this->noThx = _hx_tmp2->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gamejolt/no thx",f5,08,28,9a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2),null(),null(),null(),null(),null());
HXLINE(  35)		this->noThx->set_alpha(( (Float)(0) ));
HXLINE(  36)		this->add(this->noThx);
HXLINE(  38)		::flixel::tweens::FlxTween_obj::tween(this->bg, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.6))),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  39)		::flixel::tweens::FlxTween_obj::tween(this->sign, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  40)		::flixel::tweens::FlxTween_obj::tween(this->ye, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.5))),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  41)		::flixel::tweens::FlxTween_obj::tween(this->noThx, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.5))),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
            	}

Dynamic LogInToGamejoltQuestion_obj::__CreateEmpty() { return new LogInToGamejoltQuestion_obj; }

void *LogInToGamejoltQuestion_obj::_hx_vtable = 0;

Dynamic LogInToGamejoltQuestion_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LogInToGamejoltQuestion_obj > _hx_result = new LogInToGamejoltQuestion_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LogInToGamejoltQuestion_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x446b7185) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x446b7185;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void LogInToGamejoltQuestion_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_0913ae92f0af4241_45_update)
HXDLIN(  45)		 ::LogInToGamejoltQuestion _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  46)		if (::flixel::FlxG_obj::mouse->overlaps(this->ye,null())) {
HXLINE(  48)			this->ye->set_alpha(( (Float)(1) ));
HXLINE(  49)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_0913ae92f0af4241_58_update)
HXLINE(  58)					 ::flixel::FlxState nextState =  ::GamejoltLogInState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  58)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  58)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  51)				::flixel::tweens::FlxTween_obj::tween(this->bg, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  52)				::flixel::tweens::FlxTween_obj::tween(this->sign, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  53)				::flixel::tweens::FlxTween_obj::tween(this->ye, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  54)				::flixel::tweens::FlxTween_obj::tween(this->noThx, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  56)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.4), ::Dynamic(new _hx_Closure_0()),null());
            			}
HXLINE(  62)			::WiiMenu_obj::appear = false;
            		}
HXLINE(  64)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->ye,null()))) {
HXLINE(  66)			this->ye->set_alpha(((Float)0.5));
            		}
HXLINE(  69)		if (::flixel::FlxG_obj::mouse->overlaps(this->noThx,null())) {
HXLINE(  71)			this->noThx->set_alpha(( (Float)(1) ));
HXLINE(  72)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::LogInToGamejoltQuestion,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_0913ae92f0af4241_81_update)
HXLINE(  81)					_gthis->close();
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  74)				::flixel::tweens::FlxTween_obj::tween(this->bg, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  75)				::flixel::tweens::FlxTween_obj::tween(this->sign, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  76)				::flixel::tweens::FlxTween_obj::tween(this->ye, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  77)				::flixel::tweens::FlxTween_obj::tween(this->noThx, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  79)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.4), ::Dynamic(new _hx_Closure_1(_gthis)),null());
            			}
HXLINE(  85)			::WiiMenu_obj::appear = false;
            		}
HXLINE(  87)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->noThx,null()))) {
HXLINE(  89)			this->noThx->set_alpha(((Float)0.5));
            		}
HXLINE(  91)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< LogInToGamejoltQuestion_obj > LogInToGamejoltQuestion_obj::__new() {
	::hx::ObjectPtr< LogInToGamejoltQuestion_obj > __this = new LogInToGamejoltQuestion_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LogInToGamejoltQuestion_obj > LogInToGamejoltQuestion_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LogInToGamejoltQuestion_obj *__this = (LogInToGamejoltQuestion_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LogInToGamejoltQuestion_obj), true, "LogInToGamejoltQuestion"));
	*(void **)__this = LogInToGamejoltQuestion_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LogInToGamejoltQuestion_obj::LogInToGamejoltQuestion_obj()
{
}

void LogInToGamejoltQuestion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogInToGamejoltQuestion);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(sign,"sign");
	HX_MARK_MEMBER_NAME(ye,"ye");
	HX_MARK_MEMBER_NAME(noThx,"noThx");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LogInToGamejoltQuestion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(sign,"sign");
	HX_VISIT_MEMBER_NAME(ye,"ye");
	HX_VISIT_MEMBER_NAME(noThx,"noThx");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LogInToGamejoltQuestion_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		if (HX_FIELD_EQ(inName,"ye") ) { return ::hx::Val( ye ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sign") ) { return ::hx::Val( sign ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"noThx") ) { return ::hx::Val( noThx ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LogInToGamejoltQuestion_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ye") ) { ye=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sign") ) { sign=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"noThx") ) { noThx=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogInToGamejoltQuestion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("sign",3d,90,53,4c));
	outFields->push(HX_("ye",cc,69,00,00));
	outFields->push(HX_("noThx",c3,96,b2,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LogInToGamejoltQuestion_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LogInToGamejoltQuestion_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LogInToGamejoltQuestion_obj,sign),HX_("sign",3d,90,53,4c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LogInToGamejoltQuestion_obj,ye),HX_("ye",cc,69,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LogInToGamejoltQuestion_obj,noThx),HX_("noThx",c3,96,b2,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LogInToGamejoltQuestion_obj_sStaticStorageInfo = 0;
#endif

static ::String LogInToGamejoltQuestion_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("sign",3d,90,53,4c),
	HX_("ye",cc,69,00,00),
	HX_("noThx",c3,96,b2,9f),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class LogInToGamejoltQuestion_obj::__mClass;

void LogInToGamejoltQuestion_obj::__register()
{
	LogInToGamejoltQuestion_obj _hx_dummy;
	LogInToGamejoltQuestion_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LogInToGamejoltQuestion",29,81,25,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LogInToGamejoltQuestion_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LogInToGamejoltQuestion_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LogInToGamejoltQuestion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LogInToGamejoltQuestion_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

