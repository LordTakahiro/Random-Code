var statRef = document.getElementById("statReference");
var equipInfo = document.getElementById("equipInfo");
var buttonInfo = document.getElementById("classCreation");
var header2 = document.getElementById("header2");
var adventure = document.getElementById("adventure");

var toggle = true;

//listens for when the page loads
document.addEventListener("DOMContentLoaded", function() {
	onCharLoad();
})

//loads the cookies when the new page loads
function onCharLoad() {
	var newChar = readCookie("testCookie");
	if (!!newChar) {
		myChar = newChar;
	}
	else {
		// do nothing for now
	}
}

// toggle the stats on and off
function statOrEquip(isEquip) {
	if(toggle) {
		
		var newDiv = document.createElement('div');
		var divIdName = 'statReference';
		newDiv.setAttribute('id',divIdName);
		statRef.setAttribute("align", "left");
		if (isEquip) {
			statRef.innerHTML = equipmentString();
		}
		else
		statRef.innerHTML = statString();
	
		toggle = false;
	}
	else if(!toggle) {
		cleanUp(statRef);
		toggle = true;
	}
}

function classEquip(choice) {
	switch(choice) {
		case "Wizard":
			myChar.equip.head = "Pointy Wizard Hat";
			myChar.equip.arms = "Worn Cloth Arms";
			myChar.equip.chest = "Worn Cloth Chest";
			myChar.equip.boots = "Worn Cloth Boots";
			myChar.equip.pants = "Worn Cloth Pants";
			myChar.equip.neck = "Rusty Necklace";
			myChar.equip.weapon = "Worn Staff";
			myChar.equip.weaponBonusLow = 1;
			myChar.equip.weaponBonusHigh = 10;
			break;
		case "Cleric":
			myChar.equip.head = "Worn Mail Cowl";
			myChar.equip.arms = "Worn Mail Arms";
			myChar.equip.chest = "Worn Mail Chest";
			myChar.equip.boots = "Worn Mail Boots";
			myChar.equip.pants = "Worn Mail Pants";
			myChar.equip.neck = "Rusty Necklace";
			myChar.equip.weapon = "Worn Mace";
			myChar.equip.weaponBonusLow = 1;
			myChar.equip.weaponBonusHigh = 12;
			break;
		case "Warrior":
			myChar.equip.head = "Worn Plate Helm";
			myChar.equip.arms = "Worn Plate Arms";
			myChar.equip.chest = "Worn Plate Chest";
			myChar.equip.boots = "Worn Plate Boots";
			myChar.equip.pants = "Worn Plate Pants";
			myChar.equip.neck = "Rusty Necklace";
			myChar.equip.weapon = "Worn Sword";
			myChar.equip.weaponBonusLow = 1;
			myChar.equip.weaponBonusHigh = 20;
			break;
		case "Rogue":
			myChar.equip.head = "Worn Leather Mask(creepy)";
			myChar.equip.arms = "Worn Leather ";
			myChar.equip.chest = "Worn Leather ";
			myChar.equip.boots = "Worn Leather ";
			myChar.equip.pants = "Worn Leather ";
			myChar.equip.neck = "Rusty Necklace";
			myChar.equip.weapon = "Worn Dagger";
			myChar.equip.weaponBonusLow = 1;
			myChar.equip.weaponBonusHigh = 15;
			break;
	}
	
	cleanUp(buttonInfo);
	
	myChar.gold = 25;
	newClassChosen();
}

function classChoice(choice) {
	switch(choice) {
		case "Wizard":
			myChar.int += 2;
			myChar.wis += 2;
			myChar.str += -1;
			myChar.con += -1;
			calculateBaseSavesAtkHp();
			myChar.class = "Wizard";
			break;
		case "Cleric":
			myChar.cha += 2;
			myChar.wis += 2;
			myChar.dex += -1;
			myChar.refl += -1;
			calculateBaseSavesAtkHp();
			myChar.class = "Cleric";
			break;
		case "Warrior":
			myChar.str += 2;
			myChar.con += 2;
			myChar.dex += -1;
			myChar.refl += -1;
			calculateBaseSavesAtkHp();
			myChar.class = "Warrior";
			break;
		case "Rogue":
			myChar.dex += 2;
			myChar.cha += 2;
			myChar.fort += -1;
			myChar.will += -1;
			calculateBaseSavesAtkHp();
			myChar.class = "Rogue";
			break;	
	}
}

function newClassChosen() {
	var htmlString = '</br>';
	equipInfo.innerHTML = "You have obtained these items for class: " + myChar.class + htmlString + myChar.equip.head + htmlString + 
	myChar.equip.arms + htmlString + myChar.equip.chest + htmlString + myChar.equip.boots 
	+ htmlString + myChar.equip.pants + htmlString + myChar.equip.neck + htmlString + myChar.equip.weapon + htmlString + myChar.gold + 
	" Gold";
}

function equipNewItem(equipType, name, value, stat, atkLow, atkHigh) {
	var atkLow = atkLow || 0;
	var atkHigh = atkHigh || 0;
	var confirmMsg = 'Are you sure you want to change this ';
	var oldItemStat = "";
	var oldItemBonus = '0';
	switch(equipType) {
		case 1:
			if(confirm(confirmMsg + "'Helm'\n"+ "Old Item: " + myChar.equip.head + "\nNew Item: " + name)) {
				myChar.equip.head = name;
				if(myChar.equip.headBonus != 0) {
					oldItemStat = myChar.equip.headStat;
					oldItemBonus = myChar.equip.headBonus;
					addRemoveStats(oldItemStat, oldItemBonus, true);
					alert('Old Stats: +' + oldItemBonus + ' ' + attributeToString(oldItemStat) + '\nNew Stats: +' + value + ' ' + 
					attributeToString(stat));
				}
				else
					alert('New Item Stats: +' + value + ' ' + attributeToString(stat));
				
				myChar.equip.headStat = stat;
				myChar.equip.headBonus = value;
				addRemoveStats(value, stat);
				updateCookie(myChar);
			}
			break;
		case 2:
			if(confirm(confirmMsg + "'Gloves'\n"+ "Old Item: " + myChar.equip.arms + "\nNew Item: " + name)) {
				myChar.equip.arms = name;
				if(myChar.equip.armsBonus != 0) {
					oldItemStat = myChar.equip.armsStat;
					oldItemBonus = myChar.equip.armsBonus;
					addRemoveStats(oldItemStat, oldItemBonus, true);
					alert('Old Stats: +' + oldItemBonus + ' ' + oldItemStat + '\nNew Stats: +' + value + ' ' + attributeToString(stat));
				}
				else
					alert('New Item Stats: +' + value + ' ' + attributeToString(stat));
				
				myChar.equip.armsStat = stat;
				myChar.equip.armsBonus = value;
				addRemoveStats(value, stat);
				updateCookie(myChar);
			}
			break;
		case 3:
			if(confirm(confirmMsg + "'Chest Piece'\n"+ "Old Item: " + myChar.equip.chest + "\nNew Item: " + name)) {
				myChar.equip.chest = name;
				if(myChar.equip.chestBonus != 0) {
					oldItemStat = myChar.equip.chestStat;
					oldItemBonus = myChar.equip.chestBonus;
					addRemoveStats(oldItemStat, oldItemBonus, true);
					alert('Old Stats: +' + oldItemBonus + ' ' + oldItemStat + '\nNew Stats: +' + value + ' ' + attributeToString(stat));
				}
				else
					alert('New Item Stats: +' + value + ' ' + attributeToString(stat));
				
				myChar.equip.chestStat = stat;
				myChar.equip.chestBonus = value;
				addRemoveStats(value, stat);
				updateCookie(myChar);
			}
			break;
		case 4:
			if(confirm(confirmMsg + "'Boots'\n"+ "Old Item: " + myChar.equip.boots + "\nNew Item: " + name)) {
				myChar.equip.boots = name;
				if(myChar.equip.bootsBonus != 0) {
					oldItemStat = myChar.equip.bootsStat;
					oldItemBonus = myChar.equip.bootsBonus;
					addRemoveStats(oldItemStat, oldItemBonus, true);
					alert('Old Stats: +' + oldItemBonus + ' ' + oldItemStat + '\nNew Stats: +' + value + ' ' + attributeToString(stat));
				}
				else
					alert('New Item Stats: +' + value + ' ' + attributeToString(stat));
				
				myChar.equip.bootsStat = stat;
				myChar.equip.bootsBonus = value;
				addRemoveStats(value, stat);
				updateCookie(myChar);
			}
			break;
		case 5:
			if(confirm(confirmMsg + "'Pants'\n"+ "Old Item: " + myChar.equip.pants + "\nNew Item: " + name)) {
				myChar.equip.pants = name;
				if(myChar.equip.pantsBonus != 0) {
					oldItemStat = myChar.equip.pantsStat;
					oldItemBonus = myChar.equip.pantsBonus;
					addRemoveStats(oldItemStat, oldItemBonus, true);
					alert('Old Stats: +' + oldItemBonus + ' ' + oldItemStat + '\nNew Stats: +' + value + ' ' + attributeToString(stat));
				}
				else
					alert('New Item Stats: +' + value + ' ' + attributeToString(stat));
				
				myChar.equip.pantsStat = stat;
				myChar.equip.pantsBonus = value;
				addRemoveStats(value, stat);
				updateCookie(myChar);
			}
			break;
		case 6:
			if(confirm(confirmMsg + "'Neck Piece'\n"+ "Old Item: " + myChar.equip.neck + "\nNew Item: " + name)) {
				myChar.equip.neck = name;
				if(myChar.equip.neckBonus != 0) {
					oldItemStat = myChar.equip.neckStat;
					oldItemBonus = myChar.equip.neckBonus;
					addRemoveStats(oldItemStat, oldItemBonus, true);
					alert('Old Stats: +' + oldItemBonus + ' ' + oldItemStat + '\nNew Stats: +' + value + ' ' + attributeToString(stat));
				}
				else
					alert('New Item Stats: +' + value + ' ' + attributeToString(stat));
				
				myChar.equip.neckStat = stat;
				myChar.equip.neckBonus = value;
				addRemoveStats(value, stat);
				updateCookie(myChar);
			}
			break;
		case 7:
			if(confirm(confirmMsg + "'Weapon'\n"+ "Old Item: " + myChar.equip.weapon + "\nNew Item: " + name)) {
				
				equipWeapon(atkLow, atkHigh, name);
				
				if (stat != 0) {
					if(myChar.equip.weaponBonus != 0) {
						oldItemStat = myChar.equip.weaponStat;
						oldItemBonus = myChar.equip.weaponBonus;
						addRemoveStats(oldItemStat, oldItemBonus, true);
						alert('Old Stats: +' + oldItemBonus + ' ' + attributeToString(oldItemStat) + '\nNew Stats: +' + value + ' ' + 
						attributeToString(stat));	
					}
					else
						alert('New Item Stats: +' + value + ' ' + attributeToString(stat));		
					
					myChar.equip.weaponStat = stat;
					myChar.equip.weaponBonus = value;
					addRemoveStats(value, stat);	
				}
				else if(value == 0 && myChar.equip.weaponBonus > 0) {
					oldItemStat = myChar.equip.weaponStat;
					oldItemBonus = myChar.equip.weaponBonus;
					myChar.equip.weaponStat = 0;
					myChar.equip.weaponBonus = 0;
					addRemoveStats(oldItemStat, oldItemBonus, true);
					alert('Removed Stats: -' + oldItemBonus + ' ' + attributeToString(oldItemStat));
				}
				
				updateCookie(myChar); 
			}
			break;
	}
}

function attributeToString(stat) {
	var ret = ""
	switch(stat) {
		case 1:
			ret = "Str";
			return ret;
			break;
		case 2:
			ret = "Dex";
			return ret;
			break;
		case 3:
			ret = "Con";
			return ret;
			break;
		case 4:
			ret = "Wis";
			return ret;
			break;
		case 5:
			ret = "Int";
			return ret;
			break;
		case 6:
			ret = "Cha";
			return ret;
			break;
	}
}

function equipWeapon(atkLow, atkHigh, name) {
	myChar.equip.weapon = name;
	oldItemBonusAtkLow = myChar.equip.weaponBonusLow;
	oldItemBonusAtkHigh = myChar.equip.weaponBonusHigh;
	alert('Old Attack: +' + oldItemBonusAtkLow + '-' + oldItemBonusAtkHigh + '\nNew Attack: +' + atkLow + '-' + atkHigh);
	myChar.equip.weaponBonusLow = atkLow;
	myChar.equip.weaponBonusHigh = atkHigh;
}

function addRemoveStats(value, stat, removeLast) {
	var removeLast = removeLast || false;
	switch(stat) {
		case 1:
			if (removeLast)
			{
				myChar.str -= value;
			}
			else
			myChar.str += value;	
		
			calculateBaseSavesAtkHp();
			break;
		case 2:
			if (removeLast)
			{
				myChar.dex -= value;
			}
			else
			myChar.dex += value;
		
			calculateBaseSavesAtkHp();
			break;
		case 3:
			if (removeLast)
			{
				myChar.con -= value;
			}
			else
			myChar.con += value;
		
			calculateBaseSavesAtkHp();
			break;
		case 4:
			if (removeLast)
			{
				myChar.wis -= value;
			}
			else
			myChar.wis += value;
		
			calculateBaseSavesAtkHp();
			break;
		case 5:
			if (removeLast)
			{
				myChar.int -= value;
			}
			else
			myChar.int += value;
		
			calculateBaseSavesAtkHp();
			break;
		case 6:
			if (removeLast)
			{
				myChar.cha -= value;
			}
			else
			myChar.cha += value;
		
			calculateBaseSavesAtkHp();
			break;
	}
}

function getAttackValue() {
	var min = myChar.equip.weaponBonusLow;
	var max = myChar.equip.weaponBonusHigh;
	var randomNum = Math.floor(Math.random() * (max - min + 1)) + min;
	if (randomNum <= 0) {
		randomNum = 1;
	}
	
	randomNum += myChar.atk;
	return randomNum;
}

function adventureController(element) {
	switch(element) {
		case "ref":
			statOrEquip(false);
			break;
		case "showEquip":
			statOrEquip(true);
			break;
		case "reset":
			window.location="index.html";
			deleteCookie("testCookie");
		case "attack":
			getAttackValue(myChar.equip.weaponBonusLow, myChar.equip.weaponBonusHigh);
			break;
		case "testEquip":
			var randomEquip = [
				function() { equipNewItem(1, "Helm of Awesome", 5, 1); },
				function() { equipNewItem(2, "Arms of Awesome", 4, 2); },
				function() { equipNewItem(3, "Plate of Awesome", 3, 3); },
				function() { equipNewItem(4, "Boots of Awesome", 2, 4); },
				function() { equipNewItem(5, "Leggings of Awesome", 1, 5); },
				function() { equipNewItem(6, "Necklace of Awesome", 10, 6); },
				function() { equipNewItem(7, "Blade of Awesome", 5, 1, 15, 50); }
			];
			var randomNum = Math.floor(Math.random() * (randomEquip.length));
			randomEquip[randomNum].call();
			break;
		case "storyPage":
			window.location = "storyPage.html";
			updateCookie(myChar);
			break;
		case "Wizard":
			classChoice("Wizard");
			classEquip("Wizard");
			updateCookie(myChar);
			break;
		case "Cleric":
			classChoice("Cleric");
			classEquip("Cleric");
			updateCookie(myChar);
			break;
		case "Warrior":
			classChoice("Warrior");
			classEquip("Warrior");
			updateCookie(myChar);
			break;
		case "Rogue":
			classChoice("Rogue");
			classEquip("Rogue");
			updateCookie(myChar);
			break;
	}
}