#include <hxcpp.h>

#ifndef INCLUDED_BfBuyingPage
#include <BfBuyingPage.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PicoPage
#include <PicoPage.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_SelectTypeOfChar
#include <SelectTypeOfChar.h>
#endif
#ifndef INCLUDED_SpookyPage
#include <SpookyPage.h>
#endif
#ifndef INCLUDED_WiiShopChannel
#include <WiiShopChannel.h>
#endif
#ifndef INCLUDED_WiiShopCharacters
#include <WiiShopCharacters.h>
#endif
#ifndef INCLUDED_WiiShopCharacters2
#include <WiiShopCharacters2.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4cc62a32fac3802b_16_new,"WiiShopCharacters","new",0xeb5a5009,"WiiShopCharacters.new","WiiShopCharacters.hx",16,0x31454387)
HX_LOCAL_STACK_FRAME(_hx_pos_4cc62a32fac3802b_28_create,"WiiShopCharacters","create",0x1a9756f3,"WiiShopCharacters.create","WiiShopCharacters.hx",28,0x31454387)
HX_LOCAL_STACK_FRAME(_hx_pos_4cc62a32fac3802b_52_update,"WiiShopCharacters","update",0x258d7600,"WiiShopCharacters.update","WiiShopCharacters.hx",52,0x31454387)

void WiiShopCharacters_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_4cc62a32fac3802b_16_new)
HXDLIN(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic WiiShopCharacters_obj::__CreateEmpty() { return new WiiShopCharacters_obj; }

void *WiiShopCharacters_obj::_hx_vtable = 0;

Dynamic WiiShopCharacters_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WiiShopCharacters_obj > _hx_result = new WiiShopCharacters_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool WiiShopCharacters_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x42a04cd7) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x42a04cd7;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void WiiShopCharacters_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_4cc62a32fac3802b_28_create)
HXLINE(  29)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  29)		::String library = null();
HXDLIN(  29)		this->bg = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/bg",6e,fe,d0,6b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  30)		this->add(this->bg);
HXLINE(  32)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,240,150,null());
HXDLIN(  32)		::String library1 = null();
HXDLIN(  32)		this->bf = _hx_tmp1->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buy/bf_mariohat",20,6f,f0,6a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  33)		this->bf->set_alpha(((Float)0.5));
HXLINE(  34)		this->add(this->bf);
HXLINE(  36)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,240,350,null());
HXDLIN(  36)		::String library2 = null();
HXDLIN(  36)		this->pico = _hx_tmp2->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buy/pico_luigihat",41,7c,bc,76)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2),null(),null(),null(),null(),null());
HXLINE(  37)		this->pico->set_alpha(((Float)0.5));
HXLINE(  38)		this->add(this->pico);
HXLINE(  40)		 ::flixel::FlxSprite _hx_tmp3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,240,525,null());
HXDLIN(  40)		::String library3 = null();
HXDLIN(  40)		this->spooky = _hx_tmp3->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buy/spooky_ww",e2,93,8c,a2)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3),null(),null(),null(),null(),null());
HXLINE(  41)		this->spooky->set_alpha(((Float)0.5));
HXLINE(  42)		this->add(this->spooky);
HXLINE(  44)		 ::flixel::FlxSprite _hx_tmp4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,1170,330,null());
HXDLIN(  44)		::String library4 = null();
HXDLIN(  44)		this->arrowRight = _hx_tmp4->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/arrowRight",fc,e2,1d,c7)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library4),null(),null(),null(),null(),null());
HXLINE(  45)		this->arrowRight->set_alpha(((Float)0.5));
HXLINE(  46)		this->add(this->arrowRight);
HXLINE(  48)		this->super::create();
            	}


void WiiShopCharacters_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_4cc62a32fac3802b_52_update)
HXLINE(  53)		if (::flixel::FlxG_obj::mouse->overlaps(this->bf,null())) {
HXLINE(  55)			this->bf->set_alpha(( (Float)(1) ));
HXLINE(  56)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE(  58)				::WiiShopChannel_obj::pressSound->play(null(),null(),null());
HXLINE(  59)				{
HXLINE(  59)					 ::flixel::FlxState nextState =  ::BfBuyingPage_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  59)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  59)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            		}
HXLINE(  62)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->bf,null()))) {
HXLINE(  64)			this->bf->set_alpha(((Float)0.5));
            		}
HXLINE(  67)		if (::flixel::FlxG_obj::mouse->overlaps(this->pico,null())) {
HXLINE(  69)			this->pico->set_alpha(( (Float)(1) ));
HXLINE(  70)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE(  72)				::WiiShopChannel_obj::pressSound->play(null(),null(),null());
HXLINE(  73)				{
HXLINE(  73)					 ::flixel::FlxState nextState =  ::PicoPage_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  73)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  73)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            		}
HXLINE(  76)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->pico,null()))) {
HXLINE(  78)			this->pico->set_alpha(((Float)0.5));
            		}
HXLINE(  81)		if (::flixel::FlxG_obj::mouse->overlaps(this->spooky,null())) {
HXLINE(  83)			this->spooky->set_alpha(( (Float)(1) ));
HXLINE(  84)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE(  86)				::WiiShopChannel_obj::pressSound->play(null(),null(),null());
HXLINE(  87)				{
HXLINE(  87)					 ::flixel::FlxState nextState =  ::SpookyPage_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  87)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  87)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            		}
HXLINE(  90)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->spooky,null()))) {
HXLINE(  92)			this->spooky->set_alpha(((Float)0.5));
            		}
HXLINE(  95)		if (::flixel::FlxG_obj::mouse->overlaps(this->arrowRight,null())) {
HXLINE(  97)			this->arrowRight->set_alpha(( (Float)(1) ));
HXLINE(  98)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 100)				::WiiShopChannel_obj::pressSound->play(null(),null(),null());
HXLINE( 101)				{
HXLINE( 101)					 ::flixel::FlxState nextState =  ::WiiShopCharacters2_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 101)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 101)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            		}
HXLINE( 104)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->arrowRight,null()))) {
HXLINE( 106)			this->arrowRight->set_alpha(((Float)0.5));
            		}
HXLINE( 109)		if (::PlayerSettings_obj::player1->controls->_right->check()) {
HXLINE( 111)			::WiiShopChannel_obj::pressSound->play(null(),null(),null());
HXLINE( 112)			{
HXLINE( 112)				 ::flixel::FlxState nextState =  ::WiiShopCharacters2_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 112)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 112)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE( 115)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 115)		if (_this->keyManager->checkStatusUnsafe(27,_this->status)) {
HXLINE( 117)			 ::flixel::FlxState nextState =  ::SelectTypeOfChar_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 117)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 117)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 120)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< WiiShopCharacters_obj > WiiShopCharacters_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< WiiShopCharacters_obj > __this = new WiiShopCharacters_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< WiiShopCharacters_obj > WiiShopCharacters_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	WiiShopCharacters_obj *__this = (WiiShopCharacters_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WiiShopCharacters_obj), true, "WiiShopCharacters"));
	*(void **)__this = WiiShopCharacters_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

WiiShopCharacters_obj::WiiShopCharacters_obj()
{
}

void WiiShopCharacters_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WiiShopCharacters);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(bf,"bf");
	HX_MARK_MEMBER_NAME(pico,"pico");
	HX_MARK_MEMBER_NAME(spooky,"spooky");
	HX_MARK_MEMBER_NAME(descText,"descText");
	HX_MARK_MEMBER_NAME(arrowRight,"arrowRight");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WiiShopCharacters_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(bf,"bf");
	HX_VISIT_MEMBER_NAME(pico,"pico");
	HX_VISIT_MEMBER_NAME(spooky,"spooky");
	HX_VISIT_MEMBER_NAME(descText,"descText");
	HX_VISIT_MEMBER_NAME(arrowRight,"arrowRight");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val WiiShopCharacters_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		if (HX_FIELD_EQ(inName,"bf") ) { return ::hx::Val( bf ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pico") ) { return ::hx::Val( pico ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"spooky") ) { return ::hx::Val( spooky ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"descText") ) { return ::hx::Val( descText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"arrowRight") ) { return ::hx::Val( arrowRight ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WiiShopCharacters_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bf") ) { bf=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pico") ) { pico=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"spooky") ) { spooky=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"descText") ) { descText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"arrowRight") ) { arrowRight=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WiiShopCharacters_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("bf",c4,55,00,00));
	outFields->push(HX_("pico",e5,e8,57,4a));
	outFields->push(HX_("spooky",eb,bd,9e,c1));
	outFields->push(HX_("descText",9e,53,35,f3));
	outFields->push(HX_("arrowRight",53,e9,06,5d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WiiShopCharacters_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiShopCharacters_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiShopCharacters_obj,bf),HX_("bf",c4,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiShopCharacters_obj,pico),HX_("pico",e5,e8,57,4a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiShopCharacters_obj,spooky),HX_("spooky",eb,bd,9e,c1)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(WiiShopCharacters_obj,descText),HX_("descText",9e,53,35,f3)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiShopCharacters_obj,arrowRight),HX_("arrowRight",53,e9,06,5d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WiiShopCharacters_obj_sStaticStorageInfo = 0;
#endif

static ::String WiiShopCharacters_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("bf",c4,55,00,00),
	HX_("pico",e5,e8,57,4a),
	HX_("spooky",eb,bd,9e,c1),
	HX_("descText",9e,53,35,f3),
	HX_("arrowRight",53,e9,06,5d),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class WiiShopCharacters_obj::__mClass;

void WiiShopCharacters_obj::__register()
{
	WiiShopCharacters_obj _hx_dummy;
	WiiShopCharacters_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("WiiShopCharacters",97,97,05,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WiiShopCharacters_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WiiShopCharacters_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WiiShopCharacters_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WiiShopCharacters_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

