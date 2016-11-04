package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.editors.ogmo.*;
import flixel.addons.tile.FlxCaveGenerator;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.tile.FlxTile;
import flixel.tile.FlxTilemap;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxColor;

/**
 * ...
 * @author Takahiro
 */

class PlayState extends FlxState {
	
	private var _sndLose:FlxSound;
	private var _player:Player;
	private var _map:FlxTilemap;
	private var _hud:HUD;
	private var _inv:Inventory;
	private var _maxHP:Float = 0;
	private var _grpCoins:FlxTypedGroup<Coin>;
	private var _ending:Bool;
	private var _won:Bool;
	private var mapData:Array<Array<Int>> =  							  
							  [[2,2,2,2,2,2,2,2,2,2,2,2,2,2,2],
			                  [2,1,1,1,1,1,1,1,1,1,1,1,1,1,2],
			                  [2,1,2,1,1,1,1,1,1,1,1,1,1,1,2],
			                  [2,1,1,1,1,2,1,1,1,1,1,1,1,1,2],
			                  [2,1,1,1,1,1,1,1,1,1,1,1,1,1,2],
			                  [2,1,1,1,1,1,1,1,1,1,1,1,1,1,2],
			                  [2,1,1,1,1,1,1,1,1,1,1,1,1,1,2],
			                  [2,2,2,2,2,2,2,2,2,2,2,2,2,2,2]];
	public var invOpen:Bool;							 // If the player has their inventory open (Default False)
	
	override public function create():Void {          
		_sndLose = FlxG.sound.load(AssetPaths.lose__wav);
		_map = new FlxTilemap();
		_map.loadMapFrom2DArray(mapData, AssetPaths.tiles__png, 16, 16); 
		_map.setTileProperties(1, FlxObject.NONE);
		_map.setTileProperties(2, FlxObject.ANY);
		add(_map);
		_player = new Player();
		_player.x = 17;
		_player.y = 17;
		_maxHP = _player.health;
		add(_player);
		FlxG.watch.add(_player, "health", "Health");
		FlxG.camera.follow(_player, TOPDOWN, 1);
		_hud = new HUD();
		add(_hud);
		 _inv = new Inventory(_player.inventory);	
		 _inv.visible = false;
		 add(_inv);
		super.create();
	}

	override public function update(elapsed:Float):Void {
		
		super.update(elapsed);
		inventory();
		if (FlxG.sound.music == null) {
			#if flash
			FlxG.sound.playMusic(AssetPaths.main__mp3, 1, true);
			#else
			FlxG.sound.playMusic(AssetPaths.music__ogg, 1, true);
			#end
		}
		if (_ending) {
			return;
		}
		_hud.updateHUD(_player.health, _maxHP);
		if (_player.health == 0) {
			_sndLose.play();
			_ending = true;
			FlxG.camera.fade(FlxColor.BLACK, .33, false, doneFadeOut);
		}
		FlxG.collide(_player, _map);
		FlxG.overlap(_player, _grpCoins, playerTouchCoin);
	}
	
	private function placeEntities(entityName:String, entityData:Xml):Void {
     
		 var x:Int = Std.parseInt(entityData.get("x"));
		 var y:Int = Std.parseInt(entityData.get("y"));
		 if (entityName == "Player") {
			 
			 _player.x = x;
			 _player.y = y;
		 }
		 else if (entityName == "coins"){
			_grpCoins.add(new Coin(x + 4, y + 4));
		}
	}
	
	private function doneFadeOut():Void{
		FlxG.switchState(new GameOverState(_won));
	}
	
	private function playerTouchCoin(P:Player, C:Coin):Void {
		if (P.alive && P.exists && C.alive && C.exists)
		{
			C.kill();
		}
	}
	
	private function inventory():Void {
		
		var _i:Bool = false;
		_i = FlxG.keys.justPressed.I;
		 
		if (_i) {
			
			if (invOpen) {
				invOpen = false;
			}
			else {
				invOpen = true;
			}
			_player.openInventory(_inv,invOpen);
		 }
	}
}
