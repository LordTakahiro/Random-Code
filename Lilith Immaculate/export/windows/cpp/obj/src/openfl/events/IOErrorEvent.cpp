// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif

static const ::String _hx_array_data_0[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("text",ad,cc,f9,4c),HX_("errorID",a3,8d,0a,ea),
};
namespace openfl{
namespace events{

void IOErrorEvent_obj::__construct(::String type,hx::Null< Bool >  __o_bubbles,hx::Null< Bool >  __o_cancelable,::String __o_text,hx::Null< Int >  __o_id){
Bool bubbles = __o_bubbles.Default(true);
Bool cancelable = __o_cancelable.Default(false);
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
Int id = __o_id.Default(0);
            	HX_STACK_FRAME("openfl.events.IOErrorEvent","new",0x69722dc1,"openfl.events.IOErrorEvent.new","openfl/events/IOErrorEvent.hx",12,0x9ba976af)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(bubbles,"bubbles")
            	HX_STACK_ARG(cancelable,"cancelable")
            	HX_STACK_ARG(text,"text")
            	HX_STACK_ARG(id,"id")
HXLINE(  12)		super::__construct(type,bubbles,cancelable,text,id);
            	}

Dynamic IOErrorEvent_obj::__CreateEmpty() { return new IOErrorEvent_obj; }

hx::ObjectPtr< IOErrorEvent_obj > IOErrorEvent_obj::__new(::String type,hx::Null< Bool >  __o_bubbles,hx::Null< Bool >  __o_cancelable,::String __o_text,hx::Null< Int >  __o_id)
{
	hx::ObjectPtr< IOErrorEvent_obj > _hx_result = new IOErrorEvent_obj();
	_hx_result->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return _hx_result;
}

Dynamic IOErrorEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IOErrorEvent_obj > _hx_result = new IOErrorEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

 ::openfl::_legacy::events::Event IOErrorEvent_obj::clone(){
            	HX_STACK_FRAME("openfl.events.IOErrorEvent","clone",0xfbdc4afe,"openfl.events.IOErrorEvent.clone","openfl/events/IOErrorEvent.hx",17,0x9ba976af)
            	HX_STACK_THIS(this)
HXLINE(  19)		::String _hx_tmp = this->get_type();
HXDLIN(  19)		Bool _hx_tmp1 = this->get_bubbles();
HXDLIN(  19)		Bool _hx_tmp2 = this->get_cancelable();
HXDLIN(  19)		HX_VARI(  ::openfl::events::IOErrorEvent,event) =  ::openfl::events::IOErrorEvent_obj::__new(_hx_tmp,_hx_tmp1,_hx_tmp2,this->text,this->errorID);
HXLINE(  20)		 ::Dynamic _hx_tmp3 = this->get_target();
HXDLIN(  20)		event->set_target(_hx_tmp3);
HXLINE(  21)		 ::Dynamic _hx_tmp4 = this->get_currentTarget();
HXDLIN(  21)		event->set_currentTarget(_hx_tmp4);
HXLINE(  25)		return event;
            	}


::String IOErrorEvent_obj::toString(){
            	HX_STACK_FRAME("openfl.events.IOErrorEvent","toString",0xfbbd53ab,"openfl.events.IOErrorEvent.toString","openfl/events/IOErrorEvent.hx",32,0x9ba976af)
            	HX_STACK_THIS(this)
HXLINE(  32)		return this->_hx___formatToString(HX_("IOErrorEvent",b8,16,b3,65),::Array_obj< ::String >::fromData( _hx_array_data_0,5));
            	}


::String IOErrorEvent_obj::IO_ERROR;


IOErrorEvent_obj::IOErrorEvent_obj()
{
}

hx::Val IOErrorEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *IOErrorEvent_obj_sMemberStorageInfo = 0;
static hx::StaticInfo IOErrorEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &IOErrorEvent_obj::IO_ERROR,HX_HCSTRING("IO_ERROR","\x4f","\x7b","\x81","\x11")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String IOErrorEvent_obj_sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void IOErrorEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IOErrorEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(IOErrorEvent_obj::IO_ERROR,"IO_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IOErrorEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IOErrorEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(IOErrorEvent_obj::IO_ERROR,"IO_ERROR");
};

#endif

hx::Class IOErrorEvent_obj::__mClass;

static ::String IOErrorEvent_obj_sStaticFields[] = {
	HX_HCSTRING("IO_ERROR","\x4f","\x7b","\x81","\x11"),
	::String(null())
};

void IOErrorEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.IOErrorEvent","\x4f","\x39","\xfe","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IOErrorEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(IOErrorEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IOErrorEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IOErrorEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IOErrorEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IOErrorEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IOErrorEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void IOErrorEvent_obj::__boot()
{
{
            	HX_STACK_FRAME("openfl.events.IOErrorEvent","boot",0xd28edbb1,"openfl.events.IOErrorEvent.boot","openfl/events/IOErrorEvent.hx",7,0x9ba976af)
HXLINE(   7)		IO_ERROR = HX_("ioError",02,fe,41,76);
            	}
}

} // end namespace openfl
} // end namespace events
