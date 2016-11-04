// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif

static const Int _hx_array_data_0[] = {
	(Int)48,(Int)96,
};
static const Int _hx_array_data_1[] = {
	(Int)189,(Int)109,
};
static const Int _hx_array_data_2[] = {
	(Int)187,(Int)107,
};
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void SoundFrontEnd_obj::__construct(){
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","new",0x71610699,"flixel.system.frontEnds.SoundFrontEnd.new","flixel/system/frontEnds/SoundFrontEnd.hx",15,0x9ba4fb18)
            	HX_STACK_THIS(this)
HXLINE(  71)		this->volume = ((Float)1);
HXLINE(  67)		this->list =  ::flixel::group::FlxTypedGroup_obj::__new(null());
HXLINE(  62)		this->defaultSoundGroup =  ::flixel::_hx_system::FlxSoundGroup_obj::__new(null());
HXLINE(  58)		this->defaultMusicGroup =  ::flixel::_hx_system::FlxSoundGroup_obj::__new(null());
HXLINE(  53)		this->soundTrayEnabled = true;
HXLINE(  46)		this->muteKeys = ::Array_obj< Int >::fromData( _hx_array_data_0,2);
HXLINE(  41)		this->volumeDownKeys = ::Array_obj< Int >::fromData( _hx_array_data_1,2);
HXLINE(  36)		this->volumeUpKeys = ::Array_obj< Int >::fromData( _hx_array_data_2,2);
HXLINE(  24)		this->muted = false;
HXLINE( 312)		this->loadSavedPrefs();
            	}

Dynamic SoundFrontEnd_obj::__CreateEmpty() { return new SoundFrontEnd_obj; }

hx::ObjectPtr< SoundFrontEnd_obj > SoundFrontEnd_obj::__new()
{
	hx::ObjectPtr< SoundFrontEnd_obj > _hx_result = new SoundFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic SoundFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SoundFrontEnd_obj > _hx_result = new SoundFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

void SoundFrontEnd_obj::playMusic( ::Dynamic Music,hx::Null< Float >  __o_Volume,hx::Null< Bool >  __o_Looped, ::flixel::_hx_system::FlxSoundGroup Group){
Float Volume = __o_Volume.Default(1);
Bool Looped = __o_Looped.Default(true);
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","playMusic",0x3360250a,"flixel.system.frontEnds.SoundFrontEnd.playMusic","flixel/system/frontEnds/SoundFrontEnd.hx",82,0x9ba4fb18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Music,"Music")
            	HX_STACK_ARG(Volume,"Volume")
            	HX_STACK_ARG(Looped,"Looped")
            	HX_STACK_ARG(Group,"Group")
HXLINE(  83)		Bool _hx_tmp = hx::IsNull( this->music );
HXDLIN(  83)		if (_hx_tmp) {
HXLINE(  85)			this->music =  ::flixel::_hx_system::FlxSound_obj::__new();
            		}
            		else {
HXLINE(  87)			Bool _hx_tmp1 = this->music->active;
HXDLIN(  87)			if (_hx_tmp1) {
HXLINE(  89)				HX_VARI(  ::flixel::_hx_system::FlxSound,_this) = this->music;
HXDLIN(  89)				_this->cleanup(_this->autoDestroy,true);
            			}
            		}
HXLINE(  92)		this->music->loadEmbedded(Music,Looped,null(),null());
HXLINE(  93)		this->music->set_volume(Volume);
HXLINE(  94)		this->music->persist = true;
HXLINE(  95)		 ::flixel::_hx_system::FlxSoundGroup _hx_tmp2;
HXDLIN(  95)		Bool _hx_tmp3 = hx::IsNull( Group );
HXDLIN(  95)		if (_hx_tmp3) {
HXLINE(  95)			_hx_tmp2 = this->defaultMusicGroup;
            		}
            		else {
HXLINE(  95)			_hx_tmp2 = Group;
            		}
HXDLIN(  95)		this->music->set_group(_hx_tmp2);
HXLINE(  96)		this->music->play(null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(SoundFrontEnd_obj,playMusic,(void))

 ::flixel::_hx_system::FlxSound SoundFrontEnd_obj::load( ::Dynamic EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< Bool >  __o_Looped, ::flixel::_hx_system::FlxSoundGroup Group,hx::Null< Bool >  __o_AutoDestroy,hx::Null< Bool >  __o_AutoPlay,::String URL, ::Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
Bool Looped = __o_Looped.Default(false);
Bool AutoDestroy = __o_AutoDestroy.Default(false);
Bool AutoPlay = __o_AutoPlay.Default(false);
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","load",0xc239d5cd,"flixel.system.frontEnds.SoundFrontEnd.load","flixel/system/frontEnds/SoundFrontEnd.hx",113,0x9ba4fb18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
            	HX_STACK_ARG(Volume,"Volume")
            	HX_STACK_ARG(Looped,"Looped")
            	HX_STACK_ARG(Group,"Group")
            	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
            	HX_STACK_ARG(AutoPlay,"AutoPlay")
            	HX_STACK_ARG(URL,"URL")
            	HX_STACK_ARG(OnComplete,"OnComplete")
HXLINE( 114)		Bool _hx_tmp;
HXDLIN( 114)		Bool _hx_tmp1 = hx::IsNull( EmbeddedSound );
HXDLIN( 114)		if (_hx_tmp1) {
HXLINE( 114)			_hx_tmp = hx::IsNull( URL );
            		}
            		else {
HXLINE( 114)			_hx_tmp = false;
            		}
HXDLIN( 114)		if (_hx_tmp) {
HXLINE( 116)			::flixel::FlxG_obj::log->advanced(HX_("FlxG.loadSound() requires either\nan embedded sound or a URL to work.",4f,8f,a4,ef),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 117)			return null();
            		}
HXLINE( 120)		HX_VARI(  ::flixel::_hx_system::FlxSound,sound) = this->list->recycle(hx::ClassOf< ::flixel::_hx_system::FlxSound >(),null(),null(),null()).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXLINE( 122)		Bool _hx_tmp2 = hx::IsNotNull( EmbeddedSound );
HXDLIN( 122)		if (_hx_tmp2) {
HXLINE( 124)			sound->loadEmbedded(EmbeddedSound,Looped,AutoDestroy,OnComplete);
            		}
            		else {
HXLINE( 128)			sound->loadStream(URL,Looped,AutoDestroy,OnComplete);
            		}
HXLINE( 131)		sound->set_volume(Volume);
HXLINE( 133)		if (AutoPlay) {
HXLINE( 135)			sound->play(null(),null(),null());
            		}
HXLINE( 138)		 ::flixel::_hx_system::FlxSoundGroup _hx_tmp3;
HXDLIN( 138)		Bool _hx_tmp4 = hx::IsNull( Group );
HXDLIN( 138)		if (_hx_tmp4) {
HXLINE( 138)			_hx_tmp3 = this->defaultSoundGroup;
            		}
            		else {
HXLINE( 138)			_hx_tmp3 = Group;
            		}
HXDLIN( 138)		sound->set_group(_hx_tmp3);
HXLINE( 139)		return sound;
            	}


HX_DEFINE_DYNAMIC_FUNC8(SoundFrontEnd_obj,load,return )

 ::openfl::_legacy::media::Sound SoundFrontEnd_obj::cache(::String EmbeddedSound){
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","cache",0xf88690bb,"flixel.system.frontEnds.SoundFrontEnd.cache","flixel/system/frontEnds/SoundFrontEnd.hx",150,0x9ba4fb18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
HXLINE( 152)		Bool _hx_tmp;
HXDLIN( 152)		Bool _hx_tmp1 = !(::openfl::_legacy::Assets_obj::exists(EmbeddedSound,::openfl::_legacy::AssetType_obj::SOUND_dyn()));
HXDLIN( 152)		if (_hx_tmp1) {
HXLINE( 152)			_hx_tmp = ::openfl::_legacy::Assets_obj::exists(EmbeddedSound,::openfl::_legacy::AssetType_obj::MUSIC_dyn());
            		}
            		else {
HXLINE( 152)			_hx_tmp = true;
            		}
HXDLIN( 152)		if (_hx_tmp) {
HXLINE( 154)			return ::openfl::_legacy::Assets_obj::getSound(EmbeddedSound,true);
            		}
HXLINE( 155)		::flixel::FlxG_obj::log->advanced(((HX_("Could not find a Sound asset with an ID of '",6f,0e,1e,66) + EmbeddedSound) + HX_("'.",27,22,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXLINE( 156)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,cache,return )

void SoundFrontEnd_obj::cacheAll(){
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","cacheAll",0x49c00726,"flixel.system.frontEnds.SoundFrontEnd.cacheAll","flixel/system/frontEnds/SoundFrontEnd.hx",166,0x9ba4fb18)
            	HX_STACK_THIS(this)
HXLINE( 166)		HX_VARI( Int,_g) = (int)0;
HXDLIN( 166)		HX_VARI( ::Array< ::String >,_g1) = ::openfl::_legacy::Assets_obj::list(::openfl::_legacy::AssetType_obj::SOUND_dyn());
HXDLIN( 166)		while((_g < _g1->length)){
HXLINE( 166)			HX_VARI( ::String,id) = _g1->__get(_g);
HXDLIN( 166)			++_g;
HXLINE( 168)			Bool _hx_tmp;
HXDLIN( 168)			Bool _hx_tmp1 = !(::openfl::_legacy::Assets_obj::exists(id,::openfl::_legacy::AssetType_obj::SOUND_dyn()));
HXDLIN( 168)			if (_hx_tmp1) {
HXLINE( 168)				_hx_tmp = ::openfl::_legacy::Assets_obj::exists(id,::openfl::_legacy::AssetType_obj::MUSIC_dyn());
            			}
            			else {
HXLINE( 168)				_hx_tmp = true;
            			}
HXDLIN( 168)			if (_hx_tmp) {
HXLINE( 168)				::openfl::_legacy::Assets_obj::getSound(id,true);
            			}
            			else {
HXLINE( 168)				::flixel::FlxG_obj::log->advanced(((HX_("Could not find a Sound asset with an ID of '",6f,0e,1e,66) + id) + HX_("'.",27,22,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,cacheAll,(void))

 ::flixel::_hx_system::FlxSound SoundFrontEnd_obj::play( ::Dynamic EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< Bool >  __o_Looped, ::flixel::_hx_system::FlxSoundGroup Group,hx::Null< Bool >  __o_AutoDestroy, ::Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
Bool Looped = __o_Looped.Default(false);
Bool AutoDestroy = __o_AutoDestroy.Default(true);
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","play",0xc4dc699b,"flixel.system.frontEnds.SoundFrontEnd.play","flixel/system/frontEnds/SoundFrontEnd.hx",184,0x9ba4fb18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
            	HX_STACK_ARG(Volume,"Volume")
            	HX_STACK_ARG(Looped,"Looped")
            	HX_STACK_ARG(Group,"Group")
            	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
            	HX_STACK_ARG(OnComplete,"OnComplete")
HXLINE( 185)		Bool _hx_tmp = ::Std_obj::is(EmbeddedSound,hx::ClassOf< ::String >());
HXDLIN( 185)		if (_hx_tmp) {
HXLINE( 187)			 ::openfl::_legacy::media::Sound _hx_tmp1;
HXDLIN( 187)			Bool _hx_tmp2;
HXDLIN( 187)			Bool _hx_tmp3 = !(::openfl::_legacy::Assets_obj::exists(EmbeddedSound,::openfl::_legacy::AssetType_obj::SOUND_dyn()));
HXDLIN( 187)			if (_hx_tmp3) {
HXLINE( 187)				_hx_tmp2 = ::openfl::_legacy::Assets_obj::exists(EmbeddedSound,::openfl::_legacy::AssetType_obj::MUSIC_dyn());
            			}
            			else {
HXLINE( 187)				_hx_tmp2 = true;
            			}
HXDLIN( 187)			if (_hx_tmp2) {
HXLINE( 187)				_hx_tmp1 = ::openfl::_legacy::Assets_obj::getSound(EmbeddedSound,true);
            			}
            			else {
HXLINE( 187)				::flixel::FlxG_obj::log->advanced(((HX_("Could not find a Sound asset with an ID of '",6f,0e,1e,66) + EmbeddedSound) + HX_("'.",27,22,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXDLIN( 187)				_hx_tmp1 = null();
            			}
HXDLIN( 187)			EmbeddedSound = _hx_tmp1;
            		}
HXLINE( 189)		HX_VARI(  ::flixel::_hx_system::FlxSound,sound) = this->list->recycle(hx::ClassOf< ::flixel::_hx_system::FlxSound >(),null(),null(),null()).StaticCast<  ::flixel::_hx_system::FlxSound >()->loadEmbedded(EmbeddedSound,Looped,AutoDestroy,OnComplete);
HXLINE( 190)		sound->set_volume(Volume);
HXLINE( 191)		 ::flixel::_hx_system::FlxSoundGroup _hx_tmp4;
HXDLIN( 191)		Bool _hx_tmp5 = hx::IsNull( Group );
HXDLIN( 191)		if (_hx_tmp5) {
HXLINE( 191)			_hx_tmp4 = this->defaultSoundGroup;
            		}
            		else {
HXLINE( 191)			_hx_tmp4 = Group;
            		}
HXDLIN( 191)		sound->set_group(_hx_tmp4);
HXLINE( 192)		return sound->play(null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC6(SoundFrontEnd_obj,play,return )

 ::flixel::_hx_system::FlxSound SoundFrontEnd_obj::stream(::String URL,hx::Null< Float >  __o_Volume,hx::Null< Bool >  __o_Looped, ::flixel::_hx_system::FlxSoundGroup Group,hx::Null< Bool >  __o_AutoDestroy, ::Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
Bool Looped = __o_Looped.Default(false);
Bool AutoDestroy = __o_AutoDestroy.Default(true);
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","stream",0xdd72c7e7,"flixel.system.frontEnds.SoundFrontEnd.stream","flixel/system/frontEnds/SoundFrontEnd.hx",209,0x9ba4fb18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(URL,"URL")
            	HX_STACK_ARG(Volume,"Volume")
            	HX_STACK_ARG(Looped,"Looped")
            	HX_STACK_ARG(Group,"Group")
            	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
            	HX_STACK_ARG(OnComplete,"OnComplete")
HXLINE( 209)		return this->load(null(),Volume,Looped,null(),AutoDestroy,true,URL,OnComplete);
            	}


HX_DEFINE_DYNAMIC_FUNC6(SoundFrontEnd_obj,stream,return )

void SoundFrontEnd_obj::pause(){
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","pause",0x74c9cd6f,"flixel.system.frontEnds.SoundFrontEnd.pause","flixel/system/frontEnds/SoundFrontEnd.hx",216,0x9ba4fb18)
            	HX_STACK_THIS(this)
HXLINE( 217)		Bool _hx_tmp;
HXDLIN( 217)		Bool _hx_tmp1;
HXDLIN( 217)		Bool _hx_tmp2 = hx::IsNotNull( this->music );
HXDLIN( 217)		if (_hx_tmp2) {
HXLINE( 217)			_hx_tmp1 = this->music->exists;
            		}
            		else {
HXLINE( 217)			_hx_tmp1 = false;
            		}
HXDLIN( 217)		if (_hx_tmp1) {
HXLINE( 217)			_hx_tmp = this->music->active;
            		}
            		else {
HXLINE( 217)			_hx_tmp = false;
            		}
HXDLIN( 217)		if (_hx_tmp) {
HXLINE( 219)			this->music->pause();
            		}
HXLINE( 222)		{
HXLINE( 222)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 222)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->list->members;
HXDLIN( 222)			while((_g < _g1->length)){
HXLINE( 222)				HX_VARI(  ::flixel::_hx_system::FlxSound,sound) = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXDLIN( 222)				++_g;
HXLINE( 224)				Bool _hx_tmp3;
HXDLIN( 224)				Bool _hx_tmp4;
HXDLIN( 224)				Bool _hx_tmp5 = hx::IsNotNull( sound );
HXDLIN( 224)				if (_hx_tmp5) {
HXLINE( 224)					_hx_tmp4 = sound->exists;
            				}
            				else {
HXLINE( 224)					_hx_tmp4 = false;
            				}
HXDLIN( 224)				if (_hx_tmp4) {
HXLINE( 224)					_hx_tmp3 = sound->active;
            				}
            				else {
HXLINE( 224)					_hx_tmp3 = false;
            				}
HXDLIN( 224)				if (_hx_tmp3) {
HXLINE( 226)					sound->pause();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,pause,(void))

void SoundFrontEnd_obj::resume(){
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","resume",0xd4ca1d14,"flixel.system.frontEnds.SoundFrontEnd.resume","flixel/system/frontEnds/SoundFrontEnd.hx",235,0x9ba4fb18)
            	HX_STACK_THIS(this)
HXLINE( 236)		Bool _hx_tmp;
HXDLIN( 236)		Bool _hx_tmp1 = hx::IsNotNull( this->music );
HXDLIN( 236)		if (_hx_tmp1) {
HXLINE( 236)			_hx_tmp = this->music->exists;
            		}
            		else {
HXLINE( 236)			_hx_tmp = false;
            		}
HXDLIN( 236)		if (_hx_tmp) {
HXLINE( 238)			this->music->resume();
            		}
HXLINE( 241)		{
HXLINE( 241)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 241)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->list->members;
HXDLIN( 241)			while((_g < _g1->length)){
HXLINE( 241)				HX_VARI(  ::flixel::_hx_system::FlxSound,sound) = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXDLIN( 241)				++_g;
HXLINE( 243)				Bool _hx_tmp2;
HXDLIN( 243)				Bool _hx_tmp3 = hx::IsNotNull( sound );
HXDLIN( 243)				if (_hx_tmp3) {
HXLINE( 243)					_hx_tmp2 = sound->exists;
            				}
            				else {
HXLINE( 243)					_hx_tmp2 = false;
            				}
HXDLIN( 243)				if (_hx_tmp2) {
HXLINE( 245)					sound->resume();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,resume,(void))

void SoundFrontEnd_obj::destroy(hx::Null< Bool >  __o_ForceDestroy){
Bool ForceDestroy = __o_ForceDestroy.Default(false);
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","destroy",0x153d73b3,"flixel.system.frontEnds.SoundFrontEnd.destroy","flixel/system/frontEnds/SoundFrontEnd.hx",256,0x9ba4fb18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ForceDestroy,"ForceDestroy")
HXLINE( 257)		Bool _hx_tmp;
HXDLIN( 257)		Bool _hx_tmp1 = hx::IsNotNull( this->music );
HXDLIN( 257)		if (_hx_tmp1) {
HXLINE( 257)			if (!(ForceDestroy)) {
HXLINE( 257)				_hx_tmp = !(this->music->persist);
            			}
            			else {
HXLINE( 257)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 257)			_hx_tmp = false;
            		}
HXDLIN( 257)		if (_hx_tmp) {
HXLINE( 259)			this->music->destroy();
HXLINE( 260)			this->music = null();
            		}
HXLINE( 263)		{
HXLINE( 263)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 263)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->list->members;
HXDLIN( 263)			while((_g < _g1->length)){
HXLINE( 263)				HX_VARI(  ::flixel::_hx_system::FlxSound,sound) = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXDLIN( 263)				++_g;
HXLINE( 265)				Bool _hx_tmp2;
HXDLIN( 265)				Bool _hx_tmp3 = hx::IsNotNull( sound );
HXDLIN( 265)				if (_hx_tmp3) {
HXLINE( 265)					if (!(ForceDestroy)) {
HXLINE( 265)						_hx_tmp2 = !(sound->persist);
            					}
            					else {
HXLINE( 265)						_hx_tmp2 = true;
            					}
            				}
            				else {
HXLINE( 265)					_hx_tmp2 = false;
            				}
HXDLIN( 265)				if (_hx_tmp2) {
HXLINE( 267)					sound->destroy();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,destroy,(void))

void SoundFrontEnd_obj::toggleMuted(){
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","toggleMuted",0xe215de70,"flixel.system.frontEnds.SoundFrontEnd.toggleMuted","flixel/system/frontEnds/SoundFrontEnd.hx",276,0x9ba4fb18)
            	HX_STACK_THIS(this)
HXLINE( 277)		this->muted = !(this->muted);
HXLINE( 279)		Bool _hx_tmp = hx::IsNotNull( this->volumeHandler );
HXDLIN( 279)		if (_hx_tmp) {
HXLINE( 281)			Float _hx_tmp1;
HXDLIN( 281)			if (this->muted) {
HXLINE( 281)				_hx_tmp1 = (int)0;
            			}
            			else {
HXLINE( 281)				_hx_tmp1 = this->volume;
            			}
HXDLIN( 281)			this->volumeHandler(_hx_tmp1);
            		}
HXLINE( 284)		this->showSoundTray();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,toggleMuted,(void))

void SoundFrontEnd_obj::changeVolume(Float Amount){
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","changeVolume",0x51b19e11,"flixel.system.frontEnds.SoundFrontEnd.changeVolume","flixel/system/frontEnds/SoundFrontEnd.hx",291,0x9ba4fb18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Amount,"Amount")
HXLINE( 292)		this->muted = false;
HXLINE( 293)		{
HXLINE( 293)			HX_VARI(  ::flixel::_hx_system::frontEnds::SoundFrontEnd,_g) = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 293)			Float _hx_tmp = (_g->volume + Amount);
HXDLIN( 293)			_g->set_volume(_hx_tmp);
            		}
HXLINE( 294)		this->showSoundTray();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,changeVolume,(void))

void SoundFrontEnd_obj::showSoundTray(){
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","showSoundTray",0x0761fd21,"flixel.system.frontEnds.SoundFrontEnd.showSoundTray","flixel/system/frontEnds/SoundFrontEnd.hx",303,0x9ba4fb18)
            	HX_STACK_THIS(this)
HXLINE( 303)		Bool _hx_tmp;
HXDLIN( 303)		Bool _hx_tmp1 = hx::IsNotNull( ::flixel::FlxG_obj::game->soundTray );
HXDLIN( 303)		if (_hx_tmp1) {
HXLINE( 303)			_hx_tmp = this->soundTrayEnabled;
            		}
            		else {
HXLINE( 303)			_hx_tmp = false;
            		}
HXDLIN( 303)		if (_hx_tmp) {
HXLINE( 305)			::flixel::FlxG_obj::game->soundTray->show(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,showSoundTray,(void))

void SoundFrontEnd_obj::update(Float elapsed){
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","update",0x534b3970,"flixel.system.frontEnds.SoundFrontEnd.update","flixel/system/frontEnds/SoundFrontEnd.hx",320,0x9ba4fb18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE( 321)		Bool _hx_tmp;
HXDLIN( 321)		Bool _hx_tmp1 = hx::IsNotNull( this->music );
HXDLIN( 321)		if (_hx_tmp1) {
HXLINE( 321)			_hx_tmp = this->music->active;
            		}
            		else {
HXLINE( 321)			_hx_tmp = false;
            		}
HXDLIN( 321)		if (_hx_tmp) {
HXLINE( 322)			this->music->update(elapsed);
            		}
HXLINE( 324)		Bool _hx_tmp2;
HXDLIN( 324)		Bool _hx_tmp3 = hx::IsNotNull( this->list );
HXDLIN( 324)		if (_hx_tmp3) {
HXLINE( 324)			_hx_tmp2 = this->list->active;
            		}
            		else {
HXLINE( 324)			_hx_tmp2 = false;
            		}
HXDLIN( 324)		if (_hx_tmp2) {
HXLINE( 325)			this->list->update(elapsed);
            		}
HXLINE( 328)		Bool _hx_tmp4 = ::flixel::FlxG_obj::keys->checkKeyArrayState(this->muteKeys,(int)-1);
HXDLIN( 328)		if (_hx_tmp4) {
HXLINE( 329)			this->toggleMuted();
            		}
            		else {
HXLINE( 330)			Bool _hx_tmp5 = ::flixel::FlxG_obj::keys->checkKeyArrayState(this->volumeUpKeys,(int)-1);
HXDLIN( 330)			if (_hx_tmp5) {
HXLINE( 331)				this->changeVolume(((Float)0.1));
            			}
            			else {
HXLINE( 332)				Bool _hx_tmp6 = ::flixel::FlxG_obj::keys->checkKeyArrayState(this->volumeDownKeys,(int)-1);
HXDLIN( 332)				if (_hx_tmp6) {
HXLINE( 333)					this->changeVolume(((Float)-0.1));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,update,(void))

void SoundFrontEnd_obj::onFocusLost(){
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","onFocusLost",0xeb797bf6,"flixel.system.frontEnds.SoundFrontEnd.onFocusLost","flixel/system/frontEnds/SoundFrontEnd.hx",339,0x9ba4fb18)
            	HX_STACK_THIS(this)
HXLINE( 340)		Bool _hx_tmp = hx::IsNotNull( this->music );
HXDLIN( 340)		if (_hx_tmp) {
HXLINE( 342)			this->music->onFocusLost();
            		}
HXLINE( 345)		{
HXLINE( 345)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 345)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->list->members;
HXDLIN( 345)			while((_g < _g1->length)){
HXLINE( 345)				HX_VARI(  ::flixel::_hx_system::FlxSound,sound) = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXDLIN( 345)				++_g;
HXLINE( 347)				Bool _hx_tmp1 = hx::IsNotNull( sound );
HXDLIN( 347)				if (_hx_tmp1) {
HXLINE( 349)					sound->onFocusLost();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocusLost,(void))

void SoundFrontEnd_obj::onFocus(){
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","onFocus",0x8b7e44f2,"flixel.system.frontEnds.SoundFrontEnd.onFocus","flixel/system/frontEnds/SoundFrontEnd.hx",356,0x9ba4fb18)
            	HX_STACK_THIS(this)
HXLINE( 357)		Bool _hx_tmp = hx::IsNotNull( this->music );
HXDLIN( 357)		if (_hx_tmp) {
HXLINE( 359)			this->music->onFocus();
            		}
HXLINE( 362)		{
HXLINE( 362)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 362)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->list->members;
HXDLIN( 362)			while((_g < _g1->length)){
HXLINE( 362)				HX_VARI(  ::flixel::_hx_system::FlxSound,sound) = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXDLIN( 362)				++_g;
HXLINE( 364)				Bool _hx_tmp1 = hx::IsNotNull( sound );
HXDLIN( 364)				if (_hx_tmp1) {
HXLINE( 366)					sound->onFocus();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocus,(void))

void SoundFrontEnd_obj::loadSavedPrefs(){
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","loadSavedPrefs",0xc70de056,"flixel.system.frontEnds.SoundFrontEnd.loadSavedPrefs","flixel/system/frontEnds/SoundFrontEnd.hx",375,0x9ba4fb18)
            	HX_STACK_THIS(this)
HXLINE( 376)		Bool _hx_tmp = hx::IsNotNull(  ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("volume",da,29,53,5f),hx::paccDynamic)) );
HXDLIN( 376)		if (_hx_tmp) {
HXLINE( 378)			this->set_volume( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("volume",da,29,53,5f),hx::paccDynamic)));
            		}
HXLINE( 381)		Bool _hx_tmp1 = hx::IsNotNull(  ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("mute",d9,6e,65,48),hx::paccDynamic)) );
HXDLIN( 381)		if (_hx_tmp1) {
HXLINE( 383)			this->muted =  ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("mute",d9,6e,65,48),hx::paccDynamic));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,loadSavedPrefs,(void))

Float SoundFrontEnd_obj::set_volume(Float Volume){
            	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","set_volume",0x2e392afe,"flixel.system.frontEnds.SoundFrontEnd.set_volume","flixel/system/frontEnds/SoundFrontEnd.hx",388,0x9ba4fb18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Volume,"Volume")
HXLINE( 389)		HX_VAR( Float,lowerBound);
HXDLIN( 389)		if ((Volume < (int)0)) {
HXLINE( 389)			lowerBound = (int)0;
            		}
            		else {
HXLINE( 389)			lowerBound = Volume;
            		}
HXDLIN( 389)		 ::Dynamic _hx_tmp;
HXDLIN( 389)		if ((lowerBound > (int)1)) {
HXLINE( 389)			_hx_tmp = (int)1;
            		}
            		else {
HXLINE( 389)			_hx_tmp = lowerBound;
            		}
HXDLIN( 389)		Volume = _hx_tmp;
HXLINE( 391)		Bool _hx_tmp1 = hx::IsNotNull( this->volumeHandler );
HXDLIN( 391)		if (_hx_tmp1) {
HXLINE( 393)			HX_VAR( Float,param);
HXDLIN( 393)			if (this->muted) {
HXLINE( 393)				param = (int)0;
            			}
            			else {
HXLINE( 393)				param = Volume;
            			}
HXLINE( 394)			this->volumeHandler(param);
            		}
HXLINE( 396)		return (this->volume = Volume);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,set_volume,return )


SoundFrontEnd_obj::SoundFrontEnd_obj()
{
}

void SoundFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundFrontEnd);
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(muted,"muted");
	HX_MARK_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_MARK_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_MARK_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_MARK_MEMBER_NAME(muteKeys,"muteKeys");
	HX_MARK_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_MARK_MEMBER_NAME(defaultMusicGroup,"defaultMusicGroup");
	HX_MARK_MEMBER_NAME(defaultSoundGroup,"defaultSoundGroup");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_END_CLASS();
}

void SoundFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(muted,"muted");
	HX_VISIT_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_VISIT_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_VISIT_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_VISIT_MEMBER_NAME(muteKeys,"muteKeys");
	HX_VISIT_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_VISIT_MEMBER_NAME(defaultMusicGroup,"defaultMusicGroup");
	HX_VISIT_MEMBER_NAME(defaultSoundGroup,"defaultSoundGroup");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(volume,"volume");
}

hx::Val SoundFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return hx::Val( list); }
		if (HX_FIELD_EQ(inName,"load") ) { return hx::Val( load_dyn()); }
		if (HX_FIELD_EQ(inName,"play") ) { return hx::Val( play_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return hx::Val( music); }
		if (HX_FIELD_EQ(inName,"muted") ) { return hx::Val( muted); }
		if (HX_FIELD_EQ(inName,"cache") ) { return hx::Val( cache_dyn()); }
		if (HX_FIELD_EQ(inName,"pause") ) { return hx::Val( pause_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return hx::Val( volume); }
		if (HX_FIELD_EQ(inName,"stream") ) { return hx::Val( stream_dyn()); }
		if (HX_FIELD_EQ(inName,"resume") ) { return hx::Val( resume_dyn()); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return hx::Val( onFocus_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { return hx::Val( muteKeys); }
		if (HX_FIELD_EQ(inName,"cacheAll") ) { return hx::Val( cacheAll_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playMusic") ) { return hx::Val( playMusic_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_volume") ) { return hx::Val( set_volume_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toggleMuted") ) { return hx::Val( toggleMuted_dyn()); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return hx::Val( onFocusLost_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { return hx::Val( volumeUpKeys); }
		if (HX_FIELD_EQ(inName,"changeVolume") ) { return hx::Val( changeVolume_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { return hx::Val( volumeHandler); }
		if (HX_FIELD_EQ(inName,"showSoundTray") ) { return hx::Val( showSoundTray_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { return hx::Val( volumeDownKeys); }
		if (HX_FIELD_EQ(inName,"loadSavedPrefs") ) { return hx::Val( loadSavedPrefs_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { return hx::Val( soundTrayEnabled); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultMusicGroup") ) { return hx::Val( defaultMusicGroup); }
		if (HX_FIELD_EQ(inName,"defaultSoundGroup") ) { return hx::Val( defaultSoundGroup); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SoundFrontEnd_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"muted") ) { muted=inValue.Cast< Bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_volume(inValue) );volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { muteKeys=inValue.Cast< ::Array< Int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { volumeUpKeys=inValue.Cast< ::Array< Int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { volumeHandler=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { volumeDownKeys=inValue.Cast< ::Array< Int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { soundTrayEnabled=inValue.Cast< Bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultMusicGroup") ) { defaultMusicGroup=inValue.Cast<  ::flixel::_hx_system::FlxSoundGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultSoundGroup") ) { defaultSoundGroup=inValue.Cast<  ::flixel::_hx_system::FlxSoundGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10"));
	outFields->push(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"));
	outFields->push(HX_HCSTRING("volumeUpKeys","\x69","\xbb","\xf5","\x23"));
	outFields->push(HX_HCSTRING("volumeDownKeys","\x70","\x2f","\x58","\x0b"));
	outFields->push(HX_HCSTRING("muteKeys","\x6d","\x5d","\x88","\x16"));
	outFields->push(HX_HCSTRING("soundTrayEnabled","\x9c","\x10","\x68","\xe0"));
	outFields->push(HX_HCSTRING("defaultMusicGroup","\x7b","\x94","\xd9","\xa0"));
	outFields->push(HX_HCSTRING("defaultSoundGroup","\x11","\x80","\x9b","\xd9"));
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SoundFrontEnd_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_hx_system::FlxSound*/ ,(int)offsetof(SoundFrontEnd_obj,music),HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10")},
	{hx::fsBool,(int)offsetof(SoundFrontEnd_obj,muted),HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SoundFrontEnd_obj,volumeHandler),HX_HCSTRING("volumeHandler","\x10","\xfd","\x6f","\x5d")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(SoundFrontEnd_obj,volumeUpKeys),HX_HCSTRING("volumeUpKeys","\x69","\xbb","\xf5","\x23")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(SoundFrontEnd_obj,volumeDownKeys),HX_HCSTRING("volumeDownKeys","\x70","\x2f","\x58","\x0b")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(SoundFrontEnd_obj,muteKeys),HX_HCSTRING("muteKeys","\x6d","\x5d","\x88","\x16")},
	{hx::fsBool,(int)offsetof(SoundFrontEnd_obj,soundTrayEnabled),HX_HCSTRING("soundTrayEnabled","\x9c","\x10","\x68","\xe0")},
	{hx::fsObject /*::flixel::_hx_system::FlxSoundGroup*/ ,(int)offsetof(SoundFrontEnd_obj,defaultMusicGroup),HX_HCSTRING("defaultMusicGroup","\x7b","\x94","\xd9","\xa0")},
	{hx::fsObject /*::flixel::_hx_system::FlxSoundGroup*/ ,(int)offsetof(SoundFrontEnd_obj,defaultSoundGroup),HX_HCSTRING("defaultSoundGroup","\x11","\x80","\x9b","\xd9")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(SoundFrontEnd_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsFloat,(int)offsetof(SoundFrontEnd_obj,volume),HX_HCSTRING("volume","\xda","\x29","\x53","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SoundFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String SoundFrontEnd_obj_sMemberFields[] = {
	HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10"),
	HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"),
	HX_HCSTRING("volumeHandler","\x10","\xfd","\x6f","\x5d"),
	HX_HCSTRING("volumeUpKeys","\x69","\xbb","\xf5","\x23"),
	HX_HCSTRING("volumeDownKeys","\x70","\x2f","\x58","\x0b"),
	HX_HCSTRING("muteKeys","\x6d","\x5d","\x88","\x16"),
	HX_HCSTRING("soundTrayEnabled","\x9c","\x10","\x68","\xe0"),
	HX_HCSTRING("defaultMusicGroup","\x7b","\x94","\xd9","\xa0"),
	HX_HCSTRING("defaultSoundGroup","\x11","\x80","\x9b","\xd9"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),
	HX_HCSTRING("playMusic","\x11","\xfe","\x3e","\x31"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("cacheAll","\xff","\x6b","\x19","\x9a"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("stream","\x80","\x14","\x2d","\x11"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("toggleMuted","\x37","\x47","\x22","\x38"),
	HX_HCSTRING("changeVolume","\x6a","\xe3","\x80","\x46"),
	HX_HCSTRING("showSoundTray","\xa8","\x65","\xef","\x47"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("loadSavedPrefs","\xef","\xed","\x3b","\x02"),
	HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"),
	::String(null()) };

static void SoundFrontEnd_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SoundFrontEnd_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class SoundFrontEnd_obj::__mClass;

void SoundFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.SoundFrontEnd","\x27","\xc6","\xa9","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SoundFrontEnd_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SoundFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundFrontEnd_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SoundFrontEnd_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SoundFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SoundFrontEnd_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
