#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_vlc_VideoHandler
#include <vlc/VideoHandler.h>
#endif
#ifndef INCLUDED_vlc_bitmap_VlcBitmap
#include <vlc/bitmap/VlcBitmap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_59c7bd6cffaab449_35_new,"vlc.VideoHandler","new",0xd61f1242,"vlc.VideoHandler.new","vlc/VideoHandler.hx",35,0xb813948d)
HX_DEFINE_STACK_FRAME(_hx_pos_59c7bd6cffaab449_39_new,"vlc.VideoHandler","new",0xd61f1242,"vlc.VideoHandler.new","vlc/VideoHandler.hx",39,0xb813948d)
HX_DEFINE_STACK_FRAME(_hx_pos_59c7bd6cffaab449_11_new,"vlc.VideoHandler","new",0xd61f1242,"vlc.VideoHandler.new","vlc/VideoHandler.hx",11,0xb813948d)
HX_LOCAL_STACK_FRAME(_hx_pos_59c7bd6cffaab449_44_update,"vlc.VideoHandler","update",0xae5b1d67,"vlc.VideoHandler.update","vlc/VideoHandler.hx",44,0xb813948d)
HX_LOCAL_STACK_FRAME(_hx_pos_59c7bd6cffaab449_59_checkFile,"vlc.VideoHandler","checkFile",0x00c06ec6,"vlc.VideoHandler.checkFile","vlc/VideoHandler.hx",59,0xb813948d)
HX_LOCAL_STACK_FRAME(_hx_pos_59c7bd6cffaab449_77_onVLCVideoReady,"vlc.VideoHandler","onVLCVideoReady",0xf49a4cf8,"vlc.VideoHandler.onVLCVideoReady","vlc/VideoHandler.hx",77,0xb813948d)
HX_LOCAL_STACK_FRAME(_hx_pos_59c7bd6cffaab449_87_onVLCError,"vlc.VideoHandler","onVLCError",0xfaaeb6b8,"vlc.VideoHandler.onVLCError","vlc/VideoHandler.hx",87,0xb813948d)
HX_LOCAL_STACK_FRAME(_hx_pos_59c7bd6cffaab449_91_finishVideo,"vlc.VideoHandler","finishVideo",0xfb942b0a,"vlc.VideoHandler.finishVideo","vlc/VideoHandler.hx",91,0xb813948d)
HX_LOCAL_STACK_FRAME(_hx_pos_59c7bd6cffaab449_115_playVideo,"vlc.VideoHandler","playVideo",0xc1051949,"vlc.VideoHandler.playVideo","vlc/VideoHandler.hx",115,0xb813948d)
namespace vlc{

void VideoHandler_obj::__construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< bool >  __o_autoScale){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::vlc::VideoHandler,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_59c7bd6cffaab449_35_new)
HXLINE(  35)			_gthis->resume();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::vlc::VideoHandler,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_59c7bd6cffaab449_39_new)
HXLINE(  39)			_gthis->pause();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		Float width = __o_width.Default(320);
            		Float height = __o_height.Default(240);
            		bool autoScale = __o_autoScale.Default(true);
            	HX_STACKFRAME(&_hx_pos_59c7bd6cffaab449_11_new)
HXLINE(  17)		this->canHaveSound = true;
HXLINE(  16)		this->canSkip = true;
HXLINE(  22)		 ::vlc::VideoHandler _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  23)		super::__construct(width,height,autoScale);
HXLINE(  25)		this->onVideoReady = this->onVLCVideoReady_dyn();
HXLINE(  26)		this->onComplete = this->finishVideo_dyn();
HXLINE(  27)		this->onError = this->onVLCError_dyn();
HXLINE(  29)		::flixel::FlxG_obj::addChildBelowMouse(::hx::ObjectPtr<OBJ_>(this),null());
HXLINE(  31)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("enterFrame",f5,03,50,02),this->update_dyn(),null(),null(),null());
HXLINE(  33)		::flixel::FlxG_obj::signals->focusGained->add( ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  37)		::flixel::FlxG_obj::signals->focusLost->add( ::Dynamic(new _hx_Closure_1(_gthis)));
            	}

Dynamic VideoHandler_obj::__CreateEmpty() { return new VideoHandler_obj; }

void *VideoHandler_obj::_hx_vtable = 0;

Dynamic VideoHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VideoHandler_obj > _hx_result = new VideoHandler_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool VideoHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x58b52de4) {
		if (inClassId<=(int)0x4cc42801) {
			if (inClassId<=(int)0x0c89e854) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
			} else {
				return inClassId==(int)0x4cc42801;
			}
		} else {
			return inClassId==(int)0x58b52de4;
		}
	} else {
		return inClassId==(int)0x626359dc || inClassId==(int)0x6b353933;
	}
}

void VideoHandler_obj::update( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_59c7bd6cffaab449_44_update)
HXLINE(  45)		bool _hx_tmp;
HXDLIN(  45)		bool _hx_tmp1;
HXDLIN(  45)		if (this->canSkip) {
HXLINE(  45)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  45)			if (!(_this->keyManager->checkStatusUnsafe(13,_this->status))) {
HXLINE(  45)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  45)				_hx_tmp1 = _this->keyManager->checkStatusUnsafe(32,_this->status);
            			}
            			else {
HXLINE(  45)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE(  45)			_hx_tmp1 = false;
            		}
HXDLIN(  45)		if (_hx_tmp1) {
HXLINE(  45)			_hx_tmp = this->isPlaying;
            		}
            		else {
HXLINE(  45)			_hx_tmp = false;
            		}
HXDLIN(  45)		if (_hx_tmp) {
HXLINE(  46)			this->finishVideo();
            		}
HXLINE(  48)		if (this->canHaveSound) {
HXLINE(  50)			bool _hx_tmp;
HXDLIN(  50)			if (!(::flixel::FlxG_obj::sound->muted)) {
HXLINE(  50)				_hx_tmp = (::flixel::FlxG_obj::sound->volume <= 0);
            			}
            			else {
HXLINE(  50)				_hx_tmp = true;
            			}
HXDLIN(  50)			if (_hx_tmp) {
HXLINE(  51)				this->set_volume(( (Float)(0) ));
            			}
            			else {
HXLINE(  53)				this->set_volume((::flixel::FlxG_obj::sound->volume + ((Float)0.4)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoHandler_obj,update,(void))

::String VideoHandler_obj::checkFile(::String fileName){
            	HX_STACKFRAME(&_hx_pos_59c7bd6cffaab449_59_checkFile)
HXLINE(  61)		::String pDir = HX_("",00,00,00,00);
HXLINE(  62)		::String appDir = ((HX_("file:///",91,ef,e4,54) + ::Sys_obj::getCwd()) + HX_("/",2f,00,00,00));
HXLINE(  64)		if ((fileName.indexOf(HX_(":",3a,00,00,00),null()) == -1)) {
HXLINE(  65)			pDir = appDir;
            		}
            		else {
HXLINE(  66)			bool _hx_tmp;
HXDLIN(  66)			if ((fileName.indexOf(HX_("file://",de,92,3b,ff),null()) != -1)) {
HXLINE(  66)				_hx_tmp = (fileName.indexOf(HX_("http",88,9b,16,45),null()) == -1);
            			}
            			else {
HXLINE(  66)				_hx_tmp = true;
            			}
HXDLIN(  66)			if (_hx_tmp) {
HXLINE(  67)				pDir = HX_("file:///",91,ef,e4,54);
            			}
            		}
HXLINE(  69)		return (pDir + fileName);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoHandler_obj,checkFile,return )

void VideoHandler_obj::onVLCVideoReady(){
            	HX_STACKFRAME(&_hx_pos_59c7bd6cffaab449_77_onVLCVideoReady)
HXLINE(  78)		::haxe::Log_obj::trace(HX_("Video loaded!",b7,d7,5b,40),::hx::SourceInfo(HX_("source/vlc/VideoHandler.hx",19,2e,58,a9),78,HX_("vlc.VideoHandler",50,89,dc,a3),HX_("onVLCVideoReady",16,c0,82,a6)));
HXLINE(  80)		if (::hx::IsNotNull( this->readyCallback )) {
HXLINE(  81)			this->readyCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,onVLCVideoReady,(void))

void VideoHandler_obj::onVLCError(){
            	HX_STACKFRAME(&_hx_pos_59c7bd6cffaab449_87_onVLCError)
HXDLIN(  87)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("VLC caught an error!",bb,69,0d,c2)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,onVLCError,(void))

void VideoHandler_obj::finishVideo(){
            	HX_STACKFRAME(&_hx_pos_59c7bd6cffaab449_91_finishVideo)
HXLINE(  92)		bool _hx_tmp;
HXDLIN(  92)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  92)			_hx_tmp = this->pauseMusic;
            		}
            		else {
HXLINE(  92)			_hx_tmp = false;
            		}
HXDLIN(  92)		if (_hx_tmp) {
HXLINE(  93)			::flixel::FlxG_obj::sound->music->resume();
            		}
HXLINE(  95)		::openfl::Lib_obj::get_current()->stage->removeEventListener(HX_("enterFrame",f5,03,50,02),this->update_dyn(),null());
HXLINE(  97)		this->dispose();
HXLINE(  99)		if (::flixel::FlxG_obj::game->contains(::hx::ObjectPtr<OBJ_>(this))) {
HXLINE( 101)			::flixel::FlxG_obj::game->removeChild(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 103)			if (::hx::IsNotNull( this->finishCallback )) {
HXLINE( 104)				this->finishCallback();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,finishVideo,(void))

void VideoHandler_obj::playVideo(::String path, ::Dynamic __o_repeat,::hx::Null< bool >  __o_pauseMusic){
            		 ::Dynamic repeat = __o_repeat;
            		if (::hx::IsNull(__o_repeat)) repeat = false;
            		bool pauseMusic = __o_pauseMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_59c7bd6cffaab449_115_playVideo)
HXLINE( 116)		this->pauseMusic = pauseMusic;
HXLINE( 118)		bool _hx_tmp;
HXDLIN( 118)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 118)			_hx_tmp = pauseMusic;
            		}
            		else {
HXLINE( 118)			_hx_tmp = false;
            		}
HXDLIN( 118)		if (_hx_tmp) {
HXLINE( 119)			::flixel::FlxG_obj::sound->music->pause();
            		}
HXLINE( 122)		this->play(this->checkFile(path));
HXLINE( 124)		int _hx_tmp1;
HXDLIN( 124)		if (( (bool)(repeat) )) {
HXLINE( 124)			_hx_tmp1 = -1;
            		}
            		else {
HXLINE( 124)			_hx_tmp1 = 0;
            		}
HXDLIN( 124)		this->repeat = _hx_tmp1;
            	}


HX_DEFINE_DYNAMIC_FUNC3(VideoHandler_obj,playVideo,(void))


::hx::ObjectPtr< VideoHandler_obj > VideoHandler_obj::__new(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< bool >  __o_autoScale) {
	::hx::ObjectPtr< VideoHandler_obj > __this = new VideoHandler_obj();
	__this->__construct(__o_width,__o_height,__o_autoScale);
	return __this;
}

::hx::ObjectPtr< VideoHandler_obj > VideoHandler_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< bool >  __o_autoScale) {
	VideoHandler_obj *__this = (VideoHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VideoHandler_obj), true, "vlc.VideoHandler"));
	*(void **)__this = VideoHandler_obj::_hx_vtable;
	__this->__construct(__o_width,__o_height,__o_autoScale);
	return __this;
}

VideoHandler_obj::VideoHandler_obj()
{
}

void VideoHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VideoHandler);
	HX_MARK_MEMBER_NAME(readyCallback,"readyCallback");
	HX_MARK_MEMBER_NAME(finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(canSkip,"canSkip");
	HX_MARK_MEMBER_NAME(canHaveSound,"canHaveSound");
	HX_MARK_MEMBER_NAME(pauseMusic,"pauseMusic");
	 ::vlc::bitmap::VlcBitmap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VideoHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(readyCallback,"readyCallback");
	HX_VISIT_MEMBER_NAME(finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(canSkip,"canSkip");
	HX_VISIT_MEMBER_NAME(canHaveSound,"canHaveSound");
	HX_VISIT_MEMBER_NAME(pauseMusic,"pauseMusic");
	 ::vlc::bitmap::VlcBitmap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VideoHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canSkip") ) { return ::hx::Val( canSkip ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"checkFile") ) { return ::hx::Val( checkFile_dyn() ); }
		if (HX_FIELD_EQ(inName,"playVideo") ) { return ::hx::Val( playVideo_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { return ::hx::Val( pauseMusic ); }
		if (HX_FIELD_EQ(inName,"onVLCError") ) { return ::hx::Val( onVLCError_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishVideo") ) { return ::hx::Val( finishVideo_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"canHaveSound") ) { return ::hx::Val( canHaveSound ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readyCallback") ) { return ::hx::Val( readyCallback ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { return ::hx::Val( finishCallback ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onVLCVideoReady") ) { return ::hx::Val( onVLCVideoReady_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VideoHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"canSkip") ) { canSkip=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { pauseMusic=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"canHaveSound") ) { canHaveSound=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readyCallback") ) { readyCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VideoHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("canSkip",af,fe,ac,6a));
	outFields->push(HX_("canHaveSound",17,7b,3a,82));
	outFields->push(HX_("pauseMusic",cf,6d,d3,e5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VideoHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VideoHandler_obj,readyCallback),HX_("readyCallback",48,91,6e,fe)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VideoHandler_obj,finishCallback),HX_("finishCallback",38,a1,bc,b4)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,canSkip),HX_("canSkip",af,fe,ac,6a)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,canHaveSound),HX_("canHaveSound",17,7b,3a,82)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,pauseMusic),HX_("pauseMusic",cf,6d,d3,e5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VideoHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String VideoHandler_obj_sMemberFields[] = {
	HX_("readyCallback",48,91,6e,fe),
	HX_("finishCallback",38,a1,bc,b4),
	HX_("canSkip",af,fe,ac,6a),
	HX_("canHaveSound",17,7b,3a,82),
	HX_("pauseMusic",cf,6d,d3,e5),
	HX_("update",09,86,05,87),
	HX_("checkFile",64,97,9b,97),
	HX_("onVLCVideoReady",16,c0,82,a6),
	HX_("onVLCError",5a,18,97,63),
	HX_("finishVideo",28,37,01,5e),
	HX_("playVideo",e7,41,e0,57),
	::String(null()) };

::hx::Class VideoHandler_obj::__mClass;

void VideoHandler_obj::__register()
{
	VideoHandler_obj _hx_dummy;
	VideoHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("vlc.VideoHandler",50,89,dc,a3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VideoHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VideoHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VideoHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VideoHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace vlc
