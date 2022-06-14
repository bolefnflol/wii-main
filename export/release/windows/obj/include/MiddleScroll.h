#ifndef INCLUDED_MiddleScroll
#define INCLUDED_MiddleScroll

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(MiddleScroll)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES MiddleScroll_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef MiddleScroll_obj OBJ_;
		MiddleScroll_obj();

	public:
		enum { _hx_ClassId = 0x134c6c22 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="MiddleScroll")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"MiddleScroll"); }
		static ::hx::ObjectPtr< MiddleScroll_obj > __new(::String desc);
		static ::hx::ObjectPtr< MiddleScroll_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MiddleScroll_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MiddleScroll",62,19,6b,2a); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_MiddleScroll */ 
