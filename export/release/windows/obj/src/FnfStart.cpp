#include <hxcpp.h>

#ifndef INCLUDED_FNFmenu
#include <FNFmenu.h>
#endif
#ifndef INCLUDED_FnfStart
#include <FnfStart.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
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
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_66f812eb15d2e3c2_16_new,"FnfStart","new",0x863ea076,"FnfStart.new","FnfStart.hx",16,0x05319fba)
HX_LOCAL_STACK_FRAME(_hx_pos_66f812eb15d2e3c2_31_create,"FnfStart","create",0x8f5148a6,"FnfStart.create","FnfStart.hx",31,0x05319fba)
HX_LOCAL_STACK_FRAME(_hx_pos_66f812eb15d2e3c2_63_update,"FnfStart","update",0x9a4767b3,"FnfStart.update","FnfStart.hx",63,0x05319fba)
HX_LOCAL_STACK_FRAME(_hx_pos_66f812eb15d2e3c2_86_update,"FnfStart","update",0x9a4767b3,"FnfStart.update","FnfStart.hx",86,0x05319fba)

void FnfStart_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_66f812eb15d2e3c2_16_new)
HXDLIN(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic FnfStart_obj::__CreateEmpty() { return new FnfStart_obj; }

void *FnfStart_obj::_hx_vtable = 0;

Dynamic FnfStart_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FnfStart_obj > _hx_result = new FnfStart_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FnfStart_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x1416c5a8) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1416c5a8;
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

void FnfStart_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_66f812eb15d2e3c2_31_create)
HXLINE(  32)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,240,570,null());
HXDLIN(  32)		::String library = null();
HXDLIN(  32)		this->hover1 = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channels/wiishop/hover",3b,7c,25,1b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  33)		this->add(this->hover1);
HXLINE(  35)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,670,570,null());
HXDLIN(  35)		::String library1 = null();
HXDLIN(  35)		this->hover2 = _hx_tmp1->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channels/wiishop/hover",3b,7c,25,1b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  36)		this->add(this->hover2);
HXLINE(  38)		this->fnf =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  39)		 ::flixel::FlxSprite _hx_tmp2 = this->fnf;
HXDLIN(  39)		::String library2 = null();
HXDLIN(  39)		::String _hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channels/fnf/EnteringFNF",a4,67,a1,8a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2);
HXDLIN(  39)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channels/fnf/EnteringFNF",a4,67,a1,8a)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2)));
HXLINE(  40)		this->fnf->animation->addByPrefix(HX_("fnf",1e,c6,4d,00),HX_("fnf",1e,c6,4d,00),24,true,null(),null());
HXLINE(  41)		this->fnf->animation->play(HX_("fnf",1e,c6,4d,00),null(),null(),null());
HXLINE(  42)		this->fnf->set_antialiasing(true);
HXLINE(  43)		this->add(this->fnf);
HXLINE(  45)		 ::flixel::FlxSprite _hx_tmp4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  45)		::String library3 = null();
HXDLIN(  45)		this->bottom = _hx_tmp4->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channels/wiishop/bottom",8c,ff,3b,3e)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3),null(),null(),null(),null(),null());
HXLINE(  46)		this->add(this->bottom);
HXLINE(  48)		 ::flixel::FlxSprite _hx_tmp5 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  48)		::String library4 = null();
HXDLIN(  48)		this->bottomOptions = _hx_tmp5->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channels/wiishop/bottom_options",6b,f8,8e,5e)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library4),null(),null(),null(),null(),null());
HXLINE(  49)		this->add(this->bottomOptions);
HXLINE(  51)		 ::flixel::FlxSprite _hx_tmp6 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  51)		::String library5 = null();
HXDLIN(  51)		this->wiimenubigger = _hx_tmp6->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channels/wiishop/wiimenuBigger",29,f3,35,d3)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library5),null(),null(),null(),null(),null());
HXLINE(  53)		 ::flixel::FlxSprite _hx_tmp7 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  53)		::String library6 = null();
HXDLIN(  53)		this->startbigger = _hx_tmp7->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("channels/wiishop/startBigger",95,1d,d1,d4)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library6),null(),null(),null(),null(),null());
HXLINE(  55)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp8 = ::flixel::FlxG_obj::sound;
HXDLIN(  55)		::String library7 = null();
HXDLIN(  55)		_hx_tmp8->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu1",7c,29,bc,3a)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library7),1,true,null());
HXLINE(  57)		 ::flixel::_hx_system::FlxSound _hx_tmp9 =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXDLIN(  57)		this->pressSound = _hx_tmp9->loadEmbedded(::Paths_obj::sound(HX_("Start",42,e4,38,17),null()),null(),null(),null());
HXLINE(  59)		this->super::create();
            	}


void FnfStart_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_66f812eb15d2e3c2_63_update)
HXLINE(  64)		if (::flixel::FlxG_obj::mouse->overlaps(this->hover1,null())) {
HXLINE(  66)			this->add(this->wiimenubigger);
HXLINE(  67)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE(  69)				{
HXLINE(  69)					 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  69)					_this->cleanup(_this->autoDestroy,true);
            				}
HXLINE(  70)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  70)				_hx_tmp->play(::Paths_obj::sound(HX_("ReturnMenu",8f,32,39,db),null()),null(),null(),null(),null(),null());
HXLINE(  71)				{
HXLINE(  71)					 ::flixel::FlxState nextState =  ::WiiMenu_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  71)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  71)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            		}
HXLINE(  74)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->hover1,null()))) {
HXLINE(  76)			this->remove(this->wiimenubigger,null());
            		}
HXLINE(  78)		if (::flixel::FlxG_obj::mouse->overlaps(this->hover2,null())) {
HXLINE(  80)			this->add(this->startbigger);
HXLINE(  81)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_66f812eb15d2e3c2_86_update)
HXLINE(  87)					{
HXLINE(  87)						 ::flixel::FlxState nextState =  ::FNFmenu_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  87)						if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  87)							::flixel::FlxG_obj::game->_requestedState = nextState;
            						}
            					}
HXLINE(  88)					{
HXLINE(  88)						 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  88)						_this->cleanup(_this->autoDestroy,true);
            					}
HXLINE(  89)					::flixel::FlxG_obj::mouse->set_visible(false);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  83)				{
HXLINE(  83)					 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  83)					 ::Dynamic onComplete = null();
HXDLIN(  83)					if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  83)						_this->fadeTween->cancel();
            					}
HXDLIN(  83)					_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(0) ),2, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            				}
HXLINE(  84)				this->pressSound->play(null(),null(),null());
HXLINE(  85)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_0()),null());
            			}
            		}
HXLINE(  93)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->hover2,null()))) {
HXLINE(  95)			this->remove(this->startbigger,null());
            		}
            	}



::hx::ObjectPtr< FnfStart_obj > FnfStart_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< FnfStart_obj > __this = new FnfStart_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< FnfStart_obj > FnfStart_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	FnfStart_obj *__this = (FnfStart_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FnfStart_obj), true, "FnfStart"));
	*(void **)__this = FnfStart_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

FnfStart_obj::FnfStart_obj()
{
}

void FnfStart_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FnfStart);
	HX_MARK_MEMBER_NAME(fnf,"fnf");
	HX_MARK_MEMBER_NAME(bottom,"bottom");
	HX_MARK_MEMBER_NAME(bottomOptions,"bottomOptions");
	HX_MARK_MEMBER_NAME(hover1,"hover1");
	HX_MARK_MEMBER_NAME(hover2,"hover2");
	HX_MARK_MEMBER_NAME(wiimenubigger,"wiimenubigger");
	HX_MARK_MEMBER_NAME(startbigger,"startbigger");
	HX_MARK_MEMBER_NAME(pressSound,"pressSound");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FnfStart_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fnf,"fnf");
	HX_VISIT_MEMBER_NAME(bottom,"bottom");
	HX_VISIT_MEMBER_NAME(bottomOptions,"bottomOptions");
	HX_VISIT_MEMBER_NAME(hover1,"hover1");
	HX_VISIT_MEMBER_NAME(hover2,"hover2");
	HX_VISIT_MEMBER_NAME(wiimenubigger,"wiimenubigger");
	HX_VISIT_MEMBER_NAME(startbigger,"startbigger");
	HX_VISIT_MEMBER_NAME(pressSound,"pressSound");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FnfStart_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fnf") ) { return ::hx::Val( fnf ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { return ::hx::Val( bottom ); }
		if (HX_FIELD_EQ(inName,"hover1") ) { return ::hx::Val( hover1 ); }
		if (HX_FIELD_EQ(inName,"hover2") ) { return ::hx::Val( hover2 ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pressSound") ) { return ::hx::Val( pressSound ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startbigger") ) { return ::hx::Val( startbigger ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bottomOptions") ) { return ::hx::Val( bottomOptions ); }
		if (HX_FIELD_EQ(inName,"wiimenubigger") ) { return ::hx::Val( wiimenubigger ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FnfStart_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fnf") ) { fnf=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { bottom=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hover1") ) { hover1=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hover2") ) { hover2=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pressSound") ) { pressSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startbigger") ) { startbigger=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bottomOptions") ) { bottomOptions=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wiimenubigger") ) { wiimenubigger=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FnfStart_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fnf",1e,c6,4d,00));
	outFields->push(HX_("bottom",eb,e6,78,65));
	outFields->push(HX_("bottomOptions",b3,f7,ad,3a));
	outFields->push(HX_("hover1",f5,1e,e4,cc));
	outFields->push(HX_("hover2",f6,1e,e4,cc));
	outFields->push(HX_("wiimenubigger",8a,d1,97,d5));
	outFields->push(HX_("startbigger",b6,a9,c1,2b));
	outFields->push(HX_("pressSound",4c,0e,25,5e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FnfStart_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FnfStart_obj,fnf),HX_("fnf",1e,c6,4d,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FnfStart_obj,bottom),HX_("bottom",eb,e6,78,65)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FnfStart_obj,bottomOptions),HX_("bottomOptions",b3,f7,ad,3a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FnfStart_obj,hover1),HX_("hover1",f5,1e,e4,cc)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FnfStart_obj,hover2),HX_("hover2",f6,1e,e4,cc)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FnfStart_obj,wiimenubigger),HX_("wiimenubigger",8a,d1,97,d5)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FnfStart_obj,startbigger),HX_("startbigger",b6,a9,c1,2b)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(FnfStart_obj,pressSound),HX_("pressSound",4c,0e,25,5e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FnfStart_obj_sStaticStorageInfo = 0;
#endif

static ::String FnfStart_obj_sMemberFields[] = {
	HX_("fnf",1e,c6,4d,00),
	HX_("bottom",eb,e6,78,65),
	HX_("bottomOptions",b3,f7,ad,3a),
	HX_("hover1",f5,1e,e4,cc),
	HX_("hover2",f6,1e,e4,cc),
	HX_("wiimenubigger",8a,d1,97,d5),
	HX_("startbigger",b6,a9,c1,2b),
	HX_("pressSound",4c,0e,25,5e),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class FnfStart_obj::__mClass;

void FnfStart_obj::__register()
{
	FnfStart_obj _hx_dummy;
	FnfStart_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FnfStart",84,ed,a3,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FnfStart_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FnfStart_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FnfStart_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FnfStart_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

