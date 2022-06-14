#include <hxcpp.h>

#ifndef INCLUDED_ConfirmationLogging
#include <ConfirmationLogging.h>
#endif
#ifndef INCLUDED_GamejoltLogInState
#include <GamejoltLogInState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Trophies
#include <Trophies.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_10b642a640c77a4f_77_new,"ConfirmationLogging","new",0xa20cf5fc,"ConfirmationLogging.new","ConfirmationLogging.hx",77,0x1fb8dcf4)
HX_LOCAL_STACK_FRAME(_hx_pos_10b642a640c77a4f_86_create,"ConfirmationLogging","create",0xcff8aae0,"ConfirmationLogging.create","ConfirmationLogging.hx",86,0x1fb8dcf4)
HX_LOCAL_STACK_FRAME(_hx_pos_10b642a640c77a4f_109_update,"ConfirmationLogging","update",0xdaeec9ed,"ConfirmationLogging.update","ConfirmationLogging.hx",109,0x1fb8dcf4)

void ConfirmationLogging_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_10b642a640c77a4f_77_new)
HXDLIN(  77)		super::__construct(TransIn,TransOut);
            	}

Dynamic ConfirmationLogging_obj::__CreateEmpty() { return new ConfirmationLogging_obj; }

void *ConfirmationLogging_obj::_hx_vtable = 0;

Dynamic ConfirmationLogging_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConfirmationLogging_obj > _hx_result = new ConfirmationLogging_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ConfirmationLogging_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x648e0d4a || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void ConfirmationLogging_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_10b642a640c77a4f_86_create)
HXLINE(  87)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-30,-20,null());
HXDLIN(  87)		::String library = null();
HXDLIN(  87)		this->bg = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gamejolt/loginBg2",b4,f0,4b,1a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  88)		this->add(this->bg);
HXLINE(  90)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,140,560,null());
HXDLIN(  90)		::String library1 = null();
HXDLIN(  90)		this->continueButton = _hx_tmp1->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gamejolt/continueButton",89,8d,b1,36)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  91)		this->continueButton->set_alpha(((Float)0.5));
HXLINE(  92)		this->add(this->continueButton);
HXLINE(  94)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->continueButton->x * ( (Float)(5) )),this->continueButton->y,null());
HXDLIN(  94)		::String library2 = null();
HXDLIN(  94)		this->backButton = _hx_tmp2->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gamejolt/backButton",49,2f,7b,6a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2),null(),null(),null(),null(),null());
HXLINE(  95)		this->backButton->set_alpha(this->continueButton->alpha);
HXLINE(  96)		this->add(this->backButton);
HXLINE(  98)		this->txt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,500,410,null(),(HX_("",00,00,00,00) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("userName",36,b2,c4,0b),::hx::paccDynamic)))),null(),null());
HXLINE(  99)		this->txt->set_color(-1);
HXLINE( 100)		this->txt->set_size(70);
HXLINE( 101)		this->txt->set_borderColor(-16777216);
HXLINE( 102)		this->txt->set_borderSize(( (Float)(9) ));
HXLINE( 103)		this->add(this->txt);
HXLINE( 105)		this->super::create();
            	}


void ConfirmationLogging_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_10b642a640c77a4f_109_update)
HXLINE( 110)		if (::flixel::FlxG_obj::mouse->overlaps(this->continueButton,null())) {
HXLINE( 112)			this->continueButton->set_alpha(( (Float)(1) ));
HXLINE( 113)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 115)				::flixel::FlxG_obj::save->data->__SetField(HX_("loggedInToGameJolt",21,ba,92,e7),true,::hx::paccDynamic);
HXLINE( 116)				if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("loggedInToGameJolt",21,ba,92,e7),::hx::paccDynamic)) )) {
HXLINE( 117)					::Trophies_obj::unlockTrophy(164455);
            				}
HXLINE( 118)				{
HXLINE( 118)					 ::flixel::FlxState nextState =  ::WiiMenu_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 118)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 118)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            		}
HXLINE( 121)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->continueButton,null()))) {
HXLINE( 123)			this->continueButton->set_alpha(((Float)0.5));
            		}
HXLINE( 126)		if (::flixel::FlxG_obj::mouse->overlaps(this->backButton,null())) {
HXLINE( 128)			this->backButton->set_alpha(( (Float)(1) ));
HXLINE( 129)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 131)				 ::flixel::FlxState nextState =  ::GamejoltLogInState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 131)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 131)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE( 134)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->backButton,null()))) {
HXLINE( 136)			this->backButton->set_alpha(((Float)0.5));
            		}
HXLINE( 139)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< ConfirmationLogging_obj > ConfirmationLogging_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< ConfirmationLogging_obj > __this = new ConfirmationLogging_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< ConfirmationLogging_obj > ConfirmationLogging_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	ConfirmationLogging_obj *__this = (ConfirmationLogging_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ConfirmationLogging_obj), true, "ConfirmationLogging"));
	*(void **)__this = ConfirmationLogging_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

ConfirmationLogging_obj::ConfirmationLogging_obj()
{
}

void ConfirmationLogging_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConfirmationLogging);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(continueButton,"continueButton");
	HX_MARK_MEMBER_NAME(backButton,"backButton");
	HX_MARK_MEMBER_NAME(txt,"txt");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ConfirmationLogging_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(continueButton,"continueButton");
	HX_VISIT_MEMBER_NAME(backButton,"backButton");
	HX_VISIT_MEMBER_NAME(txt,"txt");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ConfirmationLogging_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { return ::hx::Val( backButton ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"continueButton") ) { return ::hx::Val( continueButton ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ConfirmationLogging_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"txt") ) { txt=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"continueButton") ) { continueButton=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConfirmationLogging_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("continueButton",b9,7d,48,49));
	outFields->push(HX_("backButton",79,47,6a,18));
	outFields->push(HX_("txt",70,6e,58,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ConfirmationLogging_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(ConfirmationLogging_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(ConfirmationLogging_obj,continueButton),HX_("continueButton",b9,7d,48,49)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(ConfirmationLogging_obj,backButton),HX_("backButton",79,47,6a,18)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ConfirmationLogging_obj,txt),HX_("txt",70,6e,58,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ConfirmationLogging_obj_sStaticStorageInfo = 0;
#endif

static ::String ConfirmationLogging_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("continueButton",b9,7d,48,49),
	HX_("backButton",79,47,6a,18),
	HX_("txt",70,6e,58,00),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class ConfirmationLogging_obj::__mClass;

void ConfirmationLogging_obj::__register()
{
	ConfirmationLogging_obj _hx_dummy;
	ConfirmationLogging_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ConfirmationLogging",0a,88,eb,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ConfirmationLogging_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ConfirmationLogging_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConfirmationLogging_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConfirmationLogging_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

