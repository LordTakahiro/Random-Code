// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_addons_tile_FlxCaveGenerator
#define INCLUDED_flixel_addons_tile_FlxCaveGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,tile,FlxCaveGenerator)

namespace flixel{
namespace addons{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxCaveGenerator_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxCaveGenerator_obj OBJ_;
		FlxCaveGenerator_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.addons.tile.FlxCaveGenerator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.addons.tile.FlxCaveGenerator"); }
		static hx::ObjectPtr< FlxCaveGenerator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxCaveGenerator_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxCaveGenerator","\x94","\xad","\xa5","\x37"); }

		static ::String convertMatrixToString(::Array< ::Dynamic> Matrix);
		static ::Dynamic convertMatrixToString_dyn();

		static ::Array< ::Dynamic> generateCaveMatrix(Int Columns,Int Rows,hx::Null< Int >  SmoothingIterations,hx::Null< Float >  WallRatio);
		static ::Dynamic generateCaveMatrix_dyn();

		static ::String generateCaveString(Int Columns,Int Rows,hx::Null< Int >  SmoothingIterations,hx::Null< Float >  WallRatio);
		static ::Dynamic generateCaveString_dyn();

		static ::Array< ::Dynamic> generateInitialMatrix(Int Columns,Int Rows);
		static ::Dynamic generateInitialMatrix_dyn();

		static Int countNumWallsNeighbors(::Array< ::Dynamic> Matrix,Int PosX,Int PosY,hx::Null< Int >  Distance);
		static ::Dynamic countNumWallsNeighbors_dyn();

		static void runCelluarAutomata(::Array< ::Dynamic> InMatrix,::Array< ::Dynamic> OutMatrix);
		static ::Dynamic runCelluarAutomata_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace tile

#endif /* INCLUDED_flixel_addons_tile_FlxCaveGenerator */ 