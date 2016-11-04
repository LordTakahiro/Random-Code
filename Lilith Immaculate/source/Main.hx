package;

import flixel.FlxG;
import flixel.FlxGame;
import flixel.system.FlxSound;
import flixel.util.FlxSave;
import openfl.Lib;
import openfl.display.Sprite;

/**
 * ...
 * @author Takahiro
 */

class Main extends Sprite {
	
	public function new() {
		
		super();
		addChild(new FlxGame(320, 240, MenuState));
		#if flash
		FlxG.sound.playMusic(AssetPaths.main__mp3, 1, true);
		#else
		FlxG.sound.playMusic(AssetPaths.music__ogg, 1, true);
		#end
		var _save:FlxSave = new FlxSave();
		_save.bind("Lilith");
		if (_save.data.volume != null){
			FlxG.sound.volume = _save.data.volume;
		}
		_save.close();
	}
}
