#include <hxcpp.h>

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_WiiShopChannel
#include <WiiShopChannel.h>
#endif
#ifndef INCLUDED_WiiShopChannelGuide
#include <WiiShopChannelGuide.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_93f2eefbc40addf2_16_new,"WiiShopChannelGuide","new",0x09744718,"WiiShopChannelGuide.new","WiiShopChannelGuide.hx",16,0x4bcf2358)
HX_LOCAL_STACK_FRAME(_hx_pos_93f2eefbc40addf2_25_create,"WiiShopChannelGuide","create",0x5fbbf344,"WiiShopChannelGuide.create","WiiShopChannelGuide.hx",25,0x4bcf2358)
HX_LOCAL_STACK_FRAME(_hx_pos_93f2eefbc40addf2_44_update,"WiiShopChannelGuide","update",0x6ab21251,"WiiShopChannelGuide.update","WiiShopChannelGuide.hx",44,0x4bcf2358)
HX_LOCAL_STACK_FRAME(_hx_pos_93f2eefbc40addf2_55_update,"WiiShopChannelGuide","update",0x6ab21251,"WiiShopChannelGuide.update","WiiShopChannelGuide.hx",55,0x4bcf2358)
HX_LOCAL_STACK_FRAME(_hx_pos_93f2eefbc40addf2_69_guideFade,"WiiShopChannelGuide","guideFade",0xcc7efb10,"WiiShopChannelGuide.guideFade","WiiShopChannelGuide.hx",69,0x4bcf2358)
HX_LOCAL_STACK_FRAME(_hx_pos_93f2eefbc40addf2_67_guideFade,"WiiShopChannelGuide","guideFade",0xcc7efb10,"WiiShopChannelGuide.guideFade","WiiShopChannelGuide.hx",67,0x4bcf2358)

void WiiShopChannelGuide_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_93f2eefbc40addf2_16_new)
HXDLIN(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic WiiShopChannelGuide_obj::__CreateEmpty() { return new WiiShopChannelGuide_obj; }

void *WiiShopChannelGuide_obj::_hx_vtable = 0;

Dynamic WiiShopChannelGuide_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WiiShopChannelGuide_obj > _hx_result = new WiiShopChannelGuide_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool WiiShopChannelGuide_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3a21ba9e || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void WiiShopChannelGuide_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_93f2eefbc40addf2_25_create)
HXLINE(  26)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,50,620,null());
HXDLIN(  26)		::String library = null();
HXDLIN(  26)		this->backSelectionSprite = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/overlap/bottom",0f,ee,0a,50)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  27)		this->add(this->backSelectionSprite);
HXLINE(  29)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  29)		::String library1 = null();
HXDLIN(  29)		this->bg = _hx_tmp1->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/bg",21,2a,1e,21)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  30)		this->add(this->bg);
HXLINE(  32)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  32)		::String library2 = null();
HXDLIN(  32)		this->guide = _hx_tmp2->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/guide",e0,07,fa,a8)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2),null(),null(),null(),null(),null());
HXLINE(  33)		this->add(this->guide);
HXLINE(  35)		 ::flixel::FlxSprite _hx_tmp3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  35)		::String library3 = null();
HXDLIN(  35)		this->back = _hx_tmp3->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/back",83,7d,91,44)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3),null(),null(),null(),null(),null());
HXLINE(  36)		this->add(this->back);
HXLINE(  38)		 ::flixel::FlxSprite _hx_tmp4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  38)		::String library4 = null();
HXDLIN(  38)		this->backSelected = _hx_tmp4->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channelsin/wiishop/selected/back",bf,9a,90,c5)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library4),null(),null(),null(),null(),null());
HXLINE(  40)		this->super::create();
            	}


void WiiShopChannelGuide_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_93f2eefbc40addf2_44_update)
HXLINE(  45)		if (::flixel::FlxG_obj::mouse->overlaps(this->backSelectionSprite,null())) {
HXLINE(  47)			this->remove(this->back,null());
HXLINE(  48)			this->add(this->backSelected);
HXLINE(  49)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_93f2eefbc40addf2_55_update)
HXLINE(  55)					 ::flixel::FlxState nextState =  ::WiiShopChannel_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  55)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  55)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  51)				::WiiShopChannel_obj::backSound->play(null(),null(),null());
HXLINE(  52)				this->guideFade();
HXLINE(  53)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_0()),null());
            			}
            		}
HXLINE(  59)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->backSelectionSprite,null()))) {
HXLINE(  61)			this->add(this->back);
HXLINE(  62)			this->remove(this->backSelected,null());
            		}
            	}


void WiiShopChannelGuide_obj::guideFade(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::WiiShopChannelGuide,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_93f2eefbc40addf2_69_guideFade)
HXLINE(  70)			 ::flixel::FlxSprite fh = _gthis->guide;
HXDLIN(  70)			fh->set_alpha((fh->alpha - ((Float)0.1)));
HXLINE(  71)			if ((_gthis->guide->alpha > 0)) {
HXLINE(  73)				tmr->reset(null());
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_93f2eefbc40addf2_67_guideFade)
HXDLIN(  67)		 ::WiiShopChannelGuide _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  68)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.1), ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(WiiShopChannelGuide_obj,guideFade,(void))


::hx::ObjectPtr< WiiShopChannelGuide_obj > WiiShopChannelGuide_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< WiiShopChannelGuide_obj > __this = new WiiShopChannelGuide_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< WiiShopChannelGuide_obj > WiiShopChannelGuide_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	WiiShopChannelGuide_obj *__this = (WiiShopChannelGuide_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WiiShopChannelGuide_obj), true, "WiiShopChannelGuide"));
	*(void **)__this = WiiShopChannelGuide_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

WiiShopChannelGuide_obj::WiiShopChannelGuide_obj()
{
}

void WiiShopChannelGuide_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WiiShopChannelGuide);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(back,"back");
	HX_MARK_MEMBER_NAME(guide,"guide");
	HX_MARK_MEMBER_NAME(backSelectionSprite,"backSelectionSprite");
	HX_MARK_MEMBER_NAME(backSelected,"backSelected");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WiiShopChannelGuide_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(back,"back");
	HX_VISIT_MEMBER_NAME(guide,"guide");
	HX_VISIT_MEMBER_NAME(backSelectionSprite,"backSelectionSprite");
	HX_VISIT_MEMBER_NAME(backSelected,"backSelected");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val WiiShopChannelGuide_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { return ::hx::Val( back ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"guide") ) { return ::hx::Val( guide ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"guideFade") ) { return ::hx::Val( guideFade_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"backSelected") ) { return ::hx::Val( backSelected ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"backSelectionSprite") ) { return ::hx::Val( backSelectionSprite ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WiiShopChannelGuide_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { back=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"guide") ) { guide=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"backSelected") ) { backSelected=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"backSelectionSprite") ) { backSelectionSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WiiShopChannelGuide_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("back",27,da,10,41));
	outFields->push(HX_("guide",bc,ba,eb,9b));
	outFields->push(HX_("backSelectionSprite",0a,3b,05,66));
	outFields->push(HX_("backSelected",a2,bf,60,12));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WiiShopChannelGuide_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiShopChannelGuide_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiShopChannelGuide_obj,back),HX_("back",27,da,10,41)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiShopChannelGuide_obj,guide),HX_("guide",bc,ba,eb,9b)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiShopChannelGuide_obj,backSelectionSprite),HX_("backSelectionSprite",0a,3b,05,66)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WiiShopChannelGuide_obj,backSelected),HX_("backSelected",a2,bf,60,12)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WiiShopChannelGuide_obj_sStaticStorageInfo = 0;
#endif

static ::String WiiShopChannelGuide_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("back",27,da,10,41),
	HX_("guide",bc,ba,eb,9b),
	HX_("backSelectionSprite",0a,3b,05,66),
	HX_("backSelected",a2,bf,60,12),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("guideFade",58,aa,34,63),
	::String(null()) };

::hx::Class WiiShopChannelGuide_obj::__mClass;

void WiiShopChannelGuide_obj::__register()
{
	WiiShopChannelGuide_obj _hx_dummy;
	WiiShopChannelGuide_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("WiiShopChannelGuide",26,1b,55,69);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WiiShopChannelGuide_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WiiShopChannelGuide_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WiiShopChannelGuide_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WiiShopChannelGuide_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

