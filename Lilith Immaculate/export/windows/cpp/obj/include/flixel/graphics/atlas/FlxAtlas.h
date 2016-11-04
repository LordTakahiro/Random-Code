// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#define INCLUDED_flixel_graphics_atlas_FlxAtlas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,atlas,FlxAtlas)
HX_DECLARE_CLASS3(flixel,graphics,atlas,FlxNode)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxAtlasFrames)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxTileFrames)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)

namespace flixel{
namespace graphics{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES FlxAtlas_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxAtlas_obj OBJ_;
		FlxAtlas_obj();

	public:
		void __construct(::String name,hx::Null< Bool >  __o_powerOfTwo,hx::Null< Int >  __o_border,hx::Null< Bool >  __o_rotate, ::flixel::math::FlxPoint minSize, ::flixel::math::FlxPoint maxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.atlas.FlxAtlas")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.graphics.atlas.FlxAtlas"); }
		static hx::ObjectPtr< FlxAtlas_obj > __new(::String name,hx::Null< Bool >  __o_powerOfTwo,hx::Null< Int >  __o_border,hx::Null< Bool >  __o_rotate, ::flixel::math::FlxPoint minSize, ::flixel::math::FlxPoint maxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxAtlas_obj();

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
		::String __ToString() const { return HX_HCSTRING("FlxAtlas","\x99","\x57","\xb7","\xe3"); }

		static void __boot();
		static  ::openfl::_legacy::geom::Point point;
		static  ::openfl::_legacy::geom::Matrix matrix;
		static  ::flixel::math::FlxPoint defaultMinSize;
		static  ::flixel::math::FlxPoint defaultMaxSize;
		 ::flixel::graphics::atlas::FlxNode root;
		::String name;
		 ::haxe::ds::StringMap nodes;
		 ::openfl::_legacy::display::BitmapData bitmapData;
		 ::flixel::graphics::FlxGraphic graphic;
		Bool persist;
		Int border;
		Int width;
		Int height;
		Int minWidth;
		Int minHeight;
		Int maxWidth;
		Int maxHeight;
		Bool allowRotation;
		Bool powerOfTwo;
		 ::flixel::graphics::FlxGraphic _graphic;
		::Array< ::Dynamic> _tempStorage;
		void initRoot();
		::Dynamic initRoot_dyn();

		 ::flixel::graphics::atlas::FlxNode addNode( ::Dynamic Graphic,::String Key);
		::Dynamic addNode_dyn();

		void wrapRoot();
		::Dynamic wrapRoot_dyn();

		 ::flixel::graphics::atlas::FlxNode tryInsert( ::openfl::_legacy::display::BitmapData data,::String key);
		::Dynamic tryInsert_dyn();

		Bool needToDivideHorizontally( ::flixel::graphics::atlas::FlxNode nodeToDivide,Int insertWidth,Int insertHeight);
		::Dynamic needToDivideHorizontally_dyn();

		 ::flixel::graphics::atlas::FlxNode divideNode( ::flixel::graphics::atlas::FlxNode nodeToDivide,Int insertWidth,Int insertHeight,Bool divideHorizontally, ::openfl::_legacy::display::BitmapData firstGrandChildData,::String firstGrandChildKey,hx::Null< Bool >  firstGrandChildRotated);
		::Dynamic divideNode_dyn();

		 ::flixel::graphics::atlas::FlxNode insertFirstNodeInRoot( ::openfl::_legacy::display::BitmapData data,::String key);
		::Dynamic insertFirstNodeInRoot_dyn();

		 ::flixel::graphics::atlas::FlxNode expand( ::openfl::_legacy::display::BitmapData data,::String key);
		::Dynamic expand_dyn();

		void expandRoot(Float newWidth,Float newHeight,Bool divideHorizontally,hx::Null< Bool >  decideHowToDivide);
		::Dynamic expandRoot_dyn();

		void expandBitmapData();
		::Dynamic expandBitmapData_dyn();

		Int getNextPowerOfTwo(Float number);
		::Dynamic getNextPowerOfTwo_dyn();

		 ::flixel::graphics::frames::FlxTileFrames addNodeWithSpacesAndBorders( ::Dynamic Graphic,::String Key, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxPoint tileSpacing, ::flixel::math::FlxPoint tileBorder, ::flixel::math::FlxRect region);
		::Dynamic addNodeWithSpacesAndBorders_dyn();

		 ::flixel::graphics::frames::FlxAtlasFrames getAtlasFrames();
		::Dynamic getAtlasFrames_dyn();

		void addNodeToAtlasFrames( ::flixel::graphics::atlas::FlxNode node);
		::Dynamic addNodeToAtlasFrames_dyn();

		Bool hasNodeWithName(::String nodeName);
		::Dynamic hasNodeWithName_dyn();

		 ::flixel::graphics::atlas::FlxNode getNode(::String key);
		::Dynamic getNode_dyn();

		 ::flixel::graphics::atlas::FlxAtlas addNodes(::Array< ::Dynamic> bitmaps,::Array< ::String > keys);
		::Dynamic addNodes_dyn();

		void addFromAtlasObjects(::Array< ::Dynamic> objects);
		::Dynamic addFromAtlasObjects_dyn();

		Int bitmapSorter( ::Dynamic obj1, ::Dynamic obj2);
		::Dynamic bitmapSorter_dyn();

		 ::flixel::graphics::atlas::FlxAtlas createQueue();
		::Dynamic createQueue_dyn();

		 ::flixel::graphics::atlas::FlxAtlas addToQueue( ::openfl::_legacy::display::BitmapData data,::String key);
		::Dynamic addToQueue_dyn();

		 ::flixel::graphics::atlas::FlxAtlas generateFromQueue();
		::Dynamic generateFromQueue_dyn();

		void onClear( ::flixel::FlxState _);
		::Dynamic onClear_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void clear();
		::Dynamic clear_dyn();

		::String getLibGdxData();
		::Dynamic getLibGdxData_dyn();

		void deleteSubtree( ::flixel::graphics::atlas::FlxNode node);
		::Dynamic deleteSubtree_dyn();

		 ::flixel::graphics::atlas::FlxNode findNodeToInsert(Int insertWidth,Int insertHeight);
		::Dynamic findNodeToInsert_dyn();

		 ::openfl::_legacy::display::BitmapData set_bitmapData( ::openfl::_legacy::display::BitmapData value);
		::Dynamic set_bitmapData_dyn();

		 ::flixel::graphics::FlxGraphic get_graphic();
		::Dynamic get_graphic_dyn();

		Bool set_persist(Bool value);
		::Dynamic set_persist_dyn();

		Int set_minWidth(Int value);
		::Dynamic set_minWidth_dyn();

		Int set_minHeight(Int value);
		::Dynamic set_minHeight_dyn();

		Int get_width();
		::Dynamic get_width_dyn();

		Int set_width(Int value);
		::Dynamic set_width_dyn();

		Int get_height();
		::Dynamic get_height_dyn();

		Int set_height(Int value);
		::Dynamic set_height_dyn();

		Int set_maxWidth(Int value);
		::Dynamic set_maxWidth_dyn();

		Int set_maxHeight(Int value);
		::Dynamic set_maxHeight_dyn();

		Bool set_powerOfTwo(Bool value);
		::Dynamic set_powerOfTwo_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas

#endif /* INCLUDED_flixel_graphics_atlas_FlxAtlas */ 
