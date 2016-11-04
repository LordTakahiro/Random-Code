// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_WiiRemoteID
#include <flixel/input/gamepad/id/WiiRemoteID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_WiiRemoteMapping
#include <flixel/input/gamepad/mappings/WiiRemoteMapping.h>
#endif

namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void WiiRemoteMapping_obj::__construct(::hx::EnumBase attachment){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","new",0x74d6fe89,"flixel.input.gamepad.mappings.WiiRemoteMapping.new","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",7,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE(   7)		super::__construct(attachment);
            	}

Dynamic WiiRemoteMapping_obj::__CreateEmpty() { return new WiiRemoteMapping_obj; }

hx::ObjectPtr< WiiRemoteMapping_obj > WiiRemoteMapping_obj::__new(::hx::EnumBase attachment)
{
	hx::ObjectPtr< WiiRemoteMapping_obj > _hx_result = new WiiRemoteMapping_obj();
	_hx_result->__construct(attachment);
	return _hx_result;
}

Dynamic WiiRemoteMapping_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WiiRemoteMapping_obj > _hx_result = new WiiRemoteMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void WiiRemoteMapping_obj::initValues(){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","initValues",0xff6f3809,"flixel.input.gamepad.mappings.WiiRemoteMapping.initValues","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",17,0xc69520e9)
            	HX_STACK_THIS(this)
HXLINE(  18)		this->supportsMotion = true;
HXLINE(  20)		this->supportsPointer = false;
            	}


Int WiiRemoteMapping_obj::getID(Int rawID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getID",0x8faa5c5a,"flixel.input.gamepad.mappings.WiiRemoteMapping.getID","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",25,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  25)		Int _hx_tmp = ( ( ::hx::EnumBase)(this->attachment) )->_hx_getIndex();
HXDLIN(  25)		switch((int)(_hx_tmp)){
            			case (int)0: {
HXLINE(  25)				return this->getIDNunchuk(rawID);
            			}
            			break;
            			case (int)1: {
HXLINE(  25)				return this->getIDClassicController(rawID);
            			}
            			break;
            			case (int)2: {
HXLINE(  25)				return this->getIDDefault(rawID);
            			}
            			break;
            		}
HXDLIN(  25)		return null();
            	}


Int WiiRemoteMapping_obj::getIDClassicController(Int rawID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getIDClassicController",0xe5d4d794,"flixel.input.gamepad.mappings.WiiRemoteMapping.getIDClassicController","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",35,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  35)		switch((int)(rawID)){
            			case (int)0: {
HXLINE(  35)				return (int)1;
            			}
            			break;
            			case (int)1: {
HXLINE(  35)				return (int)0;
            			}
            			break;
            			case (int)2: {
HXLINE(  35)				return (int)2;
            			}
            			break;
            			case (int)3: {
HXLINE(  35)				return (int)3;
            			}
            			break;
            			case (int)4: {
HXLINE(  35)				return (int)17;
            			}
            			break;
            			case (int)5: {
HXLINE(  35)				return (int)18;
            			}
            			break;
            			case (int)6: {
HXLINE(  35)				return (int)4;
            			}
            			break;
            			case (int)7: {
HXLINE(  35)				return (int)5;
            			}
            			break;
            			case (int)8: {
HXLINE(  35)				return (int)7;
            			}
            			break;
            			case (int)9: {
HXLINE(  35)				return (int)6;
            			}
            			break;
            			case (int)10: {
HXLINE(  35)				return (int)10;
            			}
            			break;
            			case (int)11: {
HXLINE(  35)				return (int)30;
            			}
            			break;
            			case (int)12: {
HXLINE(  35)				return (int)31;
            			}
            			break;
            			case (int)24: {
HXLINE(  35)				return (int)12;
            			}
            			break;
            			case (int)25: {
HXLINE(  35)				return (int)11;
            			}
            			break;
            			case (int)26: {
HXLINE(  35)				return (int)13;
            			}
            			break;
            			case (int)27: {
HXLINE(  35)				return (int)14;
            			}
            			break;
            			default:{
HXLINE(  54)				if ((rawID == this->leftStick->rawUp)) {
HXLINE(  35)					return (int)34;
            				}
            				else {
HXLINE(  55)					if ((rawID == this->leftStick->rawDown)) {
HXLINE(  35)						return (int)36;
            					}
            					else {
HXLINE(  56)						if ((rawID == this->leftStick->rawLeft)) {
HXLINE(  35)							return (int)37;
            						}
            						else {
HXLINE(  57)							if ((rawID == this->leftStick->rawRight)) {
HXLINE(  35)								return (int)35;
            							}
            							else {
HXLINE(  58)								if ((rawID == this->rightStick->rawUp)) {
HXLINE(  35)									return (int)38;
            								}
            								else {
HXLINE(  59)									if ((rawID == this->rightStick->rawDown)) {
HXLINE(  35)										return (int)40;
            									}
            									else {
HXLINE(  60)										if ((rawID == this->rightStick->rawLeft)) {
HXLINE(  35)											return (int)41;
            										}
            										else {
HXLINE(  61)											if ((rawID == this->rightStick->rawRight)) {
HXLINE(  35)												return (int)39;
            											}
            											else {
HXLINE(  35)												return (int)-1;
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXDLIN(  35)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getIDClassicController,return )

Int WiiRemoteMapping_obj::getIDNunchuk(Int rawID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getIDNunchuk",0x6173e8c8,"flixel.input.gamepad.mappings.WiiRemoteMapping.getIDNunchuk","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",68,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  68)		switch((int)(rawID)){
            			case (int)0: {
HXLINE(  68)				return (int)0;
            			}
            			break;
            			case (int)1: {
HXLINE(  68)				return (int)1;
            			}
            			break;
            			case (int)2: {
HXLINE(  68)				return (int)4;
            			}
            			break;
            			case (int)3: {
HXLINE(  68)				return (int)17;
            			}
            			break;
            			case (int)4: {
HXLINE(  68)				return (int)2;
            			}
            			break;
            			case (int)5: {
HXLINE(  68)				return (int)3;
            			}
            			break;
            			case (int)6: {
HXLINE(  68)				return (int)7;
            			}
            			break;
            			case (int)7: {
HXLINE(  68)				return (int)6;
            			}
            			break;
            			case (int)8: {
HXLINE(  68)				return (int)10;
            			}
            			break;
            			case (int)28: {
HXLINE(  68)				return (int)12;
            			}
            			break;
            			case (int)29: {
HXLINE(  68)				return (int)11;
            			}
            			break;
            			case (int)30: {
HXLINE(  68)				return (int)13;
            			}
            			break;
            			case (int)31: {
HXLINE(  68)				return (int)14;
            			}
            			break;
            			default:{
HXLINE(  68)				return (int)-1;
            			}
            		}
HXDLIN(  68)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getIDNunchuk,return )

Int WiiRemoteMapping_obj::getIDDefault(Int rawID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getIDDefault",0xbf6a4387,"flixel.input.gamepad.mappings.WiiRemoteMapping.getIDDefault","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",94,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  94)		switch((int)(rawID)){
            			case (int)0: {
HXLINE(  94)				return (int)2;
            			}
            			break;
            			case (int)1: {
HXLINE(  94)				return (int)3;
            			}
            			break;
            			case (int)2: {
HXLINE(  94)				return (int)0;
            			}
            			break;
            			case (int)3: {
HXLINE(  94)				return (int)1;
            			}
            			break;
            			case (int)4: {
HXLINE(  94)				return (int)7;
            			}
            			break;
            			case (int)5: {
HXLINE(  94)				return (int)6;
            			}
            			break;
            			case (int)6: {
HXLINE(  94)				return (int)10;
            			}
            			break;
            			case (int)14: {
HXLINE(  94)				return (int)11;
            			}
            			break;
            			case (int)15: {
HXLINE(  94)				return (int)12;
            			}
            			break;
            			case (int)16: {
HXLINE(  94)				return (int)13;
            			}
            			break;
            			case (int)17: {
HXLINE(  94)				return (int)14;
            			}
            			break;
            			default:{
HXLINE(  94)				return (int)-1;
            			}
            		}
HXDLIN(  94)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getIDDefault,return )

Int WiiRemoteMapping_obj::getRawID(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getRawID",0x63d54c84,"flixel.input.gamepad.mappings.WiiRemoteMapping.getRawID","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",113,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 113)		Int _hx_tmp = ( ( ::hx::EnumBase)(this->attachment) )->_hx_getIndex();
HXDLIN( 113)		switch((int)(_hx_tmp)){
            			case (int)0: {
HXLINE( 113)				return this->getRawNunchuk(ID);
            			}
            			break;
            			case (int)1: {
HXLINE( 113)				return this->getRawClassicController(ID);
            			}
            			break;
            			case (int)2: {
HXLINE( 113)				return this->getRawDefault(ID);
            			}
            			break;
            		}
HXDLIN( 113)		return (int)0;
            	}


Int WiiRemoteMapping_obj::getRawClassicController(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getRawClassicController",0x484852a5,"flixel.input.gamepad.mappings.WiiRemoteMapping.getRawClassicController","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",123,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 123)		switch((int)(ID)){
            			case (int)0: {
HXLINE( 123)				return (int)1;
            			}
            			break;
            			case (int)1: {
HXLINE( 123)				return (int)0;
            			}
            			break;
            			case (int)2: {
HXLINE( 123)				return (int)2;
            			}
            			break;
            			case (int)3: {
HXLINE( 123)				return (int)3;
            			}
            			break;
            			case (int)4: {
HXLINE( 123)				return (int)6;
            			}
            			break;
            			case (int)5: {
HXLINE( 123)				return (int)7;
            			}
            			break;
            			case (int)6: {
HXLINE( 123)				return (int)9;
            			}
            			break;
            			case (int)7: {
HXLINE( 123)				return (int)8;
            			}
            			break;
            			case (int)10: {
HXLINE( 123)				return (int)10;
            			}
            			break;
            			case (int)11: {
HXLINE( 123)				return (int)25;
            			}
            			break;
            			case (int)12: {
HXLINE( 123)				return (int)24;
            			}
            			break;
            			case (int)13: {
HXLINE( 123)				return (int)26;
            			}
            			break;
            			case (int)14: {
HXLINE( 123)				return (int)27;
            			}
            			break;
            			case (int)17: {
HXLINE( 123)				return (int)4;
            			}
            			break;
            			case (int)18: {
HXLINE( 123)				return (int)5;
            			}
            			break;
            			case (int)30: {
HXLINE( 123)				return (int)11;
            			}
            			break;
            			case (int)31: {
HXLINE( 123)				return (int)12;
            			}
            			break;
            			case (int)34: {
HXLINE( 123)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE( 123)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE( 123)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE( 123)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE( 123)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE( 123)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE( 123)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE( 123)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE( 123)				return (int)-1;
            			}
            		}
HXDLIN( 123)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getRawClassicController,return )

Int WiiRemoteMapping_obj::getRawNunchuk(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getRawNunchuk",0x7dce1499,"flixel.input.gamepad.mappings.WiiRemoteMapping.getRawNunchuk","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",156,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 156)		switch((int)(ID)){
            			case (int)0: {
HXLINE( 156)				return (int)0;
            			}
            			break;
            			case (int)1: {
HXLINE( 156)				return (int)1;
            			}
            			break;
            			case (int)2: {
HXLINE( 156)				return (int)4;
            			}
            			break;
            			case (int)3: {
HXLINE( 156)				return (int)5;
            			}
            			break;
            			case (int)4: {
HXLINE( 156)				return (int)2;
            			}
            			break;
            			case (int)6: {
HXLINE( 156)				return (int)7;
            			}
            			break;
            			case (int)7: {
HXLINE( 156)				return (int)6;
            			}
            			break;
            			case (int)10: {
HXLINE( 156)				return (int)8;
            			}
            			break;
            			case (int)11: {
HXLINE( 156)				return (int)29;
            			}
            			break;
            			case (int)12: {
HXLINE( 156)				return (int)28;
            			}
            			break;
            			case (int)13: {
HXLINE( 156)				return (int)30;
            			}
            			break;
            			case (int)14: {
HXLINE( 156)				return (int)31;
            			}
            			break;
            			case (int)17: {
HXLINE( 156)				return (int)3;
            			}
            			break;
            			case (int)26: {
HXLINE( 156)				return (int)3;
            			}
            			break;
            			case (int)27: {
HXLINE( 156)				return (int)2;
            			}
            			break;
            			case (int)34: {
HXLINE( 156)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE( 156)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE( 156)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE( 156)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE( 156)				return (int)-1;
            			}
            		}
HXDLIN( 156)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getRawNunchuk,return )

Int WiiRemoteMapping_obj::getRawDefault(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getRawDefault",0xdbc46f58,"flixel.input.gamepad.mappings.WiiRemoteMapping.getRawDefault","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",183,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 183)		switch((int)(ID)){
            			case (int)0: {
HXLINE( 183)				return (int)2;
            			}
            			break;
            			case (int)1: {
HXLINE( 183)				return (int)3;
            			}
            			break;
            			case (int)2: {
HXLINE( 183)				return (int)0;
            			}
            			break;
            			case (int)3: {
HXLINE( 183)				return (int)1;
            			}
            			break;
            			case (int)6: {
HXLINE( 183)				return (int)5;
            			}
            			break;
            			case (int)7: {
HXLINE( 183)				return (int)4;
            			}
            			break;
            			case (int)10: {
HXLINE( 183)				return (int)6;
            			}
            			break;
            			case (int)11: {
HXLINE( 183)				return (int)14;
            			}
            			break;
            			case (int)12: {
HXLINE( 183)				return (int)15;
            			}
            			break;
            			case (int)13: {
HXLINE( 183)				return (int)16;
            			}
            			break;
            			case (int)14: {
HXLINE( 183)				return (int)17;
            			}
            			break;
            			case (int)26: {
HXLINE( 183)				return (int)2;
            			}
            			break;
            			case (int)27: {
HXLINE( 183)				return (int)3;
            			}
            			break;
            			default:{
HXLINE( 183)				return (int)-1;
            			}
            		}
HXDLIN( 183)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getRawDefault,return )

Bool WiiRemoteMapping_obj::isAxisForMotion(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","isAxisForMotion",0xc221669d,"flixel.input.gamepad.mappings.WiiRemoteMapping.isAxisForMotion","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",203,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 204)		if (hx::IsEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::NONE_dyn() )) {
HXLINE( 206)			Bool _hx_tmp;
HXDLIN( 206)			if ((ID != (int)2)) {
HXLINE( 206)				_hx_tmp = (ID == (int)3);
            			}
            			else {
HXLINE( 206)				_hx_tmp = true;
            			}
HXDLIN( 206)			if (_hx_tmp) {
HXLINE( 207)				return true;
            			}
            		}
            		else {
HXLINE( 209)			if (hx::IsEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_NUNCHUCK_dyn() )) {
HXLINE( 211)				Bool _hx_tmp1;
HXDLIN( 211)				if ((ID != (int)3)) {
HXLINE( 211)					_hx_tmp1 = (ID == (int)2);
            				}
            				else {
HXLINE( 211)					_hx_tmp1 = true;
            				}
HXDLIN( 211)				if (_hx_tmp1) {
HXLINE( 212)					return true;
            				}
            			}
            		}
HXLINE( 214)		return false;
            	}


Bool WiiRemoteMapping_obj::isAxisFlipped(Int axisID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","isAxisFlipped",0x7501e940,"flixel.input.gamepad.mappings.WiiRemoteMapping.isAxisFlipped","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",219,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(axisID,"axisID")
HXLINE( 219)		return (axisID == (int)4);
            	}


Int WiiRemoteMapping_obj::axisIndexToRawID(Int axisID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","axisIndexToRawID",0x493b61ce,"flixel.input.gamepad.mappings.WiiRemoteMapping.axisIndexToRawID","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",225,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(axisID,"axisID")
HXLINE( 227)		Bool _hx_tmp;
HXDLIN( 227)		if (hx::IsEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::NONE_dyn() )) {
HXLINE( 227)			_hx_tmp = (axisID == (int)4);
            		}
            		else {
HXLINE( 227)			_hx_tmp = false;
            		}
HXDLIN( 227)		if (_hx_tmp) {
HXLINE( 228)			return (int)-1;
            		}
            		else {
HXLINE( 230)			Bool _hx_tmp1;
HXDLIN( 230)			if (hx::IsEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_NUNCHUCK_dyn() )) {
HXLINE( 230)				_hx_tmp1 = (axisID == (int)4);
            			}
            			else {
HXLINE( 230)				_hx_tmp1 = false;
            			}
HXDLIN( 230)			if (_hx_tmp1) {
HXLINE( 231)				return (int)-1;
            			}
            		}
HXLINE( 233)		Bool _hx_tmp2;
HXDLIN( 233)		if (hx::IsNotEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_NUNCHUCK_dyn() )) {
HXLINE( 233)			_hx_tmp2 = hx::IsEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_CLASSIC_CONTROLLER_dyn() );
            		}
            		else {
HXLINE( 233)			_hx_tmp2 = true;
            		}
HXDLIN( 233)		if (_hx_tmp2) {
HXLINE( 235)			if ((axisID == this->leftStick->x)) {
HXLINE( 236)				return (int)20;
            			}
            			else {
HXLINE( 237)				if ((axisID == this->leftStick->y)) {
HXLINE( 238)					return (int)21;
            				}
            			}
            		}
            		else {
HXLINE( 242)			if ((axisID == this->leftStick->x)) {
HXLINE( 243)				return (int)18;
            			}
            			else {
HXLINE( 244)				if ((axisID == this->leftStick->y)) {
HXLINE( 245)					return (int)19;
            				}
            			}
            		}
HXLINE( 248)		if ((axisID == this->rightStick->x)) {
HXLINE( 249)			return (int)22;
            		}
            		else {
HXLINE( 250)			if ((axisID == this->rightStick->y)) {
HXLINE( 251)				return (int)23;
            			}
            		}
HXLINE( 253)		return axisID;
            	}


Int WiiRemoteMapping_obj::checkForFakeAxis(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","checkForFakeAxis",0xe60c374e,"flixel.input.gamepad.mappings.WiiRemoteMapping.checkForFakeAxis","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",257,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 258)		Bool _hx_tmp;
HXDLIN( 258)		if (hx::IsEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_NUNCHUCK_dyn() )) {
HXLINE( 258)			_hx_tmp = (ID == (int)17);
            		}
            		else {
HXLINE( 258)			_hx_tmp = false;
            		}
HXDLIN( 258)		if (_hx_tmp) {
HXLINE( 259)			return (int)3;
            		}
HXLINE( 261)		return (int)-1;
            	}


::hx::EnumBase WiiRemoteMapping_obj::set_attachment(::hx::EnumBase attachment){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","set_attachment",0x85409917,"flixel.input.gamepad.mappings.WiiRemoteMapping.set_attachment","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",266,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE( 267)		 ::flixel::input::gamepad::FlxGamepadAnalogStick _hx_tmp;
HXDLIN( 267)		Int _hx_tmp1 = ( ( ::hx::EnumBase)(attachment) )->_hx_getIndex();
HXDLIN( 267)		switch((int)(_hx_tmp1)){
            			case (int)0: case (int)1: {
HXLINE( 267)				_hx_tmp = ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK;
            			}
            			break;
            			case (int)2: {
HXLINE( 267)				_hx_tmp = ::flixel::input::gamepad::id::WiiRemoteID_obj::REMOTE_DPAD;
            			}
            			break;
            		}
HXDLIN( 267)		this->leftStick = _hx_tmp;
HXLINE( 273)		 ::flixel::input::gamepad::FlxGamepadAnalogStick _hx_tmp2;
HXDLIN( 273)		Int _hx_tmp3 = ( ( ::hx::EnumBase)(attachment) )->_hx_getIndex();
HXDLIN( 273)		if ((_hx_tmp3 == (int)1)) {
HXLINE( 273)			_hx_tmp2 = ::flixel::input::gamepad::id::WiiRemoteID_obj::RIGHT_ANALOG_STICK;
            		}
            		else {
HXLINE( 273)			_hx_tmp2 = null();
            		}
HXDLIN( 273)		this->rightStick = _hx_tmp2;
HXLINE( 279)		return this->super::set_attachment(attachment);
            	}


Int WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X;

Int WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y;

Int WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X;

Int WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y;


WiiRemoteMapping_obj::WiiRemoteMapping_obj()
{
}

hx::Val WiiRemoteMapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return hx::Val( getID_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return hx::Val( getRawID_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return hx::Val( initValues_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getIDNunchuk") ) { return hx::Val( getIDNunchuk_dyn()); }
		if (HX_FIELD_EQ(inName,"getIDDefault") ) { return hx::Val( getIDDefault_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getRawNunchuk") ) { return hx::Val( getRawNunchuk_dyn()); }
		if (HX_FIELD_EQ(inName,"getRawDefault") ) { return hx::Val( getRawDefault_dyn()); }
		if (HX_FIELD_EQ(inName,"isAxisFlipped") ) { return hx::Val( isAxisFlipped_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_attachment") ) { return hx::Val( set_attachment_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isAxisForMotion") ) { return hx::Val( isAxisForMotion_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"axisIndexToRawID") ) { return hx::Val( axisIndexToRawID_dyn()); }
		if (HX_FIELD_EQ(inName,"checkForFakeAxis") ) { return hx::Val( checkForFakeAxis_dyn()); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getIDClassicController") ) { return hx::Val( getIDClassicController_dyn()); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getRawClassicController") ) { return hx::Val( getRawClassicController_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *WiiRemoteMapping_obj_sMemberStorageInfo = 0;
static hx::StaticInfo WiiRemoteMapping_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1")},
	{hx::fsInt,(void *) &WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String WiiRemoteMapping_obj_sMemberFields[] = {
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getIDClassicController","\x1d","\xe8","\xc4","\x20"),
	HX_HCSTRING("getIDNunchuk","\x11","\xa4","\xdf","\xd0"),
	HX_HCSTRING("getIDDefault","\xd0","\xfe","\xd5","\x2e"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	HX_HCSTRING("getRawClassicController","\xfc","\xb9","\x66","\x9f"),
	HX_HCSTRING("getRawNunchuk","\x30","\x39","\xa6","\x8c"),
	HX_HCSTRING("getRawDefault","\xef","\x93","\x9c","\xea"),
	HX_HCSTRING("isAxisForMotion","\xf4","\x1e","\xbd","\x52"),
	HX_HCSTRING("isAxisFlipped","\xd7","\x0d","\xda","\x83"),
	HX_HCSTRING("axisIndexToRawID","\x97","\xf5","\xe0","\x40"),
	HX_HCSTRING("checkForFakeAxis","\x17","\xcb","\xb1","\xdd"),
	HX_HCSTRING("set_attachment","\xa0","\x78","\x88","\x73"),
	::String(null()) };

static void WiiRemoteMapping_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WiiRemoteMapping_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_MARK_MEMBER_NAME(WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WiiRemoteMapping_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WiiRemoteMapping_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_VISIT_MEMBER_NAME(WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
};

#endif

hx::Class WiiRemoteMapping_obj::__mClass;

static ::String WiiRemoteMapping_obj_sStaticFields[] = {
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38"),
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1"),
	::String(null())
};

void WiiRemoteMapping_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.WiiRemoteMapping","\x17","\x06","\xe9","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = WiiRemoteMapping_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(WiiRemoteMapping_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(WiiRemoteMapping_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WiiRemoteMapping_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WiiRemoteMapping_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WiiRemoteMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WiiRemoteMapping_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WiiRemoteMapping_obj::__boot()
{
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","boot",0xbf60b9e9,"flixel.input.gamepad.mappings.WiiRemoteMapping.boot","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",10,0xc69520e9)
HXLINE(  10)		LEFT_ANALOG_STICK_FAKE_X = (int)20;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","boot",0xbf60b9e9,"flixel.input.gamepad.mappings.WiiRemoteMapping.boot","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",11,0xc69520e9)
HXLINE(  11)		LEFT_ANALOG_STICK_FAKE_Y = (int)21;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","boot",0xbf60b9e9,"flixel.input.gamepad.mappings.WiiRemoteMapping.boot","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",12,0xc69520e9)
HXLINE(  12)		RIGHT_ANALOG_STICK_FAKE_X = (int)22;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","boot",0xbf60b9e9,"flixel.input.gamepad.mappings.WiiRemoteMapping.boot","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",13,0xc69520e9)
HXLINE(  13)		RIGHT_ANALOG_STICK_FAKE_Y = (int)23;
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
