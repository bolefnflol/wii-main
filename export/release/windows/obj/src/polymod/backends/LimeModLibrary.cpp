#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_String
#include <lime/net/_HTTPRequest_String.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_polymod_backends_IBackend
#include <polymod/backends/IBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_LimeBackend
#include <polymod/backends/LimeBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_LimeModLibrary
#include <polymod/backends/LimeModLibrary.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssetLibrary
#include <polymod/backends/PolymodAssetLibrary.h>
#endif
#ifndef INCLUDED_polymod_fs_IFileSystem
#include <polymod/fs/IFileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_83234c3e57483dca_301_new,"polymod.backends.LimeModLibrary","new",0x1dcd2097,"polymod.backends.LimeModLibrary.new","polymod/backends/LimeBackend.hx",301,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_311_destroy,"polymod.backends.LimeModLibrary","destroy",0xabf164b1,"polymod.backends.LimeModLibrary.destroy","polymod/backends/LimeBackend.hx",311,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_319_getAsset,"polymod.backends.LimeModLibrary","getAsset",0x7c7601e3,"polymod.backends.LimeModLibrary.getAsset","polymod/backends/LimeBackend.hx",319,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_334_exists,"polymod.backends.LimeModLibrary","exists",0x99738a05,"polymod.backends.LimeModLibrary.exists","polymod/backends/LimeBackend.hx",334,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_343_getAudioBuffer,"polymod.backends.LimeModLibrary","getAudioBuffer",0xec6c7ea9,"polymod.backends.LimeModLibrary.getAudioBuffer","polymod/backends/LimeBackend.hx",343,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_353_getBytes,"polymod.backends.LimeModLibrary","getBytes",0x13d4a05e,"polymod.backends.LimeModLibrary.getBytes","polymod/backends/LimeBackend.hx",353,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_364_getFont,"polymod.backends.LimeModLibrary","getFont",0x9dae453c,"polymod.backends.LimeModLibrary.getFont","polymod/backends/LimeBackend.hx",364,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_374_getImage,"polymod.backends.LimeModLibrary","getImage",0x13a5b74e,"polymod.backends.LimeModLibrary.getImage","polymod/backends/LimeBackend.hx",374,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_391_getPath,"polymod.backends.LimeModLibrary","getPath",0xa43fcd12,"polymod.backends.LimeModLibrary.getPath","polymod/backends/LimeBackend.hx",391,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_401_getText,"polymod.backends.LimeModLibrary","getText",0xa6e7b41a,"polymod.backends.LimeModLibrary.getText","polymod/backends/LimeBackend.hx",401,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_423_loadBytes,"polymod.backends.LimeModLibrary","loadBytes",0x7b4127dc,"polymod.backends.LimeModLibrary.loadBytes","polymod/backends/LimeBackend.hx",423,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_438_loadFont,"polymod.backends.LimeModLibrary","loadFont",0xaac5b77e,"polymod.backends.LimeModLibrary.loadFont","polymod/backends/LimeBackend.hx",438,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_461_loadImage,"polymod.backends.LimeModLibrary","loadImage",0x7b123ecc,"polymod.backends.LimeModLibrary.loadImage","polymod/backends/LimeBackend.hx",461,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_476_loadAudioBuffer,"polymod.backends.LimeModLibrary","loadAudioBuffer",0xf608b8a7,"polymod.backends.LimeModLibrary.loadAudioBuffer","polymod/backends/LimeBackend.hx",476,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_499_loadText,"polymod.backends.LimeModLibrary","loadText",0xb3ff265c,"polymod.backends.LimeModLibrary.loadText","polymod/backends/LimeBackend.hx",499,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_516_isLocal,"polymod.backends.LimeModLibrary","isLocal",0x9ce1a4d8,"polymod.backends.LimeModLibrary.isLocal","polymod/backends/LimeBackend.hx",516,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_526_list,"polymod.backends.LimeModLibrary","list",0xf45ffc47,"polymod.backends.LimeModLibrary.list","polymod/backends/LimeBackend.hx",526,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_261_LimeToPoly,"polymod.backends.LimeModLibrary","LimeToPoly",0x9363ab25,"polymod.backends.LimeModLibrary.LimeToPoly","polymod/backends/LimeBackend.hx",261,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_277_PolyToLime,"polymod.backends.LimeModLibrary","PolyToLime",0x8a076e65,"polymod.backends.LimeModLibrary.PolyToLime","polymod/backends/LimeBackend.hx",277,0xcff7dfd6)
namespace polymod{
namespace backends{

void LimeModLibrary_obj::__construct( ::polymod::backends::LimeBackend backend, ::lime::utils::AssetLibrary fallback,::String __o_pathPrefix){
            		::String pathPrefix = __o_pathPrefix;
            		if (::hx::IsNull(__o_pathPrefix)) pathPrefix = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_301_new)
HXLINE( 302)		this->b = backend;
HXLINE( 303)		this->p = this->b->polymodLibrary;
HXLINE( 304)		this->pathPrefix = pathPrefix;
HXLINE( 305)		this->fallback = fallback;
HXLINE( 306)		this->hasFallback = ::hx::IsNotNull( this->fallback );
HXLINE( 307)		super::__construct();
            	}

Dynamic LimeModLibrary_obj::__CreateEmpty() { return new LimeModLibrary_obj; }

void *LimeModLibrary_obj::_hx_vtable = 0;

Dynamic LimeModLibrary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LimeModLibrary_obj > _hx_result = new LimeModLibrary_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool LimeModLibrary_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25654723) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25654723;
	} else {
		return inClassId==(int)0x333eca03;
	}
}

void LimeModLibrary_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_311_destroy)
HXLINE( 312)		this->b = null();
HXLINE( 313)		this->p = null();
HXLINE( 314)		this->fallback = null();
HXLINE( 315)		this->type = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LimeModLibrary_obj,destroy,(void))

 ::Dynamic LimeModLibrary_obj::getAsset(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_319_getAsset)
HXLINE( 320)		::String symbol_modId;
HXDLIN( 320)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 320)		::String id1 = id;
HXDLIN( 320)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 320)		::String symbol_fallbackId = id1;
HXDLIN( 320)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 320)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 320)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 320)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 320)		bool _hx_tmp;
HXDLIN( 320)		bool _hx_tmp1;
HXDLIN( 320)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 320)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 320)			_hx_tmp1 = false;
            		}
HXDLIN( 320)		if (_hx_tmp1) {
HXLINE( 320)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 320)			_hx_tmp = false;
            		}
HXDLIN( 320)		if (_hx_tmp) {
HXLINE( 320)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 320)		symbol_modId = symbol_nakedId;
HXLINE( 321)		 ::polymod::backends::PolymodAssetLibrary e = this->p;
HXDLIN( 321)		bool e1 = e->check(symbol_modId,::polymod::backends::LimeModLibrary_obj::LimeToPoly(type));
HXLINE( 322)		if ((type == HX_("TEXT",ad,94,ba,37))) {
HXLINE( 324)			return this->getText(id);
            		}
HXLINE( 326)		bool _hx_tmp2;
HXDLIN( 326)		if (!(e1)) {
HXLINE( 326)			_hx_tmp2 = this->hasFallback;
            		}
            		else {
HXLINE( 326)			_hx_tmp2 = false;
            		}
HXDLIN( 326)		if (_hx_tmp2) {
HXLINE( 328)			return this->fallback->getAsset(id,type);
            		}
HXLINE( 330)		return this->super::getAsset(id,type);
            	}


bool LimeModLibrary_obj::exists(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_334_exists)
HXLINE( 335)		::String symbol_modId;
HXDLIN( 335)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 335)		::String id1 = id;
HXDLIN( 335)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 335)		::String symbol_fallbackId = id1;
HXDLIN( 335)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 335)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 335)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 335)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 335)		bool _hx_tmp;
HXDLIN( 335)		bool _hx_tmp1;
HXDLIN( 335)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 335)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 335)			_hx_tmp1 = false;
            		}
HXDLIN( 335)		if (_hx_tmp1) {
HXLINE( 335)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 335)			_hx_tmp = false;
            		}
HXDLIN( 335)		if (_hx_tmp) {
HXLINE( 335)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 335)		symbol_modId = symbol_nakedId;
HXLINE( 336)		 ::polymod::backends::PolymodAssetLibrary e = this->p;
HXDLIN( 336)		bool e1 = e->check(symbol_modId,::polymod::backends::LimeModLibrary_obj::LimeToPoly(type));
HXLINE( 337)		bool _hx_tmp2;
HXDLIN( 337)		if (!(e1)) {
HXLINE( 337)			_hx_tmp2 = this->hasFallback;
            		}
            		else {
HXLINE( 337)			_hx_tmp2 = false;
            		}
HXDLIN( 337)		if (_hx_tmp2) {
HXLINE( 338)			return this->fallback->exists(id,type);
            		}
HXLINE( 339)		return e1;
            	}


 ::lime::media::AudioBuffer LimeModLibrary_obj::getAudioBuffer(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_343_getAudioBuffer)
HXLINE( 344)		::String symbol_modId;
HXDLIN( 344)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 344)		::String id1 = id;
HXDLIN( 344)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 344)		::String symbol_fallbackId = id1;
HXDLIN( 344)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 344)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 344)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 344)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 344)		bool _hx_tmp;
HXDLIN( 344)		bool _hx_tmp1;
HXDLIN( 344)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 344)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 344)			_hx_tmp1 = false;
            		}
HXDLIN( 344)		if (_hx_tmp1) {
HXLINE( 344)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 344)			_hx_tmp = false;
            		}
HXDLIN( 344)		if (_hx_tmp) {
HXLINE( 344)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 344)		symbol_modId = symbol_nakedId;
HXLINE( 345)		if (this->p->check(symbol_modId,null())) {
HXLINE( 346)			::Dynamic _hx_tmp = this->p->fileSystem;
HXDLIN( 346)			return ::lime::media::AudioBuffer_obj::fromBytes(::polymod::fs::IFileSystem_obj::getFileBytes(_hx_tmp,this->p->file(symbol_modId,null())));
            		}
            		else {
HXLINE( 347)			if (this->hasFallback) {
HXLINE( 348)				return this->fallback->getAudioBuffer(id);
            			}
            		}
HXLINE( 349)		return null();
            	}


 ::haxe::io::Bytes LimeModLibrary_obj::getBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_353_getBytes)
HXLINE( 354)		::String symbol_modId;
HXDLIN( 354)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 354)		::String id1 = id;
HXDLIN( 354)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 354)		::String symbol_fallbackId = id1;
HXDLIN( 354)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 354)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 354)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 354)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 354)		bool _hx_tmp;
HXDLIN( 354)		bool _hx_tmp1;
HXDLIN( 354)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 354)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 354)			_hx_tmp1 = false;
            		}
HXDLIN( 354)		if (_hx_tmp1) {
HXLINE( 354)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 354)			_hx_tmp = false;
            		}
HXDLIN( 354)		if (_hx_tmp) {
HXLINE( 354)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 354)		symbol_modId = symbol_nakedId;
HXLINE( 355)		::String file = this->p->file(symbol_modId,null());
HXLINE( 356)		if (this->p->check(symbol_modId,null())) {
HXLINE( 357)			::Dynamic _hx_tmp = this->p->fileSystem;
HXDLIN( 357)			return ::polymod::fs::IFileSystem_obj::getFileBytes(_hx_tmp,this->p->file(symbol_modId,null()));
            		}
            		else {
HXLINE( 358)			if (this->hasFallback) {
HXLINE( 359)				return this->fallback->getBytes(id);
            			}
            		}
HXLINE( 360)		return null();
            	}


 ::lime::text::Font LimeModLibrary_obj::getFont(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_364_getFont)
HXLINE( 365)		::String symbol_modId;
HXDLIN( 365)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 365)		::String id1 = id;
HXDLIN( 365)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 365)		::String symbol_fallbackId = id1;
HXDLIN( 365)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 365)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 365)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 365)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 365)		bool _hx_tmp;
HXDLIN( 365)		bool _hx_tmp1;
HXDLIN( 365)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 365)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 365)			_hx_tmp1 = false;
            		}
HXDLIN( 365)		if (_hx_tmp1) {
HXLINE( 365)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 365)			_hx_tmp = false;
            		}
HXDLIN( 365)		if (_hx_tmp) {
HXLINE( 365)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 365)		symbol_modId = symbol_nakedId;
HXLINE( 366)		if (this->p->check(symbol_modId,null())) {
HXLINE( 367)			::Dynamic _hx_tmp = this->p->fileSystem;
HXDLIN( 367)			return ::lime::text::Font_obj::fromBytes(::polymod::fs::IFileSystem_obj::getFileBytes(_hx_tmp,this->p->file(symbol_modId,null())));
            		}
            		else {
HXLINE( 368)			if (this->hasFallback) {
HXLINE( 369)				return this->fallback->getFont(id);
            			}
            		}
HXLINE( 370)		return null();
            	}


 ::lime::graphics::Image LimeModLibrary_obj::getImage(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_374_getImage)
HXLINE( 375)		::String symbol_modId;
HXDLIN( 375)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 375)		::String id1 = id;
HXDLIN( 375)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 375)		::String symbol_fallbackId = id1;
HXDLIN( 375)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 375)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 375)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 375)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 375)		bool _hx_tmp;
HXDLIN( 375)		bool _hx_tmp1;
HXDLIN( 375)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 375)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 375)			_hx_tmp1 = false;
            		}
HXDLIN( 375)		if (_hx_tmp1) {
HXLINE( 375)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 375)			_hx_tmp = false;
            		}
HXDLIN( 375)		if (_hx_tmp) {
HXLINE( 375)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 375)		symbol_modId = symbol_nakedId;
HXLINE( 376)		if (this->p->check(symbol_modId,null())) {
HXLINE( 377)			if (this->p->check(symbol_modId,null())) {
HXLINE( 379)				if ((id.indexOf(HX_("newgrounds",ac,0f,a7,f6),null()) != -1)) {
HXLINE( 381)					::Dynamic bytes = this->p->fileSystem;
HXDLIN( 381)					 ::haxe::io::Bytes bytes1 = ::polymod::fs::IFileSystem_obj::getFileBytes(bytes,this->p->file(symbol_modId,null()));
            				}
HXLINE( 383)				::Dynamic _hx_tmp = this->p->fileSystem;
HXDLIN( 383)				return ::lime::graphics::Image_obj::fromBytes(::polymod::fs::IFileSystem_obj::getFileBytes(_hx_tmp,this->p->file(symbol_modId,null())));
            			}
            			else {
HXLINE( 385)				if (this->hasFallback) {
HXLINE( 386)					return this->fallback->getImage(id);
            				}
            			}
            		}
HXLINE( 387)		return null();
            	}


::String LimeModLibrary_obj::getPath(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_391_getPath)
HXLINE( 392)		::String symbol_modId;
HXDLIN( 392)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 392)		::String id1 = id;
HXDLIN( 392)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 392)		::String symbol_fallbackId = id1;
HXDLIN( 392)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 392)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 392)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 392)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 392)		bool _hx_tmp;
HXDLIN( 392)		bool _hx_tmp1;
HXDLIN( 392)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 392)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 392)			_hx_tmp1 = false;
            		}
HXDLIN( 392)		if (_hx_tmp1) {
HXLINE( 392)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 392)			_hx_tmp = false;
            		}
HXDLIN( 392)		if (_hx_tmp) {
HXLINE( 392)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 392)		symbol_modId = symbol_nakedId;
HXLINE( 393)		if (this->p->check(symbol_modId,null())) {
HXLINE( 394)			return this->p->file(symbol_modId,null());
            		}
            		else {
HXLINE( 395)			if (this->hasFallback) {
HXLINE( 396)				return this->fallback->getPath(id);
            			}
            		}
HXLINE( 397)		return null();
            	}


::String LimeModLibrary_obj::getText(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_401_getText)
HXLINE( 402)		::String symbol_modId;
HXDLIN( 402)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 402)		::String id1 = id;
HXDLIN( 402)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 402)		::String symbol_fallbackId = id1;
HXDLIN( 402)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 402)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 402)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 402)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 402)		bool _hx_tmp;
HXDLIN( 402)		bool _hx_tmp1;
HXDLIN( 402)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 402)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 402)			_hx_tmp1 = false;
            		}
HXDLIN( 402)		if (_hx_tmp1) {
HXLINE( 402)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 402)			_hx_tmp = false;
            		}
HXDLIN( 402)		if (_hx_tmp) {
HXLINE( 402)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 402)		symbol_modId = symbol_nakedId;
HXLINE( 403)		::String modText = null();
HXLINE( 404)		if (this->p->check(symbol_modId,null())) {
HXLINE( 406)			modText = this->super::getText(symbol_modId);
            		}
            		else {
HXLINE( 408)			if (this->hasFallback) {
HXLINE( 410)				modText = this->fallback->getText(id);
            			}
            		}
HXLINE( 413)		if (::hx::IsNotNull( modText )) {
HXLINE( 416)			modText = this->p->mergeAndAppendText(id,modText);
            		}
HXLINE( 419)		return modText;
            	}


 ::lime::app::Future LimeModLibrary_obj::loadBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_423_loadBytes)
HXLINE( 424)		::String symbol_modId;
HXDLIN( 424)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 424)		::String id1 = id;
HXDLIN( 424)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 424)		::String symbol_fallbackId = id1;
HXDLIN( 424)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 424)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 424)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 424)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 424)		bool _hx_tmp;
HXDLIN( 424)		bool _hx_tmp1;
HXDLIN( 424)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 424)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 424)			_hx_tmp1 = false;
            		}
HXDLIN( 424)		if (_hx_tmp1) {
HXLINE( 424)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 424)			_hx_tmp = false;
            		}
HXDLIN( 424)		if (_hx_tmp) {
HXLINE( 424)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 424)		symbol_modId = symbol_nakedId;
HXLINE( 426)		if (this->p->check(symbol_modId,null())) {
HXLINE( 428)			return ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromFile(this->p->file(symbol_modId,null()));
            		}
            		else {
HXLINE( 430)			if (this->hasFallback) {
HXLINE( 432)				return this->fallback->loadBytes(id);
            			}
            		}
HXLINE( 434)		return ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromFile(HX_("",00,00,00,00));
            	}


 ::lime::app::Future LimeModLibrary_obj::loadFont(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_438_loadFont)
HXLINE( 439)		::String symbol_modId;
HXDLIN( 439)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 439)		::String id1 = id;
HXDLIN( 439)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 439)		::String symbol_fallbackId = id1;
HXDLIN( 439)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 439)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 439)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 439)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 439)		bool _hx_tmp;
HXDLIN( 439)		bool _hx_tmp1;
HXDLIN( 439)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 439)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 439)			_hx_tmp1 = false;
            		}
HXDLIN( 439)		if (_hx_tmp1) {
HXLINE( 439)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 439)			_hx_tmp = false;
            		}
HXDLIN( 439)		if (_hx_tmp) {
HXLINE( 439)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 439)		symbol_modId = symbol_nakedId;
HXLINE( 441)		if (this->p->check(symbol_modId,null())) {
HXLINE( 446)			::Dynamic this1 = this->paths;
HXDLIN( 446)			return ::lime::text::Font_obj::loadFromFile(( ( ::haxe::ds::StringMap)(this1) )->get_string(this->p->file(symbol_modId,null())));
            		}
            		else {
HXLINE( 449)			if (this->hasFallback) {
HXLINE( 451)				return this->fallback->loadFont(id);
            			}
            		}
HXLINE( 456)		return ::lime::text::Font_obj::loadFromFile(this->paths->get_string(HX_("",00,00,00,00)));
            	}


 ::lime::app::Future LimeModLibrary_obj::loadImage(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_461_loadImage)
HXLINE( 462)		::String symbol_modId;
HXDLIN( 462)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 462)		::String id1 = id;
HXDLIN( 462)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 462)		::String symbol_fallbackId = id1;
HXDLIN( 462)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 462)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 462)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 462)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 462)		bool _hx_tmp;
HXDLIN( 462)		bool _hx_tmp1;
HXDLIN( 462)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 462)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 462)			_hx_tmp1 = false;
            		}
HXDLIN( 462)		if (_hx_tmp1) {
HXLINE( 462)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 462)			_hx_tmp = false;
            		}
HXDLIN( 462)		if (_hx_tmp) {
HXLINE( 462)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 462)		symbol_modId = symbol_nakedId;
HXLINE( 464)		if (this->p->check(symbol_modId,null())) {
HXLINE( 466)			return ::lime::graphics::Image_obj::loadFromFile(this->p->file(symbol_modId,null()));
            		}
            		else {
HXLINE( 468)			if (this->hasFallback) {
HXLINE( 470)				return this->fallback->loadImage(id);
            			}
            		}
HXLINE( 472)		return ::lime::graphics::Image_obj::loadFromFile(HX_("",00,00,00,00));
            	}


 ::lime::app::Future LimeModLibrary_obj::loadAudioBuffer(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_476_loadAudioBuffer)
HXLINE( 477)		::String symbol_modId;
HXDLIN( 477)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 477)		::String id1 = id;
HXDLIN( 477)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 477)		::String symbol_fallbackId = id1;
HXDLIN( 477)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 477)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 477)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 477)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 477)		bool _hx_tmp;
HXDLIN( 477)		bool _hx_tmp1;
HXDLIN( 477)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 477)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 477)			_hx_tmp1 = false;
            		}
HXDLIN( 477)		if (_hx_tmp1) {
HXLINE( 477)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 477)			_hx_tmp = false;
            		}
HXDLIN( 477)		if (_hx_tmp) {
HXLINE( 477)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 477)		symbol_modId = symbol_nakedId;
HXLINE( 479)		if (this->p->check(symbol_modId,null())) {
HXLINE( 482)			::Dynamic this1 = this->pathGroups;
HXDLIN( 482)			if (( ( ::haxe::ds::StringMap)(this1) )->exists(this->p->file(symbol_modId,null()))) {
HXLINE( 484)				::Dynamic this1 = this->pathGroups;
HXDLIN( 484)				return ::lime::media::AudioBuffer_obj::loadFromFiles(( (::Array< ::String >)(( ( ::haxe::ds::StringMap)(this1) )->get(this->p->file(symbol_modId,null()))) ));
            			}
            			else {
HXLINE( 488)				::Dynamic this1 = this->paths;
HXDLIN( 488)				return ::lime::media::AudioBuffer_obj::loadFromFile(( ( ::haxe::ds::StringMap)(this1) )->get_string(this->p->file(symbol_modId,null())));
            			}
            		}
            		else {
HXLINE( 491)			if (this->hasFallback) {
HXLINE( 493)				return this->fallback->loadAudioBuffer(id);
            			}
            		}
HXLINE( 495)		return ::lime::media::AudioBuffer_obj::loadFromFile(HX_("",00,00,00,00));
            	}


 ::lime::app::Future LimeModLibrary_obj::loadText(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_83234c3e57483dca_499_loadText)
HXLINE( 500)		::String symbol_modId;
HXDLIN( 500)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 500)		::String id1 = id;
HXDLIN( 500)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 500)		::String symbol_fallbackId = id1;
HXDLIN( 500)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 500)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 500)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 500)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 500)		bool _hx_tmp;
HXDLIN( 500)		bool _hx_tmp1;
HXDLIN( 500)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 500)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 500)			_hx_tmp1 = false;
            		}
HXDLIN( 500)		if (_hx_tmp1) {
HXLINE( 500)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 500)			_hx_tmp = false;
            		}
HXDLIN( 500)		if (_hx_tmp) {
HXLINE( 500)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 500)		symbol_modId = symbol_nakedId;
HXLINE( 502)		if (this->p->check(symbol_modId,null())) {
HXLINE( 504)			 ::lime::net::_HTTPRequest_String request =  ::lime::net::_HTTPRequest_String_obj::__alloc( HX_CTX ,null());
HXLINE( 505)			::Dynamic this1 = this->paths;
HXDLIN( 505)			return request->load(( ( ::haxe::ds::StringMap)(this1) )->get_string(this->p->file(symbol_modId,null())));
            		}
            		else {
HXLINE( 507)			if (this->hasFallback) {
HXLINE( 509)				return this->fallback->loadText(id);
            			}
            		}
HXLINE( 511)		 ::lime::net::_HTTPRequest_String request =  ::lime::net::_HTTPRequest_String_obj::__alloc( HX_CTX ,null());
HXLINE( 512)		return request->load(HX_("",00,00,00,00));
            	}


bool LimeModLibrary_obj::isLocal(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_516_isLocal)
HXLINE( 517)		::String symbol_modId;
HXDLIN( 517)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 517)		::String id1 = id;
HXDLIN( 517)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 517)		::String symbol_fallbackId = id1;
HXDLIN( 517)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 517)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 517)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 517)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 517)		bool _hx_tmp;
HXDLIN( 517)		bool _hx_tmp1;
HXDLIN( 517)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 517)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 517)			_hx_tmp1 = false;
            		}
HXDLIN( 517)		if (_hx_tmp1) {
HXLINE( 517)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 517)			_hx_tmp = false;
            		}
HXDLIN( 517)		if (_hx_tmp) {
HXLINE( 517)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 517)		symbol_modId = symbol_nakedId;
HXLINE( 518)		if (this->p->check(symbol_modId,null())) {
HXLINE( 519)			return true;
            		}
            		else {
HXLINE( 520)			if (this->hasFallback) {
HXLINE( 521)				return this->fallback->isLocal(id,type);
            			}
            		}
HXLINE( 522)		return false;
            	}


::Array< ::String > LimeModLibrary_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_526_list)
HXLINE( 527)		::Array< ::String > otherList;
HXDLIN( 527)		if (this->hasFallback) {
HXLINE( 527)			otherList = this->fallback->list(type);
            		}
            		else {
HXLINE( 527)			otherList = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 529)		::String requestedType;
HXDLIN( 529)		if (::hx::IsNotNull( type )) {
HXLINE( 529)			requestedType = type;
            		}
            		else {
HXLINE( 529)			requestedType = null();
            		}
HXLINE( 530)		::Array< ::String > items = ::Array_obj< ::String >::__new(0);
HXLINE( 532)		{
HXLINE( 532)			 ::Dynamic id = this->p->type->keys();
HXDLIN( 532)			while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 532)				::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 534)				bool _hx_tmp;
HXDLIN( 534)				if ((id1.indexOf(HX_("_append",79,f3,4a,fe),null()) != 0)) {
HXLINE( 534)					_hx_tmp = (id1.indexOf(HX_("_merge",f9,e9,ad,01),null()) == 0);
            				}
            				else {
HXLINE( 534)					_hx_tmp = true;
            				}
HXDLIN( 534)				if (_hx_tmp) {
HXLINE( 535)					continue;
            				}
HXLINE( 536)				bool _hx_tmp1;
HXDLIN( 536)				if (::hx::IsNotNull( requestedType )) {
HXLINE( 536)					_hx_tmp1 = this->exists(id1,requestedType);
            				}
            				else {
HXLINE( 536)					_hx_tmp1 = true;
            				}
HXDLIN( 536)				if (_hx_tmp1) {
HXLINE( 538)					items->push(id1);
            				}
            			}
            		}
HXLINE( 542)		{
HXLINE( 542)			int _g = 0;
HXDLIN( 542)			while((_g < otherList->length)){
HXLINE( 542)				::String otherId = otherList->__get(_g);
HXDLIN( 542)				_g = (_g + 1);
HXLINE( 544)				if ((items->indexOf(otherId,null()) == -1)) {
HXLINE( 546)					bool _hx_tmp;
HXDLIN( 546)					if (::hx::IsNotNull( requestedType )) {
HXLINE( 546)						_hx_tmp = this->fallback->exists(otherId,type);
            					}
            					else {
HXLINE( 546)						_hx_tmp = true;
            					}
HXDLIN( 546)					if (_hx_tmp) {
HXLINE( 548)						items->push(otherId);
            					}
            				}
            			}
            		}
HXLINE( 553)		return items;
            	}


::String LimeModLibrary_obj::LimeToPoly(::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_261_LimeToPoly)
HXDLIN( 261)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("BINARY",01,68,8e,9f)) ){
HXLINE( 263)			return HX_("BYTES",4b,40,86,3b);
HXDLIN( 263)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE( 264)			return HX_("FONT",cf,25,81,2e);
HXDLIN( 264)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE( 265)			return HX_("IMAGE",3b,57,57,3b);
HXDLIN( 265)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("MANIFEST",af,8b,af,29)) ){
HXLINE( 268)			return HX_("MANIFEST",af,8b,af,29);
HXDLIN( 268)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("MUSIC",85,08,49,8e)) ){
HXLINE( 266)			return HX_("AUDIO_MUSIC",fc,6c,05,48);
HXDLIN( 266)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("SOUND",af,c4,ba,fe)) ){
HXLINE( 267)			return HX_("AUDIO_SOUND",26,29,77,b8);
HXDLIN( 267)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("TEMPLATE",3a,78,cd,05)) ){
HXLINE( 269)			return HX_("TEMPLATE",3a,78,cd,05);
HXDLIN( 269)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("TEXT",ad,94,ba,37)) ){
HXLINE( 270)			return HX_("TEXT",ad,94,ba,37);
HXDLIN( 270)			goto _hx_goto_19;
            		}
            		/* default */{
HXLINE( 271)			return HX_("UNKNOWN",6a,f7,4e,61);
            		}
            		_hx_goto_19:;
HXLINE( 261)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LimeModLibrary_obj,LimeToPoly,return )

::String LimeModLibrary_obj::PolyToLime(::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_277_PolyToLime)
HXDLIN( 277)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("AUDIO_GENERIC",2e,f6,26,23)) ){
HXLINE( 284)			return HX_("SOUND",af,c4,ba,fe);
HXDLIN( 284)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("AUDIO_MUSIC",fc,6c,05,48)) ){
HXLINE( 282)			return HX_("MUSIC",85,08,49,8e);
HXDLIN( 282)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("AUDIO_SOUND",26,29,77,b8)) ){
HXLINE( 283)			return HX_("SOUND",af,c4,ba,fe);
HXDLIN( 283)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("BYTES",4b,40,86,3b)) ){
HXLINE( 279)			return HX_("BINARY",01,68,8e,9f);
HXDLIN( 279)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE( 280)			return HX_("FONT",cf,25,81,2e);
HXDLIN( 280)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE( 281)			return HX_("IMAGE",3b,57,57,3b);
HXDLIN( 281)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("MANIFEST",af,8b,af,29)) ){
HXLINE( 285)			return HX_("MANIFEST",af,8b,af,29);
HXDLIN( 285)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("TEMPLATE",3a,78,cd,05)) ){
HXLINE( 286)			return HX_("TEMPLATE",3a,78,cd,05);
HXDLIN( 286)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("TEXT",ad,94,ba,37)) ){
HXLINE( 287)			return HX_("TEXT",ad,94,ba,37);
HXDLIN( 287)			goto _hx_goto_21;
            		}
            		/* default */{
HXLINE( 288)			return HX_("BINARY",01,68,8e,9f);
            		}
            		_hx_goto_21:;
HXLINE( 277)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LimeModLibrary_obj,PolyToLime,return )


::hx::ObjectPtr< LimeModLibrary_obj > LimeModLibrary_obj::__new( ::polymod::backends::LimeBackend backend, ::lime::utils::AssetLibrary fallback,::String __o_pathPrefix) {
	::hx::ObjectPtr< LimeModLibrary_obj > __this = new LimeModLibrary_obj();
	__this->__construct(backend,fallback,__o_pathPrefix);
	return __this;
}

::hx::ObjectPtr< LimeModLibrary_obj > LimeModLibrary_obj::__alloc(::hx::Ctx *_hx_ctx, ::polymod::backends::LimeBackend backend, ::lime::utils::AssetLibrary fallback,::String __o_pathPrefix) {
	LimeModLibrary_obj *__this = (LimeModLibrary_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LimeModLibrary_obj), true, "polymod.backends.LimeModLibrary"));
	*(void **)__this = LimeModLibrary_obj::_hx_vtable;
	__this->__construct(backend,fallback,__o_pathPrefix);
	return __this;
}

LimeModLibrary_obj::LimeModLibrary_obj()
{
}

void LimeModLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LimeModLibrary);
	HX_MARK_MEMBER_NAME(pathPrefix,"pathPrefix");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(fallback,"fallback");
	HX_MARK_MEMBER_NAME(hasFallback,"hasFallback");
	HX_MARK_MEMBER_NAME(type,"type");
	 ::lime::utils::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LimeModLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pathPrefix,"pathPrefix");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(fallback,"fallback");
	HX_VISIT_MEMBER_NAME(hasFallback,"hasFallback");
	HX_VISIT_MEMBER_NAME(type,"type");
	 ::lime::utils::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LimeModLibrary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"p") ) { return ::hx::Val( p ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return ::hx::Val( getFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return ::hx::Val( getPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return ::hx::Val( getText_dyn() ); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return ::hx::Val( isLocal_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fallback") ) { return ::hx::Val( fallback ); }
		if (HX_FIELD_EQ(inName,"getAsset") ) { return ::hx::Val( getAsset_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBytes") ) { return ::hx::Val( getBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"getImage") ) { return ::hx::Val( getImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return ::hx::Val( loadFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return ::hx::Val( loadText_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return ::hx::Val( loadBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return ::hx::Val( loadImage_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pathPrefix") ) { return ::hx::Val( pathPrefix ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasFallback") ) { return ::hx::Val( hasFallback ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { return ::hx::Val( getAudioBuffer_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { return ::hx::Val( loadAudioBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LimeModLibrary_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"LimeToPoly") ) { outValue = LimeToPoly_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"PolyToLime") ) { outValue = PolyToLime_dyn(); return true; }
	}
	return false;
}

::hx::Val LimeModLibrary_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast<  ::polymod::backends::LimeBackend >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast<  ::polymod::backends::PolymodAssetLibrary >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fallback") ) { fallback=inValue.Cast<  ::lime::utils::AssetLibrary >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pathPrefix") ) { pathPrefix=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasFallback") ) { hasFallback=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LimeModLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pathPrefix",17,7d,ec,c0));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("p",70,00,00,00));
	outFields->push(HX_("fallback",22,f0,9d,2a));
	outFields->push(HX_("hasFallback",9c,d5,54,fd));
	outFields->push(HX_("type",ba,f2,08,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LimeModLibrary_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(LimeModLibrary_obj,pathPrefix),HX_("pathPrefix",17,7d,ec,c0)},
	{::hx::fsObject /*  ::polymod::backends::LimeBackend */ ,(int)offsetof(LimeModLibrary_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsObject /*  ::polymod::backends::PolymodAssetLibrary */ ,(int)offsetof(LimeModLibrary_obj,p),HX_("p",70,00,00,00)},
	{::hx::fsObject /*  ::lime::utils::AssetLibrary */ ,(int)offsetof(LimeModLibrary_obj,fallback),HX_("fallback",22,f0,9d,2a)},
	{::hx::fsBool,(int)offsetof(LimeModLibrary_obj,hasFallback),HX_("hasFallback",9c,d5,54,fd)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(LimeModLibrary_obj,type),HX_("type",ba,f2,08,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LimeModLibrary_obj_sStaticStorageInfo = 0;
#endif

static ::String LimeModLibrary_obj_sMemberFields[] = {
	HX_("pathPrefix",17,7d,ec,c0),
	HX_("b",62,00,00,00),
	HX_("p",70,00,00,00),
	HX_("fallback",22,f0,9d,2a),
	HX_("hasFallback",9c,d5,54,fd),
	HX_("type",ba,f2,08,4d),
	HX_("destroy",fa,2c,86,24),
	HX_("getAsset",7a,79,10,86),
	HX_("exists",dc,1d,e0,bf),
	HX_("getAudioBuffer",80,41,e3,26),
	HX_("getBytes",f5,17,6f,1d),
	HX_("getFont",85,0d,43,16),
	HX_("getImage",e5,2e,40,1d),
	HX_("getPath",5b,95,d4,1c),
	HX_("getText",63,7c,7c,1f),
	HX_("loadBytes",65,54,cf,d8),
	HX_("loadFont",15,2f,60,b4),
	HX_("loadImage",55,6b,a0,d8),
	HX_("loadAudioBuffer",f0,71,7c,e3),
	HX_("loadText",f3,9d,99,bd),
	HX_("isLocal",21,6d,76,15),
	HX_("list",5e,1c,b3,47),
	::String(null()) };

::hx::Class LimeModLibrary_obj::__mClass;

static ::String LimeModLibrary_obj_sStaticFields[] = {
	HX_("LimeToPoly",7c,76,3c,12),
	HX_("PolyToLime",bc,39,e0,08),
	::String(null())
};

void LimeModLibrary_obj::__register()
{
	LimeModLibrary_obj _hx_dummy;
	LimeModLibrary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.backends.LimeModLibrary",25,89,45,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LimeModLibrary_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LimeModLibrary_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LimeModLibrary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LimeModLibrary_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LimeModLibrary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LimeModLibrary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace backends
