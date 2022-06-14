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
#ifndef INCLUDED_flixel_addons_api_FlxGameJolt
#include <flixel/addons/api/FlxGameJolt.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
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
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3953bbed9a33b4b3_77_new,"GamejoltLogInState","new",0xdfd370b9,"GamejoltLogInState.new","GamejoltLogInState.hx",77,0x64e0c8d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3953bbed9a33b4b3_93_create,"GamejoltLogInState","create",0x12e7c443,"GamejoltLogInState.create","GamejoltLogInState.hx",93,0x64e0c8d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3953bbed9a33b4b3_121_update,"GamejoltLogInState","update",0x1ddde350,"GamejoltLogInState.update","GamejoltLogInState.hx",121,0x64e0c8d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3953bbed9a33b4b3_158_loggingInShit,"GamejoltLogInState","loggingInShit",0x5c64ca9d,"GamejoltLogInState.loggingInShit","GamejoltLogInState.hx",158,0x64e0c8d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3953bbed9a33b4b3_181_loggingInShit,"GamejoltLogInState","loggingInShit",0x5c64ca9d,"GamejoltLogInState.loggingInShit","GamejoltLogInState.hx",181,0x64e0c8d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3953bbed9a33b4b3_189_saveData,"GamejoltLogInState","saveData",0x39bc6d0e,"GamejoltLogInState.saveData","GamejoltLogInState.hx",189,0x64e0c8d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3953bbed9a33b4b3_89_boot,"GamejoltLogInState","boot",0xf14831b9,"GamejoltLogInState.boot","GamejoltLogInState.hx",89,0x64e0c8d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3953bbed9a33b4b3_90_boot,"GamejoltLogInState","boot",0xf14831b9,"GamejoltLogInState.boot","GamejoltLogInState.hx",90,0x64e0c8d7)

void GamejoltLogInState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_3953bbed9a33b4b3_77_new)
HXDLIN(  77)		super::__construct(TransIn,TransOut);
            	}

Dynamic GamejoltLogInState_obj::__CreateEmpty() { return new GamejoltLogInState_obj; }

void *GamejoltLogInState_obj::_hx_vtable = 0;

Dynamic GamejoltLogInState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GamejoltLogInState_obj > _hx_result = new GamejoltLogInState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GamejoltLogInState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x20988307) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x20988307;
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

void GamejoltLogInState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_3953bbed9a33b4b3_93_create)
HXLINE(  94)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  96)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-30,-20,null());
HXDLIN(  96)		::String library = null();
HXDLIN(  96)		this->bg = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gamejolt/loginBg",be,15,e7,cf)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  97)		this->add(this->bg);
HXLINE(  99)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,140,560,null());
HXDLIN(  99)		::String library1 = null();
HXDLIN(  99)		this->loginButton = _hx_tmp1->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gamejolt/loginButton",6b,12,59,7c)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE( 100)		this->loginButton->set_alpha(((Float)0.5));
HXLINE( 101)		this->add(this->loginButton);
HXLINE( 103)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->loginButton->x * ( (Float)(5) )),this->loginButton->y,null());
HXDLIN( 103)		::String library2 = null();
HXDLIN( 103)		this->backButton = _hx_tmp2->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gamejolt/backButton",49,2f,7b,6a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2),null(),null(),null(),null(),null());
HXLINE( 104)		this->backButton->set_alpha(this->loginButton->alpha);
HXLINE( 105)		this->add(this->backButton);
HXLINE( 107)		::GamejoltLogInState_obj::userInput =  ::flixel::addons::ui::FlxInputText_obj::__alloc( HX_CTX ,10,440,550,HX_("",00,00,00,00),36,-16744448,-8355712,null());
HXLINE( 108)		::GamejoltLogInState_obj::userInput->set_fieldBorderColor(-1);
HXLINE( 109)		::GamejoltLogInState_obj::userInput->set_fieldBorderThickness(3);
HXLINE( 110)		this->add(::GamejoltLogInState_obj::userInput);
HXLINE( 112)		::GamejoltLogInState_obj::tokenInput =  ::flixel::addons::ui::FlxInputText_obj::__alloc( HX_CTX ,720,440,550,HX_("",00,00,00,00),36,-16744448,-8355712,null());
HXLINE( 113)		::GamejoltLogInState_obj::tokenInput->set_fieldBorderColor(-1);
HXLINE( 114)		::GamejoltLogInState_obj::tokenInput->set_fieldBorderThickness(3);
HXLINE( 115)		this->add(::GamejoltLogInState_obj::tokenInput);
HXLINE( 117)		this->super::create();
            	}


void GamejoltLogInState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_3953bbed9a33b4b3_121_update)
HXLINE( 122)		if (::flixel::FlxG_obj::mouse->overlaps(this->loginButton,null())) {
HXLINE( 124)			this->loginButton->set_alpha(( (Float)(1) ));
HXLINE( 125)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 127)				::GamejoltLogInState_obj::userName = ::GamejoltLogInState_obj::userInput->text;
HXLINE( 128)				::GamejoltLogInState_obj::userToken = ::GamejoltLogInState_obj::tokenInput->text;
HXLINE( 129)				this->loggingInShit(::GamejoltLogInState_obj::userName,::GamejoltLogInState_obj::userToken);
            			}
            		}
HXLINE( 132)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->loginButton,null()))) {
HXLINE( 134)			this->loginButton->set_alpha(((Float)0.5));
            		}
HXLINE( 137)		if (::flixel::FlxG_obj::mouse->overlaps(this->backButton,null())) {
HXLINE( 139)			this->backButton->set_alpha(( (Float)(1) ));
HXLINE( 140)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 142)				 ::flixel::FlxState nextState =  ::WiiMenu_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 142)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 142)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE( 145)		if (!(::flixel::FlxG_obj::mouse->overlaps(this->backButton,null()))) {
HXLINE( 147)			this->backButton->set_alpha(((Float)0.5));
            		}
HXLINE( 150)		::flixel::FlxG_obj::save->data->__SetField(HX_("loggedInToGameJolt",21,ba,92,e7),::GamejoltLogInState_obj::loggedInToGameJolt,::hx::paccDynamic);
HXLINE( 151)		::flixel::FlxG_obj::save->data->__SetField(HX_("userName",36,b2,c4,0b),::GamejoltLogInState_obj::userName,::hx::paccDynamic);
HXLINE( 152)		::flixel::FlxG_obj::save->data->__SetField(HX_("userToken",ae,30,fe,bd),::GamejoltLogInState_obj::userToken,::hx::paccDynamic);
HXLINE( 154)		this->super::update(elapsed);
            	}


void GamejoltLogInState_obj::loggingInShit(::String userThing,::String tokenThing){
            	HX_GC_STACKFRAME(&_hx_pos_3953bbed9a33b4b3_158_loggingInShit)
HXDLIN( 158)		 ::GamejoltLogInState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 159)		userThing = ::flixel::addons::api::FlxGameJolt_obj::get_username();
HXLINE( 160)		tokenThing = ::flixel::addons::api::FlxGameJolt_obj::get_usertoken();
HXLINE( 161)		bool _hx_tmp;
HXDLIN( 161)		if (::hx::IsNotNull( userThing )) {
HXLINE( 161)			_hx_tmp = ::hx::IsNotNull( tokenThing );
            		}
            		else {
HXLINE( 161)			_hx_tmp = false;
            		}
HXDLIN( 161)		if (_hx_tmp) {
HXLINE( 163)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 163)			::String _hx_tmp1 = ::flixel::addons::api::FlxGameJolt_obj::get_username();
HXDLIN( 163)			_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/GamejoltLogInState.hx",63,dd,a7,a3),163,HX_("GamejoltLogInState",47,a0,d4,c8),HX_("loggingInShit",04,e1,c9,b7)));
HXLINE( 164)			::flixel::addons::api::FlxGameJolt_obj::authUser(userThing,tokenThing,null());
HXLINE( 165)			{
HXLINE( 165)				 ::flixel::FlxState nextState =  ::ConfirmationLogging_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 165)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 165)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::GamejoltLogInState,_gthis, ::flixel::text::FlxText,e, ::flixel::FlxSprite,b) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_3953bbed9a33b4b3_181_loggingInShit)
HXLINE( 182)				_gthis->remove(e,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 183)				_gthis->remove(b,null()).StaticCast<  ::flixel::FlxBasic >();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 169)			 ::flixel::FlxSprite b =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(1280,720,-16777216,null(),null());
HXLINE( 170)			b->set_alpha(((Float)0.5));
HXLINE( 171)			this->add(b);
HXLINE( 172)			 ::flixel::text::FlxText e =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,null(),HX_("Username Does not exist.",01,27,06,40),null(),null());
HXLINE( 173)			{
HXLINE( 173)				 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN( 173)				bool _hx_tmp;
HXDLIN( 173)				switch((int)(axes->_hx_getIndex())){
            					case (int)0: case (int)2: {
HXLINE( 173)						_hx_tmp = true;
            					}
            					break;
            					default:{
HXLINE( 173)						_hx_tmp = false;
            					}
            				}
HXDLIN( 173)				if (_hx_tmp) {
HXLINE( 173)					 ::flixel::text::FlxText e1 = e;
HXDLIN( 173)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 173)					e1->set_x(((( (Float)(_hx_tmp) ) - e->get_width()) / ( (Float)(2) )));
            				}
HXDLIN( 173)				bool _hx_tmp1;
HXDLIN( 173)				switch((int)(axes->_hx_getIndex())){
            					case (int)1: case (int)2: {
HXLINE( 173)						_hx_tmp1 = true;
            					}
            					break;
            					default:{
HXLINE( 173)						_hx_tmp1 = false;
            					}
            				}
HXDLIN( 173)				if (_hx_tmp1) {
HXLINE( 173)					 ::flixel::text::FlxText e1 = e;
HXDLIN( 173)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 173)					e1->set_y(((( (Float)(_hx_tmp) ) - e->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE( 174)			e->set_size(34);
HXLINE( 175)			e->set_borderColor(-16777216);
HXLINE( 176)			e->set_borderSize(( (Float)(3) ));
HXLINE( 177)			this->add(e);
HXLINE( 178)			::haxe::Log_obj::trace(HX_("Username Does not exist",8d,d4,53,e9),::hx::SourceInfo(HX_("source/GamejoltLogInState.hx",63,dd,a7,a3),178,HX_("GamejoltLogInState",47,a0,d4,c8),HX_("loggingInShit",04,e1,c9,b7)));
HXLINE( 180)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_0(_gthis,e,b)),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(GamejoltLogInState_obj,loggingInShit,(void))

bool GamejoltLogInState_obj::loggedInToGameJolt;

 ::flixel::addons::ui::FlxInputText GamejoltLogInState_obj::userInput;

 ::flixel::addons::ui::FlxInputText GamejoltLogInState_obj::tokenInput;

::String GamejoltLogInState_obj::userName;

::String GamejoltLogInState_obj::userToken;

void GamejoltLogInState_obj::saveData(){
            	HX_STACKFRAME(&_hx_pos_3953bbed9a33b4b3_189_saveData)
HXLINE( 190)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("loggedInToGameJolt",21,ba,92,e7),::hx::paccDynamic)) )) {
HXLINE( 192)			::flixel::addons::api::FlxGameJolt_obj::init(711617,HX_("a08bbfbd9dd08867e3bef0e035ec7e5c",f9,62,ce,0f),false,null(),null(),null());
HXLINE( 193)			::flixel::addons::api::FlxGameJolt_obj::authUser(( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("userName",36,b2,c4,0b),::hx::paccDynamic)) ),( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("userToken",ae,30,fe,bd),::hx::paccDynamic)) ),null());
HXLINE( 194)			::haxe::Log_obj::trace(HX_("authUser",d3,71,05,29),::hx::SourceInfo(HX_("source/GamejoltLogInState.hx",63,dd,a7,a3),194,HX_("GamejoltLogInState",47,a0,d4,c8),HX_("saveData",07,f0,1c,f6)));
            		}
            		else {
HXLINE( 197)			::flixel::addons::api::FlxGameJolt_obj::init(711617,HX_("a08bbfbd9dd08867e3bef0e035ec7e5c",f9,62,ce,0f),false,null(),null(),null());
            		}
HXLINE( 199)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("loggedInToGameJolt",21,ba,92,e7),::hx::paccDynamic) )) {
HXLINE( 200)			::GamejoltLogInState_obj::loggedInToGameJolt = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("loggedInToGameJolt",21,ba,92,e7),::hx::paccDynamic)) );
            		}
HXLINE( 202)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("userName",36,b2,c4,0b),::hx::paccDynamic) )) {
HXLINE( 203)			::GamejoltLogInState_obj::userName = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("userName",36,b2,c4,0b),::hx::paccDynamic)) );
            		}
HXLINE( 205)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("userToken",ae,30,fe,bd),::hx::paccDynamic) )) {
HXLINE( 206)			::GamejoltLogInState_obj::userToken = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("userToken",ae,30,fe,bd),::hx::paccDynamic)) );
            		}
HXLINE( 208)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("loggedInToGameJolt",21,ba,92,e7),::hx::paccDynamic)) )) {
HXLINE( 209)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 209)			::String _hx_tmp1 = ((HX_("Logged In. Username: ",51,b0,e4,e1) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("userName",36,b2,c4,0b),::hx::paccDynamic)))) + HX_(", Token: ",cb,9d,6a,4d));
HXDLIN( 209)			::String _hx_tmp2 = (_hx_tmp1 + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("userToken",ae,30,fe,bd),::hx::paccDynamic))));
HXDLIN( 209)			_hx_tmp(_hx_tmp2,::hx::SourceInfo(HX_("source/GamejoltLogInState.hx",63,dd,a7,a3),209,HX_("GamejoltLogInState",47,a0,d4,c8),HX_("saveData",07,f0,1c,f6)));
            		}
            		else {
HXLINE( 211)			::haxe::Log_obj::trace(HX_("Not Logged In To GameJolt",1a,05,99,02),::hx::SourceInfo(HX_("source/GamejoltLogInState.hx",63,dd,a7,a3),211,HX_("GamejoltLogInState",47,a0,d4,c8),HX_("saveData",07,f0,1c,f6)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GamejoltLogInState_obj,saveData,(void))


::hx::ObjectPtr< GamejoltLogInState_obj > GamejoltLogInState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< GamejoltLogInState_obj > __this = new GamejoltLogInState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< GamejoltLogInState_obj > GamejoltLogInState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	GamejoltLogInState_obj *__this = (GamejoltLogInState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GamejoltLogInState_obj), true, "GamejoltLogInState"));
	*(void **)__this = GamejoltLogInState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

GamejoltLogInState_obj::GamejoltLogInState_obj()
{
}

void GamejoltLogInState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GamejoltLogInState);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(loginButton,"loginButton");
	HX_MARK_MEMBER_NAME(backButton,"backButton");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GamejoltLogInState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(loginButton,"loginButton");
	HX_VISIT_MEMBER_NAME(backButton,"backButton");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GamejoltLogInState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { return ::hx::Val( backButton ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loginButton") ) { return ::hx::Val( loginButton ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loggingInShit") ) { return ::hx::Val( loggingInShit_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GamejoltLogInState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"userName") ) { outValue = ( userName ); return true; }
		if (HX_FIELD_EQ(inName,"saveData") ) { outValue = saveData_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userInput") ) { outValue = ( userInput ); return true; }
		if (HX_FIELD_EQ(inName,"userToken") ) { outValue = ( userToken ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tokenInput") ) { outValue = ( tokenInput ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loggedInToGameJolt") ) { outValue = ( loggedInToGameJolt ); return true; }
	}
	return false;
}

::hx::Val GamejoltLogInState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loginButton") ) { loginButton=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GamejoltLogInState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"userName") ) { userName=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userInput") ) { userInput=ioValue.Cast<  ::flixel::addons::ui::FlxInputText >(); return true; }
		if (HX_FIELD_EQ(inName,"userToken") ) { userToken=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tokenInput") ) { tokenInput=ioValue.Cast<  ::flixel::addons::ui::FlxInputText >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loggedInToGameJolt") ) { loggedInToGameJolt=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void GamejoltLogInState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("loginButton",3b,24,9f,ff));
	outFields->push(HX_("backButton",79,47,6a,18));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GamejoltLogInState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GamejoltLogInState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GamejoltLogInState_obj,loginButton),HX_("loginButton",3b,24,9f,ff)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GamejoltLogInState_obj,backButton),HX_("backButton",79,47,6a,18)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GamejoltLogInState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &GamejoltLogInState_obj::loggedInToGameJolt,HX_("loggedInToGameJolt",21,ba,92,e7)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxInputText */ ,(void *) &GamejoltLogInState_obj::userInput,HX_("userInput",bf,71,f0,67)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxInputText */ ,(void *) &GamejoltLogInState_obj::tokenInput,HX_("tokenInput",51,4a,05,35)},
	{::hx::fsString,(void *) &GamejoltLogInState_obj::userName,HX_("userName",36,b2,c4,0b)},
	{::hx::fsString,(void *) &GamejoltLogInState_obj::userToken,HX_("userToken",ae,30,fe,bd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GamejoltLogInState_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("loginButton",3b,24,9f,ff),
	HX_("backButton",79,47,6a,18),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("loggingInShit",04,e1,c9,b7),
	::String(null()) };

static void GamejoltLogInState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamejoltLogInState_obj::loggedInToGameJolt,"loggedInToGameJolt");
	HX_MARK_MEMBER_NAME(GamejoltLogInState_obj::userInput,"userInput");
	HX_MARK_MEMBER_NAME(GamejoltLogInState_obj::tokenInput,"tokenInput");
	HX_MARK_MEMBER_NAME(GamejoltLogInState_obj::userName,"userName");
	HX_MARK_MEMBER_NAME(GamejoltLogInState_obj::userToken,"userToken");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GamejoltLogInState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamejoltLogInState_obj::loggedInToGameJolt,"loggedInToGameJolt");
	HX_VISIT_MEMBER_NAME(GamejoltLogInState_obj::userInput,"userInput");
	HX_VISIT_MEMBER_NAME(GamejoltLogInState_obj::tokenInput,"tokenInput");
	HX_VISIT_MEMBER_NAME(GamejoltLogInState_obj::userName,"userName");
	HX_VISIT_MEMBER_NAME(GamejoltLogInState_obj::userToken,"userToken");
};

#endif

::hx::Class GamejoltLogInState_obj::__mClass;

static ::String GamejoltLogInState_obj_sStaticFields[] = {
	HX_("loggedInToGameJolt",21,ba,92,e7),
	HX_("userInput",bf,71,f0,67),
	HX_("tokenInput",51,4a,05,35),
	HX_("userName",36,b2,c4,0b),
	HX_("userToken",ae,30,fe,bd),
	HX_("saveData",07,f0,1c,f6),
	::String(null())
};

void GamejoltLogInState_obj::__register()
{
	GamejoltLogInState_obj _hx_dummy;
	GamejoltLogInState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GamejoltLogInState",47,a0,d4,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GamejoltLogInState_obj::__GetStatic;
	__mClass->mSetStaticField = &GamejoltLogInState_obj::__SetStatic;
	__mClass->mMarkFunc = GamejoltLogInState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GamejoltLogInState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GamejoltLogInState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GamejoltLogInState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GamejoltLogInState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GamejoltLogInState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GamejoltLogInState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GamejoltLogInState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3953bbed9a33b4b3_89_boot)
HXDLIN(  89)		userName = ::flixel::addons::api::FlxGameJolt_obj::get_username();
            	}
{
            	HX_STACKFRAME(&_hx_pos_3953bbed9a33b4b3_90_boot)
HXDLIN(  90)		userToken = ::flixel::addons::api::FlxGameJolt_obj::get_usertoken();
            	}
}

