#ifndef INCLUDED_WiiSaveDataChecker
#define INCLUDED_WiiSaveDataChecker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(WiiSaveDataChecker)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES WiiSaveDataChecker_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef WiiSaveDataChecker_obj OBJ_;
		WiiSaveDataChecker_obj();

	public:
		enum { _hx_ClassId = 0x62402277 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="WiiSaveDataChecker")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"WiiSaveDataChecker"); }
		static ::hx::ObjectPtr< WiiSaveDataChecker_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< WiiSaveDataChecker_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WiiSaveDataChecker_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WiiSaveDataChecker",b7,3f,7c,0a); }

		static void checkSaveData();
		static ::Dynamic checkSaveData_dyn();

		static void limitedCharSaveChecker();
		static ::Dynamic limitedCharSaveChecker_dyn();

};


#endif /* INCLUDED_WiiSaveDataChecker */ 
