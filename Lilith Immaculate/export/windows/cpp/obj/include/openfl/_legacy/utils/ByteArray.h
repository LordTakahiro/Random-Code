// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#define INCLUDED_openfl__legacy_utils_ByteArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,_legacy,Lib)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,CompressionAlgorithm)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)

namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES ByteArray_obj : public  ::haxe::io::Bytes_obj
{
	public:
		typedef  ::haxe::io::Bytes_obj super;
		typedef ByteArray_obj OBJ_;
		ByteArray_obj();

	public:
		void __construct(hx::Null< Int >  __o_size);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.utils.ByteArray")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.utils.ByteArray"); }
		static hx::ObjectPtr< ByteArray_obj > __new(hx::Null< Int >  __o_size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ByteArray_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void *_hx_getInterface(int inHash);
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("ByteArray","\x51","\x21","\x97","\x5d"); }

		static void __boot();
		typedef int __array_access;
		static  ::openfl::_legacy::utils::ByteArray fromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromBytes_dyn();

		static  ::openfl::_legacy::utils::ByteArray readFile(::String path);
		static ::Dynamic readFile_dyn();

		static  ::Dynamic _double_bytes;
		static  ::Dynamic &_double_bytes_dyn() { return _double_bytes;}
		static  ::Dynamic _double_of_bytes;
		static  ::Dynamic &_double_of_bytes_dyn() { return _double_of_bytes;}
		static  ::Dynamic _float_bytes;
		static  ::Dynamic &_float_bytes_dyn() { return _float_bytes;}
		static  ::Dynamic _float_of_bytes;
		static  ::Dynamic &_float_of_bytes_dyn() { return _float_of_bytes;}
		static  ::Dynamic lime_byte_array_overwrite_file;
		static  ::Dynamic &lime_byte_array_overwrite_file_dyn() { return lime_byte_array_overwrite_file;}
		static  ::Dynamic lime_byte_array_read_file;
		static  ::Dynamic &lime_byte_array_read_file_dyn() { return lime_byte_array_read_file;}
		static  ::Dynamic lime_byte_array_get_native_pointer;
		static  ::Dynamic &lime_byte_array_get_native_pointer_dyn() { return lime_byte_array_get_native_pointer;}
		static  ::Dynamic lime_lzma_encode;
		static  ::Dynamic &lime_lzma_encode_dyn() { return lime_lzma_encode;}
		static  ::Dynamic lime_lzma_decode;
		static  ::Dynamic &lime_lzma_decode_dyn() { return lime_lzma_decode;}
		Bool bigEndian;
		Int bytesAvailable;
		Int position;
		Int byteLength;
		::String asString();
		::Dynamic asString_dyn();

		void checkData(Int length);
		::Dynamic checkData_dyn();

		void clear();
		::Dynamic clear_dyn();

		void compress(::hx::EnumBase algorithm);
		::Dynamic compress_dyn();

		void deflate();
		::Dynamic deflate_dyn();

		void ensureElem(Int size,Bool updateLength);
		::Dynamic ensureElem_dyn();

		 ::openfl::_legacy::utils::ByteArray getByteBuffer();
		::Dynamic getByteBuffer_dyn();

		Int getLength();
		::Dynamic getLength_dyn();

		 ::Dynamic getNativePointer();
		::Dynamic getNativePointer_dyn();

		Int getStart();
		::Dynamic getStart_dyn();

		void inflate();
		::Dynamic inflate_dyn();

		Bool readBoolean();
		::Dynamic readBoolean_dyn();

		Int readByte();
		::Dynamic readByte_dyn();

		void readBytes( ::openfl::_legacy::utils::ByteArray data,hx::Null< Int >  offset,hx::Null< Int >  length);
		::Dynamic readBytes_dyn();

		Float readDouble();
		::Dynamic readDouble_dyn();

		Float readFloat();
		::Dynamic readFloat_dyn();

		Int readInt();
		::Dynamic readInt_dyn();

		::String readMultiByte(Int length,::String charSet);
		::Dynamic readMultiByte_dyn();

		void writeMultiByte(::String value,::String charSet);
		::Dynamic writeMultiByte_dyn();

		Int readShort();
		::Dynamic readShort_dyn();

		Int readUnsignedByte();
		::Dynamic readUnsignedByte_dyn();

		Int readUnsignedInt();
		::Dynamic readUnsignedInt_dyn();

		Int readUnsignedShort();
		::Dynamic readUnsignedShort_dyn();

		::String readUTF();
		::Dynamic readUTF_dyn();

		::String readUTFBytes(Int length);
		::Dynamic readUTFBytes_dyn();

		void setLength(Int length);
		::Dynamic setLength_dyn();

		 ::openfl::_legacy::utils::ByteArray slice(Int begin, ::Dynamic end);
		::Dynamic slice_dyn();

		void uncompress(::hx::EnumBase algorithm);
		::Dynamic uncompress_dyn();

		void write_uncheck(Int byte);
		::Dynamic write_uncheck_dyn();

		void writeBoolean(Bool value);
		::Dynamic writeBoolean_dyn();

		void writeObject( ::Dynamic object);
		::Dynamic writeObject_dyn();

		void writeByte(Int value);
		::Dynamic writeByte_dyn();

		void writeBytes( ::haxe::io::Bytes bytes,hx::Null< Int >  offset,hx::Null< Int >  length);
		::Dynamic writeBytes_dyn();

		void writeDouble(Float x);
		::Dynamic writeDouble_dyn();

		void writeFile(::String path);
		::Dynamic writeFile_dyn();

		void writeFloat(Float x);
		::Dynamic writeFloat_dyn();

		void writeInt(Int value);
		::Dynamic writeInt_dyn();

		void writeShort(Int value);
		::Dynamic writeShort_dyn();

		void writeUnsignedInt(Int value);
		::Dynamic writeUnsignedInt_dyn();

		void writeUTF(::String s);
		::Dynamic writeUTF_dyn();

		void writeUTFBytes(::String s);
		::Dynamic writeUTFBytes_dyn();

		void _hx___fromBytes( ::haxe::io::Bytes bytes);
		::Dynamic _hx___fromBytes_dyn();

		virtual Int __get(Int pos);
		::Dynamic __get_dyn();

		virtual void __set(Int pos,Int v);
		::Dynamic __set_dyn();

		void _hx___resize(Int length);
		::Dynamic _hx___resize_dyn();

		Int _hx___throwEOFi();
		::Dynamic _hx___throwEOFi_dyn();

		Int get_bytesAvailable();
		::Dynamic get_bytesAvailable_dyn();

		Int get_byteLength();
		::Dynamic get_byteLength_dyn();

		::String get_endian();
		::Dynamic get_endian_dyn();

		::String set_endian(::String value);
		::Dynamic set_endian_dyn();

		Int get___length();
		::Dynamic get___length_dyn();

		Int set___length(Int value);
		::Dynamic set___length_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_ByteArray */ 
