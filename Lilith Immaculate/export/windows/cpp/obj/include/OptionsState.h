// Generated by Haxe 3.3.0
#ifndef INCLUDED_OptionsState
#define INCLUDED_OptionsState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(OptionsState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES OptionsState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef OptionsState_obj OBJ_;
		OptionsState_obj();

	public:
		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="OptionsState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"OptionsState"); }
		static hx::ObjectPtr< OptionsState_obj > __new( ::Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OptionsState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("OptionsState","\xf3","\x09","\x80","\x0f"); }

		 ::flixel::text::FlxText _txtTitle;
		 ::flixel::ui::FlxBar _barVolume;
		 ::flixel::text::FlxText _txtVolume;
		 ::flixel::text::FlxText _txtVolumeAmt;
		 ::flixel::ui::FlxButton _btnVolumeDown;
		 ::flixel::ui::FlxButton _btnVolumeUp;
		 ::flixel::ui::FlxButton _btnClearData;
		 ::flixel::ui::FlxButton _btnBack;
		 ::flixel::util::FlxSave _save;
		void create();

		void clickFullscreen();
		::Dynamic clickFullscreen_dyn();

		void clickClearData();
		::Dynamic clickClearData_dyn();

		void clickBack();
		::Dynamic clickBack_dyn();

		void clickVolumeDown();
		::Dynamic clickVolumeDown_dyn();

		void clickVolumeUp();
		::Dynamic clickVolumeUp_dyn();

		void updateVolume();
		::Dynamic updateVolume_dyn();

};


#endif /* INCLUDED_OptionsState */ 
