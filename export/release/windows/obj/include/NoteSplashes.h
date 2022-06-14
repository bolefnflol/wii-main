#ifndef INCLUDED_NoteSplashes
#define INCLUDED_NoteSplashes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(NoteSplashes)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES NoteSplashes_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef NoteSplashes_obj OBJ_;
		NoteSplashes_obj();

	public:
		enum { _hx_ClassId = 0x3e1cf687 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="NoteSplashes")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"NoteSplashes"); }
		static ::hx::ObjectPtr< NoteSplashes_obj > __new(::String desc);
		static ::hx::ObjectPtr< NoteSplashes_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NoteSplashes_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NoteSplashes",c7,a3,3b,55); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_NoteSplashes */ 
