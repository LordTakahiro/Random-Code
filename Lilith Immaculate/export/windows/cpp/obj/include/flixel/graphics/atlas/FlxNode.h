// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#define INCLUDED_flixel_graphics_atlas_FlxNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,atlas,FlxAtlas)
HX_DECLARE_CLASS3(flixel,graphics,atlas,FlxNode)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxImageFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxTileFrames)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace graphics{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES FlxNode_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxNode_obj OBJ_;
		FlxNode_obj();

	public:
		void __construct( ::flixel::math::FlxRect rect, ::flixel::graphics::atlas::FlxAtlas atlas,hx::Null< Bool >  __o_filled,::String __o_key,hx::Null< Bool >  __o_rotated);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.atlas.FlxNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.graphics.atlas.FlxNode"); }
		static hx::ObjectPtr< FlxNode_obj > __new( ::flixel::math::FlxRect rect, ::flixel::graphics::atlas::FlxAtlas atlas,hx::Null< Bool >  __o_filled,::String __o_key,hx::Null< Bool >  __o_rotated);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxNode_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("FlxNode","\x74","\x43","\x62","\xd9"); }

		 ::flixel::graphics::atlas::FlxNode left;
		 ::flixel::graphics::atlas::FlxNode right;
		 ::flixel::math::FlxRect rect;
		::String key;
		Bool filled;
		 ::flixel::graphics::atlas::FlxAtlas atlas;
		Int x;
		Int y;
		Bool isEmpty;
		Bool rotated;
		void destroy();
		::Dynamic destroy_dyn();

		Bool canPlace(Int width,Int height);
		::Dynamic canPlace_dyn();

		 ::flixel::graphics::frames::FlxTileFrames getTileFrames( ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxPoint tileSpacing, ::flixel::math::FlxPoint tileBorder);
		::Dynamic getTileFrames_dyn();

		 ::flixel::graphics::frames::FlxImageFrame getImageFrame();
		::Dynamic getImageFrame_dyn();

		Bool get_isEmpty();
		::Dynamic get_isEmpty_dyn();

		Int get_x();
		::Dynamic get_x_dyn();

		Int get_y();
		::Dynamic get_y_dyn();

		Int get_width();
		::Dynamic get_width_dyn();

		Int set_width(Int value);
		::Dynamic set_width_dyn();

		Int get_height();
		::Dynamic get_height_dyn();

		Int set_height(Int value);
		::Dynamic set_height_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas

#endif /* INCLUDED_flixel_graphics_atlas_FlxNode */ 
