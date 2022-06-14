#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_flixel_addons_api_FlxGameJolt
#include <flixel/addons/api/FlxGameJolt.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_crypto_Md5
#include <haxe/crypto/Md5.h>
#endif
#ifndef INCLUDED_haxe_crypto_Sha1
#include <haxe/crypto/Sha1.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
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
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_190_init,"flixel.addons.api.FlxGameJolt","init",0xa534c92a,"flixel.addons.api.FlxGameJolt.init","flixel/addons/api/FlxGameJolt.hx",190,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_227_fetchUser,"flixel.addons.api.FlxGameJolt","fetchUser",0x20c38b4b,"flixel.addons.api.FlxGameJolt.fetchUser","flixel/addons/api/FlxGameJolt.hx",227,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_266_authUser,"flixel.addons.api.FlxGameJolt","authUser",0x17c914ed,"flixel.addons.api.FlxGameJolt.authUser","flixel/addons/api/FlxGameJolt.hx",266,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_332_openSession,"flixel.addons.api.FlxGameJolt","openSession",0x6aed71d2,"flixel.addons.api.FlxGameJolt.openSession","flixel/addons/api/FlxGameJolt.hx",332,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_347_pingSession,"flixel.addons.api.FlxGameJolt","pingSession",0x83de282a,"flixel.addons.api.FlxGameJolt.pingSession","flixel/addons/api/FlxGameJolt.hx",347,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_372_closeSession,"flixel.addons.api.FlxGameJolt","closeSession",0x34a54698,"flixel.addons.api.FlxGameJolt.closeSession","flixel/addons/api/FlxGameJolt.hx",372,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_387_fetchTrophy,"flixel.addons.api.FlxGameJolt","fetchTrophy",0x8e0e3bf0,"flixel.addons.api.FlxGameJolt.fetchTrophy","flixel/addons/api/FlxGameJolt.hx",387,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_416_addTrophy,"flixel.addons.api.FlxGameJolt","addTrophy",0x03574b97,"flixel.addons.api.FlxGameJolt.addTrophy","flixel/addons/api/FlxGameJolt.hx",416,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_431_fetchScore,"flixel.addons.api.FlxGameJolt","fetchScore",0x58fd5a52,"flixel.addons.api.FlxGameJolt.fetchScore","flixel/addons/api/FlxGameJolt.hx",431,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_476_addScore,"flixel.addons.api.FlxGameJolt","addScore",0xe0fa3c8b,"flixel.addons.api.FlxGameJolt.addScore","flixel/addons/api/FlxGameJolt.hx",476,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_516_getTables,"flixel.addons.api.FlxGameJolt","getTables",0xf51ef181,"flixel.addons.api.FlxGameJolt.getTables","flixel/addons/api/FlxGameJolt.hx",516,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_532_fetchData,"flixel.addons.api.FlxGameJolt","fetchData",0x15794f2a,"flixel.addons.api.FlxGameJolt.fetchData","flixel/addons/api/FlxGameJolt.hx",532,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_564_setData,"flixel.addons.api.FlxGameJolt","setData",0xc78a5512,"flixel.addons.api.FlxGameJolt.setData","flixel/addons/api/FlxGameJolt.hx",564,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_597_updateData,"flixel.addons.api.FlxGameJolt","updateData",0xdc5e5e6d,"flixel.addons.api.FlxGameJolt.updateData","flixel/addons/api/FlxGameJolt.hx",597,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_627_removeData,"flixel.addons.api.FlxGameJolt","removeData",0xa0c8ae28,"flixel.addons.api.FlxGameJolt.removeData","flixel/addons/api/FlxGameJolt.hx",627,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_656_getAllKeys,"flixel.addons.api.FlxGameJolt","getAllKeys",0x81fb4f59,"flixel.addons.api.FlxGameJolt.getAllKeys","flixel/addons/api/FlxGameJolt.hx",656,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_684_sendLoaderRequest,"flixel.addons.api.FlxGameJolt","sendLoaderRequest",0xf82976ba,"flixel.addons.api.FlxGameJolt.sendLoaderRequest","flixel/addons/api/FlxGameJolt.hx",684,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_711_parseData,"flixel.addons.api.FlxGameJolt","parseData",0xc674bba3,"flixel.addons.api.FlxGameJolt.parseData","flixel/addons/api/FlxGameJolt.hx",711,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_769_verifyAuthentication,"flixel.addons.api.FlxGameJolt","verifyAuthentication",0xb6708ceb,"flixel.addons.api.FlxGameJolt.verifyAuthentication","flixel/addons/api/FlxGameJolt.hx",769,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_795_resetUser,"flixel.addons.api.FlxGameJolt","resetUser",0x9004af60,"flixel.addons.api.FlxGameJolt.resetUser","flixel/addons/api/FlxGameJolt.hx",795,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_812_fetchTrophyImage,"flixel.addons.api.FlxGameJolt","fetchTrophyImage",0x13b90d4b,"flixel.addons.api.FlxGameJolt.fetchTrophyImage","flixel/addons/api/FlxGameJolt.hx",812,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_827_fetchAvatarImage,"flixel.addons.api.FlxGameJolt","fetchAvatarImage",0xf0613b82,"flixel.addons.api.FlxGameJolt.fetchAvatarImage","flixel/addons/api/FlxGameJolt.hx",827,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_839_retrieveImage,"flixel.addons.api.FlxGameJolt","retrieveImage",0x3916d1e5,"flixel.addons.api.FlxGameJolt.retrieveImage","flixel/addons/api/FlxGameJolt.hx",839,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_865_returnImage,"flixel.addons.api.FlxGameJolt","returnImage",0x0659b5b1,"flixel.addons.api.FlxGameJolt.returnImage","flixel/addons/api/FlxGameJolt.hx",865,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_881_encryptURL,"flixel.addons.api.FlxGameJolt","encryptURL",0x3070b3a4,"flixel.addons.api.FlxGameJolt.encryptURL","flixel/addons/api/FlxGameJolt.hx",881,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_893_get_initialized,"flixel.addons.api.FlxGameJolt","get_initialized",0xa55800d1,"flixel.addons.api.FlxGameJolt.get_initialized","flixel/addons/api/FlxGameJolt.hx",893,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_897_get_gameInit,"flixel.addons.api.FlxGameJolt","get_gameInit",0xbc372845,"flixel.addons.api.FlxGameJolt.get_gameInit","flixel/addons/api/FlxGameJolt.hx",897,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_914_get_authenticated,"flixel.addons.api.FlxGameJolt","get_authenticated",0x77e5cfac,"flixel.addons.api.FlxGameJolt.get_authenticated","flixel/addons/api/FlxGameJolt.hx",914,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_930_get_username,"flixel.addons.api.FlxGameJolt","get_username",0x2b417239,"flixel.addons.api.FlxGameJolt.get_username","flixel/addons/api/FlxGameJolt.hx",930,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_940_get_usertoken,"flixel.addons.api.FlxGameJolt","get_usertoken",0x2ba9734b,"flixel.addons.api.FlxGameJolt.get_usertoken","flixel/addons/api/FlxGameJolt.hx",940,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_950_get_isQuickPlay,"flixel.addons.api.FlxGameJolt","get_isQuickPlay",0x021c1df4,"flixel.addons.api.FlxGameJolt.get_isQuickPlay","flixel/addons/api/FlxGameJolt.hx",950,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_980_get_isEmbeddedFlash,"flixel.addons.api.FlxGameJolt","get_isEmbeddedFlash",0xb1c32fb9,"flixel.addons.api.FlxGameJolt.get_isEmbeddedFlash","flixel/addons/api/FlxGameJolt.hx",980,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_41_boot,"flixel.addons.api.FlxGameJolt","boot",0xa095124c,"flixel.addons.api.FlxGameJolt.boot","flixel/addons/api/FlxGameJolt.hx",41,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_46_boot,"flixel.addons.api.FlxGameJolt","boot",0xa095124c,"flixel.addons.api.FlxGameJolt.boot","flixel/addons/api/FlxGameJolt.hx",46,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_51_boot,"flixel.addons.api.FlxGameJolt","boot",0xa095124c,"flixel.addons.api.FlxGameJolt.boot","flixel/addons/api/FlxGameJolt.hx",51,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_56_boot,"flixel.addons.api.FlxGameJolt","boot",0xa095124c,"flixel.addons.api.FlxGameJolt.boot","flixel/addons/api/FlxGameJolt.hx",56,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_61_boot,"flixel.addons.api.FlxGameJolt","boot",0xa095124c,"flixel.addons.api.FlxGameJolt.boot","flixel/addons/api/FlxGameJolt.hx",61,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_68_boot,"flixel.addons.api.FlxGameJolt","boot",0xa095124c,"flixel.addons.api.FlxGameJolt.boot","flixel/addons/api/FlxGameJolt.hx",68,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_122_boot,"flixel.addons.api.FlxGameJolt","boot",0xa095124c,"flixel.addons.api.FlxGameJolt.boot","flixel/addons/api/FlxGameJolt.hx",122,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_130_boot,"flixel.addons.api.FlxGameJolt","boot",0xa095124c,"flixel.addons.api.FlxGameJolt.boot","flixel/addons/api/FlxGameJolt.hx",130,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_150_boot,"flixel.addons.api.FlxGameJolt","boot",0xa095124c,"flixel.addons.api.FlxGameJolt.boot","flixel/addons/api/FlxGameJolt.hx",150,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_155_boot,"flixel.addons.api.FlxGameJolt","boot",0xa095124c,"flixel.addons.api.FlxGameJolt.boot","flixel/addons/api/FlxGameJolt.hx",155,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_160_boot,"flixel.addons.api.FlxGameJolt","boot",0xa095124c,"flixel.addons.api.FlxGameJolt.boot","flixel/addons/api/FlxGameJolt.hx",160,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_170_boot,"flixel.addons.api.FlxGameJolt","boot",0xa095124c,"flixel.addons.api.FlxGameJolt.boot","flixel/addons/api/FlxGameJolt.hx",170,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_172_boot,"flixel.addons.api.FlxGameJolt","boot",0xa095124c,"flixel.addons.api.FlxGameJolt.boot","flixel/addons/api/FlxGameJolt.hx",172,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_173_boot,"flixel.addons.api.FlxGameJolt","boot",0xa095124c,"flixel.addons.api.FlxGameJolt.boot","flixel/addons/api/FlxGameJolt.hx",173,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_174_boot,"flixel.addons.api.FlxGameJolt","boot",0xa095124c,"flixel.addons.api.FlxGameJolt.boot","flixel/addons/api/FlxGameJolt.hx",174,0x83b7688b)
HX_LOCAL_STACK_FRAME(_hx_pos_76e99f9ed6f5e4df_175_boot,"flixel.addons.api.FlxGameJolt","boot",0xa095124c,"flixel.addons.api.FlxGameJolt.boot","flixel/addons/api/FlxGameJolt.hx",175,0x83b7688b)
namespace flixel{
namespace addons{
namespace api{

void FlxGameJolt_obj::__construct() { }

Dynamic FlxGameJolt_obj::__CreateEmpty() { return new FlxGameJolt_obj; }

void *FlxGameJolt_obj::_hx_vtable = 0;

Dynamic FlxGameJolt_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGameJolt_obj > _hx_result = new FlxGameJolt_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxGameJolt_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1dd09ff2;
}

int FlxGameJolt_obj::HASH_MD5;

int FlxGameJolt_obj::HASH_SHA1;

int FlxGameJolt_obj::TROPHIES_MISSING;

int FlxGameJolt_obj::TROPHIES_ACHIEVED;

int FlxGameJolt_obj::hashType;

bool FlxGameJolt_obj::verbose;

 ::Dynamic FlxGameJolt_obj::_callBack;

int FlxGameJolt_obj::_gameID;

::String FlxGameJolt_obj::_privateKey;

::String FlxGameJolt_obj::_userName;

::String FlxGameJolt_obj::_userToken;

::String FlxGameJolt_obj::_idURL;

bool FlxGameJolt_obj::_initialized;

bool FlxGameJolt_obj::_verifyAuth;

bool FlxGameJolt_obj::_getImage;

 ::openfl::net::URLLoader FlxGameJolt_obj::_loader;

::String FlxGameJolt_obj::URL_API;

::String FlxGameJolt_obj::RETURN_TYPE;

::String FlxGameJolt_obj::URL_GAME_ID;

::String FlxGameJolt_obj::URL_USER_NAME;

::String FlxGameJolt_obj::URL_USER_TOKEN;

void FlxGameJolt_obj::init(int GameID,::String PrivateKey,::hx::Null< bool >  __o_AutoAuth,::String UserName,::String UserToken, ::Dynamic Callback){
            		bool AutoAuth = __o_AutoAuth.Default(false);
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_190_init)
HXLINE( 191)		bool _hx_tmp;
HXDLIN( 191)		if ((::flixel::addons::api::FlxGameJolt_obj::_gameID != 0)) {
HXLINE( 191)			_hx_tmp = (::flixel::addons::api::FlxGameJolt_obj::_privateKey != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 191)			_hx_tmp = false;
            		}
HXDLIN( 191)		if (_hx_tmp) {
HXLINE( 192)			return;
            		}
HXLINE( 194)		::flixel::addons::api::FlxGameJolt_obj::_gameID = GameID;
HXLINE( 195)		::flixel::addons::api::FlxGameJolt_obj::_privateKey = PrivateKey;
HXLINE( 200)		if (AutoAuth) {
HXLINE( 202)			bool _hx_tmp;
HXDLIN( 202)			if (::hx::IsNotNull( UserName )) {
HXLINE( 202)				_hx_tmp = ::hx::IsNotNull( UserToken );
            			}
            			else {
HXLINE( 202)				_hx_tmp = false;
            			}
HXDLIN( 202)			if (_hx_tmp) {
HXLINE( 204)				::flixel::addons::api::FlxGameJolt_obj::authUser(UserName,UserToken,Callback);
            			}
            			else {
HXLINE( 206)				bool _hx_tmp;
HXDLIN( 206)				bool _hx_tmp1;
HXDLIN( 206)				if (::hx::IsNotNull( UserName )) {
HXLINE( 206)					_hx_tmp1 = ::hx::IsNull( UserToken );
            				}
            				else {
HXLINE( 206)					_hx_tmp1 = true;
            				}
HXDLIN( 206)				if (_hx_tmp1) {
HXLINE( 206)					if (!(::flixel::addons::api::FlxGameJolt_obj::get_isEmbeddedFlash())) {
HXLINE( 206)						_hx_tmp = ::flixel::addons::api::FlxGameJolt_obj::get_isQuickPlay();
            					}
            					else {
HXLINE( 206)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 206)					_hx_tmp = false;
            				}
HXDLIN( 206)				if (_hx_tmp) {
HXLINE( 208)					::flixel::addons::api::FlxGameJolt_obj::authUser(null(),null(),Callback);
            				}
            				else {
HXLINE( 212)					Callback(false);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGameJolt_obj,init,(void))

void FlxGameJolt_obj::fetchUser( ::Dynamic UserID,::String UserName,::Array< int > UserIDs, ::Dynamic Callback){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_227_fetchUser)
HXLINE( 228)		::String tempURL = ((((HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00) + HX_("users/",67,5f,ef,41)) + HX_("?format=keypair",52,c1,56,6b)) + HX_("&game_id=",1b,b4,3d,10)) + ::flixel::addons::api::FlxGameJolt_obj::_gameID);
HXLINE( 230)		bool _hx_tmp;
HXDLIN( 230)		if (::hx::IsNotNull( UserID )) {
HXLINE( 230)			_hx_tmp = ::hx::IsNotEq( UserID,0 );
            		}
            		else {
HXLINE( 230)			_hx_tmp = false;
            		}
HXDLIN( 230)		if (_hx_tmp) {
HXLINE( 232)			tempURL = (tempURL + (HX_("&user_id=",f4,f2,dc,66) + ::Std_obj::string(UserID)));
            		}
            		else {
HXLINE( 234)			bool _hx_tmp;
HXDLIN( 234)			if (::hx::IsNotNull( UserName )) {
HXLINE( 234)				_hx_tmp = (UserName != HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 234)				_hx_tmp = false;
            			}
HXDLIN( 234)			if (_hx_tmp) {
HXLINE( 236)				tempURL = (tempURL + (HX_("&username=",81,98,37,38) + UserName));
            			}
            			else {
HXLINE( 238)				bool _hx_tmp;
HXDLIN( 238)				if (::hx::IsNotNull( UserIDs )) {
HXLINE( 238)					_hx_tmp = ::hx::IsPointerNotEq( UserIDs,::Array_obj< int >::__new(0) );
            				}
            				else {
HXLINE( 238)					_hx_tmp = false;
            				}
HXDLIN( 238)				if (_hx_tmp) {
HXLINE( 240)					tempURL = (tempURL + HX_("&user_id=",f4,f2,dc,66));
HXLINE( 242)					{
HXLINE( 242)						int _g = 0;
HXDLIN( 242)						while((_g < UserIDs->length)){
HXLINE( 242)							int id = UserIDs->__get(_g);
HXDLIN( 242)							_g = (_g + 1);
HXLINE( 244)							tempURL = (tempURL + (::Std_obj::string(id) + HX_(",",2c,00,00,00)));
            						}
            					}
HXLINE( 247)					tempURL = tempURL.substr(0,(tempURL.length - 1));
            				}
            				else {
HXLINE( 251)					return;
            				}
            			}
            		}
HXLINE( 254)		::flixel::addons::api::FlxGameJolt_obj::sendLoaderRequest(tempURL,Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGameJolt_obj,fetchUser,(void))

void FlxGameJolt_obj::authUser(::String UserName,::String UserToken, ::Dynamic Callback){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_266_authUser)
HXLINE( 267)		bool _hx_tmp;
HXDLIN( 267)		if (::flixel::addons::api::FlxGameJolt_obj::get_gameInit()) {
HXLINE( 267)			if (::hx::IsNotNull( ::flixel::addons::api::FlxGameJolt_obj::_userName )) {
HXLINE( 267)				_hx_tmp = ::hx::IsNotNull( ::flixel::addons::api::FlxGameJolt_obj::_userToken );
            			}
            			else {
HXLINE( 267)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 267)			_hx_tmp = true;
            		}
HXDLIN( 267)		if (_hx_tmp) {
HXLINE( 269)			Callback(false);
HXLINE( 270)			return;
            		}
HXLINE( 273)		bool _hx_tmp1;
HXDLIN( 273)		if (::hx::IsNotNull( UserName )) {
HXLINE( 273)			_hx_tmp1 = ::hx::IsNull( UserToken );
            		}
            		else {
HXLINE( 273)			_hx_tmp1 = true;
            		}
HXDLIN( 273)		if (_hx_tmp1) {
HXLINE( 276)			int _g = 0;
HXDLIN( 276)			::Array< ::String > _g1 = ::Sys_obj::args();
HXDLIN( 276)			while((_g < _g1->length)){
HXLINE( 276)				::String arg = _g1->__get(_g);
HXDLIN( 276)				_g = (_g + 1);
HXLINE( 278)				::Array< ::String > argArray = arg.split(HX_("=",3d,00,00,00));
HXLINE( 280)				if ((argArray->__get(0) == HX_("gjapi_username",3e,a0,54,c7))) {
HXLINE( 282)					::flixel::addons::api::FlxGameJolt_obj::_userName = argArray->__get(1);
            				}
HXLINE( 285)				if ((argArray->__get(0) == HX_("gjapi_token",d1,ff,3d,8a))) {
HXLINE( 287)					::flixel::addons::api::FlxGameJolt_obj::_userToken = argArray->__get(1);
            				}
            			}
            		}
            		else {
HXLINE( 306)			::flixel::addons::api::FlxGameJolt_obj::_userName = UserName;
HXLINE( 307)			::flixel::addons::api::FlxGameJolt_obj::_userToken = UserToken;
            		}
HXLINE( 311)		bool _hx_tmp2;
HXDLIN( 311)		if (::hx::IsNotNull( ::flixel::addons::api::FlxGameJolt_obj::_userName )) {
HXLINE( 311)			_hx_tmp2 = ::hx::IsNotNull( ::flixel::addons::api::FlxGameJolt_obj::_userToken );
            		}
            		else {
HXLINE( 311)			_hx_tmp2 = false;
            		}
HXDLIN( 311)		if (_hx_tmp2) {
HXLINE( 313)			::flixel::addons::api::FlxGameJolt_obj::_idURL = (((((HX_("&game_id=",1b,b4,3d,10) + ::flixel::addons::api::FlxGameJolt_obj::_gameID) + HX_("&username=",81,98,37,38)) + ::flixel::addons::api::FlxGameJolt_obj::_userName) + HX_("&user_token=",72,8b,98,bb)) + ::flixel::addons::api::FlxGameJolt_obj::_userToken);
HXLINE( 314)			::flixel::addons::api::FlxGameJolt_obj::_verifyAuth = true;
HXLINE( 315)			::flixel::addons::api::FlxGameJolt_obj::sendLoaderRequest((((HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00) + HX_("users/auth/",00,07,47,99)) + HX_("?format=keypair",52,c1,56,6b)) + ::flixel::addons::api::FlxGameJolt_obj::_idURL),Callback);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxGameJolt_obj,authUser,(void))

void FlxGameJolt_obj::openSession( ::Dynamic Callback){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_332_openSession)
HXLINE( 333)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_authenticated())) {
HXLINE( 334)			return;
            		}
HXLINE( 336)		::flixel::addons::api::FlxGameJolt_obj::sendLoaderRequest((((HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00) + HX_("sessions/open/",b3,ba,54,fb)) + HX_("?format=keypair",52,c1,56,6b)) + ::flixel::addons::api::FlxGameJolt_obj::_idURL),Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxGameJolt_obj,openSession,(void))

void FlxGameJolt_obj::pingSession(::hx::Null< bool >  __o_Active, ::Dynamic Callback){
            		bool Active = __o_Active.Default(true);
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_347_pingSession)
HXLINE( 348)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_authenticated())) {
HXLINE( 349)			return;
            		}
HXLINE( 351)		::String tempURL = ((((HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00) + HX_("sessions/ping/",0b,9f,21,8a)) + HX_("?format=keypair",52,c1,56,6b)) + ::flixel::addons::api::FlxGameJolt_obj::_idURL) + HX_("&active=",51,3c,b0,e4));
HXLINE( 353)		if (Active) {
HXLINE( 355)			tempURL = (tempURL + HX_("active",c6,41,46,16));
            		}
            		else {
HXLINE( 359)			tempURL = (tempURL + HX_("idle",14,a7,b3,45));
            		}
HXLINE( 362)		::flixel::addons::api::FlxGameJolt_obj::sendLoaderRequest(tempURL,Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxGameJolt_obj,pingSession,(void))

void FlxGameJolt_obj::closeSession( ::Dynamic Callback){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_372_closeSession)
HXLINE( 373)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_authenticated())) {
HXLINE( 374)			return;
            		}
HXLINE( 376)		::flixel::addons::api::FlxGameJolt_obj::sendLoaderRequest((((HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00) + HX_("sessions/close/",29,18,8c,db)) + HX_("?format=keypair",52,c1,56,6b)) + ::flixel::addons::api::FlxGameJolt_obj::_idURL),Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxGameJolt_obj,closeSession,(void))

void FlxGameJolt_obj::fetchTrophy(::hx::Null< int >  __o_DataType, ::Dynamic Callback){
            		int DataType = __o_DataType.Default(0);
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_387_fetchTrophy)
HXLINE( 388)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_authenticated())) {
HXLINE( 389)			return;
            		}
HXLINE( 391)		::String tempURL = (((HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00) + HX_("trophies/",21,11,02,05)) + HX_("?format=keypair",52,c1,56,6b)) + ::flixel::addons::api::FlxGameJolt_obj::_idURL);
HXLINE( 393)		switch((int)(DataType)){
            			case (int)-2: {
HXLINE( 400)				tempURL = (tempURL + HX_("&achieved=true",52,10,34,60));
            			}
            			break;
            			case (int)-1: {
HXLINE( 398)				tempURL = (tempURL + HX_("&achieved=false",1f,b0,7a,b2));
            			}
            			break;
            			case (int)0: {
HXLINE( 396)				tempURL = (tempURL + HX_("&achieved=",04,97,fe,ec));
            			}
            			break;
            			default:{
HXLINE( 402)				tempURL = (tempURL + (HX_("&trophy_id=",99,6f,3b,b0) + ::Std_obj::string(DataType)));
            			}
            		}
HXLINE( 405)		::flixel::addons::api::FlxGameJolt_obj::sendLoaderRequest(tempURL,Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxGameJolt_obj,fetchTrophy,(void))

void FlxGameJolt_obj::addTrophy(int TrophyID, ::Dynamic Callback){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_416_addTrophy)
HXLINE( 417)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_authenticated())) {
HXLINE( 418)			return;
            		}
HXLINE( 420)		::flixel::addons::api::FlxGameJolt_obj::sendLoaderRequest((((((HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00) + HX_("trophies/add-achieved/",af,31,3f,bf)) + HX_("?format=keypair",52,c1,56,6b)) + ::flixel::addons::api::FlxGameJolt_obj::_idURL) + HX_("&trophy_id=",99,6f,3b,b0)) + TrophyID),Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxGameJolt_obj,addTrophy,(void))

void FlxGameJolt_obj::fetchScore( ::Dynamic Limit, ::Dynamic Callback){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_431_fetchScore)
HXLINE( 432)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_gameInit())) {
HXLINE( 433)			return;
            		}
HXLINE( 435)		::String tempURL = ((((HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00) + HX_("scores/",2e,d0,9a,78)) + HX_("?format=keypair",52,c1,56,6b)) + HX_("&game_id=",1b,b4,3d,10)) + ::flixel::addons::api::FlxGameJolt_obj::_gameID);
HXLINE( 437)		if (!(::flixel::addons::api::FlxGameJolt_obj::_initialized)) {
HXLINE( 439)			if (::hx::IsNull( Limit )) {
HXLINE( 441)				tempURL = (tempURL + HX_("&limit=10",27,e2,3f,d6));
            			}
            			else {
HXLINE( 445)				tempURL = (tempURL + (HX_("&limit=",48,d5,29,18) + ::Std_obj::string(Limit)));
            			}
            		}
            		else {
HXLINE( 448)			if (::hx::IsNotNull( Limit )) {
HXLINE( 450)				tempURL = (tempURL + (HX_("&limit=",48,d5,29,18) + ::Std_obj::string(Limit)));
            			}
            			else {
HXLINE( 454)				tempURL = (tempURL + ::flixel::addons::api::FlxGameJolt_obj::_idURL);
            			}
            		}
HXLINE( 457)		::flixel::addons::api::FlxGameJolt_obj::sendLoaderRequest(tempURL,Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxGameJolt_obj,fetchScore,(void))

void FlxGameJolt_obj::addScore(::String Score,Float Sort, ::Dynamic TableID,::hx::Null< bool >  __o_AllowGuest,::String GuestName,::String ExtraData, ::Dynamic Callback){
            		bool AllowGuest = __o_AllowGuest.Default(false);
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_476_addScore)
HXLINE( 477)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_gameInit())) {
HXLINE( 478)			return;
            		}
HXLINE( 480)		bool _hx_tmp;
HXDLIN( 480)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_authenticated())) {
HXLINE( 480)			_hx_tmp = !(AllowGuest);
            		}
            		else {
HXLINE( 480)			_hx_tmp = false;
            		}
HXDLIN( 480)		if (_hx_tmp) {
HXLINE( 481)			return;
            		}
HXLINE( 483)		::String tempURL = (((((((HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00) + HX_("scores/add/",1c,6a,1b,e3)) + HX_("?format=keypair",52,c1,56,6b)) + HX_("&game_id=",1b,b4,3d,10)) + ::flixel::addons::api::FlxGameJolt_obj::_gameID) + HX_("&score=",51,15,9b,71)) + Score) + HX_("&sort=",39,01,5a,b2));
HXDLIN( 483)		::String tempURL1 = (tempURL + ::Std_obj::string(Sort));
HXLINE( 487)		bool _hx_tmp1;
HXDLIN( 487)		bool _hx_tmp2;
HXDLIN( 487)		if (AllowGuest) {
HXLINE( 487)			_hx_tmp2 = ::hx::IsNotNull( GuestName );
            		}
            		else {
HXLINE( 487)			_hx_tmp2 = false;
            		}
HXDLIN( 487)		if (_hx_tmp2) {
HXLINE( 487)			_hx_tmp1 = (GuestName != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 487)			_hx_tmp1 = false;
            		}
HXDLIN( 487)		if (_hx_tmp1) {
HXLINE( 489)			tempURL1 = (tempURL1 + (HX_("&guest=",0b,df,ed,fb) + GuestName));
            		}
            		else {
HXLINE( 493)			tempURL1 = (tempURL1 + (((HX_("&username=",81,98,37,38) + ::flixel::addons::api::FlxGameJolt_obj::_userName) + HX_("&user_token=",72,8b,98,bb)) + ::flixel::addons::api::FlxGameJolt_obj::_userToken));
            		}
HXLINE( 496)		bool _hx_tmp3;
HXDLIN( 496)		if (::hx::IsNotNull( ExtraData )) {
HXLINE( 496)			_hx_tmp3 = (ExtraData != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 496)			_hx_tmp3 = false;
            		}
HXDLIN( 496)		if (_hx_tmp3) {
HXLINE( 498)			tempURL1 = (tempURL1 + (HX_("&extra_data=",3e,82,fe,5c) + ExtraData));
            		}
HXLINE( 501)		bool _hx_tmp4;
HXDLIN( 501)		if (::hx::IsNotNull( TableID )) {
HXLINE( 501)			_hx_tmp4 = ::hx::IsNotEq( TableID,0 );
            		}
            		else {
HXLINE( 501)			_hx_tmp4 = false;
            		}
HXDLIN( 501)		if (_hx_tmp4) {
HXLINE( 503)			tempURL1 = (tempURL1 + (HX_("&table_id=",2b,eb,e4,4c) + TableID));
            		}
HXLINE( 506)		::flixel::addons::api::FlxGameJolt_obj::sendLoaderRequest(tempURL1,Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxGameJolt_obj,addScore,(void))

void FlxGameJolt_obj::getTables( ::Dynamic Callback){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_516_getTables)
HXLINE( 517)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_gameInit())) {
HXLINE( 518)			return;
            		}
HXLINE( 520)		::flixel::addons::api::FlxGameJolt_obj::sendLoaderRequest(((((HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00) + HX_("scores/tables/",7c,6d,bc,c7)) + HX_("?format=keypair",52,c1,56,6b)) + HX_("&game_id=",1b,b4,3d,10)) + ::flixel::addons::api::FlxGameJolt_obj::_gameID),Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxGameJolt_obj,getTables,(void))

void FlxGameJolt_obj::fetchData(::String Key,::hx::Null< bool >  __o_User, ::Dynamic Callback){
            		bool User = __o_User.Default(true);
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_532_fetchData)
HXLINE( 533)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_gameInit())) {
HXLINE( 534)			return;
            		}
HXLINE( 536)		bool _hx_tmp;
HXDLIN( 536)		if (User) {
HXLINE( 536)			_hx_tmp = !(::flixel::addons::api::FlxGameJolt_obj::get_authenticated());
            		}
            		else {
HXLINE( 536)			_hx_tmp = false;
            		}
HXDLIN( 536)		if (_hx_tmp) {
HXLINE( 537)			return;
            		}
HXLINE( 539)		::String tempURL = ((((HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00) + HX_("data-store/",31,54,1b,d3)) + HX_("?format=keypair",52,c1,56,6b)) + HX_("&key=",e4,ec,40,28)) + Key);
HXLINE( 541)		if (User) {
HXLINE( 543)			tempURL = (tempURL + ::flixel::addons::api::FlxGameJolt_obj::_idURL);
            		}
            		else {
HXLINE( 547)			tempURL = (tempURL + (HX_("&game_id=",1b,b4,3d,10) + ::flixel::addons::api::FlxGameJolt_obj::_gameID));
            		}
HXLINE( 550)		::flixel::addons::api::FlxGameJolt_obj::sendLoaderRequest(tempURL,Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxGameJolt_obj,fetchData,(void))

void FlxGameJolt_obj::setData(::String Key,::String Value,::hx::Null< bool >  __o_User, ::Dynamic Callback){
            		bool User = __o_User.Default(true);
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_564_setData)
HXLINE( 565)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_gameInit())) {
HXLINE( 566)			return;
            		}
HXLINE( 568)		bool _hx_tmp;
HXDLIN( 568)		if (User) {
HXLINE( 568)			_hx_tmp = !(::flixel::addons::api::FlxGameJolt_obj::get_authenticated());
            		}
            		else {
HXLINE( 568)			_hx_tmp = false;
            		}
HXDLIN( 568)		if (_hx_tmp) {
HXLINE( 569)			return;
            		}
HXLINE( 571)		::String tempURL = ((((((HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00) + HX_("data-store/set/",fe,52,48,28)) + HX_("?format=keypair",52,c1,56,6b)) + HX_("&key=",e4,ec,40,28)) + Key) + HX_("&data=",ed,c4,17,06)) + Value);
HXLINE( 573)		if (User) {
HXLINE( 575)			tempURL = (tempURL + ::flixel::addons::api::FlxGameJolt_obj::_idURL);
            		}
            		else {
HXLINE( 579)			tempURL = (tempURL + (HX_("&game_id=",1b,b4,3d,10) + ::flixel::addons::api::FlxGameJolt_obj::_gameID));
            		}
HXLINE( 582)		::flixel::addons::api::FlxGameJolt_obj::sendLoaderRequest(tempURL,Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGameJolt_obj,setData,(void))

void FlxGameJolt_obj::updateData(::String Key,::String Operation,::String Value,::hx::Null< bool >  __o_User, ::Dynamic Callback){
            		bool User = __o_User.Default(true);
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_597_updateData)
HXLINE( 598)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_gameInit())) {
HXLINE( 599)			return;
            		}
HXLINE( 601)		bool _hx_tmp;
HXDLIN( 601)		if (User) {
HXLINE( 601)			_hx_tmp = !(::flixel::addons::api::FlxGameJolt_obj::get_authenticated());
            		}
            		else {
HXLINE( 601)			_hx_tmp = false;
            		}
HXDLIN( 601)		if (_hx_tmp) {
HXLINE( 602)			return;
            		}
HXLINE( 604)		::String tempURL = ((((((((HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00) + HX_("data-store/update/",f5,c5,2e,b4)) + HX_("?format=keypair",52,c1,56,6b)) + HX_("&key=",e4,ec,40,28)) + Key) + HX_("&operation=",dc,09,37,b9)) + Operation) + HX_("&value=",52,a4,e6,7b)) + Value);
HXLINE( 606)		if (User) {
HXLINE( 608)			tempURL = (tempURL + ::flixel::addons::api::FlxGameJolt_obj::_idURL);
            		}
            		else {
HXLINE( 612)			tempURL = (tempURL + (HX_("&game_id=",1b,b4,3d,10) + ::flixel::addons::api::FlxGameJolt_obj::_gameID));
            		}
HXLINE( 615)		::flixel::addons::api::FlxGameJolt_obj::sendLoaderRequest(tempURL,Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxGameJolt_obj,updateData,(void))

void FlxGameJolt_obj::removeData(::String Key,::hx::Null< bool >  __o_User, ::Dynamic Callback){
            		bool User = __o_User.Default(true);
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_627_removeData)
HXLINE( 628)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_gameInit())) {
HXLINE( 629)			return;
            		}
HXLINE( 631)		bool _hx_tmp;
HXDLIN( 631)		if (User) {
HXLINE( 631)			_hx_tmp = !(::flixel::addons::api::FlxGameJolt_obj::get_authenticated());
            		}
            		else {
HXLINE( 631)			_hx_tmp = false;
            		}
HXDLIN( 631)		if (_hx_tmp) {
HXLINE( 632)			return;
            		}
HXLINE( 634)		::String tempURL = ((((HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00) + HX_("data-store/remove/",5a,23,5f,09)) + HX_("?format=keypair",52,c1,56,6b)) + HX_("&key=",e4,ec,40,28)) + Key);
HXLINE( 636)		if (User) {
HXLINE( 638)			tempURL = (tempURL + ::flixel::addons::api::FlxGameJolt_obj::_idURL);
            		}
            		else {
HXLINE( 642)			tempURL = (tempURL + (HX_("&game_id=",1b,b4,3d,10) + ::flixel::addons::api::FlxGameJolt_obj::_gameID));
            		}
HXLINE( 645)		::flixel::addons::api::FlxGameJolt_obj::sendLoaderRequest(tempURL,Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxGameJolt_obj,removeData,(void))

void FlxGameJolt_obj::getAllKeys(::hx::Null< bool >  __o_User, ::Dynamic Callback){
            		bool User = __o_User.Default(true);
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_656_getAllKeys)
HXLINE( 657)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_gameInit())) {
HXLINE( 658)			return;
            		}
HXLINE( 660)		bool _hx_tmp;
HXDLIN( 660)		if (User) {
HXLINE( 660)			_hx_tmp = !(::flixel::addons::api::FlxGameJolt_obj::get_authenticated());
            		}
            		else {
HXLINE( 660)			_hx_tmp = false;
            		}
HXDLIN( 660)		if (_hx_tmp) {
HXLINE( 661)			return;
            		}
HXLINE( 663)		::String tempURL = ((HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00) + HX_("data-store/get-keys/",33,43,eb,d3)) + HX_("?format=keypair",52,c1,56,6b));
HXLINE( 665)		if (User) {
HXLINE( 667)			tempURL = (tempURL + ::flixel::addons::api::FlxGameJolt_obj::_idURL);
            		}
            		else {
HXLINE( 671)			tempURL = (tempURL + (HX_("&game_id=",1b,b4,3d,10) + ::flixel::addons::api::FlxGameJolt_obj::_gameID));
            		}
HXLINE( 674)		::flixel::addons::api::FlxGameJolt_obj::sendLoaderRequest(tempURL,Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxGameJolt_obj,getAllKeys,(void))

void FlxGameJolt_obj::sendLoaderRequest(::String URLString, ::Dynamic Callback){
            	HX_GC_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_684_sendLoaderRequest)
HXLINE( 685)		 ::openfl::net::URLRequest request =  ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,((URLString + HX_("&signature=",eb,e1,c6,c9)) + ::flixel::addons::api::FlxGameJolt_obj::encryptURL(URLString)));
HXLINE( 686)		request->method = HX_("POST",60,4c,1d,35);
HXLINE( 688)		::flixel::addons::api::FlxGameJolt_obj::_callBack = Callback;
HXLINE( 690)		if (::hx::IsNull( ::flixel::addons::api::FlxGameJolt_obj::_loader )) {
HXLINE( 691)			::flixel::addons::api::FlxGameJolt_obj::_loader =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
            		}
HXLINE( 698)		::flixel::addons::api::FlxGameJolt_obj::_loader->addEventListener(HX_("complete",b9,00,c8,7f),::flixel::addons::api::FlxGameJolt_obj::parseData_dyn(),null(),null(),null());
HXLINE( 699)		::flixel::addons::api::FlxGameJolt_obj::_loader->load(request);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxGameJolt_obj,sendLoaderRequest,(void))

void FlxGameJolt_obj::parseData( ::openfl::events::Event e){
            	HX_GC_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_711_parseData)
HXLINE( 712)		::flixel::addons::api::FlxGameJolt_obj::_loader->removeEventListener(HX_("complete",b9,00,c8,7f),::flixel::addons::api::FlxGameJolt_obj::parseData_dyn(),null());
HXLINE( 714)		if ((::Std_obj::string( ::Dynamic(e->currentTarget->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))) == HX_("",00,00,00,00))) {
HXLINE( 719)			return;
            		}
HXLINE( 722)		 ::haxe::ds::StringMap returnMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 723)		::Array< ::String > stringArray = ::Std_obj::string( ::Dynamic(e->currentTarget->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))).split(HX_("\r",0d,00,00,00));
HXLINE( 726)		 ::EReg r =  ::EReg_obj::__alloc( HX_CTX ,HX_("[\r\n\t\"]+",df,bd,d3,c2),HX_("g",67,00,00,00));
HXLINE( 728)		{
HXLINE( 728)			int _g = 0;
HXDLIN( 728)			while((_g < stringArray->length)){
HXLINE( 728)				::String string = stringArray->__get(_g);
HXDLIN( 728)				_g = (_g + 1);
HXLINE( 731)				string = r->replace(string,HX_("",00,00,00,00));
HXLINE( 732)				if ((string.length > 1)) {
HXLINE( 734)					int split = string.indexOf(HX_(":",3a,00,00,00),null());
HXLINE( 735)					::String temp_0 = string.substring(0,split);
HXDLIN( 735)					::String temp_1 = string.substring((split + 1),string.length);
HXLINE( 736)					returnMap->set(temp_0,temp_1);
            				}
            			}
            		}
HXLINE( 747)		if (::flixel::addons::api::FlxGameJolt_obj::_getImage) {
HXLINE( 749)			::flixel::addons::api::FlxGameJolt_obj::retrieveImage(returnMap);
HXLINE( 750)			return;
            		}
HXLINE( 753)		bool _hx_tmp;
HXDLIN( 753)		if (::hx::IsNotNull( ::flixel::addons::api::FlxGameJolt_obj::_callBack )) {
HXLINE( 753)			_hx_tmp = !(::flixel::addons::api::FlxGameJolt_obj::_verifyAuth);
            		}
            		else {
HXLINE( 753)			_hx_tmp = false;
            		}
HXDLIN( 753)		if (_hx_tmp) {
HXLINE( 755)			::flixel::addons::api::FlxGameJolt_obj::_callBack(returnMap);
            		}
            		else {
HXLINE( 757)			if (::flixel::addons::api::FlxGameJolt_obj::_verifyAuth) {
HXLINE( 759)				::flixel::addons::api::FlxGameJolt_obj::verifyAuthentication(returnMap);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxGameJolt_obj,parseData,(void))

void FlxGameJolt_obj::verifyAuthentication( ::haxe::ds::StringMap ReturnMap){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_769_verifyAuthentication)
HXLINE( 770)		bool _hx_tmp;
HXDLIN( 770)		if (ReturnMap->exists(HX_("success",c3,25,4e,b8))) {
HXLINE( 770)			_hx_tmp = (ReturnMap->get_string(HX_("success",c3,25,4e,b8)) == HX_("true",4e,a7,03,4d));
            		}
            		else {
HXLINE( 770)			_hx_tmp = false;
            		}
HXDLIN( 770)		if (_hx_tmp) {
HXLINE( 772)			::flixel::addons::api::FlxGameJolt_obj::_initialized = true;
            		}
            		else {
HXLINE( 776)			::flixel::addons::api::FlxGameJolt_obj::_userName = null();
HXLINE( 777)			::flixel::addons::api::FlxGameJolt_obj::_userToken = null();
            		}
HXLINE( 780)		::flixel::addons::api::FlxGameJolt_obj::_verifyAuth = false;
HXLINE( 782)		if (::hx::IsNotNull( ::flixel::addons::api::FlxGameJolt_obj::_callBack )) {
HXLINE( 783)			::flixel::addons::api::FlxGameJolt_obj::_callBack(::flixel::addons::api::FlxGameJolt_obj::_initialized);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxGameJolt_obj,verifyAuthentication,(void))

void FlxGameJolt_obj::resetUser(::String UserName,::String UserToken, ::Dynamic Callback){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_795_resetUser)
HXLINE( 796)		::flixel::addons::api::FlxGameJolt_obj::_userName = UserName;
HXLINE( 797)		::flixel::addons::api::FlxGameJolt_obj::_userToken = UserToken;
HXLINE( 799)		::flixel::addons::api::FlxGameJolt_obj::_idURL = (((((HX_("&game_id=",1b,b4,3d,10) + ::flixel::addons::api::FlxGameJolt_obj::_gameID) + HX_("&username=",81,98,37,38)) + ::flixel::addons::api::FlxGameJolt_obj::_userName) + HX_("&user_token=",72,8b,98,bb)) + ::flixel::addons::api::FlxGameJolt_obj::_userToken);
HXLINE( 800)		::flixel::addons::api::FlxGameJolt_obj::_verifyAuth = true;
HXLINE( 801)		::flixel::addons::api::FlxGameJolt_obj::sendLoaderRequest((((HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00) + HX_("users/auth/",00,07,47,99)) + HX_("?format=keypair",52,c1,56,6b)) + ::flixel::addons::api::FlxGameJolt_obj::_idURL),Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxGameJolt_obj,resetUser,(void))

void FlxGameJolt_obj::fetchTrophyImage(int ID, ::Dynamic Callback){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_812_fetchTrophyImage)
HXLINE( 813)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_gameInit())) {
HXLINE( 814)			return;
            		}
HXLINE( 815)		::flixel::addons::api::FlxGameJolt_obj::_getImage = true;
HXLINE( 816)		::flixel::addons::api::FlxGameJolt_obj::fetchTrophy(ID,Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxGameJolt_obj,fetchTrophyImage,(void))

void FlxGameJolt_obj::fetchAvatarImage( ::Dynamic Callback){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_827_fetchAvatarImage)
HXLINE( 828)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_gameInit())) {
HXLINE( 829)			return;
            		}
HXLINE( 830)		::flixel::addons::api::FlxGameJolt_obj::_getImage = true;
HXLINE( 831)		::flixel::addons::api::FlxGameJolt_obj::fetchUser(0,::flixel::addons::api::FlxGameJolt_obj::_userName,null(),Callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxGameJolt_obj,fetchAvatarImage,(void))

void FlxGameJolt_obj::retrieveImage( ::haxe::ds::StringMap ImageMap){
            	HX_GC_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_839_retrieveImage)
HXDLIN( 839)		if (ImageMap->exists(HX_("image_url",4b,d9,7f,36))) {
HXLINE( 841)			 ::openfl::net::URLRequest request =  ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,ImageMap->get_string(HX_("image_url",4b,d9,7f,36)));
HXLINE( 842)			 ::openfl::display::Loader loader =  ::openfl::display::Loader_obj::__alloc( HX_CTX );
HXLINE( 843)			loader->contentLoaderInfo->addEventListener(HX_("complete",b9,00,c8,7f),::flixel::addons::api::FlxGameJolt_obj::returnImage_dyn(),null(),null(),null());
HXLINE( 844)			loader->load(request,null());
            		}
            		else {
HXLINE( 846)			if (ImageMap->exists(HX_("avatar_url",09,71,c5,46))) {
HXLINE( 848)				 ::openfl::net::URLRequest request =  ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,ImageMap->get_string(HX_("avatar_url",09,71,c5,46)));
HXLINE( 849)				 ::openfl::display::Loader loader =  ::openfl::display::Loader_obj::__alloc( HX_CTX );
HXLINE( 850)				loader->contentLoaderInfo->addEventListener(HX_("complete",b9,00,c8,7f),::flixel::addons::api::FlxGameJolt_obj::returnImage_dyn(),null(),null(),null());
HXLINE( 851)				loader->load(request,null());
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxGameJolt_obj,retrieveImage,(void))

void FlxGameJolt_obj::returnImage( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_865_returnImage)
HXLINE( 866)		if (::hx::IsNotNull( ::flixel::addons::api::FlxGameJolt_obj::_callBack )) {
HXLINE( 867)			::flixel::addons::api::FlxGameJolt_obj::_callBack( ::Dynamic( ::Dynamic(e->currentTarget->__Field(HX_("content",39,8d,77,19),::hx::paccDynamic))->__Field(HX_("bitmapData",b9,b5,c0,33),::hx::paccDynamic)));
            		}
HXLINE( 869)		::flixel::addons::api::FlxGameJolt_obj::_getImage = false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxGameJolt_obj,returnImage,(void))

::String FlxGameJolt_obj::encryptURL(::String Url){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_881_encryptURL)
HXDLIN( 881)		if ((::flixel::addons::api::FlxGameJolt_obj::hashType == 1)) {
HXLINE( 883)			return ::haxe::crypto::Sha1_obj::encode((Url + ::flixel::addons::api::FlxGameJolt_obj::_privateKey));
            		}
            		else {
HXLINE( 887)			return ::haxe::crypto::Md5_obj::encode((Url + ::flixel::addons::api::FlxGameJolt_obj::_privateKey));
            		}
HXLINE( 881)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxGameJolt_obj,encryptURL,return )

bool FlxGameJolt_obj::get_initialized(){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_893_get_initialized)
HXDLIN( 893)		return ::flixel::addons::api::FlxGameJolt_obj::_initialized;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxGameJolt_obj,get_initialized,return )

bool FlxGameJolt_obj::get_gameInit(){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_897_get_gameInit)
HXLINE( 898)		bool _hx_tmp;
HXDLIN( 898)		if ((::flixel::addons::api::FlxGameJolt_obj::_gameID != 0)) {
HXLINE( 898)			_hx_tmp = (::flixel::addons::api::FlxGameJolt_obj::_privateKey == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 898)			_hx_tmp = true;
            		}
HXDLIN( 898)		if (_hx_tmp) {
HXLINE( 907)			return false;
            		}
HXLINE( 910)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxGameJolt_obj,get_gameInit,return )

bool FlxGameJolt_obj::get_authenticated(){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_914_get_authenticated)
HXLINE( 915)		if (!(::flixel::addons::api::FlxGameJolt_obj::get_gameInit())) {
HXLINE( 916)			return false;
            		}
HXLINE( 918)		if (!(::flixel::addons::api::FlxGameJolt_obj::_initialized)) {
HXLINE( 923)			return false;
            		}
HXLINE( 926)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxGameJolt_obj,get_authenticated,return )

::String FlxGameJolt_obj::get_username(){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_930_get_username)
HXLINE( 931)		bool _hx_tmp;
HXDLIN( 931)		bool _hx_tmp1;
HXDLIN( 931)		if (::flixel::addons::api::FlxGameJolt_obj::_initialized) {
HXLINE( 931)			_hx_tmp1 = ::hx::IsNull( ::flixel::addons::api::FlxGameJolt_obj::_userName );
            		}
            		else {
HXLINE( 931)			_hx_tmp1 = true;
            		}
HXDLIN( 931)		if (!(_hx_tmp1)) {
HXLINE( 931)			_hx_tmp = (::flixel::addons::api::FlxGameJolt_obj::_userName == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 931)			_hx_tmp = true;
            		}
HXDLIN( 931)		if (_hx_tmp) {
HXLINE( 933)			return HX_("No user",6a,5e,a7,c7);
            		}
HXLINE( 936)		return ::flixel::addons::api::FlxGameJolt_obj::_userName;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxGameJolt_obj,get_username,return )

::String FlxGameJolt_obj::get_usertoken(){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_940_get_usertoken)
HXLINE( 941)		bool _hx_tmp;
HXDLIN( 941)		bool _hx_tmp1;
HXDLIN( 941)		if (::flixel::addons::api::FlxGameJolt_obj::_initialized) {
HXLINE( 941)			_hx_tmp1 = ::hx::IsNull( ::flixel::addons::api::FlxGameJolt_obj::_userToken );
            		}
            		else {
HXLINE( 941)			_hx_tmp1 = true;
            		}
HXDLIN( 941)		if (!(_hx_tmp1)) {
HXLINE( 941)			_hx_tmp = (::flixel::addons::api::FlxGameJolt_obj::_userToken == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 941)			_hx_tmp = true;
            		}
HXDLIN( 941)		if (_hx_tmp) {
HXLINE( 943)			return HX_("No token",fa,51,c4,54);
            		}
HXLINE( 946)		return ::flixel::addons::api::FlxGameJolt_obj::_userToken;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxGameJolt_obj,get_usertoken,return )

bool FlxGameJolt_obj::get_isQuickPlay(){
            	HX_GC_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_950_get_isQuickPlay)
HXLINE( 954)		 ::haxe::ds::StringMap argmap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 956)		{
HXLINE( 956)			int _g = 0;
HXDLIN( 956)			::Array< ::String > _g1 = ::Sys_obj::args();
HXDLIN( 956)			while((_g < _g1->length)){
HXLINE( 956)				::String arg = _g1->__get(_g);
HXDLIN( 956)				_g = (_g + 1);
HXLINE( 958)				::Array< ::String > argArray = arg.split(HX_("=",3d,00,00,00));
HXLINE( 959)				argmap->set(argArray->__get(0),argArray->__get(1));
            			}
            		}
HXLINE( 962)		bool _hx_tmp;
HXDLIN( 962)		if (argmap->exists(HX_("gjapi_username",3e,a0,54,c7))) {
HXLINE( 962)			_hx_tmp = argmap->exists(HX_("gjapi_token",d1,ff,3d,8a));
            		}
            		else {
HXLINE( 962)			_hx_tmp = false;
            		}
HXDLIN( 962)		if (_hx_tmp) {
HXLINE( 964)			return true;
            		}
HXLINE( 966)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxGameJolt_obj,get_isQuickPlay,return )

bool FlxGameJolt_obj::get_isEmbeddedFlash(){
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_980_get_isEmbeddedFlash)
HXDLIN( 980)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxGameJolt_obj,get_isEmbeddedFlash,return )


FlxGameJolt_obj::FlxGameJolt_obj()
{
}

bool FlxGameJolt_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_idURL") ) { outValue = ( _idURL ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { outValue = ( verbose ); return true; }
		if (HX_FIELD_EQ(inName,"_gameID") ) { outValue = ( _gameID ); return true; }
		if (HX_FIELD_EQ(inName,"_loader") ) { outValue = ( _loader ); return true; }
		if (HX_FIELD_EQ(inName,"setData") ) { outValue = setData_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hashType") ) { outValue = ( hashType ); return true; }
		if (HX_FIELD_EQ(inName,"gameInit") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_gameInit() ); return true; } }
		if (HX_FIELD_EQ(inName,"username") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_username() ); return true; } }
		if (HX_FIELD_EQ(inName,"authUser") ) { outValue = authUser_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addScore") ) { outValue = addScore_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"usertoken") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_usertoken() ); return true; } }
		if (HX_FIELD_EQ(inName,"_callBack") ) { outValue = ( _callBack ); return true; }
		if (HX_FIELD_EQ(inName,"_userName") ) { outValue = ( _userName ); return true; }
		if (HX_FIELD_EQ(inName,"_getImage") ) { outValue = ( _getImage ); return true; }
		if (HX_FIELD_EQ(inName,"fetchUser") ) { outValue = fetchUser_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addTrophy") ) { outValue = addTrophy_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getTables") ) { outValue = getTables_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fetchData") ) { outValue = fetchData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"parseData") ) { outValue = parseData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resetUser") ) { outValue = resetUser_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_userToken") ) { outValue = ( _userToken ); return true; }
		if (HX_FIELD_EQ(inName,"fetchScore") ) { outValue = fetchScore_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"updateData") ) { outValue = updateData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeData") ) { outValue = removeData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getAllKeys") ) { outValue = getAllKeys_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"encryptURL") ) { outValue = encryptURL_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_initialized() ); return true; } }
		if (HX_FIELD_EQ(inName,"isQuickPlay") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_isQuickPlay() ); return true; } }
		if (HX_FIELD_EQ(inName,"_privateKey") ) { outValue = ( _privateKey ); return true; }
		if (HX_FIELD_EQ(inName,"_verifyAuth") ) { outValue = ( _verifyAuth ); return true; }
		if (HX_FIELD_EQ(inName,"openSession") ) { outValue = openSession_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"pingSession") ) { outValue = pingSession_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fetchTrophy") ) { outValue = fetchTrophy_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"returnImage") ) { outValue = returnImage_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initialized") ) { outValue = ( _initialized ); return true; }
		if (HX_FIELD_EQ(inName,"closeSession") ) { outValue = closeSession_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_gameInit") ) { outValue = get_gameInit_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_username") ) { outValue = get_username_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"authenticated") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_authenticated() ); return true; } }
		if (HX_FIELD_EQ(inName,"retrieveImage") ) { outValue = retrieveImage_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_usertoken") ) { outValue = get_usertoken_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isEmbeddedFlash") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_isEmbeddedFlash() ); return true; } }
		if (HX_FIELD_EQ(inName,"get_initialized") ) { outValue = get_initialized_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_isQuickPlay") ) { outValue = get_isQuickPlay_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fetchTrophyImage") ) { outValue = fetchTrophyImage_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fetchAvatarImage") ) { outValue = fetchAvatarImage_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"sendLoaderRequest") ) { outValue = sendLoaderRequest_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_authenticated") ) { outValue = get_authenticated_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_isEmbeddedFlash") ) { outValue = get_isEmbeddedFlash_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"verifyAuthentication") ) { outValue = verifyAuthentication_dyn(); return true; }
	}
	return false;
}

bool FlxGameJolt_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_idURL") ) { _idURL=ioValue.Cast< ::String >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { verbose=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"_gameID") ) { _gameID=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"_loader") ) { _loader=ioValue.Cast<  ::openfl::net::URLLoader >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hashType") ) { hashType=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callBack") ) { _callBack=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"_userName") ) { _userName=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"_getImage") ) { _getImage=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_userToken") ) { _userToken=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_privateKey") ) { _privateKey=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"_verifyAuth") ) { _verifyAuth=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initialized") ) { _initialized=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxGameJolt_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxGameJolt_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxGameJolt_obj::HASH_MD5,HX_("HASH_MD5",cd,e4,a1,88)},
	{::hx::fsInt,(void *) &FlxGameJolt_obj::HASH_SHA1,HX_("HASH_SHA1",f6,a9,00,09)},
	{::hx::fsInt,(void *) &FlxGameJolt_obj::TROPHIES_MISSING,HX_("TROPHIES_MISSING",15,4e,b6,56)},
	{::hx::fsInt,(void *) &FlxGameJolt_obj::TROPHIES_ACHIEVED,HX_("TROPHIES_ACHIEVED",44,53,62,b6)},
	{::hx::fsInt,(void *) &FlxGameJolt_obj::hashType,HX_("hashType",a8,4d,b9,12)},
	{::hx::fsBool,(void *) &FlxGameJolt_obj::verbose,HX_("verbose",82,d7,b9,71)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &FlxGameJolt_obj::_callBack,HX_("_callBack",44,bd,75,b1)},
	{::hx::fsInt,(void *) &FlxGameJolt_obj::_gameID,HX_("_gameID",ec,a5,70,bf)},
	{::hx::fsString,(void *) &FlxGameJolt_obj::_privateKey,HX_("_privateKey",7b,a5,49,59)},
	{::hx::fsString,(void *) &FlxGameJolt_obj::_userName,HX_("_userName",95,a9,5a,53)},
	{::hx::fsString,(void *) &FlxGameJolt_obj::_userToken,HX_("_userToken",6f,ac,a0,19)},
	{::hx::fsString,(void *) &FlxGameJolt_obj::_idURL,HX_("_idURL",95,4d,54,b3)},
	{::hx::fsBool,(void *) &FlxGameJolt_obj::_initialized,HX_("_initialized",15,a3,19,9d)},
	{::hx::fsBool,(void *) &FlxGameJolt_obj::_verifyAuth,HX_("_verifyAuth",a0,0c,13,d4)},
	{::hx::fsBool,(void *) &FlxGameJolt_obj::_getImage,HX_("_getImage",44,26,d6,64)},
	{::hx::fsObject /*  ::openfl::net::URLLoader */ ,(void *) &FlxGameJolt_obj::_loader,HX_("_loader",b2,59,e6,c6)},
	{::hx::fsString,(void *) &FlxGameJolt_obj::URL_API,HX_("URL_API",4a,f8,54,99)},
	{::hx::fsString,(void *) &FlxGameJolt_obj::RETURN_TYPE,HX_("RETURN_TYPE",e9,07,d8,bc)},
	{::hx::fsString,(void *) &FlxGameJolt_obj::URL_GAME_ID,HX_("URL_GAME_ID",18,a5,7c,44)},
	{::hx::fsString,(void *) &FlxGameJolt_obj::URL_USER_NAME,HX_("URL_USER_NAME",cf,e7,c5,50)},
	{::hx::fsString,(void *) &FlxGameJolt_obj::URL_USER_TOKEN,HX_("URL_USER_TOKEN",d5,e0,0b,da)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxGameJolt_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::HASH_MD5,"HASH_MD5");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::HASH_SHA1,"HASH_SHA1");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::TROPHIES_MISSING,"TROPHIES_MISSING");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::TROPHIES_ACHIEVED,"TROPHIES_ACHIEVED");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::hashType,"hashType");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::verbose,"verbose");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::_callBack,"_callBack");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::_gameID,"_gameID");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::_privateKey,"_privateKey");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::_userName,"_userName");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::_userToken,"_userToken");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::_idURL,"_idURL");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::_initialized,"_initialized");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::_verifyAuth,"_verifyAuth");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::_getImage,"_getImage");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::_loader,"_loader");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::URL_API,"URL_API");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::RETURN_TYPE,"RETURN_TYPE");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::URL_GAME_ID,"URL_GAME_ID");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::URL_USER_NAME,"URL_USER_NAME");
	HX_MARK_MEMBER_NAME(FlxGameJolt_obj::URL_USER_TOKEN,"URL_USER_TOKEN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxGameJolt_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::HASH_MD5,"HASH_MD5");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::HASH_SHA1,"HASH_SHA1");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::TROPHIES_MISSING,"TROPHIES_MISSING");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::TROPHIES_ACHIEVED,"TROPHIES_ACHIEVED");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::hashType,"hashType");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::verbose,"verbose");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::_callBack,"_callBack");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::_gameID,"_gameID");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::_privateKey,"_privateKey");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::_userName,"_userName");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::_userToken,"_userToken");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::_idURL,"_idURL");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::_initialized,"_initialized");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::_verifyAuth,"_verifyAuth");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::_getImage,"_getImage");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::_loader,"_loader");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::URL_API,"URL_API");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::RETURN_TYPE,"RETURN_TYPE");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::URL_GAME_ID,"URL_GAME_ID");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::URL_USER_NAME,"URL_USER_NAME");
	HX_VISIT_MEMBER_NAME(FlxGameJolt_obj::URL_USER_TOKEN,"URL_USER_TOKEN");
};

#endif

::hx::Class FlxGameJolt_obj::__mClass;

static ::String FlxGameJolt_obj_sStaticFields[] = {
	HX_("HASH_MD5",cd,e4,a1,88),
	HX_("HASH_SHA1",f6,a9,00,09),
	HX_("TROPHIES_MISSING",15,4e,b6,56),
	HX_("TROPHIES_ACHIEVED",44,53,62,b6),
	HX_("hashType",a8,4d,b9,12),
	HX_("verbose",82,d7,b9,71),
	HX_("_callBack",44,bd,75,b1),
	HX_("_gameID",ec,a5,70,bf),
	HX_("_privateKey",7b,a5,49,59),
	HX_("_userName",95,a9,5a,53),
	HX_("_userToken",6f,ac,a0,19),
	HX_("_idURL",95,4d,54,b3),
	HX_("_initialized",15,a3,19,9d),
	HX_("_verifyAuth",a0,0c,13,d4),
	HX_("_getImage",44,26,d6,64),
	HX_("_loader",b2,59,e6,c6),
	HX_("URL_API",4a,f8,54,99),
	HX_("RETURN_TYPE",e9,07,d8,bc),
	HX_("URL_GAME_ID",18,a5,7c,44),
	HX_("URL_USER_NAME",cf,e7,c5,50),
	HX_("URL_USER_TOKEN",d5,e0,0b,da),
	HX_("init",10,3b,bb,45),
	HX_("fetchUser",a5,77,58,24),
	HX_("authUser",d3,71,05,29),
	HX_("openSession",ac,a8,d9,2e),
	HX_("pingSession",04,5f,ca,47),
	HX_("closeSession",7e,0e,69,df),
	HX_("fetchTrophy",ca,72,fa,51),
	HX_("addTrophy",f1,37,ec,06),
	HX_("fetchScore",b8,3c,b7,77),
	HX_("addScore",71,99,36,f2),
	HX_("getTables",db,dd,b3,f8),
	HX_("fetchData",84,3b,0e,19),
	HX_("setData",ec,96,e7,07),
	HX_("updateData",d3,40,18,fb),
	HX_("removeData",8e,90,82,bf),
	HX_("getAllKeys",bf,31,b5,a0),
	HX_("sendLoaderRequest",14,4d,69,65),
	HX_("parseData",fd,a7,09,ca),
	HX_("verifyAuthentication",d1,aa,b7,89),
	HX_("resetUser",ba,9b,99,93),
	HX_("fetchTrophyImage",31,c0,95,07),
	HX_("fetchAvatarImage",68,ee,3d,e4),
	HX_("retrieveImage",3f,f3,a1,f9),
	HX_("returnImage",8b,ec,45,ca),
	HX_("encryptURL",0a,96,2a,4f),
	HX_("get_initialized",ab,ac,f1,f7),
	HX_("get_gameInit",2b,f0,fa,66),
	HX_("get_authenticated",06,a6,25,e5),
	HX_("get_username",1f,3a,05,d6),
	HX_("get_usertoken",a5,94,34,ec),
	HX_("get_isQuickPlay",ce,c9,b5,54),
	HX_("get_isEmbeddedFlash",93,d0,68,cf),
	::String(null())
};

void FlxGameJolt_obj::__register()
{
	FlxGameJolt_obj _hx_dummy;
	FlxGameJolt_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.api.FlxGameJolt",94,88,39,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxGameJolt_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxGameJolt_obj::__SetStatic;
	__mClass->mMarkFunc = FlxGameJolt_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxGameJolt_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxGameJolt_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxGameJolt_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGameJolt_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGameJolt_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxGameJolt_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_41_boot)
HXDLIN(  41)		HASH_MD5 = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_46_boot)
HXDLIN(  46)		HASH_SHA1 = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_51_boot)
HXDLIN(  51)		TROPHIES_MISSING = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_56_boot)
HXDLIN(  56)		TROPHIES_ACHIEVED = -2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_61_boot)
HXDLIN(  61)		hashType = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_68_boot)
HXDLIN(  68)		verbose = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_122_boot)
HXDLIN( 122)		_gameID = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_130_boot)
HXDLIN( 130)		_privateKey = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_150_boot)
HXDLIN( 150)		_initialized = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_155_boot)
HXDLIN( 155)		_verifyAuth = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_160_boot)
HXDLIN( 160)		_getImage = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_170_boot)
HXDLIN( 170)		URL_API = HX_("http://gamejolt.com/api/game/v1/",57,8c,99,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_172_boot)
HXDLIN( 172)		RETURN_TYPE = HX_("?format=keypair",52,c1,56,6b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_173_boot)
HXDLIN( 173)		URL_GAME_ID = HX_("&game_id=",1b,b4,3d,10);
            	}
{
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_174_boot)
HXDLIN( 174)		URL_USER_NAME = HX_("&username=",81,98,37,38);
            	}
{
            	HX_STACKFRAME(&_hx_pos_76e99f9ed6f5e4df_175_boot)
HXDLIN( 175)		URL_USER_TOKEN = HX_("&user_token=",72,8b,98,bb);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace api
