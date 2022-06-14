#ifndef INCLUDED_WiiMenu
#define INCLUDED_WiiMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(WiiMenu)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES WiiMenu_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef WiiMenu_obj OBJ_;
		WiiMenu_obj();

	public:
		enum { _hx_ClassId = 0x171b5e02 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="WiiMenu")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"WiiMenu"); }
		static ::hx::ObjectPtr< WiiMenu_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< WiiMenu_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WiiMenu_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WiiMenu",36,99,89,c5); }

		static void __boot();
		static  ::flixel::FlxSprite wiiCursor;
		static  ::flixel::_hx_system::FlxSound enteringChannel;
		static  ::flixel::_hx_system::FlxSound pressSound;
		static  ::flixel::_hx_system::FlxSound startSound;
		static  ::flixel::_hx_system::FlxSound overLapSound;
		static bool appear;
		 ::flixel::FlxSprite bg;
		 ::flixel::FlxSprite discHovered;
		 ::flixel::FlxSprite optionsHovered;
		 ::flixel::FlxSprite shopHovered;
		 ::flixel::FlxSprite fnfHovered;
		 ::flixel::FlxSprite credsHovered;
		 ::flixel::FlxSprite charSelectHovered;
		 ::flixel::FlxSprite disc;
		 ::flixel::FlxSprite shop;
		 ::flixel::FlxSprite fnf;
		 ::flixel::FlxSprite creds;
		 ::flixel::FlxSprite charSelect;
		 ::flixel::FlxSprite blackScreen;
		 ::flixel::FlxSprite discOverlaps;
		 ::flixel::FlxSprite settingsOverlaps;
		 ::flixel::FlxSprite shopOverlaps;
		 ::flixel::FlxSprite fnfOverlaps;
		 ::flixel::FlxSprite credsOverlaps;
		 ::flixel::FlxSprite charSelectOverlaps;
		 ::flixel::text::FlxText hours;
		 ::flixel::text::FlxText twoFuckingDots;
		 ::flixel::text::FlxText minutes;
		 ::flixel::text::FlxText dateDay;
		 ::flixel::text::FlxText dateMonth;
		 ::flixel::text::FlxText day;
		int getHours;
		int getMinutes;
		int getDate;
		int getMonth;
		int getDay;
		 ::flixel::FlxSprite loggedInBox;
		 ::flixel::text::FlxText user;
		void create();

		void tweenGamejolt();
		::Dynamic tweenGamejolt_dyn();

		void update(Float elapsed);

		void offsetShit( ::flixel::FlxSprite object,int amount);
		::Dynamic offsetShit_dyn();

		void updateTime( ::Dynamic yes);
		::Dynamic updateTime_dyn();

		void daything();
		::Dynamic daything_dyn();

};


#endif /* INCLUDED_WiiMenu */ 
