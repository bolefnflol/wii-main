#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_EduardoPage
#include <EduardoPage.h>
#endif
#ifndef INCLUDED_GFPage
#include <GFPage.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_cf8d1bf9c8e1ef8e_16_new,"WiiShopCharacters2","new",0x26ff272d,"WiiShopCharacters2.new","WiiShopCharacters2.hx",16,0xedce9ce3)
HX_LOCAL_STACK_FRAME(_hx_pos_cf8d1bf9c8e1ef8e_28_create,"WiiShopCharacters2","create",0xf21e8e4f,"WiiShopCharacters2.create","WiiShopCharacters2.hx",28,0xedce9ce3)
HX_LOCAL_STACK_FRAME(_hx_pos_cf8d1bf9c8e1ef8e_52_update,"WiiShopCharacters2","update",0xfd14ad5c,"WiiShopCharacters2.update","WiiShopCharacters2.hx",52,0xedce9ce3)

void WiiShopCharacters2_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_cf8d1bf9c8e1ef8e_16_new)
HXDLIN(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic WiiShopCharacters2_obj::__CreateEmpty() { return new WiiShopCharacters2_obj; }

void *WiiShopCharacters2_obj::_hx_vtable = 0;

Dynamic WiiShopCharacters2_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WiiShopCharacters2_obj > _hx_result = new WiiShopCharacters2_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool WiiShopCharacters2_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x09a2ef7b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x09a2ef7b;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void WiiShopCharacters2_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_cf8d1bf9c8e1ef8e_28_create)
HXLINE(  29)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  29)		::String library = null();
HXDLIN(  29)		this->bg = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/bg",6e,fe,d0,6b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  30)		this->add(this->bg);
HXLINE(  32)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,240,150,null());
HXDLIN(  32)		::String library1 = null();
HXDLIN(  32)		this->eduardo = _hx_tmp1->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buy/eduardo",20,40,8d,d7)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  33)		this->eduardo->set_alpha(((Float)0.5));
HXLINE(  34)		this->add(this->eduardo);
HXLINE(  36)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,225,350,null());
HXDLIN(  36)		::String library2 = null();
HXDLIN(  36)		this->gf = _hx_tmp2->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/buy/gf_peachcrown",f4,69,88,dc)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2),null(),null(),null(),null(),null());
HXLINE(  37)		this->gf->set_alpha(((Float)0.5));
HXLINE(  38)		this->add(this->gf);
HXLINE(  40)		 ::flixel::FlxSprite _hx_tmp3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,1170,330,null());
HXDLIN(  40)		::String library3 = null();
HXDLIN(  40)		this->arrowRight = _hx_tmp3->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/arrowRight",fc,e2,1d,c7)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3),null(),null(),null(),null(),null());
HXLINE(  41)		this->arrowRight->set_alpha(((Float)0.5));
HXLINE(  44)		 ::flixel::FlxSprite _hx_tmp4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,20,330,null());
HXDLIN(  44)		::String library4 = null();
HXDLIN(  44)		this->arrowLeft = _hx_tmp4->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/characters/arrowLeft",e7,74,b5,8e)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library4),null(),null(),null(),null(),null());
HXLINE(  45)		this->arrowLeft->set_alpha(((Float)0.5));
HXLINE(  46)		this->add(this->arrowLeft);
HXLINE(  48)		this->super::create();
            	}


void WiiShopCharacters2_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_cf8d1bf9c8e1ef8e_52_update)
HXLINE(  53)		if (::flixel::FlxG_obj::mouse->overlaps(this->eduardo,null())) {
HXLINE(  55)			this->eduardo->set_alpha(( (Float)(1) ));
HXLINE(  56)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE(  58)				::WiiShopChannel_obj::pressSound->play(null(),null(),null());
HXLINE(  59)				{
HXLINE(  59)					 ::flixel::FlxState nextState =  ::EduardoPage_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  59)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  59)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            		}
HXLINE(  62)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->eduardo,null()))) {
HXLINE(  64)			this->eduardo->set_alpha(((Float)0.5));
            		}
HXLINE(  67)		if (::flixel::FlxG_obj::mouse->overlaps(this->gf,null())) {
HXLINE(  69)			this->gf->set_alpha(( (Float)(1) ));
HXLINE(  70)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE(  72)				::WiiShopChannel_obj::pressSound->play(null(),null(),null());
HXLINE(  73)				{
HXLINE(  73)					 ::flixel::FlxState nextState =  ::GFPage_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  73)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  73)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            		}
HXLINE(  76)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->gf,null()))) {
HXLINE(  78)			this->gf->set_alpha(((Float)0.5));
            		}
HXLINE(  81)		if (::flixel::FlxG_obj::mouse->overlaps(this->arrowLeft,null())) {
HXLINE(  83)			this->arrowRight->set_alpha(( (Float)(1) ));
HXLINE(  84)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE(  86)				::WiiShopChannel_obj::pressSound->play(null(),null(),null());
HXLINE(  87)				{
HXLINE(  87)					 ::flixel::FlxState nextState =  ::WiiShopCharacters_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  87)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  87)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            		}
HXLINE(  90)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->arrowLeft,null()))) {
HXLINE(  92)			this->arrowLeft->set_alpha(((Float)0.5));
            		}
HXLINE(  95)		if (::PlayerSettings_obj::player1->controls->_left->check()) {
HXLINE(  97)			::WiiShopChannel_obj::pressSound->play(null(),null(),null());
HXLINE(  98)			{
HXLINE(  98)				 ::flixel::FlxState nextState =  ::WiiShopCharacters_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  98)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  98)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE( 101)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< WiiShopCharacters2_obj > WiiShopCharacters2_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< WiiShopCharacters2_obj > __this = new WiiShopCharacters2_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< WiiShopCharacters2_obj > WiiShopCharacters2_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	WiiShopCharacters2_obj *__this = (WiiShopCharacters2_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WiiShopCharacters2_obj), true, "WiiShopCharacters2"));
	*(void **)__this = WiiShopCharacters2_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

WiiShopCharacters2_obj::WiiShopCharacters2_obj()
{
}

void WiiShopCharacters2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WiiShopCharacters2);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(eduardo,"eduardo");
	HX_MARK_MEMBER_NAME(gf,"gf");
	HX_MARK_MEMBER_NAME(descText,"descText");
	HX_MARK_MEMBER_NAME(arrowRight,"arrowRight");
	HX_MARK_MEMBER_NAME(arrowLeft,"arrowLeft");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WiiShopCharacters2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(eduardo,"eduardo");
	HX_VISIT_MEMBER_NAME(gf,"gf");
	HX_VISIT_MEMBER_NAME(descText,"descText");
	HX_VISIT_MEMBER_NAME(arrowRight,"arrowRight");
	HX_VISIT_MEMBER_NAME(arrowLeft,"arrowLeft");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val WiiShopCharacters2_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		if (HX_FIELD_EQ(inName,"gf") ) { return ::hx::Val( gf ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"eduardo") ) { return ::hx::Val( eduardo ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"descText") ) { return ::hx::Val( descText ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arrowLeft") ) { return ::hx::Val( arrowLeft ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"arrowRight") ) { return ::hx::Val( arrowRight ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WiiShopCharacters2_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gf") ) { gf=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"eduardo") ) { eduardo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"descText") ) { descText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arrowLeft") ) { arrowLeft=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"arrowRight") ) { arrowRight=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WiiShopCharacters2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("eduardo",f2,58,fe,01));
	outFields->push(HX_("gf",1f,5a,00,00));
	outFields->push(HX_("descText",9e,53,35,f3));
	outFields->push(HX_("arrowRight",53,e9,06,5d));
	outFields->push(HX_("arrowLeft",70,c6,53,03));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WiiShopCharacters2_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiShopCharacters2_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiShopCharacters2_obj,eduardo),HX_("eduardo",f2,58,fe,01)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiShopCharacters2_obj,gf),HX_("gf",1f,5a,00,00)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(WiiShopCharacters2_obj,descText),HX_("descText",9e,53,35,f3)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiShopCharacters2_obj,arrowRight),HX_("arrowRight",53,e9,06,5d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiShopCharacters2_obj,arrowLeft),HX_("arrowLeft",70,c6,53,03)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WiiShopCharacters2_obj_sStaticStorageInfo = 0;
#endif

static ::String WiiShopCharacters2_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("eduardo",f2,58,fe,01),
	HX_("gf",1f,5a,00,00),
	HX_("descText",9e,53,35,f3),
	HX_("arrowRight",53,e9,06,5d),
	HX_("arrowLeft",70,c6,53,03),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class WiiShopCharacters2_obj::__mClass;

void WiiShopCharacters2_obj::__register()
{
	WiiShopCharacters2_obj _hx_dummy;
	WiiShopCharacters2_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("WiiShopCharacters2",bb,0c,df,b1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WiiShopCharacters2_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WiiShopCharacters2_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WiiShopCharacters2_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WiiShopCharacters2_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

