// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLBuffer
#include <openfl/_legacy/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_Float32Array
#include <openfl/_legacy/utils/Float32Array.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif

namespace openfl{
namespace display3D{

void VertexBuffer3D_obj::__construct( ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLBuffer glBuffer,Int numVertices,Int data32PerVertex,Int bufferUsage){
            	HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","new",0xf0b52080,"openfl.display3D.VertexBuffer3D.new","openfl/display3D/VertexBuffer3D.hx",21,0xb1ad396e)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(context,"context")
            	HX_STACK_ARG(glBuffer,"glBuffer")
            	HX_STACK_ARG(numVertices,"numVertices")
            	HX_STACK_ARG(data32PerVertex,"data32PerVertex")
            	HX_STACK_ARG(bufferUsage,"bufferUsage")
HXLINE(  23)		this->context = context;
HXLINE(  24)		this->glBuffer = glBuffer;
HXLINE(  25)		this->numVertices = numVertices;
HXLINE(  26)		this->data32PerVertex = data32PerVertex;
HXLINE(  27)		this->bufferUsage = bufferUsage;
            	}

Dynamic VertexBuffer3D_obj::__CreateEmpty() { return new VertexBuffer3D_obj; }

hx::ObjectPtr< VertexBuffer3D_obj > VertexBuffer3D_obj::__new( ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLBuffer glBuffer,Int numVertices,Int data32PerVertex,Int bufferUsage)
{
	hx::ObjectPtr< VertexBuffer3D_obj > _hx_result = new VertexBuffer3D_obj();
	_hx_result->__construct(context,glBuffer,numVertices,data32PerVertex,bufferUsage);
	return _hx_result;
}

Dynamic VertexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VertexBuffer3D_obj > _hx_result = new VertexBuffer3D_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

void VertexBuffer3D_obj::dispose(){
            	HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","dispose",0x6b6860bf,"openfl.display3D.VertexBuffer3D.dispose","openfl/display3D/VertexBuffer3D.hx",34,0xb1ad396e)
            	HX_STACK_THIS(this)
HXLINE(  34)		this->context->_hx___deleteVertexBuffer(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer3D_obj,dispose,(void))

void VertexBuffer3D_obj::uploadFromByteArray( ::openfl::_legacy::utils::ByteArray byteArray,Int byteArrayOffset,Int startOffset,Int count){
            	HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","uploadFromByteArray",0x0096a806,"openfl.display3D.VertexBuffer3D.uploadFromByteArray","openfl/display3D/VertexBuffer3D.hx",39,0xb1ad396e)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(byteArray,"byteArray")
            	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
            	HX_STACK_ARG(startOffset,"startOffset")
            	HX_STACK_ARG(count,"count")
HXLINE(  41)		HX_VARI( Int,bytesPerVertex) = (this->data32PerVertex * (int)4);
HXLINE(  43)		{
HXLINE(  43)			HX_VARI(  ::openfl::_legacy::gl::GLBuffer,buffer) = this->glBuffer;
HXDLIN(  43)			 ::Dynamic _hx_tmp;
HXDLIN(  43)			Bool _hx_tmp1 = hx::IsNull( buffer );
HXDLIN(  43)			if (_hx_tmp1) {
HXLINE(  43)				_hx_tmp = null();
            			}
            			else {
HXLINE(  43)				_hx_tmp = buffer->id;
            			}
HXDLIN(  43)			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,_hx_tmp);
            		}
HXLINE(  47)		HX_VARI(  ::openfl::_legacy::utils::Float32Array,float32Array) =  ::openfl::_legacy::utils::Float32Array_obj::__new(byteArray,(byteArrayOffset + (startOffset * bytesPerVertex)),(count * bytesPerVertex));
HXLINE(  65)		{
HXLINE(  65)			Int usage = this->bufferUsage;
HXDLIN(  65)			 ::openfl::_legacy::utils::ByteArray _hx_tmp2 = ::openfl::_legacy::utils::IMemoryRange_obj::getByteBuffer(float32Array);
HXDLIN(  65)			Int _hx_tmp3 = ::openfl::_legacy::utils::IMemoryRange_obj::getStart(float32Array);
HXDLIN(  65)			Int _hx_tmp4 = ::openfl::_legacy::utils::IMemoryRange_obj::getLength(float32Array);
HXDLIN(  65)			::openfl::_legacy::gl::GL_obj::lime_gl_buffer_data((int)34962,_hx_tmp2,_hx_tmp3,_hx_tmp4,usage);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(VertexBuffer3D_obj,uploadFromByteArray,(void))

void VertexBuffer3D_obj::uploadFromFloat32Array( ::openfl::_legacy::utils::Float32Array data){
            	HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","uploadFromFloat32Array",0xa0c31ae9,"openfl.display3D.VertexBuffer3D.uploadFromFloat32Array","openfl/display3D/VertexBuffer3D.hx",70,0xb1ad396e)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
HXLINE(  72)		{
HXLINE(  72)			HX_VARI(  ::openfl::_legacy::gl::GLBuffer,buffer) = this->glBuffer;
HXDLIN(  72)			 ::Dynamic _hx_tmp;
HXDLIN(  72)			Bool _hx_tmp1 = hx::IsNull( buffer );
HXDLIN(  72)			if (_hx_tmp1) {
HXLINE(  72)				_hx_tmp = null();
            			}
            			else {
HXLINE(  72)				_hx_tmp = buffer->id;
            			}
HXDLIN(  72)			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,_hx_tmp);
            		}
HXLINE(  73)		{
HXLINE(  73)			Int usage = this->bufferUsage;
HXDLIN(  73)			 ::openfl::_legacy::utils::ByteArray _hx_tmp2 = ::openfl::_legacy::utils::IMemoryRange_obj::getByteBuffer(data);
HXDLIN(  73)			Int _hx_tmp3 = ::openfl::_legacy::utils::IMemoryRange_obj::getStart(data);
HXDLIN(  73)			Int _hx_tmp4 = ::openfl::_legacy::utils::IMemoryRange_obj::getLength(data);
HXDLIN(  73)			::openfl::_legacy::gl::GL_obj::lime_gl_buffer_data((int)34962,_hx_tmp2,_hx_tmp3,_hx_tmp4,usage);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VertexBuffer3D_obj,uploadFromFloat32Array,(void))

void VertexBuffer3D_obj::uploadFromVector(::Array< Float > data,Int startVertex,Int numVertices){
            	HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","uploadFromVector",0xcf228b0e,"openfl.display3D.VertexBuffer3D.uploadFromVector","openfl/display3D/VertexBuffer3D.hx",78,0xb1ad396e)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(startVertex,"startVertex")
            	HX_STACK_ARG(numVertices,"numVertices")
HXLINE(  82)		{
HXLINE(  82)			HX_VARI(  ::openfl::_legacy::gl::GLBuffer,buffer) = this->glBuffer;
HXDLIN(  82)			 ::Dynamic _hx_tmp;
HXDLIN(  82)			Bool _hx_tmp1 = hx::IsNull( buffer );
HXDLIN(  82)			if (_hx_tmp1) {
HXLINE(  82)				_hx_tmp = null();
            			}
            			else {
HXLINE(  82)				_hx_tmp = buffer->id;
            			}
HXDLIN(  82)			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,_hx_tmp);
            		}
HXLINE(  84)		HX_VARI( Int,length) = (numVertices * this->data32PerVertex);
HXLINE(  86)		HX_VARI(  ::openfl::_legacy::utils::Float32Array,float32Array) =  ::openfl::_legacy::utils::Float32Array_obj::__new(data,startVertex,length);
HXLINE( 100)		{
HXLINE( 100)			Int usage = this->bufferUsage;
HXDLIN( 100)			 ::openfl::_legacy::utils::ByteArray _hx_tmp2 = ::openfl::_legacy::utils::IMemoryRange_obj::getByteBuffer(float32Array);
HXDLIN( 100)			Int _hx_tmp3 = ::openfl::_legacy::utils::IMemoryRange_obj::getStart(float32Array);
HXDLIN( 100)			Int _hx_tmp4 = ::openfl::_legacy::utils::IMemoryRange_obj::getLength(float32Array);
HXDLIN( 100)			::openfl::_legacy::gl::GL_obj::lime_gl_buffer_data((int)34962,_hx_tmp2,_hx_tmp3,_hx_tmp4,usage);
            		}
HXLINE( 102)		float32Array = null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(VertexBuffer3D_obj,uploadFromVector,(void))


VertexBuffer3D_obj::VertexBuffer3D_obj()
{
}

void VertexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexBuffer3D);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(data32PerVertex,"data32PerVertex");
	HX_MARK_MEMBER_NAME(glBuffer,"glBuffer");
	HX_MARK_MEMBER_NAME(numVertices,"numVertices");
	HX_MARK_MEMBER_NAME(bufferUsage,"bufferUsage");
	HX_MARK_END_CLASS();
}

void VertexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(data32PerVertex,"data32PerVertex");
	HX_VISIT_MEMBER_NAME(glBuffer,"glBuffer");
	HX_VISIT_MEMBER_NAME(numVertices,"numVertices");
	HX_VISIT_MEMBER_NAME(bufferUsage,"bufferUsage");
}

hx::Val VertexBuffer3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return hx::Val( context); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { return hx::Val( glBuffer); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { return hx::Val( numVertices); }
		if (HX_FIELD_EQ(inName,"bufferUsage") ) { return hx::Val( bufferUsage); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data32PerVertex") ) { return hx::Val( data32PerVertex); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return hx::Val( uploadFromVector_dyn()); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn()); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"uploadFromFloat32Array") ) { return hx::Val( uploadFromFloat32Array_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val VertexBuffer3D_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { glBuffer=inValue.Cast<  ::openfl::_legacy::gl::GLBuffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { numVertices=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufferUsage") ) { bufferUsage=inValue.Cast< Int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data32PerVertex") ) { data32PerVertex=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("data32PerVertex","\x98","\x35","\x56","\x8c"));
	outFields->push(HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93"));
	outFields->push(HX_HCSTRING("numVertices","\x5f","\x10","\x2c","\x56"));
	outFields->push(HX_HCSTRING("bufferUsage","\x01","\xf0","\x7a","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo VertexBuffer3D_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(VertexBuffer3D_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,data32PerVertex),HX_HCSTRING("data32PerVertex","\x98","\x35","\x56","\x8c")},
	{hx::fsObject /*::openfl::_legacy::gl::GLBuffer*/ ,(int)offsetof(VertexBuffer3D_obj,glBuffer),HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,numVertices),HX_HCSTRING("numVertices","\x5f","\x10","\x2c","\x56")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,bufferUsage),HX_HCSTRING("bufferUsage","\x01","\xf0","\x7a","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *VertexBuffer3D_obj_sStaticStorageInfo = 0;
#endif

static ::String VertexBuffer3D_obj_sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("data32PerVertex","\x98","\x35","\x56","\x8c"),
	HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93"),
	HX_HCSTRING("numVertices","\x5f","\x10","\x2c","\x56"),
	HX_HCSTRING("bufferUsage","\x01","\xf0","\x7a","\x47"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromFloat32Array","\x09","\xd7","\x7d","\xf0"),
	HX_HCSTRING("uploadFromVector","\x2e","\x6f","\x6b","\xa8"),
	::String(null()) };

static void VertexBuffer3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VertexBuffer3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

#endif

hx::Class VertexBuffer3D_obj::__mClass;

void VertexBuffer3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.VertexBuffer3D","\x8e","\x20","\x03","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VertexBuffer3D_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VertexBuffer3D_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexBuffer3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VertexBuffer3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VertexBuffer3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VertexBuffer3D_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
