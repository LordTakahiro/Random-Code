// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#define INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_hx_system,debug,FlxDebuggerLayout)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,TrackerProfile)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,DebuggerFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,FlxHorizontalAlign)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal0)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)

namespace flixel{
namespace _hx_system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES DebuggerFrontEnd_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DebuggerFrontEnd_obj OBJ_;
		DebuggerFrontEnd_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.frontEnds.DebuggerFrontEnd")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.frontEnds.DebuggerFrontEnd"); }
		static hx::ObjectPtr< DebuggerFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DebuggerFrontEnd_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DebuggerFrontEnd","\x13","\xf8","\xb4","\x5e"); }

		Int precision;
		::Array< Int > toggleKeys;
		Bool drawDebug;
		 ::flixel::util::_FlxSignal::FlxSignal0 drawDebugChanged;
		 ::flixel::util::_FlxSignal::FlxSignal0 visibilityChanged;
		Bool visible;
		void setLayout(::hx::EnumBase Layout);
		::Dynamic setLayout_dyn();

		void resetLayout();
		::Dynamic resetLayout_dyn();

		 ::flixel::_hx_system::ui::FlxSystemButton addButton(::hx::EnumBase Alignment, ::openfl::_legacy::display::BitmapData Icon, ::Dynamic UpHandler,hx::Null< Bool >  ToggleMode,hx::Null< Bool >  UpdateLayout);
		::Dynamic addButton_dyn();

		 ::flixel::_hx_system::debug::Window track( ::Dynamic ObjectOrClass,::String WindowTitle);
		::Dynamic track_dyn();

		void addTrackerProfile( ::flixel::_hx_system::debug::watch::TrackerProfile Profile);
		::Dynamic addTrackerProfile_dyn();

		void removeButton( ::flixel::_hx_system::ui::FlxSystemButton Button,hx::Null< Bool >  UpdateLayout);
		::Dynamic removeButton_dyn();

		Bool set_drawDebug(Bool Value);
		::Dynamic set_drawDebug_dyn();

		Bool set_visible(Bool Value);
		::Dynamic set_visible_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd */ 
