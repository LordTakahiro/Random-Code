// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_util_FlxSave
#define INCLUDED_flixel_util_FlxSave

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS2(flixel,util,FlxSaveStatus)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,net,SharedObject)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxSave_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxSave_obj OBJ_;
		FlxSave_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util.FlxSave")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.util.FlxSave"); }
		static hx::ObjectPtr< FlxSave_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSave_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("FlxSave","\xaf","\xc4","\xa5","\xdc"); }

		 ::Dynamic data;
		::String name;
		 ::openfl::_legacy::net::SharedObject _sharedObject;
		 ::Dynamic _onComplete;
		 ::Dynamic &_onComplete_dyn() { return _onComplete;}
		Bool _closeRequested;
		void destroy();
		::Dynamic destroy_dyn();

		Bool bind(::String Name);
		::Dynamic bind_dyn();

		Bool close(hx::Null< Int >  MinFileSize, ::Dynamic OnComplete);
		::Dynamic close_dyn();

		Bool flush(hx::Null< Int >  MinFileSize, ::Dynamic OnComplete);
		::Dynamic flush_dyn();

		Bool erase();
		::Dynamic erase_dyn();

		Bool onDone(::hx::EnumBase Result);
		::Dynamic onDone_dyn();

		Bool checkBinding();
		::Dynamic checkBinding_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxSave */ 