// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_ui_FlxBar
#define INCLUDED_flixel_ui_FlxBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxImageFrame)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,ui,FlxBarFillDirection)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)

namespace flixel{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxBar_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef FlxBar_obj OBJ_;
		FlxBar_obj();

	public:
		void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::hx::EnumBase direction,hx::Null< Int >  __o_width,hx::Null< Int >  __o_height, ::Dynamic parentRef,::String __o_variable,hx::Null< Float >  __o_min,hx::Null< Float >  __o_max,hx::Null< Bool >  __o_showBorder);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.ui.FlxBar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.ui.FlxBar"); }
		static hx::ObjectPtr< FlxBar_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::hx::EnumBase direction,hx::Null< Int >  __o_width,hx::Null< Int >  __o_height, ::Dynamic parentRef,::String __o_variable,hx::Null< Float >  __o_min,hx::Null< Float >  __o_max,hx::Null< Bool >  __o_showBorder);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBar_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxBar","\xa1","\xec","\xc5","\x7b"); }

		Bool fixedPosition;
		Float pxPerPercent;
		 ::flixel::math::FlxPoint positionOffset;
		Bool killOnEmpty;
		Float value;
		Float min;
		Float max;
		Float range;
		Float pct;
		Int numDivisions;
		 ::Dynamic emptyCallback;
		 ::Dynamic &emptyCallback_dyn() { return emptyCallback;}
		 ::Dynamic filledCallback;
		 ::Dynamic &filledCallback_dyn() { return filledCallback;}
		 ::Dynamic parent;
		::String parentVariable;
		Int barWidth;
		Int barHeight;
		 ::flixel::graphics::frames::FlxImageFrame frontFrames;
		::hx::EnumBase fillDirection;
		Bool _fillHorizontal;
		 ::flixel::graphics::frames::FlxFrame _frontFrame;
		 ::flixel::math::FlxRect _filledFlxRect;
		 ::openfl::_legacy::display::BitmapData _emptyBar;
		 ::openfl::_legacy::geom::Rectangle _emptyBarRect;
		 ::openfl::_legacy::display::BitmapData _filledBar;
		 ::openfl::_legacy::geom::Point _zeroOffset;
		 ::openfl::_legacy::geom::Rectangle _filledBarRect;
		 ::openfl::_legacy::geom::Point _filledBarPoint;
		Int _maxPercent;
		void destroy();

		void trackParent(Int offsetX,Int offsetY);
		::Dynamic trackParent_dyn();

		void setParent( ::Dynamic parentRef,::String variable,hx::Null< Bool >  track,hx::Null< Int >  offsetX,hx::Null< Int >  offsetY);
		::Dynamic setParent_dyn();

		void stopTrackingParent(Int posX,Int posY);
		::Dynamic stopTrackingParent_dyn();

		void setCallbacks( ::Dynamic onEmpty, ::Dynamic onFilled,hx::Null< Bool >  killOnEmpty);
		::Dynamic setCallbacks_dyn();

		void setRange(Float min,Float max);
		::Dynamic setRange_dyn();

		 ::flixel::ui::FlxBar createFilledBar(Int empty,Int fill,hx::Null< Bool >  showBorder,hx::Null< Int >  border);
		::Dynamic createFilledBar_dyn();

		 ::flixel::ui::FlxBar createColoredEmptyBar(Int empty,hx::Null< Bool >  showBorder,hx::Null< Int >  border);
		::Dynamic createColoredEmptyBar_dyn();

		 ::flixel::ui::FlxBar createColoredFilledBar(Int fill,hx::Null< Bool >  showBorder,hx::Null< Int >  border);
		::Dynamic createColoredFilledBar_dyn();

		 ::flixel::ui::FlxBar createGradientBar(::Array< Int > empty,::Array< Int > fill,hx::Null< Int >  chunkSize,hx::Null< Int >  rotation,hx::Null< Bool >  showBorder,hx::Null< Int >  border);
		::Dynamic createGradientBar_dyn();

		 ::flixel::ui::FlxBar createGradientEmptyBar(::Array< Int > empty,hx::Null< Int >  chunkSize,hx::Null< Int >  rotation,hx::Null< Bool >  showBorder,hx::Null< Int >  border);
		::Dynamic createGradientEmptyBar_dyn();

		 ::flixel::ui::FlxBar createGradientFilledBar(::Array< Int > fill,hx::Null< Int >  chunkSize,hx::Null< Int >  rotation,hx::Null< Bool >  showBorder,hx::Null< Int >  border);
		::Dynamic createGradientFilledBar_dyn();

		 ::flixel::ui::FlxBar createImageBar( ::Dynamic empty, ::Dynamic fill,hx::Null< Int >  emptyBackground,hx::Null< Int >  fillBackground);
		::Dynamic createImageBar_dyn();

		 ::flixel::ui::FlxBar createImageEmptyBar( ::Dynamic empty,hx::Null< Int >  emptyBackground);
		::Dynamic createImageEmptyBar_dyn();

		 ::flixel::ui::FlxBar createImageFilledBar( ::Dynamic fill,hx::Null< Int >  fillBackground);
		::Dynamic createImageFilledBar_dyn();

		::hx::EnumBase set_fillDirection(::hx::EnumBase direction);
		::Dynamic set_fillDirection_dyn();

		void updateValueFromParent();
		::Dynamic updateValueFromParent_dyn();

		void updateBar();
		::Dynamic updateBar_dyn();

		void updateEmptyBar();
		::Dynamic updateEmptyBar_dyn();

		void updateFilledBar();
		::Dynamic updateFilledBar_dyn();

		void update(Float elapsed);

		void draw();

		 ::openfl::_legacy::display::BitmapData set_pixels( ::openfl::_legacy::display::BitmapData Pixels);

		virtual ::String toString();

		Float get_percent();
		::Dynamic get_percent_dyn();

		Float set_percent(Float newPct);
		::Dynamic set_percent_dyn();

		Float set_value(Float newValue);
		::Dynamic set_value_dyn();

		Float get_value();
		::Dynamic get_value_dyn();

		Int set_numDivisions(Int newValue);
		::Dynamic set_numDivisions_dyn();

		 ::flixel::graphics::frames::FlxImageFrame get_frontFrames();
		::Dynamic get_frontFrames_dyn();

		 ::flixel::graphics::frames::FlxImageFrame set_frontFrames( ::flixel::graphics::frames::FlxImageFrame value);
		::Dynamic set_frontFrames_dyn();

		 ::flixel::graphics::frames::FlxImageFrame get_backFrames();
		::Dynamic get_backFrames_dyn();

		 ::flixel::graphics::frames::FlxImageFrame set_backFrames( ::flixel::graphics::frames::FlxImageFrame value);
		::Dynamic set_backFrames_dyn();

};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_FlxBar */ 
