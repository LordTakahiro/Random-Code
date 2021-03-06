// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#define INCLUDED_flixel_graphics_FlxGraphic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxAtlasFrames)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrameCollectionType)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxImageFrame)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,Tilesheet)

namespace flixel{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES FlxGraphic_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxGraphic_obj OBJ_;
		FlxGraphic_obj();

	public:
		void __construct(::String Key, ::openfl::_legacy::display::BitmapData Bitmap, ::Dynamic Persist);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.FlxGraphic")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.graphics.FlxGraphic"); }
		static hx::ObjectPtr< FlxGraphic_obj > __new(::String Key, ::openfl::_legacy::display::BitmapData Bitmap, ::Dynamic Persist);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGraphic_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("FlxGraphic","\x76","\x14","\x33","\xa3"); }

		static void __boot();
		static Bool defaultPersist;
		static  ::flixel::graphics::FlxGraphic fromAssetKey(::String Source,hx::Null< Bool >  Unique,::String Key,hx::Null< Bool >  Cache);
		static ::Dynamic fromAssetKey_dyn();

		static  ::flixel::graphics::FlxGraphic fromClass(hx::Class Source,hx::Null< Bool >  Unique,::String Key,hx::Null< Bool >  Cache);
		static ::Dynamic fromClass_dyn();

		static  ::flixel::graphics::FlxGraphic fromBitmapData( ::openfl::_legacy::display::BitmapData Source,hx::Null< Bool >  Unique,::String Key,hx::Null< Bool >  Cache);
		static ::Dynamic fromBitmapData_dyn();

		static  ::flixel::graphics::FlxGraphic fromFrame( ::flixel::graphics::frames::FlxFrame Source,hx::Null< Bool >  Unique,::String Key,hx::Null< Bool >  Cache);
		static ::Dynamic fromFrame_dyn();

		static  ::flixel::graphics::FlxGraphic fromFrames( ::flixel::graphics::frames::FlxFramesCollection Source,hx::Null< Bool >  Unique,::String Key);
		static ::Dynamic fromFrames_dyn();

		static  ::flixel::graphics::FlxGraphic fromGraphic( ::flixel::graphics::FlxGraphic Source,hx::Null< Bool >  Unique,::String Key);
		static ::Dynamic fromGraphic_dyn();

		static  ::flixel::graphics::FlxGraphic fromRectangle(Int Width,Int Height,Int Color,hx::Null< Bool >  Unique,::String Key);
		static ::Dynamic fromRectangle_dyn();

		static  ::openfl::_legacy::display::BitmapData getBitmap( ::openfl::_legacy::display::BitmapData Bitmap,hx::Null< Bool >  Unique);
		static ::Dynamic getBitmap_dyn();

		static  ::flixel::graphics::FlxGraphic createGraphic( ::openfl::_legacy::display::BitmapData Bitmap,::String Key,hx::Null< Bool >  Unique,hx::Null< Bool >  Cache);
		static ::Dynamic createGraphic_dyn();

		::String key;
		 ::openfl::_legacy::display::BitmapData bitmap;
		Int width;
		Int height;
		::String assetsKey;
		hx::Class assetsClass;
		Bool persist;
		Bool isDumped;
		 ::openfl::_legacy::display::Tilesheet tilesheet;
		 ::flixel::graphics::frames::FlxImageFrame imageFrame;
		 ::flixel::graphics::frames::FlxAtlasFrames atlasFrames;
		 ::haxe::ds::EnumValueMap frameCollections;
		::Array< ::Dynamic> frameCollectionTypes;
		Bool unique;
		 ::flixel::graphics::frames::FlxImageFrame _imageFrame;
		 ::openfl::_legacy::display::Tilesheet _tilesheet;
		Int _useCount;
		Bool _destroyOnNoUse;
		void dump();
		::Dynamic dump_dyn();

		void undump();
		::Dynamic undump_dyn();

		void onContext();
		::Dynamic onContext_dyn();

		void onAssetsReload();
		::Dynamic onAssetsReload_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void addFrameCollection( ::flixel::graphics::frames::FlxFramesCollection collection);
		::Dynamic addFrameCollection_dyn();

		::cpp::VirtualArray getFramesCollections(::hx::EnumBase type);
		::Dynamic getFramesCollections_dyn();

		 ::flixel::graphics::frames::FlxFrame getEmptyFrame( ::flixel::math::FlxPoint size);
		::Dynamic getEmptyFrame_dyn();

		 ::openfl::_legacy::display::Tilesheet get_tilesheet();
		::Dynamic get_tilesheet_dyn();

		 ::openfl::_legacy::display::BitmapData getBitmapFromSystem();
		::Dynamic getBitmapFromSystem_dyn();

		Bool get_canBeDumped();
		::Dynamic get_canBeDumped_dyn();

		Int get_useCount();
		::Dynamic get_useCount_dyn();

		Int set_useCount(Int Value);
		::Dynamic set_useCount_dyn();

		Bool get_destroyOnNoUse();
		::Dynamic get_destroyOnNoUse_dyn();

		Bool set_destroyOnNoUse(Bool Value);
		::Dynamic set_destroyOnNoUse_dyn();

		 ::flixel::graphics::frames::FlxImageFrame get_imageFrame();
		::Dynamic get_imageFrame_dyn();

		 ::flixel::graphics::frames::FlxAtlasFrames get_atlasFrames();
		::Dynamic get_atlasFrames_dyn();

		 ::openfl::_legacy::display::BitmapData set_bitmap( ::openfl::_legacy::display::BitmapData value);
		::Dynamic set_bitmap_dyn();

};

} // end namespace flixel
} // end namespace graphics

#endif /* INCLUDED_flixel_graphics_FlxGraphic */ 
