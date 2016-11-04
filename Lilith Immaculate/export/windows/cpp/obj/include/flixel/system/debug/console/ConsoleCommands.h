// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_system_debug_console_ConsoleCommands
#define INCLUDED_flixel_system_debug_console_ConsoleCommands

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,console,Console)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,console,ConsoleCommands)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{


class HXCPP_CLASS_ATTRIBUTES ConsoleCommands_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ConsoleCommands_obj OBJ_;
		ConsoleCommands_obj();

	public:
		void __construct( ::flixel::_hx_system::debug::console::Console console);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.console.ConsoleCommands")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.console.ConsoleCommands"); }
		static hx::ObjectPtr< ConsoleCommands_obj > __new( ::flixel::_hx_system::debug::console::Console console);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConsoleCommands_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ConsoleCommands","\x1f","\x0f","\xd7","\xb9"); }

		 ::flixel::_hx_system::debug::console::Console _console;
		Bool _watchingMouse;
		::String help(::String Alias);
		::Dynamic help_dyn();

		void close();
		::Dynamic close_dyn();

		void create(hx::Class ObjClass,hx::Null< Bool >  MousePos,::cpp::VirtualArray Params);
		::Dynamic create_dyn();

		::String fields( ::Dynamic Object);
		::Dynamic fields_dyn();

		void listObjects();
		::Dynamic listObjects_dyn();

		void listFunctions();
		::Dynamic listFunctions_dyn();

		void watchMouse();
		::Dynamic watchMouse_dyn();

		void pause();
		::Dynamic pause_dyn();

		void step();
		::Dynamic step_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console

#endif /* INCLUDED_flixel_system_debug_console_ConsoleCommands */ 
