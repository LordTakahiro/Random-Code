// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_system_debug_stats_StatsGraph
#define INCLUDED_flixel_system_debug_stats_StatsGraph

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
HX_DECLARE_CLASS4(flixel,_hx_system,debug,stats,StatsGraph)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Shape)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace stats{


class HXCPP_CLASS_ATTRIBUTES StatsGraph_obj : public  ::openfl::_legacy::display::Sprite_obj
{
	public:
		typedef  ::openfl::_legacy::display::Sprite_obj super;
		typedef StatsGraph_obj OBJ_;
		StatsGraph_obj();

	public:
		void __construct(Int X,Int Y,Int Width,Int Height,Int GraphColor,::String Unit,hx::Null< Int >  __o_LabelWidth,::String Label);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.stats.StatsGraph")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.stats.StatsGraph"); }
		static hx::ObjectPtr< StatsGraph_obj > __new(Int X,Int Y,Int Width,Int Height,Int GraphColor,::String Unit,hx::Null< Int >  __o_LabelWidth,::String Label);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StatsGraph_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("StatsGraph","\xcf","\x7c","\x81","\x99"); }

		static void __boot();
		static Int AXIS_COLOR;
		static Float AXIS_ALPHA;
		static Int HISTORY_MAX;
		 ::openfl::_legacy::text::TextField minLabel;
		 ::openfl::_legacy::text::TextField curLabel;
		 ::openfl::_legacy::text::TextField maxLabel;
		 ::openfl::_legacy::text::TextField avgLabel;
		Float minValue;
		Float maxValue;
		Int graphColor;
		::Array< Float > history;
		 ::openfl::_legacy::display::Shape _axis;
		Int _width;
		Int _height;
		::String _unit;
		Int _labelWidth;
		::String _label;
		void drawAxes();
		::Dynamic drawAxes_dyn();

		void drawGraph();
		::Dynamic drawGraph_dyn();

		void update(Float Value);
		::Dynamic update_dyn();

		::String formatValue(Float value);
		::Dynamic formatValue_dyn();

		Float average();
		::Dynamic average_dyn();

		void destroy();
		::Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace stats

#endif /* INCLUDED_flixel_system_debug_stats_StatsGraph */ 
