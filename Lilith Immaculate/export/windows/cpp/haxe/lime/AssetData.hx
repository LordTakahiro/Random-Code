package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/images/arrowLeft.png", "assets/images/arrowLeft.png");
			type.set ("assets/images/arrowLeft.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/arrowLeftDown.png", "assets/images/arrowLeftDown.png");
			type.set ("assets/images/arrowLeftDown.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/arrowLeftOver.png", "assets/images/arrowLeftOver.png");
			type.set ("assets/images/arrowLeftOver.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/arrowRight.png", "assets/images/arrowRight.png");
			type.set ("assets/images/arrowRight.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/arrowRightDown.png", "assets/images/arrowRightDown.png");
			type.set ("assets/images/arrowRightDown.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/arrowRightOver.png", "assets/images/arrowRightOver.png");
			type.set ("assets/images/arrowRightOver.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/button.png", "assets/images/button.png");
			type.set ("assets/images/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/coin.png", "assets/images/coin.png");
			type.set ("assets/images/coin.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/echo.png", "assets/images/echo.png");
			type.set ("assets/images/echo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/health.png", "assets/images/health.png");
			type.set ("assets/images/health.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/invSlot.png", "assets/images/invSlot.png");
			type.set ("assets/images/invSlot.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/player.png", "assets/images/player.png");
			type.set ("assets/images/player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tiles.png", "assets/images/tiles.png");
			type.set ("assets/images/tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tiles2.png", "assets/images/tiles2.png");
			type.set ("assets/images/tiles2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/combat.wav", "assets/music/combat.wav");
			type.set ("assets/music/combat.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/fled.wav", "assets/music/fled.wav");
			type.set ("assets/music/fled.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/hurt.wav", "assets/music/hurt.wav");
			type.set ("assets/music/hurt.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/lose.wav", "assets/music/lose.wav");
			type.set ("assets/music/lose.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/main.mp3", "assets/music/main.mp3");
			type.set ("assets/music/main.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/music/miss.wav", "assets/music/miss.wav");
			type.set ("assets/music/miss.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/music.mp3", "assets/music/music.mp3");
			type.set ("assets/music/music.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/music/music.ogg", "assets/music/music.ogg");
			type.set ("assets/music/music.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/music/select.wav", "assets/music/select.wav");
			type.set ("assets/music/select.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/step.wav", "assets/music/step.wav");
			type.set ("assets/music/step.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/win.wav", "assets/music/win.wav");
			type.set ("assets/music/win.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/images/logo/default.png", "flixel/images/logo/default.png");
			type.set ("flixel/images/logo/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
