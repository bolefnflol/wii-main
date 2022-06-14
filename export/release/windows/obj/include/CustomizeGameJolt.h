#ifndef INCLUDED_CustomizeGameJolt
#define INCLUDED_CustomizeGameJolt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(CustomizeGameJolt)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES CustomizeGameJolt_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef CustomizeGameJolt_obj OBJ_;
		CustomizeGameJolt_obj();

	public:
		enum { _hx_ClassId = 0x432a9822 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="CustomizeGameJolt")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"CustomizeGameJolt"); }
		static ::hx::ObjectPtr< CustomizeGameJolt_obj > __new(::String desc);
		static ::hx::ObjectPtr< CustomizeGameJolt_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CustomizeGameJolt_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CustomizeGameJolt",e2,e2,8f,f3); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_CustomizeGameJolt */ 
