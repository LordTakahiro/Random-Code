package;

 import flixel.FlxBasic;
 import flixel.FlxG;
 import flixel.FlxObject;
 import flixel.FlxSprite;
 import flixel.addons.display.FlxExtendedSprite;
 import flixel.group.FlxGroup.FlxTypedGroup;
 import flixel.input.mouse.FlxMouseEventManager;
 import flixel.text.FlxText;
 import flixel.ui.FlxButton;
 import flixel.util.FlxColor;
 using flixel.util.FlxSpriteUtil;

/**
 * ...
 * @author Takahiro
 */

 class Inventory extends FlxTypedGroup<FlxSprite> {
	 
	 private static var MAX_SLOTS:Int = 6;
	 private static var MAX_SPACING:Int = 34; 
     private var _sprBack:FlxSprite;
	 private var _btnLeft:FlxButton;
	 private var _btnRight:FlxButton;
	 private var _slotArry:Array<FlxSprite>;

     public function new(equipment:Array<Dynamic>) { 
         super();
		 _slotArry = new Array<FlxSprite>();
         _sprBack = new FlxSprite().makeGraphic(320, 240, FlxColor.BLACK); // This just draws separators
         _sprBack.drawRect(0, 175, 320, 1, FlxColor.WHITE);
		 _sprBack.drawRect(130, 0, 1, 175, FlxColor.WHITE);
		 
		 _btnLeft = new FlxButton(15, 192.5, '', invButton); // Left Button
		 _btnLeft.loadGraphic(AssetPaths.arrowLeft__png);
		 _btnLeft.onOver.callback = onOver.bind(0);
		 _btnLeft.onDown.callback = onDown.bind(0);
		 _btnLeft.onOut.callback = onOut.bind(0);
		 
		 _btnRight = new FlxButton(275, 192.5, '', invButton); // Right Button
		 _btnRight.loadGraphic(AssetPaths.arrowRight__png);
		 _btnRight.onOver.callback = onOver.bind(1);
		 _btnRight.onDown.callback = onDown.bind(1);
		 _btnRight.onOut.callback = onOut.bind(1);
		 
		 add(_sprBack);
		 add(_btnLeft);
		 add(_btnRight);
		 
		 FlxG.plugins.add(new FlxMouseEventManager());
 		 createSlots(); 

         forEach(function(spr:FlxSprite)
         {
             spr.scrollFactor.set(0, 0);
         });
     }
	 
	 private function createSlots():Void {	//Creating inventory slots
		 var i:Int = 0;
		 while (i < MAX_SLOTS) {
			 
			 var slots:InvSlot = new InvSlot(45, 174, MAX_SPACING, 0, i);
			 add(slots);
			 _slotArry.insert(i, slots);
			 i++;
		 }
	 }
	 
	 private function onOver(e:Int) :Void { //When over a button/slot
		 switch (e) {
			 case 0:  _btnLeft.loadGraphic(AssetPaths.arrowLeftOver__png);
		 	 case 1: _btnRight.loadGraphic(AssetPaths.arrowRightOver__png);
		 }
	 }
	 
	 private function onDown(e:Int) :Void { //When button/slot is down
		 switch (e) {
			 case 0: _btnLeft.loadGraphic(AssetPaths.arrowLeftDown__png);
		 	 case 1: _btnRight.loadGraphic(AssetPaths.arrowRightDown__png);
		 }
	 }
	 
	 private function onOut(e:Int) :Void { //When mouse moves away from a button/slot
		 switch (e) {
			 case 0: _btnLeft.loadGraphic(AssetPaths.arrowLeft__png);
		 	 case 1: _btnRight.loadGraphic(AssetPaths.arrowRight__png);
		 }
	 }
	 
	 public function invButton() {
		 
	 }

     public function updateItems(equipment:Array<Dynamic>):Void {
		 
     }
	 
	 public function addItem(item:FlxObject): Void {
		 
	 }
	 
	 public function removeItem(item:FlxObject):Void {
		 
	 }
 }