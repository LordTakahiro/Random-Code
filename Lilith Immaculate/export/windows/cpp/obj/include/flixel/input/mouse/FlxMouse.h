// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#define INCLUDED_flixel_input_mouse_FlxMouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouse)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouseButton)
HX_DECLARE_CLASS3(flixel,_hx_system,replay,MouseRecord)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,display,Stage)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)

namespace flixel{
namespace input{
namespace mouse{


class HXCPP_CLASS_ATTRIBUTES FlxMouse_obj : public  ::flixel::input::FlxPointer_obj
{
	public:
		typedef  ::flixel::input::FlxPointer_obj super;
		typedef FlxMouse_obj OBJ_;
		FlxMouse_obj();

	public:
		void __construct( ::openfl::_legacy::display::Sprite CursorContainer);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.mouse.FlxMouse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.input.mouse.FlxMouse"); }
		static hx::ObjectPtr< FlxMouse_obj > __new( ::openfl::_legacy::display::Sprite CursorContainer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxMouse_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("FlxMouse","\x73","\x20","\x3f","\xc9"); }

		Bool enabled;
		Int wheel;
		 ::openfl::_legacy::display::Sprite cursorContainer;
		Bool visible;
		Bool useSystemCursor;
		 ::flixel::input::mouse::FlxMouseButton _leftButton;
		 ::flixel::input::mouse::FlxMouseButton _middleButton;
		 ::flixel::input::mouse::FlxMouseButton _rightButton;
		 ::openfl::_legacy::display::Bitmap _cursor;
		 ::openfl::_legacy::display::BitmapData _cursorBitmapData;
		Bool _wheelUsed;
		Bool _visibleWhenFocusLost;
		Int _lastX;
		Int _lastY;
		Int _lastWheel;
		Int _lastLeftButtonState;
		 ::openfl::_legacy::display::Stage _stage;
		void load( ::Dynamic Graphic,hx::Null< Float >  Scale,hx::Null< Int >  XOffset,hx::Null< Int >  YOffset);
		::Dynamic load_dyn();

		void unload();
		::Dynamic unload_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void reset();
		::Dynamic reset_dyn();

		void update();
		::Dynamic update_dyn();

		void onFocus();
		::Dynamic onFocus_dyn();

		void onFocusLost();
		::Dynamic onFocusLost_dyn();

		void onGameStart();
		::Dynamic onGameStart_dyn();

		void onMouseWheel( ::openfl::_legacy::events::MouseEvent FlashEvent);
		::Dynamic onMouseWheel_dyn();

		void onMouseLeave( ::Dynamic _);
		::Dynamic onMouseLeave_dyn();

		Bool get_pressed();
		::Dynamic get_pressed_dyn();

		Bool get_justPressed();
		::Dynamic get_justPressed_dyn();

		Bool get_justReleased();
		::Dynamic get_justReleased_dyn();

		Bool get_pressedRight();
		::Dynamic get_pressedRight_dyn();

		Bool get_justPressedRight();
		::Dynamic get_justPressedRight_dyn();

		Bool get_justReleasedRight();
		::Dynamic get_justReleasedRight_dyn();

		Bool get_pressedMiddle();
		::Dynamic get_pressedMiddle_dyn();

		Bool get_justPressedMiddle();
		::Dynamic get_justPressedMiddle_dyn();

		Bool get_justReleasedMiddle();
		::Dynamic get_justReleasedMiddle_dyn();

		void showSystemCursor();
		::Dynamic showSystemCursor_dyn();

		void hideSystemCursor();
		::Dynamic hideSystemCursor_dyn();

		Bool set_useSystemCursor(Bool Value);
		::Dynamic set_useSystemCursor_dyn();

		void showCursor();
		::Dynamic showCursor_dyn();

		void hideCursor();
		::Dynamic hideCursor_dyn();

		Bool set_visible(Bool Value);
		::Dynamic set_visible_dyn();

		 ::flixel::_hx_system::replay::MouseRecord record();
		::Dynamic record_dyn();

		void playback( ::flixel::_hx_system::replay::MouseRecord Record);
		::Dynamic playback_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace mouse

#endif /* INCLUDED_flixel_input_mouse_FlxMouse */ 
