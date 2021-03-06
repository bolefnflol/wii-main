#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_polymod_ModMetadata
#include <polymod/ModMetadata.h>
#endif
#ifndef INCLUDED_polymod_fs_IFileSystem
#include <polymod/fs/IFileSystem.h>
#endif

namespace polymod{
namespace fs{


static ::String IFileSystem_obj_sMemberFields[] = {
	HX_("exists",dc,1d,e0,bf),
	HX_("isDirectory",23,a9,c5,ee),
	HX_("readDirectory",37,6c,b3,a3),
	HX_("readDirectoryRecursive",3b,60,49,77),
	HX_("getFileContent",27,41,50,34),
	HX_("getFileBytes",d9,44,16,cf),
	HX_("scanMods",8e,ff,61,18),
	HX_("getMetadata",25,aa,0d,66),
	::String(null()) };

::hx::Class IFileSystem_obj::__mClass;

void IFileSystem_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.fs.IFileSystem",0b,4d,f3,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFileSystem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x0d05d891 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace fs
