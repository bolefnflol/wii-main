#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_polymod_ModMetadata
#include <polymod/ModMetadata.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_fs_IFileSystem
#include <polymod/fs/IFileSystem.h>
#endif
#ifndef INCLUDED_polymod_fs_SysFileSystem
#include <polymod/fs/SysFileSystem.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_36_new,"polymod.fs.SysFileSystem","new",0x6e978ee1,"polymod.fs.SysFileSystem.new","polymod/fs/SysFileSystem.hx",36,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_41_exists,"polymod.fs.SysFileSystem","exists",0x494ba5fb,"polymod.fs.SysFileSystem.exists","polymod/fs/SysFileSystem.hx",41,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_45_isDirectory,"polymod.fs.SysFileSystem","isDirectory",0x4f9d50a4,"polymod.fs.SysFileSystem.isDirectory","polymod/fs/SysFileSystem.hx",45,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_48_readDirectory,"polymod.fs.SysFileSystem","readDirectory",0xa764b5f8,"polymod.fs.SysFileSystem.readDirectory","polymod/fs/SysFileSystem.hx",48,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_51_getFileContent,"polymod.fs.SysFileSystem","getFileContent",0x6bbf8046,"polymod.fs.SysFileSystem.getFileContent","polymod/fs/SysFileSystem.hx",51,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_58_getFileBytes,"polymod.fs.SysFileSystem","getFileBytes",0x2af12e38,"polymod.fs.SysFileSystem.getFileBytes","polymod/fs/SysFileSystem.hx",58,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_65_scanMods,"polymod.fs.SysFileSystem","scanMods",0x79d70d6d,"polymod.fs.SysFileSystem.scanMods","polymod/fs/SysFileSystem.hx",65,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_82_getMetadata,"polymod.fs.SysFileSystem","getMetadata",0xc6e551a6,"polymod.fs.SysFileSystem.getMetadata","polymod/fs/SysFileSystem.hx",82,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_124_readDirectoryRecursive,"polymod.fs.SysFileSystem","readDirectoryRecursive",0x29cb565a,"polymod.fs.SysFileSystem.readDirectoryRecursive","polymod/fs/SysFileSystem.hx",124,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_140__readDirectoryRecursive,"polymod.fs.SysFileSystem","_readDirectoryRecursive",0x895744db,"polymod.fs.SysFileSystem._readDirectoryRecursive","polymod/fs/SysFileSystem.hx",140,0xf6781e4f)
namespace polymod{
namespace fs{

void SysFileSystem_obj::__construct(::String modRoot){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_36_new)
HXDLIN(  36)		this->modRoot = modRoot;
            	}

Dynamic SysFileSystem_obj::__CreateEmpty() { return new SysFileSystem_obj; }

void *SysFileSystem_obj::_hx_vtable = 0;

Dynamic SysFileSystem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SysFileSystem_obj > _hx_result = new SysFileSystem_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SysFileSystem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x744a2635;
}

static ::polymod::fs::IFileSystem_obj _hx_polymod_fs_SysFileSystem__hx_polymod_fs_IFileSystem= {
	( bool (::hx::Object::*)(::String))&::polymod::fs::SysFileSystem_obj::exists,
	( bool (::hx::Object::*)(::String))&::polymod::fs::SysFileSystem_obj::isDirectory,
	( ::Array< ::String > (::hx::Object::*)(::String))&::polymod::fs::SysFileSystem_obj::readDirectory,
	( ::Array< ::String > (::hx::Object::*)(::String))&::polymod::fs::SysFileSystem_obj::readDirectoryRecursive,
	( ::String (::hx::Object::*)(::String))&::polymod::fs::SysFileSystem_obj::getFileContent,
	(  ::haxe::io::Bytes (::hx::Object::*)(::String))&::polymod::fs::SysFileSystem_obj::getFileBytes,
	( ::Array< ::String > (::hx::Object::*)())&::polymod::fs::SysFileSystem_obj::scanMods,
	(  ::polymod::ModMetadata (::hx::Object::*)(::String))&::polymod::fs::SysFileSystem_obj::getMetadata,
};

void *SysFileSystem_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x0d05d891: return &_hx_polymod_fs_SysFileSystem__hx_polymod_fs_IFileSystem;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool SysFileSystem_obj::exists(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_41_exists)
HXDLIN(  41)		return ::sys::FileSystem_obj::exists(path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,exists,return )

bool SysFileSystem_obj::isDirectory(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_45_isDirectory)
HXDLIN(  45)		return ::sys::FileSystem_obj::isDirectory(path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,isDirectory,return )

::Array< ::String > SysFileSystem_obj::readDirectory(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_48_readDirectory)
HXDLIN(  48)		return ::sys::FileSystem_obj::readDirectory(path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,readDirectory,return )

::String SysFileSystem_obj::getFileContent(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_51_getFileContent)
HXLINE(  52)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  53)			return null();
            		}
HXLINE(  54)		return ::sys::io::File_obj::getContent(path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,getFileContent,return )

 ::haxe::io::Bytes SysFileSystem_obj::getFileBytes(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_58_getFileBytes)
HXLINE(  59)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  60)			return null();
            		}
HXLINE(  61)		return ::sys::io::File_obj::getBytes(path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,getFileBytes,return )

::Array< ::String > SysFileSystem_obj::scanMods(){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_65_scanMods)
HXLINE(  66)		::Array< ::String > dirs = ::sys::FileSystem_obj::readDirectory(this->modRoot);
HXLINE(  67)		int l = dirs->length;
HXLINE(  68)		{
HXLINE(  68)			int _g = 0;
HXDLIN(  68)			int _g1 = l;
HXDLIN(  68)			while((_g < _g1)){
HXLINE(  68)				_g = (_g + 1);
HXDLIN(  68)				int i = (_g - 1);
HXLINE(  70)				int j = ((l - i) - 1);
HXLINE(  71)				::String dir = dirs->__get(j);
HXLINE(  72)				::String testDir = ((this->modRoot + HX_("/",2f,00,00,00)) + dir);
HXLINE(  73)				bool _hx_tmp;
HXDLIN(  73)				if (::sys::FileSystem_obj::isDirectory(testDir)) {
HXLINE(  73)					_hx_tmp = !(::sys::FileSystem_obj::exists(testDir));
            				}
            				else {
HXLINE(  73)					_hx_tmp = true;
            				}
HXDLIN(  73)				if (_hx_tmp) {
HXLINE(  75)					dirs->removeRange(j,1);
            				}
            			}
            		}
HXLINE(  78)		return dirs;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SysFileSystem_obj,scanMods,return )

 ::polymod::ModMetadata SysFileSystem_obj::getMetadata(::String modId){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_82_getMetadata)
HXLINE(  83)		if (::sys::FileSystem_obj::exists(modId)) {
HXLINE(  85)			 ::polymod::ModMetadata meta = null();
HXLINE(  87)			::String metaFile = ::polymod::util::Util_obj::pathJoin(modId,HX_("_polymod_meta.json",69,fc,10,06));
HXLINE(  88)			::String iconFile = ::polymod::util::Util_obj::pathJoin(modId,HX_("_polymod_icon.png",3c,6c,4c,14));
HXLINE(  89)			::String packFile = ::polymod::util::Util_obj::pathJoin(modId,HX_("_polymod_pack.txt",63,9d,09,cb));
HXLINE(  90)			if (!(::sys::FileSystem_obj::exists(metaFile))) {
HXLINE(  92)				::polymod::Polymod_obj::warning(HX_("missing_meta",7e,15,b8,7b),((HX_("Could not find mod metadata file: \"",a8,ef,82,b2) + metaFile) + HX_("\"",22,00,00,00)),null());
            			}
            			else {
HXLINE(  96)				::String metaText;
HXDLIN(  96)				if (!(::sys::FileSystem_obj::exists(metaFile))) {
HXLINE(  96)					metaText = null();
            				}
            				else {
HXLINE(  96)					metaText = ::sys::io::File_obj::getContent(metaFile);
            				}
HXDLIN(  96)				::String metaText1 = metaText;
HXLINE(  97)				meta = ::polymod::ModMetadata_obj::fromJsonStr(metaText1);
            			}
HXLINE(  99)			if (!(::sys::FileSystem_obj::exists(iconFile))) {
HXLINE( 101)				::polymod::Polymod_obj::warning(HX_("missing_icon",32,b2,11,79),((HX_("Could not find mod icon file: \"",32,09,de,8d) + iconFile) + HX_("\"",22,00,00,00)),null());
            			}
            			else {
HXLINE( 105)				 ::haxe::io::Bytes iconBytes;
HXDLIN( 105)				if (!(::sys::FileSystem_obj::exists(iconFile))) {
HXLINE( 105)					iconBytes = null();
            				}
            				else {
HXLINE( 105)					iconBytes = ::sys::io::File_obj::getBytes(iconFile);
            				}
HXDLIN( 105)				 ::haxe::io::Bytes iconBytes1 = iconBytes;
HXLINE( 106)				meta->icon = iconBytes1;
            			}
HXLINE( 108)			if (::sys::FileSystem_obj::exists(packFile)) {
HXLINE( 110)				meta->isModPack = true;
HXLINE( 111)				::String packText;
HXDLIN( 111)				if (!(::sys::FileSystem_obj::exists(packFile))) {
HXLINE( 111)					packText = null();
            				}
            				else {
HXLINE( 111)					packText = ::sys::io::File_obj::getContent(packFile);
            				}
HXDLIN( 111)				::String packText1 = packText;
HXLINE( 112)				meta->modPack = ::polymod::Polymod_obj::getModPack(packText1);
            			}
HXLINE( 114)			return meta;
            		}
            		else {
HXLINE( 118)			::polymod::Polymod_obj::error(HX_("missing_mod",29,c6,4d,c8),((HX_("Could not find mod directory: \"",88,65,de,46) + modId) + HX_("\"",22,00,00,00)),null());
            		}
HXLINE( 120)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,getMetadata,return )

::Array< ::String > SysFileSystem_obj::readDirectoryRecursive(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_124_readDirectoryRecursive)
HXLINE( 125)		::Array< ::String > all = this->_readDirectoryRecursive(path);
HXLINE( 126)		{
HXLINE( 126)			int _g = 0;
HXDLIN( 126)			int _g1 = all->length;
HXDLIN( 126)			while((_g < _g1)){
HXLINE( 126)				_g = (_g + 1);
HXDLIN( 126)				int i = (_g - 1);
HXLINE( 128)				::String f = all->__get(i);
HXLINE( 129)				int stri = ::polymod::util::Util_obj::uIndexOf(f,(path + HX_("/",2f,00,00,00)),null());
HXLINE( 130)				if ((stri == 0)) {
HXLINE( 132)					int f1 = ::polymod::util::Util_obj::uLength((path + HX_("/",2f,00,00,00)));
HXDLIN( 132)					f = ::polymod::util::Util_obj::uSubstr(f,f1,::polymod::util::Util_obj::uLength(f));
HXLINE( 133)					all[i] = f;
            				}
            			}
            		}
HXLINE( 136)		return all;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,readDirectoryRecursive,return )

::Array< ::String > SysFileSystem_obj::_readDirectoryRecursive(::String str){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_140__readDirectoryRecursive)
HXLINE( 141)		bool _hx_tmp;
HXDLIN( 141)		if (::sys::FileSystem_obj::exists(str)) {
HXLINE( 141)			_hx_tmp = ::sys::FileSystem_obj::isDirectory(str);
            		}
            		else {
HXLINE( 141)			_hx_tmp = false;
            		}
HXDLIN( 141)		if (_hx_tmp) {
HXLINE( 143)			::Array< ::String > all = ::sys::FileSystem_obj::readDirectory(str);
HXLINE( 144)			if (::hx::IsNull( all )) {
HXLINE( 145)				return ::Array_obj< ::String >::__new(0);
            			}
HXLINE( 146)			::Array< ::String > results = ::Array_obj< ::String >::__new(0);
HXLINE( 147)			{
HXLINE( 147)				int _g = 0;
HXDLIN( 147)				while((_g < all->length)){
HXLINE( 147)					::String thing = all->__get(_g);
HXDLIN( 147)					_g = (_g + 1);
HXLINE( 149)					if (::hx::IsNull( thing )) {
HXLINE( 150)						continue;
            					}
HXLINE( 151)					::String pathToThing = ::polymod::util::Util_obj::pathJoin(str,thing);
HXLINE( 152)					if (::sys::FileSystem_obj::isDirectory(pathToThing)) {
HXLINE( 154)						::Array< ::String > subs = this->_readDirectoryRecursive(pathToThing);
HXLINE( 155)						if (::hx::IsNotNull( subs )) {
HXLINE( 157)							results = results->concat(subs);
            						}
            					}
            					else {
HXLINE( 162)						results->push(pathToThing);
            					}
            				}
            			}
HXLINE( 165)			return results;
            		}
HXLINE( 167)		return ::Array_obj< ::String >::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,_readDirectoryRecursive,return )


::hx::ObjectPtr< SysFileSystem_obj > SysFileSystem_obj::__new(::String modRoot) {
	::hx::ObjectPtr< SysFileSystem_obj > __this = new SysFileSystem_obj();
	__this->__construct(modRoot);
	return __this;
}

::hx::ObjectPtr< SysFileSystem_obj > SysFileSystem_obj::__alloc(::hx::Ctx *_hx_ctx,::String modRoot) {
	SysFileSystem_obj *__this = (SysFileSystem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SysFileSystem_obj), true, "polymod.fs.SysFileSystem"));
	*(void **)__this = SysFileSystem_obj::_hx_vtable;
	__this->__construct(modRoot);
	return __this;
}

SysFileSystem_obj::SysFileSystem_obj()
{
}

void SysFileSystem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SysFileSystem);
	HX_MARK_MEMBER_NAME(modRoot,"modRoot");
	HX_MARK_END_CLASS();
}

void SysFileSystem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(modRoot,"modRoot");
}

::hx::Val SysFileSystem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modRoot") ) { return ::hx::Val( modRoot ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scanMods") ) { return ::hx::Val( scanMods_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isDirectory") ) { return ::hx::Val( isDirectory_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMetadata") ) { return ::hx::Val( getMetadata_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFileBytes") ) { return ::hx::Val( getFileBytes_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readDirectory") ) { return ::hx::Val( readDirectory_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFileContent") ) { return ::hx::Val( getFileContent_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"readDirectoryRecursive") ) { return ::hx::Val( readDirectoryRecursive_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_readDirectoryRecursive") ) { return ::hx::Val( _readDirectoryRecursive_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SysFileSystem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"modRoot") ) { modRoot=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SysFileSystem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("modRoot",04,ba,da,e0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SysFileSystem_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(SysFileSystem_obj,modRoot),HX_("modRoot",04,ba,da,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SysFileSystem_obj_sStaticStorageInfo = 0;
#endif

static ::String SysFileSystem_obj_sMemberFields[] = {
	HX_("modRoot",04,ba,da,e0),
	HX_("exists",dc,1d,e0,bf),
	HX_("isDirectory",23,a9,c5,ee),
	HX_("readDirectory",37,6c,b3,a3),
	HX_("getFileContent",27,41,50,34),
	HX_("getFileBytes",d9,44,16,cf),
	HX_("scanMods",8e,ff,61,18),
	HX_("getMetadata",25,aa,0d,66),
	HX_("readDirectoryRecursive",3b,60,49,77),
	HX_("_readDirectoryRecursive",da,df,21,0a),
	::String(null()) };

::hx::Class SysFileSystem_obj::__mClass;

void SysFileSystem_obj::__register()
{
	SysFileSystem_obj _hx_dummy;
	SysFileSystem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.fs.SysFileSystem",6f,8a,54,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SysFileSystem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SysFileSystem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SysFileSystem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SysFileSystem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace fs
