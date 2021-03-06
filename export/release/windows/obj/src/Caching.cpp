#include <hxcpp.h>

#ifndef INCLUDED_Caching
#include <Caching.h>
#endif
#ifndef INCLUDED_Dead
#include <Dead.h>
#endif
#ifndef INCLUDED_HelperFunctions
#include <HelperFunctions.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
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
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_30a7a61d6603e890_25_new,"Caching","new",0xdcd83c51,"Caching.new","Caching.hx",25,0xd9f5783f)
HX_LOCAL_STACK_FRAME(_hx_pos_30a7a61d6603e890_61_create,"Caching","create",0xa32c47ab,"Caching.create","Caching.hx",61,0xd9f5783f)
HX_LOCAL_STACK_FRAME(_hx_pos_30a7a61d6603e890_34_create,"Caching","create",0xa32c47ab,"Caching.create","Caching.hx",34,0xd9f5783f)
HX_LOCAL_STACK_FRAME(_hx_pos_30a7a61d6603e890_71_update,"Caching","update",0xae2266b8,"Caching.update","Caching.hx",71,0xd9f5783f)
HX_LOCAL_STACK_FRAME(_hx_pos_30a7a61d6603e890_86_cache,"Caching","cache",0x9880a473,"Caching.cache","Caching.hx",86,0xd9f5783f)

void Caching_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_30a7a61d6603e890_25_new)
HXLINE(  68)		this->calledDone = false;
HXLINE(  28)		this->done = 0;
HXLINE(  27)		this->toBeDone = 0;
HXLINE(  25)		super::__construct(TransIn,TransOut);
            	}

Dynamic Caching_obj::__CreateEmpty() { return new Caching_obj; }

void *Caching_obj::_hx_vtable = 0;

Dynamic Caching_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Caching_obj > _hx_result = new Caching_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Caching_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x07d9de73) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x07d9de73;
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

void Caching_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Caching,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_30a7a61d6603e890_61_create)
HXLINE(  61)			_gthis->cache();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_30a7a61d6603e890_34_create)
HXDLIN(  34)		 ::Caching _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  35)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE(  37)		{
HXLINE(  37)			 ::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;
HXDLIN(  37)			_this->x = ( (Float)(0) );
HXDLIN(  37)			_this->y = ( (Float)(0) );
HXDLIN(  37)			_this->width = ( (Float)(0) );
HXDLIN(  37)			_this->height = ( (Float)(0) );
            		}
HXLINE(  39)		this->text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )),((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) + 300),0,HX_("Loading...",12,7b,0c,0d),null(),null());
HXLINE(  40)		this->text->set_size(34);
HXLINE(  41)		this->text->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  42)		this->text->set_alpha(( (Float)(0) ));
HXLINE(  44)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )),(( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )),null());
HXDLIN(  44)		::String library = null();
HXDLIN(  44)		this->foawLogo = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("FOAWlogo",6a,65,b1,d5)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  45)		 ::flixel::FlxSprite fh = this->foawLogo;
HXDLIN(  45)		fh->set_y((fh->y + 100));
HXLINE(  46)		 ::flixel::FlxSprite fh1 = this->foawLogo;
HXDLIN(  46)		Float fh2 = fh1->x;
HXDLIN(  46)		fh1->set_x((fh2 - (this->foawLogo->get_width() / ( (Float)(2) ))));
HXLINE(  47)		 ::flixel::FlxSprite fh3 = this->foawLogo;
HXDLIN(  47)		Float fh4 = fh3->y;
HXDLIN(  47)		fh3->set_y((fh4 - ((this->foawLogo->get_height() / ( (Float)(2) )) + 100)));
HXLINE(  48)		 ::flixel::text::FlxText fh5 = this->text;
HXDLIN(  48)		Float fh6 = fh5->y;
HXDLIN(  48)		fh5->set_y((fh6 - ((this->foawLogo->get_height() / ( (Float)(2) )) - ( (Float)(125) ))));
HXLINE(  49)		 ::flixel::text::FlxText fh7 = this->text;
HXDLIN(  49)		fh7->set_x((fh7->x - ( (Float)(170) )));
HXLINE(  50)		 ::flixel::FlxSprite _hx_tmp1 = this->foawLogo;
HXDLIN(  50)		_hx_tmp1->setGraphicSize(::Std_obj::_hx_int((this->foawLogo->get_width() * ((Float)0.6))),null());
HXLINE(  52)		this->foawLogo->set_alpha(( (Float)(0) ));
HXLINE(  54)		this->add(this->foawLogo);
HXLINE(  55)		this->add(this->text);
HXLINE(  57)		::haxe::Log_obj::trace(HX_("starting caching..",9f,ab,b0,07),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),57,HX_("Caching",df,bf,75,f0),HX_("create",fc,66,0f,7c)));
HXLINE(  60)		::sys::thread::_Thread::HaxeThread_obj::create( ::Dynamic(new _hx_Closure_0(_gthis)),false);
HXLINE(  65)		this->super::create();
            	}


void Caching_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_30a7a61d6603e890_71_update)
HXLINE(  73)		bool _hx_tmp;
HXDLIN(  73)		if ((this->toBeDone != 0)) {
HXLINE(  73)			_hx_tmp = (this->done != this->toBeDone);
            		}
            		else {
HXLINE(  73)			_hx_tmp = false;
            		}
HXDLIN(  73)		if (_hx_tmp) {
HXLINE(  75)			Float alpha = (::HelperFunctions_obj::truncateFloat(((( (Float)(this->done) ) / ( (Float)(this->toBeDone) )) * ( (Float)(100) )),2) / ( (Float)(100) ));
HXLINE(  76)			this->foawLogo->set_alpha(alpha);
HXLINE(  77)			this->text->set_alpha(alpha);
HXLINE(  78)			this->text->set_text(((((HX_("Loading... (",9a,ff,6e,c5) + this->done) + HX_("/",2f,00,00,00)) + this->toBeDone) + HX_(")",29,00,00,00)));
            		}
HXLINE(  81)		this->super::update(elapsed);
            	}


void Caching_obj::cache(){
            	HX_GC_STACKFRAME(&_hx_pos_30a7a61d6603e890_86_cache)
HXLINE(  88)		::Array< ::String > images = ::Array_obj< ::String >::__new(0);
HXLINE(  89)		::Array< ::String > music = ::Array_obj< ::String >::__new(0);
HXLINE(  91)		::haxe::Log_obj::trace(HX_("caching images...",d5,2a,c5,d3),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),91,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
HXLINE(  94)		{
HXLINE(  94)			int _g = 0;
HXDLIN(  94)			::Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory(::sys::FileSystem_obj::absolutePath(HX_("assets/shared/images/characters",03,f9,fb,54)));
HXDLIN(  94)			while((_g < _g1->length)){
HXLINE(  94)				::String i = _g1->__get(_g);
HXDLIN(  94)				_g = (_g + 1);
HXLINE(  96)				if (!(::StringTools_obj::endsWith(i,HX_(".png",3b,2d,bd,1e)))) {
HXLINE(  97)					continue;
            				}
HXLINE(  98)				images->push(i);
            			}
            		}
HXLINE( 101)		::haxe::Log_obj::trace(HX_("caching music...",aa,84,e5,3a),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),101,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
HXLINE( 103)		{
HXLINE( 103)			int _g2 = 0;
HXDLIN( 103)			::Array< ::String > _g3 = ::sys::FileSystem_obj::readDirectory(::sys::FileSystem_obj::absolutePath(HX_("assets/songs",32,39,b2,4c)));
HXDLIN( 103)			while((_g2 < _g3->length)){
HXLINE( 103)				::String i = _g3->__get(_g2);
HXDLIN( 103)				_g2 = (_g2 + 1);
HXLINE( 105)				music->push(i);
            			}
            		}
HXLINE( 109)		int _hx_tmp = ::Lambda_obj::count(images,null());
HXDLIN( 109)		this->toBeDone = (_hx_tmp + ::Lambda_obj::count(music,null()));
HXLINE( 111)		::haxe::Log_obj::trace(((HX_("LOADING: ",02,24,79,41) + this->toBeDone) + HX_(" OBJECTS.",1a,01,df,3a)),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),111,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
HXLINE( 113)		{
HXLINE( 113)			int _g4 = 0;
HXDLIN( 113)			while((_g4 < images->length)){
HXLINE( 113)				::String i = images->__get(_g4);
HXDLIN( 113)				_g4 = (_g4 + 1);
HXLINE( 115)				::String replaced = ::StringTools_obj::replace(i,HX_(".png",3b,2d,bd,1e),HX_("",00,00,00,00));
HXLINE( 116)				 ::flixel::_hx_system::frontEnds::BitmapFrontEnd _hx_tmp = ::flixel::FlxG_obj::bitmap;
HXDLIN( 116)				_hx_tmp->add(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + (HX_("characters/",45,3c,bf,be) + replaced)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d)),null(),null());
HXLINE( 117)				::haxe::Log_obj::trace((HX_("cached ",fe,85,21,23) + replaced),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),117,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
HXLINE( 118)				this->done++;
            			}
            		}
HXLINE( 121)		{
HXLINE( 121)			int _g5 = 0;
HXDLIN( 121)			while((_g5 < music->length)){
HXLINE( 121)				::String i = music->__get(_g5);
HXDLIN( 121)				_g5 = (_g5 + 1);
HXLINE( 123)				{
HXLINE( 123)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _this = ::flixel::FlxG_obj::sound;
HXDLIN( 123)					::String songLowercase = ::StringTools_obj::replace(i,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)).toLowerCase();
HXDLIN( 123)					::String _hx_switch_0 = songLowercase;
            					if (  (_hx_switch_0==HX_("dad-battle",be,d5,66,07)) ){
HXLINE( 123)						songLowercase = HX_("dadbattle",bf,6a,a9,a6);
HXDLIN( 123)						goto _hx_goto_8;
            					}
            					if (  (_hx_switch_0==HX_("philly-nice",22,2e,26,44)) ){
HXLINE( 123)						songLowercase = HX_("philly",28,77,5e,ef);
HXDLIN( 123)						goto _hx_goto_8;
            					}
            					_hx_goto_8:;
HXDLIN( 123)					::String EmbeddedSound = (((HX_("songs:assets/songs/",c1,ed,e6,7e) + songLowercase) + HX_("/Inst.",f9,6e,13,1c)) + HX_("ogg",4f,94,54,00));
HXDLIN( 123)					bool _hx_tmp;
HXDLIN( 123)					if (!(::openfl::utils::Assets_obj::exists(EmbeddedSound,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 123)						_hx_tmp = ::openfl::utils::Assets_obj::exists(EmbeddedSound,HX_("MUSIC",85,08,49,8e));
            					}
            					else {
HXLINE( 123)						_hx_tmp = true;
            					}
HXDLIN( 123)					if (_hx_tmp) {
HXLINE( 123)						::openfl::utils::Assets_obj::getSound(EmbeddedSound,true);
            					}
            				}
HXLINE( 124)				{
HXLINE( 124)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _this1 = ::flixel::FlxG_obj::sound;
HXDLIN( 124)					::String songLowercase1 = ::StringTools_obj::replace(i,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)).toLowerCase();
HXDLIN( 124)					::String EmbeddedSound1 = (((HX_("songs:assets/songs/",c1,ed,e6,7e) + songLowercase1) + HX_("/Voices.",1e,f6,e5,90)) + HX_("ogg",4f,94,54,00));
HXDLIN( 124)					bool _hx_tmp1;
HXDLIN( 124)					if (!(::openfl::utils::Assets_obj::exists(EmbeddedSound1,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 124)						_hx_tmp1 = ::openfl::utils::Assets_obj::exists(EmbeddedSound1,HX_("MUSIC",85,08,49,8e));
            					}
            					else {
HXLINE( 124)						_hx_tmp1 = true;
            					}
HXDLIN( 124)					if (_hx_tmp1) {
HXLINE( 124)						::openfl::utils::Assets_obj::getSound(EmbeddedSound1,true);
            					}
            				}
HXLINE( 125)				::haxe::Log_obj::trace((HX_("cached ",fe,85,21,23) + i),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),125,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
HXLINE( 126)				this->done++;
            			}
            		}
HXLINE( 129)		::haxe::Log_obj::trace(HX_("Finished caching...",1d,3f,52,1a),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),129,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
HXLINE( 131)		if ((::Dead_obj::hello == true)) {
HXLINE( 133)			 ::flixel::FlxState nextState =  ::Dead_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 133)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 133)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            		else {
HXLINE( 135)			if ((::Dead_obj::hello == false)) {
HXLINE( 137)				 ::flixel::FlxState nextState =  ::TitleState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 137)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 137)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Caching_obj,cache,(void))


::hx::ObjectPtr< Caching_obj > Caching_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< Caching_obj > __this = new Caching_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< Caching_obj > Caching_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	Caching_obj *__this = (Caching_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Caching_obj), true, "Caching"));
	*(void **)__this = Caching_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

Caching_obj::Caching_obj()
{
}

void Caching_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Caching);
	HX_MARK_MEMBER_NAME(toBeDone,"toBeDone");
	HX_MARK_MEMBER_NAME(done,"done");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(foawLogo,"foawLogo");
	HX_MARK_MEMBER_NAME(calledDone,"calledDone");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Caching_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(toBeDone,"toBeDone");
	HX_VISIT_MEMBER_NAME(done,"done");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(foawLogo,"foawLogo");
	HX_VISIT_MEMBER_NAME(calledDone,"calledDone");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Caching_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { return ::hx::Val( done ); }
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return ::hx::Val( cache_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toBeDone") ) { return ::hx::Val( toBeDone ); }
		if (HX_FIELD_EQ(inName,"foawLogo") ) { return ::hx::Val( foawLogo ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"calledDone") ) { return ::hx::Val( calledDone ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Caching_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { done=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toBeDone") ) { toBeDone=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"foawLogo") ) { foawLogo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"calledDone") ) { calledDone=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Caching_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("toBeDone",c0,b7,f7,aa));
	outFields->push(HX_("done",82,f0,6d,42));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("foawLogo",8a,c9,c5,51));
	outFields->push(HX_("calledDone",9f,f3,ff,19));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Caching_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Caching_obj,toBeDone),HX_("toBeDone",c0,b7,f7,aa)},
	{::hx::fsInt,(int)offsetof(Caching_obj,done),HX_("done",82,f0,6d,42)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(Caching_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Caching_obj,foawLogo),HX_("foawLogo",8a,c9,c5,51)},
	{::hx::fsBool,(int)offsetof(Caching_obj,calledDone),HX_("calledDone",9f,f3,ff,19)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Caching_obj_sStaticStorageInfo = 0;
#endif

static ::String Caching_obj_sMemberFields[] = {
	HX_("toBeDone",c0,b7,f7,aa),
	HX_("done",82,f0,6d,42),
	HX_("text",ad,cc,f9,4c),
	HX_("foawLogo",8a,c9,c5,51),
	HX_("create",fc,66,0f,7c),
	HX_("calledDone",9f,f3,ff,19),
	HX_("update",09,86,05,87),
	HX_("cache",42,9a,14,41),
	::String(null()) };

::hx::Class Caching_obj::__mClass;

void Caching_obj::__register()
{
	Caching_obj _hx_dummy;
	Caching_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Caching",df,bf,75,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Caching_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Caching_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Caching_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Caching_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

