#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_backends_IBackend
#include <polymod/backends/IBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssetLibrary
#include <polymod/backends/PolymodAssetLibrary.h>
#endif
#ifndef INCLUDED_polymod_format_ParseRules
#include <polymod/format/ParseRules.h>
#endif
#ifndef INCLUDED_polymod_fs_IFileSystem
#include <polymod/fs/IFileSystem.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_41154335dca776f0_65_new,"polymod.backends.PolymodAssetLibrary","new",0xd3ebdd3c,"polymod.backends.PolymodAssetLibrary.new","polymod/backends/PolymodAssetLibrary.hx",65,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_93_destroy,"polymod.backends.PolymodAssetLibrary","destroy",0x1f3bd7d6,"polymod.backends.PolymodAssetLibrary.destroy","polymod/backends/PolymodAssetLibrary.hx",93,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_100_mergeAndAppendText,"polymod.backends.PolymodAssetLibrary","mergeAndAppendText",0xf742862a,"polymod.backends.PolymodAssetLibrary.mergeAndAppendText","polymod/backends/PolymodAssetLibrary.hx",100,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_106_getExtensionType,"polymod.backends.PolymodAssetLibrary","getExtensionType",0x9080a107,"polymod.backends.PolymodAssetLibrary.getExtensionType","polymod/backends/PolymodAssetLibrary.hx",106,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_120_getTextDirectly,"polymod.backends.PolymodAssetLibrary","getTextDirectly",0x8a3e4055,"polymod.backends.PolymodAssetLibrary.getTextDirectly","polymod/backends/PolymodAssetLibrary.hx",120,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_144_exists,"polymod.backends.PolymodAssetLibrary","exists",0xbb428280,"polymod.backends.PolymodAssetLibrary.exists","polymod/backends/PolymodAssetLibrary.hx",144,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_149_getText,"polymod.backends.PolymodAssetLibrary","getText",0x1a32273f,"polymod.backends.PolymodAssetLibrary.getText","polymod/backends/PolymodAssetLibrary.hx",149,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_154_getBytes,"polymod.backends.PolymodAssetLibrary","getBytes",0x81aeed99,"polymod.backends.PolymodAssetLibrary.getBytes","polymod/backends/PolymodAssetLibrary.hx",154,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_159_getPath,"polymod.backends.PolymodAssetLibrary","getPath",0x178a4037,"polymod.backends.PolymodAssetLibrary.getPath","polymod/backends/PolymodAssetLibrary.hx",159,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_164_list,"polymod.backends.PolymodAssetLibrary","list",0x99265002,"polymod.backends.PolymodAssetLibrary.list","polymod/backends/PolymodAssetLibrary.hx",164,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_168_listModFiles,"polymod.backends.PolymodAssetLibrary","listModFiles",0x114a5677,"polymod.backends.PolymodAssetLibrary.listModFiles","polymod/backends/PolymodAssetLibrary.hx",168,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_191_check,"polymod.backends.PolymodAssetLibrary","check",0x391094a4,"polymod.backends.PolymodAssetLibrary.check","polymod/backends/PolymodAssetLibrary.hx",191,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_202_getType,"polymod.backends.PolymodAssetLibrary","getType",0x1a414d4c,"polymod.backends.PolymodAssetLibrary.getType","polymod/backends/PolymodAssetLibrary.hx",202,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_212_checkDirectly,"polymod.backends.PolymodAssetLibrary","checkDirectly",0xba101aba,"polymod.backends.PolymodAssetLibrary.checkDirectly","polymod/backends/PolymodAssetLibrary.hx",212,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_236_file,"polymod.backends.PolymodAssetLibrary","file",0x952f0220,"polymod.backends.PolymodAssetLibrary.file","polymod/backends/PolymodAssetLibrary.hx",236,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_256__checkExists,"polymod.backends.PolymodAssetLibrary","_checkExists",0xbf011669,"polymod.backends.PolymodAssetLibrary._checkExists","polymod/backends/PolymodAssetLibrary.hx",256,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_272_init,"polymod.backends.PolymodAssetLibrary","init",0x972e6eb4,"polymod.backends.PolymodAssetLibrary.init","polymod/backends/PolymodAssetLibrary.hx",272,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_287_initExtensions,"polymod.backends.PolymodAssetLibrary","initExtensions",0x4b48d7e8,"polymod.backends.PolymodAssetLibrary.initExtensions","polymod/backends/PolymodAssetLibrary.hx",287,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_319__extensionSet,"polymod.backends.PolymodAssetLibrary","_extensionSet",0x73b0841e,"polymod.backends.PolymodAssetLibrary._extensionSet","polymod/backends/PolymodAssetLibrary.hx",319,0xd1edfd94)
HX_LOCAL_STACK_FRAME(_hx_pos_41154335dca776f0_326_initMod,"polymod.backends.PolymodAssetLibrary","initMod",0xc63f886e,"polymod.backends.PolymodAssetLibrary.initMod","polymod/backends/PolymodAssetLibrary.hx",326,0xd1edfd94)
namespace polymod{
namespace backends{

void PolymodAssetLibrary_obj::__construct( ::Dynamic params){
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_65_new)
HXLINE(  75)		this->parseRules = null();
HXLINE(  73)		this->ignoredFiles = null();
HXLINE(  72)		this->dirs = null();
HXLINE(  80)		this->backend =  ::Dynamic(params->__Field(HX_("backend",14,bc,87,fb),::hx::paccDynamic));
HXLINE(  81)		this->fileSystem =  ::Dynamic(params->__Field(HX_("fileSystem",8b,de,66,d3),::hx::paccDynamic));
HXLINE(  82)		this->backend->__SetField(HX_("polymodLibrary",a5,49,05,cb),::hx::ObjectPtr<OBJ_>(this),::hx::paccDynamic);
HXLINE(  83)		this->dirs = ( (::Array< ::String >)(params->__Field(HX_("dirs",86,66,69,42),::hx::paccDynamic)) );
HXLINE(  84)		this->parseRules = ( ( ::polymod::format::ParseRules)(params->__Field(HX_("parseRules",c4,aa,37,1b),::hx::paccDynamic)) );
HXLINE(  85)		::Array< ::String > _hx_tmp;
HXDLIN(  85)		if (::hx::IsNotNull( params->__Field(HX_("ignoredFiles",05,36,92,57),::hx::paccDynamic) )) {
HXLINE(  85)			_hx_tmp = ( (::Array< ::String >)(params->__Field(HX_("ignoredFiles",05,36,92,57),::hx::paccDynamic)) )->copy();
            		}
            		else {
HXLINE(  85)			_hx_tmp = ::Array_obj< ::String >::__new(0);
            		}
HXDLIN(  85)		this->ignoredFiles = _hx_tmp;
HXLINE(  86)		this->extensions = ( ( ::haxe::ds::StringMap)(params->__Field(HX_("extensionMap",5d,28,7a,23),::hx::paccDynamic)) );
HXLINE(  87)		::polymod::backends::IBackend_obj::clearCache(this->backend);
HXLINE(  88)		this->init();
            	}

Dynamic PolymodAssetLibrary_obj::__CreateEmpty() { return new PolymodAssetLibrary_obj; }

void *PolymodAssetLibrary_obj::_hx_vtable = 0;

Dynamic PolymodAssetLibrary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PolymodAssetLibrary_obj > _hx_result = new PolymodAssetLibrary_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PolymodAssetLibrary_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6eaea9ac;
}

void PolymodAssetLibrary_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_93_destroy)
HXDLIN(  93)		if (::hx::IsNotNull( this->backend )) {
HXLINE(  95)			::polymod::backends::IBackend_obj::destroy(this->backend);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PolymodAssetLibrary_obj,destroy,(void))

::String PolymodAssetLibrary_obj::mergeAndAppendText(::String id,::String modText){
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_100_mergeAndAppendText)
HXLINE( 101)		modText = ::polymod::util::Util_obj::mergeAndAppendText(modText,id,this->dirs,this->getTextDirectly_dyn(),this->fileSystem,this->parseRules);
HXLINE( 102)		return modText;
            	}


HX_DEFINE_DYNAMIC_FUNC2(PolymodAssetLibrary_obj,mergeAndAppendText,return )

::String PolymodAssetLibrary_obj::getExtensionType(::String ext){
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_106_getExtensionType)
HXLINE( 107)		ext = ext.toLowerCase();
HXLINE( 108)		if ((this->extensions->exists(ext) == false)) {
HXLINE( 109)			return HX_("BYTES",4b,40,86,3b);
            		}
HXLINE( 110)		return this->extensions->get_string(ext);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PolymodAssetLibrary_obj,getExtensionType,return )

::String PolymodAssetLibrary_obj::getTextDirectly(::String id,::String __o_directory){
            		::String directory = __o_directory;
            		if (::hx::IsNull(__o_directory)) directory = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_120_getTextDirectly)
HXLINE( 121)		 ::haxe::io::Bytes bytes = null();
HXLINE( 122)		if (this->checkDirectly(id,directory)) {
HXLINE( 124)			::Dynamic bytes1 = this->fileSystem;
HXDLIN( 124)			bytes = ::polymod::fs::IFileSystem_obj::getFileBytes(bytes1,this->file(id,directory));
            		}
            		else {
HXLINE( 128)			bytes = ::polymod::backends::IBackend_obj::getBytes(this->backend,id);
            		}
HXLINE( 131)		if (::hx::IsNull( bytes )) {
HXLINE( 133)			return null();
            		}
            		else {
HXLINE( 137)			return bytes->getString(0,bytes->length,null());
            		}
HXLINE( 131)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(PolymodAssetLibrary_obj,getTextDirectly,return )

bool PolymodAssetLibrary_obj::exists(::String id){
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_144_exists)
HXDLIN( 144)		return ::polymod::backends::IBackend_obj::exists(this->backend,id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PolymodAssetLibrary_obj,exists,return )

::String PolymodAssetLibrary_obj::getText(::String id){
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_149_getText)
HXDLIN( 149)		return ::polymod::backends::IBackend_obj::getText(this->backend,id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PolymodAssetLibrary_obj,getText,return )

 ::haxe::io::Bytes PolymodAssetLibrary_obj::getBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_154_getBytes)
HXDLIN( 154)		return ::polymod::backends::IBackend_obj::getBytes(this->backend,id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PolymodAssetLibrary_obj,getBytes,return )

::String PolymodAssetLibrary_obj::getPath(::String id){
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_159_getPath)
HXDLIN( 159)		return ::polymod::backends::IBackend_obj::getPath(this->backend,id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PolymodAssetLibrary_obj,getPath,return )

::Array< ::String > PolymodAssetLibrary_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_164_list)
HXDLIN( 164)		return ::polymod::backends::IBackend_obj::list(this->backend,type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PolymodAssetLibrary_obj,list,return )

::Array< ::String > PolymodAssetLibrary_obj::listModFiles(::String type){
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_168_listModFiles)
HXLINE( 169)		::Array< ::String > items = ::Array_obj< ::String >::__new(0);
HXLINE( 171)		{
HXLINE( 171)			 ::Dynamic id = this->type->keys();
HXDLIN( 171)			while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 171)				::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 173)				bool _hx_tmp;
HXDLIN( 173)				if ((id1.indexOf(HX_("_append",79,f3,4a,fe),null()) != 0)) {
HXLINE( 173)					_hx_tmp = (id1.indexOf(HX_("_merge",f9,e9,ad,01),null()) == 0);
            				}
            				else {
HXLINE( 173)					_hx_tmp = true;
            				}
HXDLIN( 173)				if (_hx_tmp) {
HXLINE( 174)					continue;
            				}
HXLINE( 175)				bool _hx_tmp1;
HXDLIN( 175)				bool _hx_tmp2;
HXDLIN( 175)				if (::hx::IsNotNull( type )) {
HXLINE( 175)					_hx_tmp2 = (type == HX_("BYTES",4b,40,86,3b));
            				}
            				else {
HXLINE( 175)					_hx_tmp2 = true;
            				}
HXDLIN( 175)				if (!(_hx_tmp2)) {
HXLINE( 175)					_hx_tmp1 = this->check(id1,type);
            				}
            				else {
HXLINE( 175)					_hx_tmp1 = true;
            				}
HXDLIN( 175)				if (_hx_tmp1) {
HXLINE( 177)					items->push(id1);
            				}
            			}
            		}
HXLINE( 181)		return items;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PolymodAssetLibrary_obj,listModFiles,return )

bool PolymodAssetLibrary_obj::check(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_191_check)
HXLINE( 192)		bool exists = this->_checkExists(id);
HXLINE( 193)		bool _hx_tmp;
HXDLIN( 193)		bool _hx_tmp1;
HXDLIN( 193)		if (exists) {
HXLINE( 193)			_hx_tmp1 = ::hx::IsNotNull( type );
            		}
            		else {
HXLINE( 193)			_hx_tmp1 = false;
            		}
HXDLIN( 193)		if (_hx_tmp1) {
HXLINE( 193)			_hx_tmp = (type != HX_("BYTES",4b,40,86,3b));
            		}
            		else {
HXLINE( 193)			_hx_tmp = false;
            		}
HXDLIN( 193)		if (_hx_tmp) {
HXLINE( 195)			::String otherType = this->type->get_string(id);
HXLINE( 196)			bool exists1;
HXDLIN( 196)			bool exists2;
HXDLIN( 196)			if ((otherType != type)) {
HXLINE( 196)				exists2 = (otherType == HX_("BYTES",4b,40,86,3b));
            			}
            			else {
HXLINE( 196)				exists2 = true;
            			}
HXDLIN( 196)			if (!(exists2)) {
HXLINE( 196)				exists1 = ::hx::IsNull( otherType );
            			}
            			else {
HXLINE( 196)				exists1 = true;
            			}
HXDLIN( 196)			if (!(exists1)) {
HXLINE( 196)				exists = (otherType == HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 196)				exists = true;
            			}
            		}
HXLINE( 198)		return exists;
            	}


HX_DEFINE_DYNAMIC_FUNC2(PolymodAssetLibrary_obj,check,return )

::String PolymodAssetLibrary_obj::getType(::String id){
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_202_getType)
HXLINE( 203)		bool exists = this->_checkExists(id);
HXLINE( 204)		if (exists) {
HXLINE( 206)			return this->type->get_string(id);
            		}
HXLINE( 208)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(PolymodAssetLibrary_obj,getType,return )

bool PolymodAssetLibrary_obj::checkDirectly(::String id,::String dir){
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_212_checkDirectly)
HXLINE( 213)		id = ::polymod::backends::IBackend_obj::stripAssetsPrefix(this->backend,id);
HXLINE( 214)		bool _hx_tmp;
HXDLIN( 214)		if (::hx::IsNotNull( dir )) {
HXLINE( 214)			_hx_tmp = (dir == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 214)			_hx_tmp = true;
            		}
HXDLIN( 214)		if (_hx_tmp) {
HXLINE( 216)			return ::polymod::fs::IFileSystem_obj::exists(this->fileSystem,id);
            		}
            		else {
HXLINE( 220)			::String thePath = ::polymod::util::Util_obj::uCombine(::Array_obj< ::String >::__new(3)->init(0,dir)->init(1,::polymod::util::Util_obj::sl())->init(2,id));
HXLINE( 221)			if (::polymod::fs::IFileSystem_obj::exists(this->fileSystem,thePath)) {
HXLINE( 223)				return true;
            			}
            		}
HXLINE( 226)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(PolymodAssetLibrary_obj,checkDirectly,return )

::String PolymodAssetLibrary_obj::file(::String id,::String __o_theDir){
            		::String theDir = __o_theDir;
            		if (::hx::IsNull(__o_theDir)) theDir = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_236_file)
HXLINE( 237)		id = ::polymod::backends::IBackend_obj::stripAssetsPrefix(this->backend,id);
HXLINE( 238)		if ((theDir != HX_("",00,00,00,00))) {
HXLINE( 240)			return ::polymod::util::Util_obj::pathJoin(theDir,id);
            		}
HXLINE( 243)		::String theFile = HX_("",00,00,00,00);
HXLINE( 244)		{
HXLINE( 244)			int _g = 0;
HXDLIN( 244)			::Array< ::String > _g1 = this->dirs;
HXDLIN( 244)			while((_g < _g1->length)){
HXLINE( 244)				::String d = _g1->__get(_g);
HXDLIN( 244)				_g = (_g + 1);
HXLINE( 246)				::String thePath = ::polymod::util::Util_obj::pathJoin(d,id);
HXLINE( 247)				if (::polymod::fs::IFileSystem_obj::exists(this->fileSystem,thePath)) {
HXLINE( 249)					theFile = thePath;
            				}
            			}
            		}
HXLINE( 252)		return theFile;
            	}


HX_DEFINE_DYNAMIC_FUNC2(PolymodAssetLibrary_obj,file,return )

bool PolymodAssetLibrary_obj::_checkExists(::String id){
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_256__checkExists)
HXLINE( 257)		bool _hx_tmp;
HXDLIN( 257)		if ((this->ignoredFiles->length > 0)) {
HXLINE( 257)			_hx_tmp = (this->ignoredFiles->indexOf(id,null()) != -1);
            		}
            		else {
HXLINE( 257)			_hx_tmp = false;
            		}
HXDLIN( 257)		if (_hx_tmp) {
HXLINE( 258)			return false;
            		}
HXLINE( 259)		bool exists = false;
HXLINE( 260)		id = ::polymod::backends::IBackend_obj::stripAssetsPrefix(this->backend,id);
HXLINE( 261)		{
HXLINE( 261)			int _g = 0;
HXDLIN( 261)			::Array< ::String > _g1 = this->dirs;
HXDLIN( 261)			while((_g < _g1->length)){
HXLINE( 261)				::String d = _g1->__get(_g);
HXDLIN( 261)				_g = (_g + 1);
HXLINE( 263)				::Dynamic _hx_tmp = this->fileSystem;
HXDLIN( 263)				if (::polymod::fs::IFileSystem_obj::exists(_hx_tmp,::polymod::util::Util_obj::pathJoin(d,id))) {
HXLINE( 265)					exists = true;
            				}
            			}
            		}
HXLINE( 268)		return exists;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PolymodAssetLibrary_obj,_checkExists,return )

void PolymodAssetLibrary_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_41154335dca776f0_272_init)
HXLINE( 273)		this->type =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 274)		this->initExtensions();
HXLINE( 275)		if (::hx::IsNull( this->parseRules )) {
HXLINE( 276)			this->parseRules = ::polymod::format::ParseRules_obj::getDefault();
            		}
HXLINE( 277)		if (::hx::IsNotNull( this->dirs )) {
HXLINE( 279)			int _g = 0;
HXDLIN( 279)			::Array< ::String > _g1 = this->dirs;
HXDLIN( 279)			while((_g < _g1->length)){
HXLINE( 279)				::String d = _g1->__get(_g);
HXDLIN( 279)				_g = (_g + 1);
HXLINE( 281)				this->initMod(d);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PolymodAssetLibrary_obj,init,(void))

void PolymodAssetLibrary_obj::initExtensions(){
            	HX_GC_STACKFRAME(&_hx_pos_41154335dca776f0_287_initExtensions)
HXLINE( 288)		this->extensions =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 289)		this->_extensionSet(HX_("mp3",70,17,53,00),HX_("AUDIO_GENERIC",2e,f6,26,23));
HXLINE( 290)		this->_extensionSet(HX_("ogg",4f,94,54,00),HX_("AUDIO_GENERIC",2e,f6,26,23));
HXLINE( 291)		this->_extensionSet(HX_("wav",2c,a1,5a,00),HX_("AUDIO_GENERIC",2e,f6,26,23));
HXLINE( 292)		this->_extensionSet(HX_("jpg",e1,d0,50,00),HX_("IMAGE",3b,57,57,3b));
HXLINE( 293)		this->_extensionSet(HX_("png",a9,5c,55,00),HX_("IMAGE",3b,57,57,3b));
HXLINE( 294)		this->_extensionSet(HX_("gif",04,84,4e,00),HX_("IMAGE",3b,57,57,3b));
HXLINE( 295)		this->_extensionSet(HX_("tga",8e,5f,58,00),HX_("IMAGE",3b,57,57,3b));
HXLINE( 296)		this->_extensionSet(HX_("bmp",45,bc,4a,00),HX_("IMAGE",3b,57,57,3b));
HXLINE( 297)		this->_extensionSet(HX_("tif",51,61,58,00),HX_("IMAGE",3b,57,57,3b));
HXLINE( 298)		this->_extensionSet(HX_("tiff",f5,c5,fc,4c),HX_("IMAGE",3b,57,57,3b));
HXLINE( 299)		this->_extensionSet(HX_("txt",70,6e,58,00),HX_("TEXT",ad,94,ba,37));
HXLINE( 300)		this->_extensionSet(HX_("xml",d7,6d,5b,00),HX_("TEXT",ad,94,ba,37));
HXLINE( 301)		this->_extensionSet(HX_("json",28,42,68,46),HX_("TEXT",ad,94,ba,37));
HXLINE( 302)		this->_extensionSet(HX_("csv",c6,83,4b,00),HX_("TEXT",ad,94,ba,37));
HXLINE( 303)		this->_extensionSet(HX_("tsv",17,6a,58,00),HX_("TEXT",ad,94,ba,37));
HXLINE( 304)		this->_extensionSet(HX_("mpf",a3,17,53,00),HX_("TEXT",ad,94,ba,37));
HXLINE( 305)		this->_extensionSet(HX_("tsx",19,6a,58,00),HX_("TEXT",ad,94,ba,37));
HXLINE( 306)		this->_extensionSet(HX_("tmx",df,64,58,00),HX_("TEXT",ad,94,ba,37));
HXLINE( 307)		this->_extensionSet(HX_("vdf",78,e1,59,00),HX_("TEXT",ad,94,ba,37));
HXLINE( 308)		this->_extensionSet(HX_("ttf",e6,6a,58,00),HX_("FONT",cf,25,81,2e));
HXLINE( 309)		this->_extensionSet(HX_("otf",a1,9f,54,00),HX_("FONT",cf,25,81,2e));
HXLINE( 310)		this->_extensionSet(HX_("webm",59,5d,f5,4e),HX_("VIDEO",5b,4c,ea,b4));
HXLINE( 311)		this->_extensionSet(HX_("mp4",71,17,53,00),HX_("VIDEO",5b,4c,ea,b4));
HXLINE( 312)		this->_extensionSet(HX_("mov",d4,16,53,00),HX_("VIDEO",5b,4c,ea,b4));
HXLINE( 313)		this->_extensionSet(HX_("avi",d4,01,4a,00),HX_("VIDEO",5b,4c,ea,b4));
HXLINE( 314)		this->_extensionSet(HX_("mkv",58,13,53,00),HX_("VIDEO",5b,4c,ea,b4));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PolymodAssetLibrary_obj,initExtensions,(void))

void PolymodAssetLibrary_obj::_extensionSet(::String str,::String type){
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_319__extensionSet)
HXDLIN( 319)		if ((this->extensions->exists(str) == false)) {
HXLINE( 321)			this->extensions->set(str,type);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(PolymodAssetLibrary_obj,_extensionSet,(void))

void PolymodAssetLibrary_obj::initMod(::String d){
            	HX_STACKFRAME(&_hx_pos_41154335dca776f0_326_initMod)
HXLINE( 327)		::polymod::Polymod_obj::error(HX_("mod_load_prepare",0b,06,0c,a8),(HX_("Preparing to load mod ",af,df,0f,0f) + d),null());
HXLINE( 328)		if (::hx::IsNull( d )) {
HXLINE( 329)			return;
            		}
HXLINE( 331)		::Array< ::String > all = null();
HXLINE( 333)		bool _hx_tmp;
HXDLIN( 333)		if ((d != HX_("",00,00,00,00))) {
HXLINE( 333)			_hx_tmp = ::hx::IsNull( d );
            		}
            		else {
HXLINE( 333)			_hx_tmp = true;
            		}
HXDLIN( 333)		if (_hx_tmp) {
HXLINE( 335)			all = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 338)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 340)			if (::polymod::fs::IFileSystem_obj::exists(this->fileSystem,d)) {
HXLINE( 342)				all = ::polymod::fs::IFileSystem_obj::readDirectoryRecursive(this->fileSystem,d);
            			}
            			else {
HXLINE( 346)				all = ::Array_obj< ::String >::__new(0);
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 349)				{
HXLINE( 349)					null();
            				}
HXDLIN( 349)				 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 351)				::polymod::Polymod_obj::error(HX_("mod_load_failed",b9,4d,47,d7),(((HX_("Failed to load mod ",96,38,88,94) + d) + HX_(" : ",c6,7a,18,00)) + ::Std_obj::string(msg)),null());
HXLINE( 352)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("ModAssetLibrary._initMod(",b4,86,f3,80) + d) + HX_(") failed : ",72,52,be,0b)) + ::Std_obj::string(msg))));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 354)		{
HXLINE( 354)			int _g = 0;
HXDLIN( 354)			while((_g < all->length)){
HXLINE( 354)				::String f = all->__get(_g);
HXDLIN( 354)				_g = (_g + 1);
HXLINE( 356)				int doti = ::polymod::util::Util_obj::uLastIndexOf(f,HX_(".",2e,00,00,00),null());
HXLINE( 357)				::String ext;
HXDLIN( 357)				if ((doti != -1)) {
HXLINE( 357)					ext = f.substring((doti + 1),null());
            				}
            				else {
HXLINE( 357)					ext = HX_("",00,00,00,00);
            				}
HXLINE( 358)				ext = ext.toLowerCase();
HXLINE( 359)				::String assetType = this->getExtensionType(ext);
HXLINE( 360)				this->type->set(f,assetType);
            			}
            		}
HXLINE( 362)		::polymod::Polymod_obj::error(HX_("mod_load_done",7e,41,03,65),(HX_("Done loading mod ",80,69,cc,c8) + d),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(PolymodAssetLibrary_obj,initMod,(void))


::hx::ObjectPtr< PolymodAssetLibrary_obj > PolymodAssetLibrary_obj::__new( ::Dynamic params) {
	::hx::ObjectPtr< PolymodAssetLibrary_obj > __this = new PolymodAssetLibrary_obj();
	__this->__construct(params);
	return __this;
}

::hx::ObjectPtr< PolymodAssetLibrary_obj > PolymodAssetLibrary_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic params) {
	PolymodAssetLibrary_obj *__this = (PolymodAssetLibrary_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PolymodAssetLibrary_obj), true, "polymod.backends.PolymodAssetLibrary"));
	*(void **)__this = PolymodAssetLibrary_obj::_hx_vtable;
	__this->__construct(params);
	return __this;
}

PolymodAssetLibrary_obj::PolymodAssetLibrary_obj()
{
}

void PolymodAssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PolymodAssetLibrary);
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_MEMBER_NAME(fileSystem,"fileSystem");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(dirs,"dirs");
	HX_MARK_MEMBER_NAME(ignoredFiles,"ignoredFiles");
	HX_MARK_MEMBER_NAME(parseRules,"parseRules");
	HX_MARK_MEMBER_NAME(extensions,"extensions");
	HX_MARK_END_CLASS();
}

void PolymodAssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backend,"backend");
	HX_VISIT_MEMBER_NAME(fileSystem,"fileSystem");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(dirs,"dirs");
	HX_VISIT_MEMBER_NAME(ignoredFiles,"ignoredFiles");
	HX_VISIT_MEMBER_NAME(parseRules,"parseRules");
	HX_VISIT_MEMBER_NAME(extensions,"extensions");
}

::hx::Val PolymodAssetLibrary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"dirs") ) { return ::hx::Val( dirs ); }
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list_dyn() ); }
		if (HX_FIELD_EQ(inName,"file") ) { return ::hx::Val( file_dyn() ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"backend") ) { return ::hx::Val( backend ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return ::hx::Val( getText_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return ::hx::Val( getPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"getType") ) { return ::hx::Val( getType_dyn() ); }
		if (HX_FIELD_EQ(inName,"initMod") ) { return ::hx::Val( initMod_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return ::hx::Val( getBytes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fileSystem") ) { return ::hx::Val( fileSystem ); }
		if (HX_FIELD_EQ(inName,"parseRules") ) { return ::hx::Val( parseRules ); }
		if (HX_FIELD_EQ(inName,"extensions") ) { return ::hx::Val( extensions ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ignoredFiles") ) { return ::hx::Val( ignoredFiles ); }
		if (HX_FIELD_EQ(inName,"listModFiles") ) { return ::hx::Val( listModFiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"_checkExists") ) { return ::hx::Val( _checkExists_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkDirectly") ) { return ::hx::Val( checkDirectly_dyn() ); }
		if (HX_FIELD_EQ(inName,"_extensionSet") ) { return ::hx::Val( _extensionSet_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initExtensions") ) { return ::hx::Val( initExtensions_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextDirectly") ) { return ::hx::Val( getTextDirectly_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getExtensionType") ) { return ::hx::Val( getExtensionType_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mergeAndAppendText") ) { return ::hx::Val( mergeAndAppendText_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PolymodAssetLibrary_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirs") ) { dirs=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fileSystem") ) { fileSystem=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parseRules") ) { parseRules=inValue.Cast<  ::polymod::format::ParseRules >(); return inValue; }
		if (HX_FIELD_EQ(inName,"extensions") ) { extensions=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ignoredFiles") ) { ignoredFiles=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PolymodAssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("backend",14,bc,87,fb));
	outFields->push(HX_("fileSystem",8b,de,66,d3));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("dirs",86,66,69,42));
	outFields->push(HX_("ignoredFiles",05,36,92,57));
	outFields->push(HX_("parseRules",c4,aa,37,1b));
	outFields->push(HX_("extensions",14,7c,70,89));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PolymodAssetLibrary_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(PolymodAssetLibrary_obj,backend),HX_("backend",14,bc,87,fb)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(PolymodAssetLibrary_obj,fileSystem),HX_("fileSystem",8b,de,66,d3)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(PolymodAssetLibrary_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PolymodAssetLibrary_obj,dirs),HX_("dirs",86,66,69,42)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PolymodAssetLibrary_obj,ignoredFiles),HX_("ignoredFiles",05,36,92,57)},
	{::hx::fsObject /*  ::polymod::format::ParseRules */ ,(int)offsetof(PolymodAssetLibrary_obj,parseRules),HX_("parseRules",c4,aa,37,1b)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(PolymodAssetLibrary_obj,extensions),HX_("extensions",14,7c,70,89)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PolymodAssetLibrary_obj_sStaticStorageInfo = 0;
#endif

static ::String PolymodAssetLibrary_obj_sMemberFields[] = {
	HX_("backend",14,bc,87,fb),
	HX_("fileSystem",8b,de,66,d3),
	HX_("type",ba,f2,08,4d),
	HX_("dirs",86,66,69,42),
	HX_("ignoredFiles",05,36,92,57),
	HX_("parseRules",c4,aa,37,1b),
	HX_("extensions",14,7c,70,89),
	HX_("destroy",fa,2c,86,24),
	HX_("mergeAndAppendText",86,bb,89,90),
	HX_("getExtensionType",63,87,3c,56),
	HX_("getTextDirectly",79,59,58,bb),
	HX_("exists",dc,1d,e0,bf),
	HX_("getText",63,7c,7c,1f),
	HX_("getBytes",f5,17,6f,1d),
	HX_("getPath",5b,95,d4,1c),
	HX_("list",5e,1c,b3,47),
	HX_("listModFiles",d3,de,44,5a),
	HX_("check",c8,98,b6,45),
	HX_("getType",70,a2,8b,1f),
	HX_("checkDirectly",de,e2,4c,4c),
	HX_("file",7c,ce,bb,43),
	HX_("_checkExists",c5,9e,fb,07),
	HX_("init",10,3b,bb,45),
	HX_("initExtensions",44,2f,3b,ae),
	HX_("_extensionSet",42,4c,ed,05),
	HX_("initMod",92,dd,89,cb),
	::String(null()) };

::hx::Class PolymodAssetLibrary_obj::__mClass;

void PolymodAssetLibrary_obj::__register()
{
	PolymodAssetLibrary_obj _hx_dummy;
	PolymodAssetLibrary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.backends.PolymodAssetLibrary",4a,cf,f5,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PolymodAssetLibrary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PolymodAssetLibrary_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PolymodAssetLibrary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PolymodAssetLibrary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace backends
