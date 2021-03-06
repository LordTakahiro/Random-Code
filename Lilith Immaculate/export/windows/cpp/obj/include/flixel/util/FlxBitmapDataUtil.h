// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#define INCLUDED_flixel_util_FlxBitmapDataUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,FlxBitmapDataUtil)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxBitmapDataUtil_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxBitmapDataUtil_obj OBJ_;
		FlxBitmapDataUtil_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxBitmapDataUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.util.FlxBitmapDataUtil"); }
		static hx::ObjectPtr< FlxBitmapDataUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBitmapDataUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxBitmapDataUtil","\x4d","\x46","\xad","\xaf"); }

		static void __boot();
		static  ::flixel::math::FlxMatrix matrix;
		static void merge( ::openfl::_legacy::display::BitmapData sourceBitmapData, ::openfl::_legacy::geom::Rectangle sourceRect, ::openfl::_legacy::display::BitmapData destBitmapData, ::openfl::_legacy::geom::Point destPoint,Int redMultiplier,Int greenMultiplier,Int blueMultiplier,Int alphaMultiplier);
		static ::Dynamic merge_dyn();

		static Int mergeColorComponent(Int source,Int dest,Int multiplier);
		static ::Dynamic mergeColorComponent_dyn();

		static  ::Dynamic compare( ::openfl::_legacy::display::BitmapData Bitmap1, ::openfl::_legacy::display::BitmapData Bitmap2);
		static ::Dynamic compare_dyn();

		static Int getDiff(Int value1,Int value2);
		static ::Dynamic getDiff_dyn();

		static Float getMemorySize( ::openfl::_legacy::display::BitmapData bitmapData);
		static ::Dynamic getMemorySize_dyn();

		static ::Array< ::Dynamic> replaceColor( ::openfl::_legacy::display::BitmapData bitmapData,Int color,Int newColor,hx::Null< Bool >  fetchPositions, ::flixel::math::FlxRect rect);
		static ::Dynamic replaceColor_dyn();

		static  ::openfl::_legacy::display::BitmapData addSpacesAndBorders( ::openfl::_legacy::display::BitmapData bitmapData, ::flixel::math::FlxPoint frameSize, ::flixel::math::FlxPoint spacing, ::flixel::math::FlxPoint border, ::flixel::math::FlxRect region);
		static ::Dynamic addSpacesAndBorders_dyn();

		static  ::openfl::_legacy::display::BitmapData copyBorderPixels( ::openfl::_legacy::display::BitmapData bitmapData,Int frameWidth,Int frameHeight,Int spaceX,Int spaceY,Int borderX,Int borderY,Int horizontalFrames,Int verticalFrames);
		static ::Dynamic copyBorderPixels_dyn();

		static  ::openfl::_legacy::display::BitmapData generateRotations( ::openfl::_legacy::display::BitmapData brush,hx::Null< Int >  rotations,hx::Null< Bool >  antiAliasing,hx::Null< Bool >  autoBuffer);
		static ::Dynamic generateRotations_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxBitmapDataUtil */ 
