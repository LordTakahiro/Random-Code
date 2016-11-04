 package;

 import flixel.FlxSprite;
 import flixel.system.FlxAssets.FlxGraphicAsset;
 import flixel.system.FlxSound;
 import flixel.util.FlxColor;
 import flixel.math.*;
 import flixel.FlxG;
 import flixel.FlxObject;
 import HUD;

/**
 * ...
 * @author Takahiro
 */

 class Player extends FlxSprite {
	 
	 private var _sndStep:FlxSound;
	 private var _sndHurt:FlxSound;
	 public var inventory:Array<Dynamic>;			 	 // Inventory
	 public var equipped:Array<Dynamic>;
	 public var speed:Float = 160;				 		 // Movement Speed
	 @:isVar public var mana(get, set):Int;				 // Mana
	 @:isVar public var str(get, set):Int; 	 			 // Strength
	 @:isVar public var int(get, set):Int; 				 // Intelligence
	 @:isVar public var dex(get, set):Int; 				 // Dexterity
	 @:isVar public var vit(get, set):Int; 				 // Vitality
	 @:isVar public var will(get, set):Int; 			 // Willpower
	 @:isVar public var luck(get, set):Int; 			 // Luck
	 @:isVar public var def(get, set):Int;  			 // Defense
	 
     public function new(?X:Float = 0, ?Y:Float = 0) {
		 
         super(X, Y);
		 _sndStep = FlxG.sound.load(AssetPaths.step__wav);
		 _sndHurt = FlxG.sound.load(AssetPaths.hurt__wav);
		 loadGraphic(AssetPaths.player__png, true, 16, 16);
		 setFacingFlip(FlxObject.LEFT, false, false);
		 setFacingFlip(FlxObject.RIGHT, true, false);
		 animation.add("lr", [3, 4, 3, 5], 6, false);
		 animation.add("u", [6, 7, 6, 8], 6, false);
		 animation.add("d", [0, 1, 0, 2], 6, false);
		 drag.x = drag.y = 1600;
		 setSize(8, 14);
		 offset.set(4, 2);
		 mana = 50;
		 str = 10;
		 int = 10;
		 dex = 10;
		 vit = 10;
		 will = 10;
		 luck = 3;
		 def = 10;
		 health = 30;
		 inventory = new Array<Dynamic>();
     }
	 
	 private function movment():Void {
		 var _up:Bool = false;
		 var _down:Bool = false;
		 var _left:Bool = false;
		 var _right:Bool = false;
		 _up = FlxG.keys.anyPressed([UP, W]);
		 _down = FlxG.keys.anyPressed([DOWN, S]);
		 _left = FlxG.keys.anyPressed([LEFT, A]);
		 _right = FlxG.keys.anyPressed([RIGHT, D]);
		 
		 if (_up && _down)
			_up = _down = false;
		 if (_left && _right)
			_left = _right = false;
			
		 if (_up || _down || _left || _right) {
			 var mA:Float = 0; 				// our temporary angle
			 if (_up) { 					// the player is pressing UP
				 mA = -90; 					// set our angle to -90 (12 o'clock)
				 if (_left)
					 mA -= 45; 				// if the player is also pressing LEFT, subtract 45 degrees from our angle - we're moving up and left
				 else if (_right)
					 mA += 45; 				// similarly, if the player is pressing RIGHT, add 45 degrees (up and right)
				 facing = FlxObject.UP; 	// the sprite should be facing UP
			 }
			 else if (_down) { 				// the player is pressing DOWN
				 mA = 90; 					// set our angle to 90 (6 o'clock)
				 if (_left)
					 mA += 45; 				// add 45 degrees if the player is also pressing LEFT
				 else if (_right)
					 mA -= 45; 				// or subtract 45 if they are pressing RIGHT
				 facing = FlxObject.DOWN; 	// the sprite is facing DOWN
			 }
			 else if (_left) { 				// if the player is not pressing UP or DOWN, but they are pressing LEFT
				 mA = 180; 					// set our angle to 180 (9 o'clock)
				 facing = FlxObject.LEFT; 	// the sprite should be facing LEFT
			 }
			 else if (_right) { 			// the player is not pressing UP, DOWN, or LEFT, and they ARE pressing RIGHT
				 mA = 0; 					// set our angle to 0 (3 o'clock)
				 facing = FlxObject.RIGHT; 	// set the sprite's facing to RIGHT
			 }
			// determine our velocity based on angle and speed
			 velocity.set(speed, 0);
			 velocity.rotate(FlxPoint.weak(0, 0), mA);
			// if the player is moving (velocity is not 0 for either axis), we need to change the animation to match their facing
			 if ((velocity.x != 0 || velocity.y != 0) && touching == FlxObject.NONE) { 
				 _sndStep.play();
				 switch (facing) {
					 case FlxObject.LEFT, FlxObject.RIGHT:
						 animation.play("lr");
					 case FlxObject.UP:
						 animation.play("u");
					 case FlxObject.DOWN:
						 animation.play("d");
				 }
			 }
		 }
	 }
	 
	 private function takeDamage(amount):Void {
		 var tempHP = health;
		 health = tempHP - amount;
	 }
	 
	 private function randomButton():Void {
		 var _x:Bool = false;
		 
		 _x = FlxG.keys.justPressed.X;
		 
		 
		 if (_x) {
			_sndHurt.stop();
			_sndHurt.play();
			takeDamage(5); 
		 }
	 }
	 
	 public function openInventory(_inv:Inventory, arg:Bool):Void {
		 if (arg) {
			 _inv.visible = true;
		 }
		 else {
			 _inv.visible = false;
		 }
		 //_inv.updateItems(inventory);
	 }
	 
	 
	 override public function update(elapsed:Float):Void {
		 
		movment();
		randomButton();
		
		if (health == 0) {
			alive = false;
			kill();
		}
		super.update(elapsed);
	 }
	 
	 function get_str():Int { return str;}	 
	 function set_str(value:Int):Int  {  return str = value;}	 
	 function get_mana():Int { return mana;}	 
	 function set_mana(value:Int):Int { return mana = value;}	 
	 function get_int():Int { return int;}	 
	 function set_int(value:Int):Int { return int = value;}	 
	 function get_dex():Int { return dex;}	 
	 function set_dex(value:Int):Int { return dex = value;}	 
	 function get_vit():Int { return vit;}	 
	 function set_vit(value:Int):Int { return vit = value;}	 
	 function get_will():Int { return will;}	 
	 function set_will(value:Int):Int { return will = value;}	 
	 function get_luck():Int { return luck;}	 
	 function set_luck(value:Int):Int { return luck = value;}	 
	 function get_def():Int { return def;}	 
	 function set_def(value:Int):Int { return def = value; }
	 
 }