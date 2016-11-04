package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxAxes;
import flixel.util.FlxColor;
import flixel.util.FlxSave;
using flixel.util.FlxSpriteUtil;

/**
 * ...
 * @author Takahiro
 */

class GameOverState extends FlxState {
	
	private var _win:Bool;				// if we won or lost
	private var _txtTitle:FlxText;		// the title text
	private var _txtMessage:FlxText;	// the final score message text
	private var _btnMainMenu:FlxButton;	// button to go to main menu
	
	public function new(Win:Bool) {
		_win = Win;
		super();
	}
	
	override public function create():Void {
		
		#if !FLX_NO_MOUSE
		FlxG.mouse.visible = true;
		#end
		
		// create and add each of our items
		
		_txtTitle = new FlxText(0, 20, 0, _win ? "You Win!" : "Game Over!", 22);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(FlxAxes.X);
		add(_txtTitle);
		
		_txtMessage = new FlxText(0, (FlxG.height / 2) - 18, 0, "Lilith Has Consumed Your Soul...", 8);
		_txtMessage.alignment = CENTER;
		_txtMessage.screenCenter(FlxAxes.X);
		add(_txtMessage);
		
		_btnMainMenu = new FlxButton(0, FlxG.height - 32, "Main Menu", goMainMenu);
		_btnMainMenu.screenCenter(FlxAxes.X);
		add(_btnMainMenu);
		
		FlxG.camera.fade(FlxColor.BLACK, .33, true);
		
		super.create();
	}
	
	/**
	 * When the user hits the main menu button, it should fade out and then take them back to the MenuState
	 */
	private function goMainMenu():Void {
		FlxG.camera.fade(FlxColor.BLACK, .33, false, function() {	
			FlxG.switchState(new MenuState());
		});
	}
}