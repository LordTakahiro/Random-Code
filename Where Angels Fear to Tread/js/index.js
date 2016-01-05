//Global Variables

var doc = document.getElementById("adventure");
var header = document.getElementById("thisHeader");
var stats = document.getElementById("stats");
var newPage = document.getElementById("newPage");
var adv = document.getElementById("beginning");
var additional = document.getElementById("additional");

var isStrRolled = false;
var isDexRolled = false;
var isConRolled = false;
var isWisRolled = false;
var isIntRolled = false;
var isChaRolled = false;
var isNameFilled = false;
var allStatsRolled = false;
var readyToBegin = false;
var htmlString = '</br>';

//This is the static values of each of the attributes
var STR_STAT = 1;
var DEX_STAT = 2;
var CON_STAT = 3;
var WIS_STAT = 4;
var INT_STAT = 5;
var CHA_STAT = 6;

var equipment = {
	head: "",
	arms: "",
	chest: "",
	boots: "",
	pants: "",
	neck: "",
	weapon: "",
	headStat: 0,
	headBonus: 0,
	armsStat: 0,
	armsBonus: 0,
	chestStat: 0,
	chestBonus: 0,
	bootsStat: 0,
	bootsBonus: 0,
	pantsStat: 0,
	pantsBonus: 0,
	neckStat: 0,
	neckBonus: 0,
	weaponStat: 0,
	weaponBonus: 0,
	weaponBonusLow: 0,
	weaponBonusHigh: 0
};

//character object
var myChar = {
  str: 0,
  dex: 0,
  con: 0,
  wis: 0,
  int: 0,
  cha: 0,
  atk: 0,
  hp: 0,
  fort: 0,
  refl: 0,
  will: 0,
  crit: 0,
  name: "",
  equip: equipment,
  class: "",
  race: "",
  gold: 0,
  height: "",
  weight: "",
  eyeColor: "",
  hairColor: "",
  monster: [],
  isBossDead: false,
  bossPageNum: 0
};


// Array of names made for the basic character
var names = ['Baern Battlehammer', 'Oskar Fireforge', 'Eryn Nightbreeze', 'Andraste Starflower', 'Ander Greenbottle', 'Roscoe Tealeaf', 'Salazar the Grey', 'Mara of the White Sand', 'Borvik Brightwood', 'Lou Kang'];


//sets the cookie
function setCookie(name, value, days)
{
  if (days) {
    var date = new Date();
    date.setTime(date.getTime()+days*24*60*60*1000); // ) removed
    var expires = "; expires=" + date.toGMTString(); // + added
  }
  else {
    var expires = "";
  }
	
	var stringObj = JSON.stringify(value);
	document.cookie = name+"=" + stringObj+expires + ";path=/"; // + and " added
}

function updateCookie(value) {
	setCookie("testCookie", value, 15);
}

//reads the cookie when called
function readCookie(name) {
    var result = document.cookie.match(new RegExp(name + '=([^;]+)'));
	result && (result = JSON.parse(result[1]));
	return result;
}

//deletes the cookie when called
function deleteCookie(name) {
  document.cookie = [name, '=; expires=Thu, 01-Jan-1970 00:00:01 GMT; path=/; domain=.', window.location.host.toString()].join('');
}
//default basic character
function basicCharacter() {
	myChar.str = 12;
	myChar.dex = 12;
	myChar.con = 12;
	myChar.wis = 12;
	myChar.int = 12;
	myChar.cha = 12;
	var nameRound = Math.floor(Math.random() * 10);
	myChar.name = names[nameRound];
	doc.innerHTML = "Your name is now " + myChar.name + " and all your stats have defaulted to 12";
	header.innerHTML = myChar.name + "'s Character Sheet" + htmlString + "You Are Now Ready To Begin Your Adventure!!!";
	calculateBaseSavesAtkHp();
	readyToBegin = true;
	newPage.style.visibility= "visible";
	var submit = document.getElementById("submitCharacter");
	cleanUpSpecific(newPage, submit);
	cleanUp(adv);
	cleanUp(stats);
	cleanUp(additional);
}

//loads the create character page
function advancedCharacter() {
  header.innerHTML = "Advanced Character Creation";
  doc.innerHTML = statString();
  stats.style.visibility= "visible";
}

// function to make fort, refl, will, atk, and hp values
function calculateBaseSavesAtkHp() {
	
	// for now I'm going to have the values be
	// 10 + (respective stat/2) 
	// con will get used twice, hp and fort
	myChar.fort = Math.floor(10 + (myChar.con / 2));
	myChar.refl = Math.floor(10 + (myChar.dex / 2));
	myChar.will = Math.floor(10 + (myChar.wis / 2));
	myChar.atk = Math.floor(10 + (myChar.str / 2));
	myChar.hp = Math.floor(10 + (myChar.con));
	myChar.crit = Math.floor(15 + (myChar.dex / 3));
	updateCookie(myChar);
}

function removeCharHp(value) {
	myChar.hp -= value;
	
	if(myChar.hp <= 0) {
		myChar.hp = 0;
		if(confirm("I am sorry to inform you... but you're health hit 0...you're dead.... ")) {
			window.location="deathPage.html";
		}
		else {
			window.location="deathPage.html";
		}
	}
}

// checks if the user really wants this name
function submitCharName() {
  var confirmMsg = 'Are you sure you want this character name? You may not change it beyond this point.'
  var charName = document.getElementById("charName").value;
  if (confirm(confirmMsg)) {
    myChar.name = charName;
    document.getElementById("userName").innerHTML = "Character Name: " + charName;
	cleanUpSpecific(stats, document.getElementById("charName"));
	cleanUpSpecific(stats, document.getElementById("charNameBtn"));
    header.innerHTML = charName + "'s Character Sheet";
    isNameFilled = true;
  } 
  else {
    //do Nothing
  }
  
  nameAndStatsRolled();
}

// basic function for the string on Advanced Creation page
function statString() {
  var statString = "";
  if(window.location.href.indexOf("index.html") > -1) {
	  doc.innerHTML = "Welcome to Character Creation!" + htmlString + htmlString;
	  statString = doc.innerHTML + "Your Strength is now: " + myChar.str + htmlString + "Your Dexterity is now: " + myChar.dex + htmlString 
	  + "Your Constitution is now: " + myChar.con + htmlString + "Your Wisdom is now: " + myChar.wis + htmlString + 
	  "Your Intelligence is now: " + myChar.int + htmlString + "Your Charisma is now: " + myChar.cha;
  }
  else {
	  
	var weaponLow = myChar.equip.weaponBonusLow;
	var weaponHigh = myChar.equip.weaponBonusHigh;
	var weapon = myChar.equip.weapon;
	if (weaponLow == undefined || weaponHigh == undefined || weapon == "") {
		weapon = "You have no weapon equipped";
		weaponLow = 0;
		weaponHigh = 0;
	}
	
	statString = "Name: " + myChar.name + htmlString + "Strength : " + myChar.str + htmlString + "Dexterity : " + myChar.dex + 
	htmlString + "Constitution : " + myChar.con + htmlString + "Wisdom : " + myChar.wis + htmlString + "Intelligence : " + myChar.int 
	+ htmlString + "Charisma : " + myChar.cha + htmlString + "Fortitude: " + myChar.fort + htmlString + "Reflex: " + myChar.refl + 
	htmlString + "Will: " + myChar.will + htmlString + "Attack: " + myChar.atk + htmlString + "Health: " + myChar.hp + htmlString + 
	"Gold: " + myChar.gold + htmlString + "Weapon: " + weapon + " (" + weaponLow + " - " + weaponHigh + ")"; 
  }
  
  return statString;
}

function equipmentString() {
	
	var equipString = "";
	
	equipString = "Helm: " + myChar.equip.head + " + " + myChar.equip.headBonus + " " + attributeToString(myChar.equip.headStat) + htmlString 
	+ "Arms: " + myChar.equip.arms + " + " + myChar.equip.armsBonus + " " + attributeToString(myChar.equip.armsStat) + htmlString
	+ "Chest: " + myChar.equip.chest + " + " + myChar.equip.chestBonus + " " + attributeToString(myChar.equip.chestStat) + htmlString
	+ "Boots: " + myChar.equip.boots + " + " + myChar.equip.bootsBonus + " " + attributeToString(myChar.equip.bootsStat) + htmlString
	+ "Pants: " + myChar.equip.pants + " + " + myChar.equip.pantsBonus + " " + attributeToString(myChar.equip.pantsStat) + htmlString
	+ "Neck: " + myChar.equip.neck + " + " + myChar.equip.neckBonus + " " + attributeToString(myChar.equip.neckStat) + htmlString 
	+ "Weapon: " + myChar.equip.weapon + " ( " + myChar.equip.weaponBonusLow + "-" + myChar.equip.weaponBonusHigh + " )";
	
	return equipString;
}

function submitCharacter(element) {
	var theElement = document.getElementById(element);
	var race = document.getElementById("Race List").value;
	var hair = document.getElementById("Hair Color").value;
	var eyes = document.getElementById("Eye Color").value;
	var heightRegEx = /^([2-7]{1})\'((\s?)(-?)(\s?)([0-9]|(1[0-1]))\")?$/;
	var weightRegEx = /^[0-9]+$/;
	var heightValue = document.getElementById("charHeight").value;
	var weightValue = document.getElementById("charWeight").value;
	var heightOK = heightRegEx.exec(heightValue) && heightRegEx != null;
	if (heightOK != null) {
		var weightOK = weightRegEx.exec(weightValue) && weightValue <= 250 && weightValue >= 50;
		if (weightOK) {
			if (race != 0 && hair != 0 && eyes != 0) {
				myChar.race = race.text;
				myChar.hairColor = hair.text;
				myChar.eyeColor = eyes.text;
				readyToBegin = true;
				while (additional.hasChildNodes()) {
					additional.removeChild(additional.lastChild);
				}
				newPage.removeChild(theElement);
			}
			else {
				alert('You Must Pick A Valid Race/Hair Color/Eye Color');
			}
		}
		else {
			alert('Your character is only allowed to weigh between 50 to 250lb\'s');
		}
	}
	else {
		alert('You must adjust your height to between 2\'0\" - 7\'11\"');
	}
}

// checks if all of the stats have been rolled
// then make the next page button visible to the player
function nameAndStatsRolled() {
	if (isStrRolled && isDexRolled && isConRolled && isWisRolled && isIntRolled && isChaRolled) {
		allStatsRolled = true;
		header.innerHTML = header.innerHTML + htmlString + "You Are Now Ready To Begin Your Adventure!!!";
	}
	
	if (allStatsRolled && isNameFilled) {
		calculateBaseSavesAtkHp()
		newPage.style.visibility= "visible";
		additional.style.visibility= "visible";
	}
}

// rolls your stats base 8 + stat rolled on a d10
function statRoll(element) {
  var randomStat = 0;
  var theElement = document.getElementById(element);
  
  switch(element) {
    case "3":
      randomStat = Math.floor((Math.random() * 10)+9);
      myChar.str = randomStat;
      doc.innerHTML = statString();
	  isStrRolled = true;
	  cleanUpSpecific(stats, theElement);
      break;
    case "4":
      randomStat = Math.floor((Math.random() * 10)+9);
      myChar.dex = randomStat;
      doc.innerHTML = statString();
	  isDexRolled = true;
	  nameAndStatsRolled();
	  cleanUpSpecific(stats, theElement);
      break;
    case "5":
      randomStat = Math.floor((Math.random() * 10)+9);
      myChar.con = randomStat;
      doc.innerHTML = statString();
	  isConRolled = true;
	  nameAndStatsRolled();
	  cleanUpSpecific(stats, theElement);
      break;
    case "6":
      randomStat = Math.floor((Math.random() * 10)+9);
      myChar.wis = randomStat;
      doc.innerHTML = statString();
	  isWisRolled = true;
	  nameAndStatsRolled();
	  cleanUpSpecific(stats, theElement);
      break;
    case "7":
      randomStat = Math.floor((Math.random() * 10)+9);
      myChar.int = randomStat;
      doc.innerHTML = statString();
	  isIntRolled = true;
	  nameAndStatsRolled();
	  cleanUpSpecific(stats, theElement);
      break;
    case "8":
      randomStat = Math.floor((Math.random() * 10)+9);
      myChar.cha = randomStat;
      doc.innerHTML = statString();
	  isChaRolled = true;
	  nameAndStatsRolled();
	  cleanUpSpecific(stats, theElement);
      break;
  }
}

function cleanUpSpecific(parent, element) {
	parent.removeChild(element);
}

function cleanUp(parent) {
	while (parent.hasChildNodes()) {
		parent.removeChild(parent.lastChild);
	}
}

// controller function of the adventure
function indexController(element) {
  var theElement = document.getElementById(element);
  switch(element) {
    case "1":
		basicCharacter();
		cleanUp(adv);
		break;
    case "2":
		advancedCharacter();
		cleanUp(adv);
		break;
    case "3":
    case "4":
    case "5":
    case "6":
    case "7":
    case "8":
		statRoll(element);
		break;
	case "submitCharacter":
		submitCharacter(element);
		break;
    case "beginAdventure":
		if(readyToBegin) {
			cleanUp(adv);
			cleanUp(stats);
			cleanUp(additional);
			cleanUp(newPage);
			setCookie("testCookie", myChar, 7);
			window.location = "page2.html";
		}
		else {
			alert('You must finish your character sheet before being ready to begin!');
		}
      break;
  }
}