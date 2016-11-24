package;
import flash.filters.BitmapFilter;
import flash.filters.BitmapFilterQuality;
import flash.filters.GlowFilter;
import flixel.FlxSprite;
import flixel.graphics.frames.FlxFilterFrames;
import flixel.input.mouse.FlxMouseEventManager;
import flixel.tweens.FlxTween;

/**
 * ...
 * @author Takahiro
 */

class InvSlot extends FlxSprite {
	
	static inline var SIZE_INCREASE:Int = 10;
	
    private var _sprOver:FlxSprite;
    private var _sprDown:FlxSprite;
	private var _overFilt:GlowFilter;
	private var _clickFilt:GlowFilter;
	private var _sprFilter:FlxFilterFrames;

	public function new(X:Int, Y:Int, OffsetX:Int, OffsetY:Int, Index:Int) {
		super(X + OffsetX * Index, Y + OffsetY * Index);
		
		// Load the image
		loadGraphic(AssetPaths.invSlot__png);
		
		// Over Glowfilter
		_overFilt = new GlowFilter();
		_overFilt.color = 0xFFFFFF;
		_overFilt.alpha = 1;
		_overFilt.blurX = 25;
		_overFilt.blurY = 25;
		_overFilt.quality = BitmapFilterQuality.MEDIUM;
		
		// Click Glowfilter
		_clickFilt = new GlowFilter();
		_clickFilt.color = 0xABCDEF;
		_clickFilt.alpha = 1;
		_clickFilt.blurX = 25;
		_clickFilt.blurY = 25;
		_clickFilt.quality = BitmapFilterQuality.MEDIUM;
		
		// Set the size of the image
		setGraphicSize(32, 32);
		this.updateHitbox();
		
		// Setup the mouse events 
		FlxMouseEventManager.add(this, onDown, null, onOver, onOut); 
		
		_sprFilter = createFilterFrames(this);
	}
	
	private function onDown(Sprite:FlxSprite) {
		if (_sprFilter.filters.indexOf(_clickFilt) > -1) {
			_sprFilter.removeFilter(_clickFilt);
		}
		else {
			_sprFilter.addFilter(_clickFilt);
			updateFilter(this, _sprFilter);			
		}
	}
	
	private function onOver(Sprite:FlxSprite) {
		_sprFilter.addFilter(_overFilt);
		updateFilter(this, _sprFilter); 
	}
	
	private function onOut(Sprite:FlxSprite) {
		_sprFilter.removeFilter(_overFilt);
		updateFilter(this, _sprFilter); 
	}
	
	private function createFilterFrames(sprite:FlxSprite) { 
		
		var filterFrames = FlxFilterFrames.fromFrames( 
		sprite.frames, SIZE_INCREASE, SIZE_INCREASE, []); 
		return filterFrames; 
	} 
	
	private function updateFilter(spr:FlxSprite, sprFilter:FlxFilterFrames) 
	{ 
		sprFilter.applyToSprite(spr, false, true); 
	} 


	
}