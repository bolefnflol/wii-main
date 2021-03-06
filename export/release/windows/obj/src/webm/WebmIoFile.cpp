#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_sys_io_FileSeek
#include <sys/io/FileSeek.h>
#endif
#ifndef INCLUDED_webm_WebmIo
#include <webm/WebmIo.h>
#endif
#ifndef INCLUDED_webm_WebmIoFile
#include <webm/WebmIoFile.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_722e0d6fe1c20e37_12_new,"webm.WebmIoFile","new",0x7b258dc2,"webm.WebmIoFile.new","webm/WebmIoFile.hx",12,0x3e10334d)
HX_LOCAL_STACK_FRAME(_hx_pos_722e0d6fe1c20e37_21_read,"webm.WebmIoFile","read",0x485b43b4,"webm.WebmIoFile.read","webm/WebmIoFile.hx",21,0x3e10334d)
HX_LOCAL_STACK_FRAME(_hx_pos_722e0d6fe1c20e37_25_seek,"webm.WebmIoFile","seek",0x49047dd6,"webm.WebmIoFile.seek","webm/WebmIoFile.hx",25,0x3e10334d)
HX_LOCAL_STACK_FRAME(_hx_pos_722e0d6fe1c20e37_38_tell,"webm.WebmIoFile","tell",0x49adba8f,"webm.WebmIoFile.tell","webm/WebmIoFile.hx",38,0x3e10334d)
namespace webm{

void WebmIoFile_obj::__construct(::String filePath){
            	HX_STACKFRAME(&_hx_pos_722e0d6fe1c20e37_12_new)
HXLINE(  13)		super::__construct();
HXLINE(  15)		this->fileInput = ::sys::io::File_obj::read(filePath,true);
HXLINE(  16)		this->create();
            	}

Dynamic WebmIoFile_obj::__CreateEmpty() { return new WebmIoFile_obj; }

void *WebmIoFile_obj::_hx_vtable = 0;

Dynamic WebmIoFile_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WebmIoFile_obj > _hx_result = new WebmIoFile_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool WebmIoFile_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x50d2cd98) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x50d2cd98;
	} else {
		return inClassId==(int)0x7e30dd3c;
	}
}

::Array< unsigned char > WebmIoFile_obj::read(int count){
            	HX_STACKFRAME(&_hx_pos_722e0d6fe1c20e37_21_read)
HXDLIN(  21)		return this->fileInput->read(count)->b;
            	}


int WebmIoFile_obj::seek(Float offset,int whence){
            	HX_STACKFRAME(&_hx_pos_722e0d6fe1c20e37_25_seek)
HXLINE(  26)		 ::sys::io::FileInput _hx_tmp = this->fileInput;
HXDLIN(  26)		int _hx_tmp1 = ::Std_obj::_hx_int(offset);
HXDLIN(  26)		 ::sys::io::FileSeek _hx_tmp2;
HXDLIN(  26)		switch((int)(whence)){
            			case (int)0: {
HXLINE(  26)				_hx_tmp2 = ::sys::io::FileSeek_obj::SeekBegin_dyn();
            			}
            			break;
            			case (int)1: {
HXLINE(  26)				_hx_tmp2 = ::sys::io::FileSeek_obj::SeekCur_dyn();
            			}
            			break;
            			case (int)2: {
HXLINE(  26)				_hx_tmp2 = ::sys::io::FileSeek_obj::SeekEnd_dyn();
            			}
            			break;
            			default:{
HXLINE(  26)				_hx_tmp2 = ::sys::io::FileSeek_obj::SeekCur_dyn();
            			}
            		}
HXDLIN(  26)		_hx_tmp->seek(_hx_tmp1,_hx_tmp2);
HXLINE(  33)		return 0;
            	}


Float WebmIoFile_obj::tell(){
            	HX_STACKFRAME(&_hx_pos_722e0d6fe1c20e37_38_tell)
HXDLIN(  38)		return ( (Float)(this->fileInput->tell()) );
            	}



::hx::ObjectPtr< WebmIoFile_obj > WebmIoFile_obj::__new(::String filePath) {
	::hx::ObjectPtr< WebmIoFile_obj > __this = new WebmIoFile_obj();
	__this->__construct(filePath);
	return __this;
}

::hx::ObjectPtr< WebmIoFile_obj > WebmIoFile_obj::__alloc(::hx::Ctx *_hx_ctx,::String filePath) {
	WebmIoFile_obj *__this = (WebmIoFile_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WebmIoFile_obj), true, "webm.WebmIoFile"));
	*(void **)__this = WebmIoFile_obj::_hx_vtable;
	__this->__construct(filePath);
	return __this;
}

WebmIoFile_obj::WebmIoFile_obj()
{
}

void WebmIoFile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WebmIoFile);
	HX_MARK_MEMBER_NAME(fileInput,"fileInput");
	 ::webm::WebmIo_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WebmIoFile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fileInput,"fileInput");
	 ::webm::WebmIo_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val WebmIoFile_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		if (HX_FIELD_EQ(inName,"seek") ) { return ::hx::Val( seek_dyn() ); }
		if (HX_FIELD_EQ(inName,"tell") ) { return ::hx::Val( tell_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fileInput") ) { return ::hx::Val( fileInput ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WebmIoFile_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fileInput") ) { fileInput=inValue.Cast<  ::sys::io::FileInput >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WebmIoFile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fileInput",ee,63,45,c0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WebmIoFile_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::sys::io::FileInput */ ,(int)offsetof(WebmIoFile_obj,fileInput),HX_("fileInput",ee,63,45,c0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WebmIoFile_obj_sStaticStorageInfo = 0;
#endif

static ::String WebmIoFile_obj_sMemberFields[] = {
	HX_("fileInput",ee,63,45,c0),
	HX_("read",56,4b,a7,4b),
	HX_("seek",78,85,50,4c),
	HX_("tell",31,c2,f9,4c),
	::String(null()) };

::hx::Class WebmIoFile_obj::__mClass;

void WebmIoFile_obj::__register()
{
	WebmIoFile_obj _hx_dummy;
	WebmIoFile_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("webm.WebmIoFile",d0,44,1f,5e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WebmIoFile_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WebmIoFile_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WebmIoFile_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WebmIoFile_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace webm
