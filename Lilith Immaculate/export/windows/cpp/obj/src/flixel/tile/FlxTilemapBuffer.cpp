// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

namespace flixel{
namespace tile{

void FlxTilemapBuffer_obj::__construct(Int TileWidth,Int TileHeight,Int WidthInTiles,Int HeightInTiles, ::flixel::FlxCamera Camera,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY){
Float ScaleX = __o_ScaleX.Default(((Float)1.0));
Float ScaleY = __o_ScaleY.Default(((Float)1.0));
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","new",0x92818fbc,"flixel.tile.FlxTilemapBuffer.new","flixel/tile/FlxTilemapBuffer.hx",18,0x56d29ad4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(TileWidth,"TileWidth")
            	HX_STACK_ARG(TileHeight,"TileHeight")
            	HX_STACK_ARG(WidthInTiles,"WidthInTiles")
            	HX_STACK_ARG(HeightInTiles,"HeightInTiles")
            	HX_STACK_ARG(Camera,"Camera")
            	HX_STACK_ARG(ScaleX,"ScaleX")
            	HX_STACK_ARG(ScaleY,"ScaleY")
HXLINE(  61)		this->antialiasing = false;
HXLINE(  47)		this->columns = (int)0;
HXLINE(  43)		this->rows = (int)0;
HXLINE(  39)		this->dirty = false;
HXLINE(  35)		this->height = ((Float)0);
HXLINE(  31)		this->width = ((Float)0);
HXLINE(  27)		this->y = ((Float)0);
HXLINE(  23)		this->x = ((Float)0);
HXLINE(  78)		this->updateColumns(TileWidth,WidthInTiles,ScaleX,Camera);
HXLINE(  79)		this->updateRows(TileHeight,HeightInTiles,ScaleY,Camera);
HXLINE(  81)		Bool _hx_tmp = ::flixel::FlxG_obj::renderBlit;
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  83)			Int _hx_tmp1 = (this->columns * TileWidth);
HXDLIN(  83)			Int _hx_tmp2 = ::Std_obj::_hx_int(_hx_tmp1);
HXDLIN(  83)			Int _hx_tmp3 = (this->rows * TileHeight);
HXDLIN(  83)			Int _hx_tmp4 = ::Std_obj::_hx_int(_hx_tmp3);
HXDLIN(  83)			this->pixels =  ::openfl::_legacy::display::BitmapData_obj::__new(_hx_tmp2,_hx_tmp4,true,(int)0,null());
HXLINE(  84)			Int _hx_tmp5 = this->pixels->get_width();
HXDLIN(  84)			Int _hx_tmp6 = this->pixels->get_height();
HXDLIN(  84)			this->_flashRect =  ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,_hx_tmp5,_hx_tmp6);
HXLINE(  85)			this->_matrix =  ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
            		}
HXLINE(  88)		this->dirty = true;
            	}

Dynamic FlxTilemapBuffer_obj::__CreateEmpty() { return new FlxTilemapBuffer_obj; }

hx::ObjectPtr< FlxTilemapBuffer_obj > FlxTilemapBuffer_obj::__new(Int TileWidth,Int TileHeight,Int WidthInTiles,Int HeightInTiles, ::flixel::FlxCamera Camera,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY)
{
	hx::ObjectPtr< FlxTilemapBuffer_obj > _hx_result = new FlxTilemapBuffer_obj();
	_hx_result->__construct(TileWidth,TileHeight,WidthInTiles,HeightInTiles,Camera,__o_ScaleX,__o_ScaleY);
	return _hx_result;
}

Dynamic FlxTilemapBuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxTilemapBuffer_obj > _hx_result = new FlxTilemapBuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_tile_FlxTilemapBuffer__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::tile::FlxTilemapBuffer_obj::destroy,
};

void *FlxTilemapBuffer_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_tile_FlxTilemapBuffer__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxTilemapBuffer_obj::destroy(){
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","destroy",0x52dcca56,"flixel.tile.FlxTilemapBuffer.destroy","flixel/tile/FlxTilemapBuffer.hx",96,0x56d29ad4)
            	HX_STACK_THIS(this)
HXLINE(  96)		Bool _hx_tmp = ::flixel::FlxG_obj::renderBlit;
HXDLIN(  96)		if (_hx_tmp) {
HXLINE(  98)			this->pixels = null();
HXLINE(  99)			this->blend = null();
HXLINE( 100)			this->_matrix = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemapBuffer_obj,destroy,(void))

void FlxTilemapBuffer_obj::fill(hx::Null< Int >  __o_Color){
Int Color = __o_Color.Default(0);
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","fill",0x99957fa7,"flixel.tile.FlxTilemapBuffer.fill","flixel/tile/FlxTilemapBuffer.hx",112,0x56d29ad4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Color,"Color")
HXLINE( 112)		Bool _hx_tmp = ::flixel::FlxG_obj::renderBlit;
HXDLIN( 112)		if (_hx_tmp) {
HXLINE( 114)			this->pixels->fillRect(this->_flashRect,Color);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapBuffer_obj,fill,(void))

void FlxTilemapBuffer_obj::draw( ::flixel::FlxCamera Camera, ::openfl::_legacy::geom::Point FlashPoint,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY){
Float ScaleX = __o_ScaleX.Default(((Float)1.0));
Float ScaleY = __o_ScaleY.Default(((Float)1.0));
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","draw",0x9849dd28,"flixel.tile.FlxTilemapBuffer.draw","flixel/tile/FlxTilemapBuffer.hx",125,0x56d29ad4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Camera,"Camera")
            	HX_STACK_ARG(FlashPoint,"FlashPoint")
            	HX_STACK_ARG(ScaleX,"ScaleX")
            	HX_STACK_ARG(ScaleY,"ScaleY")
HXLINE( 126)		Bool _hx_tmp = this->isPixelPerfectRender(Camera);
HXDLIN( 126)		if (_hx_tmp) {
HXLINE( 128)			FlashPoint->x = ::Math_obj::floor(FlashPoint->x);
HXLINE( 129)			FlashPoint->y = ::Math_obj::floor(FlashPoint->y);
            		}
HXLINE( 132)		Bool _hx_tmp1;
HXDLIN( 132)		Bool _hx_tmp2;
HXDLIN( 132)		Bool _hx_tmp3 = this->isPixelPerfectRender(Camera);
HXDLIN( 132)		if (_hx_tmp3) {
HXLINE( 132)			if ((ScaleX == ((Float)1.0))) {
HXLINE( 132)				_hx_tmp2 = (ScaleY == ((Float)1.0));
            			}
            			else {
HXLINE( 132)				_hx_tmp2 = false;
            			}
            		}
            		else {
HXLINE( 132)			_hx_tmp2 = false;
            		}
HXDLIN( 132)		if (_hx_tmp2) {
HXLINE( 132)			_hx_tmp1 = hx::IsNull( this->blend );
            		}
            		else {
HXLINE( 132)			_hx_tmp1 = false;
            		}
HXDLIN( 132)		if (_hx_tmp1) {
HXLINE( 134)			Camera->buffer->copyPixels(this->pixels,this->_flashRect,FlashPoint,null(),null(),true);
            		}
            		else {
HXLINE( 138)			this->_matrix->identity();
HXLINE( 139)			this->_matrix->scale(ScaleX,ScaleY);
HXLINE( 140)			this->_matrix->translate(FlashPoint->x,FlashPoint->y);
HXLINE( 141)			Camera->buffer->draw(this->pixels,this->_matrix,null(),this->blend,null(),this->antialiasing);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,draw,(void))

void FlxTilemapBuffer_obj::colorTransform( ::openfl::_legacy::geom::ColorTransform Transform){
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","colorTransform",0x13c7ddad,"flixel.tile.FlxTilemapBuffer.colorTransform","flixel/tile/FlxTilemapBuffer.hx",147,0x56d29ad4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Transform,"Transform")
HXLINE( 147)		this->pixels->colorTransform(this->_flashRect,Transform);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapBuffer_obj,colorTransform,(void))

void FlxTilemapBuffer_obj::updateColumns(Int TileWidth,Int WidthInTiles,hx::Null< Float >  __o_ScaleX, ::flixel::FlxCamera Camera){
Float ScaleX = __o_ScaleX.Default(((Float)1.0));
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","updateColumns",0xed291c30,"flixel.tile.FlxTilemapBuffer.updateColumns","flixel/tile/FlxTilemapBuffer.hx",151,0x56d29ad4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(TileWidth,"TileWidth")
            	HX_STACK_ARG(WidthInTiles,"WidthInTiles")
            	HX_STACK_ARG(ScaleX,"ScaleX")
            	HX_STACK_ARG(Camera,"Camera")
HXLINE( 152)		Bool _hx_tmp = (WidthInTiles < (int)0);
HXDLIN( 152)		if (_hx_tmp) {
HXLINE( 154)			WidthInTiles = (int)0;
            		}
HXLINE( 157)		Bool _hx_tmp1 = hx::IsNull( Camera );
HXDLIN( 157)		if (_hx_tmp1) {
HXLINE( 159)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 162)		Float _hx_tmp2 = ((Float)Camera->width / (Float)(TileWidth * ScaleX));
HXDLIN( 162)		Int _hx_tmp3 = ::Math_obj::ceil(_hx_tmp2);
HXDLIN( 162)		this->columns = (_hx_tmp3 + (int)1);
HXLINE( 164)		Bool _hx_tmp4 = (this->columns > WidthInTiles);
HXDLIN( 164)		if (_hx_tmp4) {
HXLINE( 166)			this->columns = WidthInTiles;
            		}
HXLINE( 169)		Float _hx_tmp5 = ((this->columns * TileWidth) * ScaleX);
HXDLIN( 169)		this->width = ::Std_obj::_hx_int(_hx_tmp5);
HXLINE( 171)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,updateColumns,(void))

void FlxTilemapBuffer_obj::updateRows(Int TileHeight,Int HeightInTiles,hx::Null< Float >  __o_ScaleY, ::flixel::FlxCamera Camera){
Float ScaleY = __o_ScaleY.Default(((Float)1.0));
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","updateRows",0xf31d03e6,"flixel.tile.FlxTilemapBuffer.updateRows","flixel/tile/FlxTilemapBuffer.hx",175,0x56d29ad4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(TileHeight,"TileHeight")
            	HX_STACK_ARG(HeightInTiles,"HeightInTiles")
            	HX_STACK_ARG(ScaleY,"ScaleY")
            	HX_STACK_ARG(Camera,"Camera")
HXLINE( 176)		Bool _hx_tmp = (HeightInTiles < (int)0);
HXDLIN( 176)		if (_hx_tmp) {
HXLINE( 178)			HeightInTiles = (int)0;
            		}
HXLINE( 181)		Bool _hx_tmp1 = hx::IsNull( Camera );
HXDLIN( 181)		if (_hx_tmp1) {
HXLINE( 183)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 186)		Float _hx_tmp2 = ((Float)Camera->height / (Float)(TileHeight * ScaleY));
HXDLIN( 186)		Int _hx_tmp3 = ::Math_obj::ceil(_hx_tmp2);
HXDLIN( 186)		this->rows = (_hx_tmp3 + (int)1);
HXLINE( 188)		Bool _hx_tmp4 = (this->rows > HeightInTiles);
HXDLIN( 188)		if (_hx_tmp4) {
HXLINE( 190)			this->rows = HeightInTiles;
            		}
HXLINE( 193)		Float _hx_tmp5 = ((this->rows * TileHeight) * ScaleY);
HXDLIN( 193)		this->height = ::Std_obj::_hx_int(_hx_tmp5);
HXLINE( 195)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,updateRows,(void))

Bool FlxTilemapBuffer_obj::isPixelPerfectRender( ::flixel::FlxCamera Camera){
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","isPixelPerfectRender",0x7d4e558b,"flixel.tile.FlxTilemapBuffer.isPixelPerfectRender","flixel/tile/FlxTilemapBuffer.hx",202,0x56d29ad4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Camera,"Camera")
HXLINE( 203)		Bool _hx_tmp = hx::IsNull( Camera );
HXDLIN( 203)		if (_hx_tmp) {
HXLINE( 205)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 207)		Bool _hx_tmp1 = hx::IsNull( this->pixelPerfectRender );
HXDLIN( 207)		if (_hx_tmp1) {
HXLINE( 207)			return Camera->pixelPerfectRender;
            		}
            		else {
HXLINE( 207)			return this->pixelPerfectRender;
            		}
HXDLIN( 207)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapBuffer_obj,isPixelPerfectRender,return )


FlxTilemapBuffer_obj::FlxTilemapBuffer_obj()
{
}

void FlxTilemapBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemapBuffer);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_END_CLASS();
}

void FlxTilemapBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
}

hx::Val FlxTilemapBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return hx::Val( rows); }
		if (HX_FIELD_EQ(inName,"fill") ) { return hx::Val( fill_dyn()); }
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width); }
		if (HX_FIELD_EQ(inName,"dirty") ) { return hx::Val( dirty); }
		if (HX_FIELD_EQ(inName,"blend") ) { return hx::Val( blend); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height); }
		if (HX_FIELD_EQ(inName,"pixels") ) { return hx::Val( pixels); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { return hx::Val( columns); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return hx::Val( _matrix); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return hx::Val( _flashRect); }
		if (HX_FIELD_EQ(inName,"updateRows") ) { return hx::Val( updateRows_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return hx::Val( antialiasing); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateColumns") ) { return hx::Val( updateColumns_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return hx::Val( colorTransform_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return hx::Val( pixelPerfectRender); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"isPixelPerfectRender") ) { return hx::Val( isPixelPerfectRender_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxTilemapBuffer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< Int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::hx::EnumBase >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast<  ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast<  ::openfl::_legacy::geom::Matrix >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast<  ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< Bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { pixelPerfectRender=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemapBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"));
	outFields->push(HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"));
	outFields->push(HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"));
	outFields->push(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"));
	outFields->push(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"));
	outFields->push(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"));
	outFields->push(HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"));
	outFields->push(HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxTilemapBuffer_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(FlxTilemapBuffer_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,rows),HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b")},
	{hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,columns),HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTilemapBuffer_obj,pixelPerfectRender),HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxTilemapBuffer_obj,pixels),HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c")},
	{hx::fsObject /*::openfl::_legacy::display::BlendMode*/ ,(int)offsetof(FlxTilemapBuffer_obj,blend),HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4")},
	{hx::fsBool,(int)offsetof(FlxTilemapBuffer_obj,antialiasing),HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxTilemapBuffer_obj,_flashRect),HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(int)offsetof(FlxTilemapBuffer_obj,_matrix),HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxTilemapBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTilemapBuffer_obj_sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"),
	HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"),
	HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"),
	HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"),
	HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"),
	HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"),
	HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"),
	HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("updateColumns","\xd4","\x11","\xc8","\xbe"),
	HX_HCSTRING("updateRows","\xc2","\xdf","\x63","\x04"),
	HX_HCSTRING("isPixelPerfectRender","\x67","\x1c","\xf9","\x26"),
	::String(null()) };

static void FlxTilemapBuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemapBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTilemapBuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemapBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTilemapBuffer_obj::__mClass;

void FlxTilemapBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tile.FlxTilemapBuffer","\xca","\x41","\x20","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxTilemapBuffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxTilemapBuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTilemapBuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTilemapBuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTilemapBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTilemapBuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tile
