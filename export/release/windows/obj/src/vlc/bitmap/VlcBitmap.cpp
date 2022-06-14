#include <hxcpp.h>

#ifndef INCLUDED_13fd500b2aab5f87
#define INCLUDED_13fd500b2aab5f87
#include "LibVLC.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
#ifndef INCLUDED_vlc_bitmap_VlcBitmap
#include <vlc/bitmap/VlcBitmap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_22ff94e7f38bb929_22_new,"vlc.bitmap.VlcBitmap","new",0xec6757f0,"vlc.bitmap.VlcBitmap.new","vlc/bitmap/VlcBitmap.hx",22,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_97_mThread,"vlc.bitmap.VlcBitmap","mThread",0x6b880ea7,"vlc.bitmap.VlcBitmap.mThread","vlc/bitmap/VlcBitmap.hx",97,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_104_init,"vlc.bitmap.VlcBitmap","init",0xeabe5180,"vlc.bitmap.VlcBitmap.init","vlc/bitmap/VlcBitmap.hx",104,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_108_onAddedToStage,"vlc.bitmap.VlcBitmap","onAddedToStage",0xdb8e0492,"vlc.bitmap.VlcBitmap.onAddedToStage","vlc/bitmap/VlcBitmap.hx",108,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_117_onResize,"vlc.bitmap.VlcBitmap","onResize",0x184f5ee3,"vlc.bitmap.VlcBitmap.onResize","vlc/bitmap/VlcBitmap.hx",117,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_124_getVideoWidth,"vlc.bitmap.VlcBitmap","getVideoWidth",0xac21eb51,"vlc.bitmap.VlcBitmap.getVideoWidth","vlc/bitmap/VlcBitmap.hx",124,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_144_getVideoHeight,"vlc.bitmap.VlcBitmap","getVideoHeight",0xa7db743c,"vlc.bitmap.VlcBitmap.getVideoHeight","vlc/bitmap/VlcBitmap.hx",144,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_165_play,"vlc.bitmap.VlcBitmap","play",0xef5d4464,"vlc.bitmap.VlcBitmap.play","vlc/bitmap/VlcBitmap.hx",165,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_182_stop,"vlc.bitmap.VlcBitmap","stop",0xf15f0672,"vlc.bitmap.VlcBitmap.stop","vlc/bitmap/VlcBitmap.hx",182,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_195_pause,"vlc.bitmap.VlcBitmap","pause",0x7b086286,"vlc.bitmap.VlcBitmap.pause","vlc/bitmap/VlcBitmap.hx",195,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_208_resume,"vlc.bitmap.VlcBitmap","resume",0x454dfc1d,"vlc.bitmap.VlcBitmap.resume","vlc/bitmap/VlcBitmap.hx",208,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_221_seek,"vlc.bitmap.VlcBitmap","seek",0xf1539be8,"vlc.bitmap.VlcBitmap.seek","vlc/bitmap/VlcBitmap.hx",221,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_234_getFPS,"vlc.bitmap.VlcBitmap","getFPS",0xdfe67763,"vlc.bitmap.VlcBitmap.getFPS","vlc/bitmap/VlcBitmap.hx",234,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_252_setTime,"vlc.bitmap.VlcBitmap","setTime",0x06179c5f,"vlc.bitmap.VlcBitmap.setTime","vlc/bitmap/VlcBitmap.hx",252,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_257_getTime,"vlc.bitmap.VlcBitmap","getTime",0x13160b53,"vlc.bitmap.VlcBitmap.getTime","vlc/bitmap/VlcBitmap.hx",257,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_273_checkFlags,"vlc.bitmap.VlcBitmap","checkFlags",0xe557b7cf,"vlc.bitmap.VlcBitmap.checkFlags","vlc/bitmap/VlcBitmap.hx",273,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_339_videoInitComplete,"vlc.bitmap.VlcBitmap","videoInitComplete",0x80f2d894,"vlc.bitmap.VlcBitmap.videoInitComplete","vlc/bitmap/VlcBitmap.hx",339,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_388_vLoop,"vlc.bitmap.VlcBitmap","vLoop",0xe189d18a,"vlc.bitmap.VlcBitmap.vLoop","vlc/bitmap/VlcBitmap.hx",388,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_396_render,"vlc.bitmap.VlcBitmap","render",0x41f2fdc6,"vlc.bitmap.VlcBitmap.render","vlc/bitmap/VlcBitmap.hx",396,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_435_setVolume,"vlc.bitmap.VlcBitmap","setVolume",0xb10032ac,"vlc.bitmap.VlcBitmap.setVolume","vlc/bitmap/VlcBitmap.hx",435,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_447_getVolume,"vlc.bitmap.VlcBitmap","getVolume",0xcdaf46a0,"vlc.bitmap.VlcBitmap.getVolume","vlc/bitmap/VlcBitmap.hx",447,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_467_statusOnOpening,"vlc.bitmap.VlcBitmap","statusOnOpening",0x5825ddf7,"vlc.bitmap.VlcBitmap.statusOnOpening","vlc/bitmap/VlcBitmap.hx",467,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_477_statusOnBuffering,"vlc.bitmap.VlcBitmap","statusOnBuffering",0x27537041,"vlc.bitmap.VlcBitmap.statusOnBuffering","vlc/bitmap/VlcBitmap.hx",477,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_483_statusOnPlaying,"vlc.bitmap.VlcBitmap","statusOnPlaying",0xa1f8ea0d,"vlc.bitmap.VlcBitmap.statusOnPlaying","vlc/bitmap/VlcBitmap.hx",483,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_492_statusOnPaused,"vlc.bitmap.VlcBitmap","statusOnPaused",0x500ddeef,"vlc.bitmap.VlcBitmap.statusOnPaused","vlc/bitmap/VlcBitmap.hx",492,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_505_statusOnStopped,"vlc.bitmap.VlcBitmap","statusOnStopped",0x5b42acac,"vlc.bitmap.VlcBitmap.statusOnStopped","vlc/bitmap/VlcBitmap.hx",505,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_518_statusOnEndReached,"vlc.bitmap.VlcBitmap","statusOnEndReached",0x3e1672b8,"vlc.bitmap.VlcBitmap.statusOnEndReached","vlc/bitmap/VlcBitmap.hx",518,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_531_statusOnTimeChanged,"vlc.bitmap.VlcBitmap","statusOnTimeChanged",0xae2e6e86,"vlc.bitmap.VlcBitmap.statusOnTimeChanged","vlc/bitmap/VlcBitmap.hx",531,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_542_statusOnPositionChanged,"vlc.bitmap.VlcBitmap","statusOnPositionChanged",0x5b3fa0ea,"vlc.bitmap.VlcBitmap.statusOnPositionChanged","vlc/bitmap/VlcBitmap.hx",542,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_554_statusOnSeekableChanged,"vlc.bitmap.VlcBitmap","statusOnSeekableChanged",0xe43fc1a1,"vlc.bitmap.VlcBitmap.statusOnSeekableChanged","vlc/bitmap/VlcBitmap.hx",554,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_558_statusOnForward,"vlc.bitmap.VlcBitmap","statusOnForward",0xfdabbc64,"vlc.bitmap.VlcBitmap.statusOnForward","vlc/bitmap/VlcBitmap.hx",558,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_560_statusOnBackward,"vlc.bitmap.VlcBitmap","statusOnBackward",0xf3f74c64,"vlc.bitmap.VlcBitmap.statusOnBackward","vlc/bitmap/VlcBitmap.hx",560,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_562_onDisplay,"vlc.bitmap.VlcBitmap","onDisplay",0x84fa7673,"vlc.bitmap.VlcBitmap.onDisplay","vlc/bitmap/VlcBitmap.hx",562,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_570_statusOnError,"vlc.bitmap.VlcBitmap","statusOnError",0xb07070a7,"vlc.bitmap.VlcBitmap.statusOnError","vlc/bitmap/VlcBitmap.hx",570,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_582_get_width,"vlc.bitmap.VlcBitmap","get_width",0x0011a5ed,"vlc.bitmap.VlcBitmap.get_width","vlc/bitmap/VlcBitmap.hx",582,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_586_set_width,"vlc.bitmap.VlcBitmap","set_width",0xe36291f9,"vlc.bitmap.VlcBitmap.set_width","vlc/bitmap/VlcBitmap.hx",586,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_602_get_height,"vlc.bitmap.VlcBitmap","get_height",0xc5af0220,"vlc.bitmap.VlcBitmap.get_height","vlc/bitmap/VlcBitmap.hx",602,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_606_set_height,"vlc.bitmap.VlcBitmap","set_height",0xc92ca094,"vlc.bitmap.VlcBitmap.set_height","vlc/bitmap/VlcBitmap.hx",606,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_622_get_volume,"vlc.bitmap.VlcBitmap","get_volume",0x22b62413,"vlc.bitmap.VlcBitmap.get_volume","vlc/bitmap/VlcBitmap.hx",622,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_626_set_volume,"vlc.bitmap.VlcBitmap","set_volume",0x2633c287,"vlc.bitmap.VlcBitmap.set_volume","vlc/bitmap/VlcBitmap.hx",626,0x313917a0)
HX_LOCAL_STACK_FRAME(_hx_pos_22ff94e7f38bb929_640_dispose,"vlc.bitmap.VlcBitmap","dispose",0xaee3102f,"vlc.bitmap.VlcBitmap.dispose","vlc/bitmap/VlcBitmap.hx",640,0x313917a0)
#include "LibVLC.cpp"
namespace vlc{
namespace bitmap{

void VlcBitmap_obj::__construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height, ::Dynamic __o_autoScale){
            		Float width = __o_width.Default(320);
            		Float height = __o_height.Default(240);
            		 ::Dynamic autoScale = __o_autoScale;
            		if (::hx::IsNull(__o_autoScale)) autoScale = true;
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_22_new)
HXLINE(  41)		this->disposeOnStop = false;
HXLINE(  37)		this->volume = ((Float)1);
HXLINE(  33)		this->repeat = 0;
HXLINE(  79)		super::__construct(null(),null(),true);
HXLINE(  81)		if (( (bool)(autoScale) )) {
HXLINE(  83)			this->set_width(this->getVideoWidth());
HXLINE(  84)			this->set_height(this->getVideoHeight());
            		}
            		else {
HXLINE(  88)			this->set_width(width);
HXLINE(  89)			this->set_height(height);
            		}
HXLINE(  92)		this->init();
            	}

Dynamic VlcBitmap_obj::__CreateEmpty() { return new VlcBitmap_obj; }

void *VlcBitmap_obj::_hx_vtable = 0;

Dynamic VlcBitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VlcBitmap_obj > _hx_result = new VlcBitmap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool VlcBitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4cc42801) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x4cc42801;
		}
	} else {
		return inClassId==(int)0x58b52de4 || inClassId==(int)0x6b353933;
	}
}

void VlcBitmap_obj::mThread(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_97_mThread)
HXDLIN(  97)		this->init();
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,mThread,(void))

void VlcBitmap_obj::init(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_104_init)
HXDLIN( 104)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->onAddedToStage_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,init,(void))

void VlcBitmap_obj::onAddedToStage( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_108_onAddedToStage)
HXLINE( 109)		this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->onAddedToStage_dyn(),null());
HXLINE( 111)		this->libvlc = LibVLC::create();
HXLINE( 112)		this->stage->addEventListener(HX_("resize",f4,59,7b,08),this->onResize_dyn(),null(),null(),null());
HXLINE( 113)		this->stage->addEventListener(HX_("enterFrame",f5,03,50,02),this->vLoop_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,onAddedToStage,(void))

void VlcBitmap_obj::onResize( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_117_onResize)
HXLINE( 118)		this->set_width(this->getVideoWidth());
HXLINE( 119)		this->set_height(this->getVideoHeight());
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,onResize,(void))

Float VlcBitmap_obj::getVideoWidth(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_124_getVideoWidth)
HXDLIN( 124)		Float _hx_tmp = (( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) ) / ( (Float)(9) ));
HXDLIN( 124)		if ((_hx_tmp < (( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) ) / ( (Float)(16) )))) {
HXLINE( 130)			return (( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) ) * ((Float)1.7777777777777777));
            		}
            		else {
HXLINE( 138)			return ( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) );
            		}
HXLINE( 124)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,getVideoWidth,return )

Float VlcBitmap_obj::getVideoHeight(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_144_getVideoHeight)
HXDLIN( 144)		Float _hx_tmp = (( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) ) / ( (Float)(9) ));
HXDLIN( 144)		if ((_hx_tmp < (( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) ) / ( (Float)(16) )))) {
HXLINE( 150)			return ( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) );
            		}
            		else {
HXLINE( 158)			return (( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) ) / ((Float)1.7777777777777777));
            		}
HXLINE( 144)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,getVideoHeight,return )

void VlcBitmap_obj::play(::String source){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_165_play)
HXLINE( 166)		this->libvlc->setRepeat(this->repeat);
HXLINE( 168)		if (::hx::IsNotNull( source )) {
HXLINE( 169)			this->libvlc->play(source);
            		}
            		else {
HXLINE( 171)			this->libvlc->play();
            		}
HXLINE( 177)		if (::hx::IsNotNull( this->onPlay )) {
HXLINE( 178)			this->onPlay();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,play,(void))

void VlcBitmap_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_182_stop)
HXLINE( 183)		this->isPlaying = false;
HXLINE( 184)		this->libvlc->stop();
HXLINE( 190)		if (::hx::IsNotNull( this->onStop )) {
HXLINE( 191)			this->onStop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,stop,(void))

void VlcBitmap_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_195_pause)
HXLINE( 196)		this->isPlaying = false;
HXLINE( 197)		this->libvlc->pause();
HXLINE( 203)		if (::hx::IsNotNull( this->onPause )) {
HXLINE( 204)			this->onPause();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,pause,(void))

void VlcBitmap_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_208_resume)
HXLINE( 209)		this->isPlaying = true;
HXLINE( 210)		this->libvlc->resume();
HXLINE( 216)		if (::hx::IsNotNull( this->onResume )) {
HXLINE( 217)			this->onResume();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,resume,(void))

void VlcBitmap_obj::seek(Float seekTotime){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_221_seek)
HXLINE( 222)		this->libvlc->setPosition(seekTotime);
HXLINE( 228)		if (::hx::IsNotNull( this->onSeek )) {
HXLINE( 229)			this->onSeek();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,seek,(void))

Float VlcBitmap_obj::getFPS(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_234_getFPS)
HXDLIN( 234)		bool _hx_tmp;
HXDLIN( 234)		if (::hx::IsNotNull( this->libvlc )) {
HXDLIN( 234)			_hx_tmp = this->initComplete;
            		}
            		else {
HXDLIN( 234)			_hx_tmp = false;
            		}
HXDLIN( 234)		if (_hx_tmp) {
HXLINE( 240)			return this->libvlc->getFPS();
            		}
            		else {
HXLINE( 243)			return ( (Float)(0) );
            		}
HXLINE( 234)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,getFPS,return )

void VlcBitmap_obj::setTime(int time){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_252_setTime)
HXDLIN( 252)		this->libvlc->setTime(time);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,setTime,(void))

int VlcBitmap_obj::getTime(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_257_getTime)
HXDLIN( 257)		bool _hx_tmp;
HXDLIN( 257)		if (::hx::IsNotNull( this->libvlc )) {
HXDLIN( 257)			_hx_tmp = this->initComplete;
            		}
            		else {
HXDLIN( 257)			_hx_tmp = false;
            		}
HXDLIN( 257)		if (_hx_tmp) {
HXLINE( 263)			return this->libvlc->getTime();
            		}
            		else {
HXLINE( 266)			return 0;
            		}
HXLINE( 257)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,getTime,return )

void VlcBitmap_obj::checkFlags(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_273_checkFlags)
HXDLIN( 273)		if (!(this->isDisposed)) {
HXLINE( 275)			if (::hx::IsEq( libvlc->flags[1],1 )) {
HXLINE( 277)				libvlc->flags[1]=-1;
HXLINE( 278)				this->statusOnPlaying();
            			}
HXLINE( 280)			if (::hx::IsEq( libvlc->flags[2],1 )) {
HXLINE( 282)				libvlc->flags[2]=-1;
HXLINE( 283)				this->statusOnPaused();
            			}
HXLINE( 285)			if (::hx::IsEq( libvlc->flags[3],1 )) {
HXLINE( 287)				libvlc->flags[3]=-1;
HXLINE( 288)				this->statusOnStopped();
            			}
HXLINE( 290)			if (::hx::IsEq( libvlc->flags[4],1 )) {
HXLINE( 292)				libvlc->flags[4]=-1;
HXLINE( 293)				this->statusOnEndReached();
            			}
HXLINE( 295)			if (::hx::IsNotEq( libvlc->flags[5],-1 )) {
HXLINE( 297)				this->statusOnTimeChanged(libvlc->flags[5]);
            			}
HXLINE( 299)			if (::hx::IsNotEq( libvlc->flags[6],-1 )) {
HXLINE( 301)				this->statusOnPositionChanged(libvlc->flags[9]);
            			}
HXLINE( 303)			if (::hx::IsEq( libvlc->flags[9],1 )) {
HXLINE( 305)				libvlc->flags[9]=-1;
HXLINE( 306)				this->statusOnError();
            			}
HXLINE( 308)			if (::hx::IsEq( libvlc->flags[10],1 )) {
HXLINE( 310)				libvlc->flags[10]=-1;
HXLINE( 311)				this->statusOnSeekableChanged(0);
            			}
HXLINE( 313)			if (::hx::IsEq( libvlc->flags[11],1 )) {
HXLINE( 315)				libvlc->flags[11]=-1;
HXLINE( 316)				this->statusOnOpening();
            			}
HXLINE( 318)			if (::hx::IsEq( libvlc->flags[12],1 )) {
HXLINE( 320)				libvlc->flags[12]=-1;
HXLINE( 321)				this->statusOnBuffering();
            			}
HXLINE( 323)			if (::hx::IsEq( libvlc->flags[13],1 )) {
HXLINE( 325)				libvlc->flags[13]=-1;
HXLINE( 326)				this->statusOnForward();
            			}
HXLINE( 328)			if (::hx::IsEq( libvlc->flags[14],1 )) {
HXLINE( 330)				libvlc->flags[14]=-1;
HXLINE( 331)				this->statusOnBackward();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,checkFlags,(void))

void VlcBitmap_obj::videoInitComplete(){
            	HX_GC_STACKFRAME(&_hx_pos_22ff94e7f38bb929_339_videoInitComplete)
HXLINE( 344)		this->videoWidth = this->libvlc->getWidth();
HXLINE( 345)		this->videoHeight = this->libvlc->getHeight();
HXLINE( 347)		this->duration = this->libvlc->getDuration();
HXLINE( 348)		this->length = this->libvlc->getLength();
HXLINE( 350)		if (::hx::IsNotNull( this->get_bitmapData() )) {
HXLINE( 351)			this->get_bitmapData()->dispose();
            		}
HXLINE( 353)		if (::hx::IsNotNull( this->texture )) {
HXLINE( 354)			this->texture->dispose();
            		}
HXLINE( 357)		int _hx_tmp = ::Std_obj::_hx_int(( (Float)(this->videoWidth) ));
HXDLIN( 357)		this->set_bitmapData( ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,_hx_tmp,::Std_obj::_hx_int(( (Float)(this->videoHeight) )),true,0));
HXLINE( 358)		int _hx_tmp1 = ::Std_obj::_hx_int(( (Float)(this->videoWidth) ));
HXDLIN( 358)		this->frameRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,_hx_tmp1,::Std_obj::_hx_int(( (Float)(this->videoHeight) )));
HXLINE( 360)		this->smoothing = true;
HXLINE( 362)		if (::hx::IsNotNull( this->_width )) {
HXLINE( 363)			this->set_width(( (Float)(this->_width) ));
            		}
            		else {
HXLINE( 365)			this->set_width(( (Float)(this->videoWidth) ));
            		}
HXLINE( 367)		if (::hx::IsNotNull( this->_height )) {
HXLINE( 368)			this->set_height(( (Float)(this->_height) ));
            		}
            		else {
HXLINE( 370)			this->set_height(( (Float)(this->videoHeight) ));
            		}
HXLINE( 373)		this->bufferMem = ::Array_obj< unsigned char >::__new(0);
HXLINE( 375)		this->frameSize = ((this->videoWidth * this->videoHeight) * 4);
HXLINE( 377)		this->setVolume(this->volume);
HXLINE( 379)		this->initComplete = true;
HXLINE( 381)		if (::hx::IsNotNull( this->onVideoReady )) {
HXLINE( 382)			this->onVideoReady();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,videoInitComplete,(void))

void VlcBitmap_obj::vLoop( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_388_vLoop)
HXLINE( 389)		this->checkFlags();
HXLINE( 390)		this->render();
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,vLoop,(void))

void VlcBitmap_obj::render(){
            	HX_GC_STACKFRAME(&_hx_pos_22ff94e7f38bb929_396_render)
HXLINE( 397)		int cTime = ::openfl::Lib_obj::getTimer();
HXLINE( 399)		if (((cTime - this->oldTime) > ((Float)8.3))) {
HXLINE( 401)			this->oldTime = cTime;
HXLINE( 403)			if (this->isPlaying) {
HXLINE( 405)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 412)					::cpp::Pointer< unsigned char > tmp = this->libvlc->getPixelData();
HXDLIN( 412)					this->bufferMem->setUnmanagedData(tmp,this->frameSize);
HXLINE( 413)					if (::hx::IsNotNull( this->bufferMem )) {
HXLINE( 417)						::cpp::Pointer< unsigned char > _hx_tmp = this->libvlc->getPixelData();
HXDLIN( 417)						if (::hx::IsNotNull( _hx_tmp )) {
HXLINE( 418)							 ::openfl::display::BitmapData _hx_tmp = this->get_bitmapData();
HXDLIN( 418)							 ::openfl::geom::Rectangle _hx_tmp1 = this->frameRect;
HXDLIN( 418)							_hx_tmp->setPixels(_hx_tmp1,::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::io::Bytes_obj::ofData(this->bufferMem)));
            						}
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 422)						{
HXLINE( 422)							null();
            						}
HXDLIN( 422)						 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 405)						if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::openfl::errors::Error >())) {
HXLINE( 422)							 ::openfl::errors::Error e = ( ( ::openfl::errors::Error)(_g1) );
HXLINE( 424)							 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 424)							::String _hx_tmp1 = (HX_("error: ",6e,80,0a,ea) + ::Std_obj::string(e));
HXDLIN( 424)							_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/vlc/bitmap/VlcBitmap.hx",2c,67,57,ff),424,HX_("vlc.bitmap.VlcBitmap",fe,df,88,4e),HX_("render",56,6b,29,05)));
HXLINE( 425)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("render broke xd",bd,88,39,4f),null())));
            						}
            						else {
HXLINE( 405)							HX_STACK_DO_THROW(_g);
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,render,(void))

void VlcBitmap_obj::setVolume(Float vol){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_435_setVolume)
HXDLIN( 435)		bool _hx_tmp;
HXDLIN( 435)		if (::hx::IsNotNull( this->libvlc )) {
HXDLIN( 435)			_hx_tmp = this->initComplete;
            		}
            		else {
HXDLIN( 435)			_hx_tmp = false;
            		}
HXDLIN( 435)		if (_hx_tmp) {
HXLINE( 441)			this->libvlc->setVolume((vol * ( (Float)(100) )));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,setVolume,(void))

Float VlcBitmap_obj::getVolume(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_447_getVolume)
HXDLIN( 447)		bool _hx_tmp;
HXDLIN( 447)		if (::hx::IsNotNull( this->libvlc )) {
HXDLIN( 447)			_hx_tmp = this->initComplete;
            		}
            		else {
HXDLIN( 447)			_hx_tmp = false;
            		}
HXDLIN( 447)		if (_hx_tmp) {
HXLINE( 453)			return this->libvlc->getVolume();
            		}
            		else {
HXLINE( 456)			return ( (Float)(0) );
            		}
HXLINE( 447)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,getVolume,return )

void VlcBitmap_obj::statusOnOpening(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_467_statusOnOpening)
HXDLIN( 467)		if (::hx::IsNotNull( this->onOpening )) {
HXLINE( 468)			this->onOpening();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnOpening,(void))

void VlcBitmap_obj::statusOnBuffering(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_477_statusOnBuffering)
HXDLIN( 477)		if (::hx::IsNotNull( this->onBuffer )) {
HXLINE( 478)			this->onBuffer();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnBuffering,(void))

void VlcBitmap_obj::statusOnPlaying(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_483_statusOnPlaying)
HXDLIN( 483)		if (!(this->initComplete)) {
HXLINE( 485)			this->isPlaying = true;
HXLINE( 486)			this->initComplete = true;
HXLINE( 487)			this->videoInitComplete();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnPlaying,(void))

void VlcBitmap_obj::statusOnPaused(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_492_statusOnPaused)
HXLINE( 493)		if (this->isPlaying) {
HXLINE( 494)			this->isPlaying = false;
            		}
HXLINE( 500)		if (::hx::IsNotNull( this->onPause )) {
HXLINE( 501)			this->onPause();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnPaused,(void))

void VlcBitmap_obj::statusOnStopped(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_505_statusOnStopped)
HXLINE( 506)		if (this->isPlaying) {
HXLINE( 507)			this->isPlaying = false;
            		}
HXLINE( 513)		if (::hx::IsNotNull( this->onStop )) {
HXLINE( 514)			this->onStop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnStopped,(void))

void VlcBitmap_obj::statusOnEndReached(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_518_statusOnEndReached)
HXLINE( 519)		if (this->isPlaying) {
HXLINE( 520)			this->isPlaying = false;
            		}
HXLINE( 526)		if (::hx::IsNotNull( this->onComplete )) {
HXLINE( 527)			this->onComplete();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnEndReached,(void))

void VlcBitmap_obj::statusOnTimeChanged(int newTime){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_531_statusOnTimeChanged)
HXLINE( 532)		this->time = newTime;
HXLINE( 538)		if (::hx::IsNotNull( this->onProgress )) {
HXLINE( 539)			this->onProgress();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,statusOnTimeChanged,(void))

void VlcBitmap_obj::statusOnPositionChanged(int newPos){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_542_statusOnPositionChanged)
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,statusOnPositionChanged,(void))

void VlcBitmap_obj::statusOnSeekableChanged(int newPos){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_554_statusOnSeekableChanged)
HXDLIN( 554)		if (::hx::IsNotNull( this->onSeek )) {
HXLINE( 555)			this->onSeek();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,statusOnSeekableChanged,(void))

void VlcBitmap_obj::statusOnForward(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_558_statusOnForward)
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnForward,(void))

void VlcBitmap_obj::statusOnBackward(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_560_statusOnBackward)
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnBackward,(void))

void VlcBitmap_obj::onDisplay(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_562_onDisplay)
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,onDisplay,(void))

void VlcBitmap_obj::statusOnError(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_570_statusOnError)
HXDLIN( 570)		if (::hx::IsNotNull( this->onError )) {
HXLINE( 571)			this->onError();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnError,(void))

Float VlcBitmap_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_582_get_width)
HXDLIN( 582)		return ( (Float)(this->_width) );
            	}


Float VlcBitmap_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_586_set_width)
HXLINE( 587)		this->_width = value;
HXLINE( 593)		return this->super::set_width(value);
            	}


Float VlcBitmap_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_602_get_height)
HXDLIN( 602)		return ( (Float)(this->_height) );
            	}


Float VlcBitmap_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_606_set_height)
HXLINE( 607)		this->_height = value;
HXLINE( 613)		return this->super::set_height(value);
            	}


Float VlcBitmap_obj::get_volume(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_622_get_volume)
HXDLIN( 622)		return this->volume;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,get_volume,return )

Float VlcBitmap_obj::set_volume(Float value){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_626_set_volume)
HXLINE( 631)		this->setVolume(value);
HXLINE( 632)		return (this->volume = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,set_volume,return )

void VlcBitmap_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_22ff94e7f38bb929_640_dispose)
HXLINE( 645)		this->libvlc->stop();
HXLINE( 647)		this->stage->removeEventListener(HX_("enterFrame",f5,03,50,02),this->vLoop_dyn(),null());
HXLINE( 648)		this->stage->removeEventListener(HX_("resize",f4,59,7b,08),this->onResize_dyn(),null());
HXLINE( 650)		if (::hx::IsNotNull( this->texture )) {
HXLINE( 652)			this->texture->dispose();
HXLINE( 653)			this->texture = null();
            		}
HXLINE( 655)		this->onVideoReady = null();
HXLINE( 656)		this->onComplete = null();
HXLINE( 657)		this->onPause = null();
HXLINE( 658)		this->onPlay = null();
HXLINE( 659)		this->onResume = null();
HXLINE( 660)		this->onSeek = null();
HXLINE( 661)		this->onStop = null();
HXLINE( 662)		this->onBuffer = null();
HXLINE( 663)		this->onProgress = null();
HXLINE( 664)		this->onError = null();
HXLINE( 666)		this->bufferMem = null();
HXLINE( 668)		this->isDisposed = true;
HXLINE( 670)		while(true){
HXLINE( 670)			bool _hx_tmp;
HXDLIN( 670)			if (!(this->isPlaying)) {
HXLINE( 670)				_hx_tmp = !(this->isDisposed);
            			}
            			else {
HXLINE( 670)				_hx_tmp = false;
            			}
HXDLIN( 670)			if (!(_hx_tmp)) {
HXLINE( 670)				goto _hx_goto_40;
            			}
HXLINE( 672)			this->libvlc = null();
            		}
            		_hx_goto_40:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,dispose,(void))


::hx::ObjectPtr< VlcBitmap_obj > VlcBitmap_obj::__new(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height, ::Dynamic __o_autoScale) {
	::hx::ObjectPtr< VlcBitmap_obj > __this = new VlcBitmap_obj();
	__this->__construct(__o_width,__o_height,__o_autoScale);
	return __this;
}

::hx::ObjectPtr< VlcBitmap_obj > VlcBitmap_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height, ::Dynamic __o_autoScale) {
	VlcBitmap_obj *__this = (VlcBitmap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VlcBitmap_obj), true, "vlc.bitmap.VlcBitmap"));
	*(void **)__this = VlcBitmap_obj::_hx_vtable;
	__this->__construct(__o_width,__o_height,__o_autoScale);
	return __this;
}

VlcBitmap_obj::VlcBitmap_obj()
{
}

void VlcBitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VlcBitmap);
	HX_MARK_MEMBER_NAME(videoWidth,"videoWidth");
	HX_MARK_MEMBER_NAME(videoHeight,"videoHeight");
	HX_MARK_MEMBER_NAME(repeat,"repeat");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(initComplete,"initComplete");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(isDisposed,"isDisposed");
	HX_MARK_MEMBER_NAME(isPlaying,"isPlaying");
	HX_MARK_MEMBER_NAME(disposeOnStop,"disposeOnStop");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(onVideoReady,"onVideoReady");
	HX_MARK_MEMBER_NAME(onPlay,"onPlay");
	HX_MARK_MEMBER_NAME(onStop,"onStop");
	HX_MARK_MEMBER_NAME(onPause,"onPause");
	HX_MARK_MEMBER_NAME(onResume,"onResume");
	HX_MARK_MEMBER_NAME(onSeek,"onSeek");
	HX_MARK_MEMBER_NAME(onBuffer,"onBuffer");
	HX_MARK_MEMBER_NAME(onProgress,"onProgress");
	HX_MARK_MEMBER_NAME(onOpening,"onOpening");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(onError,"onError");
	HX_MARK_MEMBER_NAME(bufferMem,"bufferMem");
	HX_MARK_MEMBER_NAME(libvlc,"libvlc");
	HX_MARK_MEMBER_NAME(frameSize,"frameSize");
	HX_MARK_MEMBER_NAME(oldTime,"oldTime");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(frameRect,"frameRect");
	 ::openfl::display::Bitmap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VlcBitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(videoWidth,"videoWidth");
	HX_VISIT_MEMBER_NAME(videoHeight,"videoHeight");
	HX_VISIT_MEMBER_NAME(repeat,"repeat");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(initComplete,"initComplete");
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(isDisposed,"isDisposed");
	HX_VISIT_MEMBER_NAME(isPlaying,"isPlaying");
	HX_VISIT_MEMBER_NAME(disposeOnStop,"disposeOnStop");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(onVideoReady,"onVideoReady");
	HX_VISIT_MEMBER_NAME(onPlay,"onPlay");
	HX_VISIT_MEMBER_NAME(onStop,"onStop");
	HX_VISIT_MEMBER_NAME(onPause,"onPause");
	HX_VISIT_MEMBER_NAME(onResume,"onResume");
	HX_VISIT_MEMBER_NAME(onSeek,"onSeek");
	HX_VISIT_MEMBER_NAME(onBuffer,"onBuffer");
	HX_VISIT_MEMBER_NAME(onProgress,"onProgress");
	HX_VISIT_MEMBER_NAME(onOpening,"onOpening");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(onError,"onError");
	HX_VISIT_MEMBER_NAME(bufferMem,"bufferMem");
	HX_VISIT_MEMBER_NAME(libvlc,"libvlc");
	HX_VISIT_MEMBER_NAME(frameSize,"frameSize");
	HX_VISIT_MEMBER_NAME(oldTime,"oldTime");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(frameRect,"frameRect");
	 ::openfl::display::Bitmap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VlcBitmap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return ::hx::Val( time ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		if (HX_FIELD_EQ(inName,"seek") ) { return ::hx::Val( seek_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		if (HX_FIELD_EQ(inName,"vLoop") ) { return ::hx::Val( vLoop_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { return ::hx::Val( repeat ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"volume") ) { return ::hx::Val( volume ); }
		if (HX_FIELD_EQ(inName,"onPlay") ) { return ::hx::Val( onPlay ); }
		if (HX_FIELD_EQ(inName,"onStop") ) { return ::hx::Val( onStop ); }
		if (HX_FIELD_EQ(inName,"onSeek") ) { return ::hx::Val( onSeek ); }
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFPS") ) { return ::hx::Val( getFPS_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onPause") ) { return ::hx::Val( onPause ); }
		if (HX_FIELD_EQ(inName,"onError") ) { return ::hx::Val( onError ); }
		if (HX_FIELD_EQ(inName,"oldTime") ) { return ::hx::Val( oldTime ); }
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"texture") ) { return ::hx::Val( texture ); }
		if (HX_FIELD_EQ(inName,"mThread") ) { return ::hx::Val( mThread_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTime") ) { return ::hx::Val( setTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTime") ) { return ::hx::Val( getTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		if (HX_FIELD_EQ(inName,"onResume") ) { return ::hx::Val( onResume ); }
		if (HX_FIELD_EQ(inName,"onBuffer") ) { return ::hx::Val( onBuffer ); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return ::hx::Val( onResize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPlaying") ) { return ::hx::Val( isPlaying ); }
		if (HX_FIELD_EQ(inName,"onOpening") ) { return ::hx::Val( onOpening ); }
		if (HX_FIELD_EQ(inName,"bufferMem") ) { return ::hx::Val( bufferMem ); }
		if (HX_FIELD_EQ(inName,"frameSize") ) { return ::hx::Val( frameSize ); }
		if (HX_FIELD_EQ(inName,"frameRect") ) { return ::hx::Val( frameRect ); }
		if (HX_FIELD_EQ(inName,"setVolume") ) { return ::hx::Val( setVolume_dyn() ); }
		if (HX_FIELD_EQ(inName,"getVolume") ) { return ::hx::Val( getVolume_dyn() ); }
		if (HX_FIELD_EQ(inName,"onDisplay") ) { return ::hx::Val( onDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"videoWidth") ) { return ::hx::Val( videoWidth ); }
		if (HX_FIELD_EQ(inName,"isDisposed") ) { return ::hx::Val( isDisposed ); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return ::hx::Val( onProgress ); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"checkFlags") ) { return ::hx::Val( checkFlags_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return ::hx::Val( get_volume_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return ::hx::Val( set_volume_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoHeight") ) { return ::hx::Val( videoHeight ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initComplete") ) { return ::hx::Val( initComplete ); }
		if (HX_FIELD_EQ(inName,"onVideoReady") ) { return ::hx::Val( onVideoReady ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"disposeOnStop") ) { return ::hx::Val( disposeOnStop ); }
		if (HX_FIELD_EQ(inName,"getVideoWidth") ) { return ::hx::Val( getVideoWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"statusOnError") ) { return ::hx::Val( statusOnError_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAddedToStage") ) { return ::hx::Val( onAddedToStage_dyn() ); }
		if (HX_FIELD_EQ(inName,"getVideoHeight") ) { return ::hx::Val( getVideoHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"statusOnPaused") ) { return ::hx::Val( statusOnPaused_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"statusOnOpening") ) { return ::hx::Val( statusOnOpening_dyn() ); }
		if (HX_FIELD_EQ(inName,"statusOnPlaying") ) { return ::hx::Val( statusOnPlaying_dyn() ); }
		if (HX_FIELD_EQ(inName,"statusOnStopped") ) { return ::hx::Val( statusOnStopped_dyn() ); }
		if (HX_FIELD_EQ(inName,"statusOnForward") ) { return ::hx::Val( statusOnForward_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"statusOnBackward") ) { return ::hx::Val( statusOnBackward_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"videoInitComplete") ) { return ::hx::Val( videoInitComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"statusOnBuffering") ) { return ::hx::Val( statusOnBuffering_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"statusOnEndReached") ) { return ::hx::Val( statusOnEndReached_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"statusOnTimeChanged") ) { return ::hx::Val( statusOnTimeChanged_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"statusOnPositionChanged") ) { return ::hx::Val( statusOnPositionChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"statusOnSeekableChanged") ) { return ::hx::Val( statusOnSeekableChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VlcBitmap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { repeat=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_volume(inValue.Cast< Float >()) );volume=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onPlay") ) { onPlay=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onStop") ) { onStop=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onSeek") ) { onSeek=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onPause") ) { onPause=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onError") ) { onError=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oldTime") ) { oldTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast<  ::openfl::display3D::textures::RectangleTexture >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onResume") ) { onResume=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onBuffer") ) { onBuffer=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPlaying") ) { isPlaying=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOpening") ) { onOpening=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufferMem") ) { bufferMem=inValue.Cast< ::Array< unsigned char > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameSize") ) { frameSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameRect") ) { frameRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"videoWidth") ) { videoWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isDisposed") ) { isDisposed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { onProgress=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoHeight") ) { videoHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initComplete") ) { initComplete=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onVideoReady") ) { onVideoReady=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"disposeOnStop") ) { disposeOnStop=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VlcBitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("videoWidth",8b,f3,30,a6));
	outFields->push(HX_("videoHeight",c2,9e,f3,7a));
	outFields->push(HX_("repeat",5b,97,7c,06));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("initComplete",e9,87,7e,24));
	outFields->push(HX_("volume",da,29,53,5f));
	outFields->push(HX_("isDisposed",ef,1c,53,a2));
	outFields->push(HX_("isPlaying",a4,8c,16,8e));
	outFields->push(HX_("disposeOnStop",c0,ae,fb,ee));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("bufferMem",f5,28,7a,b1));
	outFields->push(HX_("libvlc",48,b2,be,e4));
	outFields->push(HX_("frameSize",8e,5f,d4,39));
	outFields->push(HX_("oldTime",54,70,41,02));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("frameRect",f1,0b,28,39));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VlcBitmap_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(VlcBitmap_obj,videoWidth),HX_("videoWidth",8b,f3,30,a6)},
	{::hx::fsInt,(int)offsetof(VlcBitmap_obj,videoHeight),HX_("videoHeight",c2,9e,f3,7a)},
	{::hx::fsInt,(int)offsetof(VlcBitmap_obj,repeat),HX_("repeat",5b,97,7c,06)},
	{::hx::fsFloat,(int)offsetof(VlcBitmap_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsFloat,(int)offsetof(VlcBitmap_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsBool,(int)offsetof(VlcBitmap_obj,initComplete),HX_("initComplete",e9,87,7e,24)},
	{::hx::fsFloat,(int)offsetof(VlcBitmap_obj,volume),HX_("volume",da,29,53,5f)},
	{::hx::fsBool,(int)offsetof(VlcBitmap_obj,isDisposed),HX_("isDisposed",ef,1c,53,a2)},
	{::hx::fsBool,(int)offsetof(VlcBitmap_obj,isPlaying),HX_("isPlaying",a4,8c,16,8e)},
	{::hx::fsBool,(int)offsetof(VlcBitmap_obj,disposeOnStop),HX_("disposeOnStop",c0,ae,fb,ee)},
	{::hx::fsInt,(int)offsetof(VlcBitmap_obj,time),HX_("time",0d,cc,fc,4c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onVideoReady),HX_("onVideoReady",e7,7f,cc,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onPlay),HX_("onPlay",b3,36,e4,ec)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onStop),HX_("onStop",c1,f8,e5,ee)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onPause),HX_("onPause",57,75,95,53)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onResume),HX_("onResume",2c,60,31,e8)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onSeek),HX_("onSeek",37,8e,da,ee)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onBuffer),HX_("onBuffer",7f,b3,41,b0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onProgress),HX_("onProgress",ec,cb,e1,63)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onOpening),HX_("onOpening",f9,bb,ef,17)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onComplete),HX_("onComplete",f8,d4,7e,5d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onError),HX_("onError",29,6a,67,09)},
	{::hx::fsObject /* ::Array< unsigned char > */ ,(int)offsetof(VlcBitmap_obj,bufferMem),HX_("bufferMem",f5,28,7a,b1)},
	{::hx::fsUnknown /*  LibVLC* */ ,(int)offsetof(VlcBitmap_obj,libvlc),HX_("libvlc",48,b2,be,e4)},
	{::hx::fsInt,(int)offsetof(VlcBitmap_obj,frameSize),HX_("frameSize",8e,5f,d4,39)},
	{::hx::fsInt,(int)offsetof(VlcBitmap_obj,oldTime),HX_("oldTime",54,70,41,02)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsObject /*  ::openfl::display3D::textures::RectangleTexture */ ,(int)offsetof(VlcBitmap_obj,texture),HX_("texture",db,c8,e0,9e)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(VlcBitmap_obj,frameRect),HX_("frameRect",f1,0b,28,39)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VlcBitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String VlcBitmap_obj_sMemberFields[] = {
	HX_("videoWidth",8b,f3,30,a6),
	HX_("videoHeight",c2,9e,f3,7a),
	HX_("repeat",5b,97,7c,06),
	HX_("duration",54,0f,8e,14),
	HX_("length",e6,94,07,9f),
	HX_("initComplete",e9,87,7e,24),
	HX_("volume",da,29,53,5f),
	HX_("isDisposed",ef,1c,53,a2),
	HX_("isPlaying",a4,8c,16,8e),
	HX_("disposeOnStop",c0,ae,fb,ee),
	HX_("time",0d,cc,fc,4c),
	HX_("onVideoReady",e7,7f,cc,9a),
	HX_("onPlay",b3,36,e4,ec),
	HX_("onStop",c1,f8,e5,ee),
	HX_("onPause",57,75,95,53),
	HX_("onResume",2c,60,31,e8),
	HX_("onSeek",37,8e,da,ee),
	HX_("onBuffer",7f,b3,41,b0),
	HX_("onProgress",ec,cb,e1,63),
	HX_("onOpening",f9,bb,ef,17),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("onError",29,6a,67,09),
	HX_("bufferMem",f5,28,7a,b1),
	HX_("frameSize",8e,5f,d4,39),
	HX_("oldTime",54,70,41,02),
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("texture",db,c8,e0,9e),
	HX_("frameRect",f1,0b,28,39),
	HX_("mThread",17,7f,f1,77),
	HX_("init",10,3b,bb,45),
	HX_("onAddedToStage",22,82,44,36),
	HX_("onResize",73,50,28,e8),
	HX_("getVideoWidth",c1,4f,a3,02),
	HX_("getVideoHeight",cc,f1,91,02),
	HX_("play",f4,2d,5a,4a),
	HX_("stop",02,f0,5b,4c),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("seek",78,85,50,4c),
	HX_("getFPS",f3,e4,1c,a3),
	HX_("setTime",cf,0c,81,12),
	HX_("getTime",c3,7b,7f,1f),
	HX_("checkFlags",5f,2d,7c,12),
	HX_("videoInitComplete",04,35,d7,3a),
	HX_("vLoop",fa,45,d9,23),
	HX_("render",56,6b,29,05),
	HX_("setVolume",1c,9f,fa,be),
	HX_("getVolume",10,b3,a9,db),
	HX_("statusOnOpening",67,3e,1d,5d),
	HX_("statusOnBuffering",b1,cc,37,e1),
	HX_("statusOnPlaying",7d,4a,f0,a6),
	HX_("statusOnPaused",7f,5c,c4,aa),
	HX_("statusOnStopped",1c,0d,3a,60),
	HX_("statusOnEndReached",48,f8,02,2c),
	HX_("statusOnTimeChanged",f6,c6,36,ef),
	HX_("statusOnPositionChanged",5a,f1,34,80),
	HX_("statusOnSeekableChanged",11,12,35,09),
	HX_("statusOnForward",d4,1c,a3,02),
	HX_("statusOnBackward",f4,4d,74,47),
	HX_("onDisplay",e3,e2,f4,92),
	HX_("statusOnError",17,d5,f1,06),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_volume",a3,99,da,4f),
	HX_("set_volume",17,38,58,53),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class VlcBitmap_obj::__mClass;

void VlcBitmap_obj::__register()
{
	VlcBitmap_obj _hx_dummy;
	VlcBitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("vlc.bitmap.VlcBitmap",fe,df,88,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VlcBitmap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VlcBitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VlcBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VlcBitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace vlc
} // end namespace bitmap
