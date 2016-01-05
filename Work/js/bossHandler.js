var bossHeader = document.getElementById("snakesHead");
var bossName = document.getElementById("bossName");
var bossHpText = document.getElementById("bossHealth");
var damageText = document.getElementById("bossDamage");
var reductText = document.getElementById("bossReduction");
var testMonster = document.getElementById("monsterDiv");
var currMonster = {};

// list of damages the monster attacks do. 
// (Can't think of a different way to do this yet.)
var monsterAttacks = [
	10,
	15,
	20,
	25,
	30,
	35,
	40,
	45,
	50,
	100
];

// when this page loads, it clears all creatures in the monster array
// then sets the the boss (temporary solution currently)
function bossOnLoad() {
	clearMonsterArray();
	setTestBossList('1');
};

// still no use for this function, but keeping it here anyways
// this function is to grab the boss by it's id
function getBossById(id) {
	return myChar.monster[id];
}

// no real use for this function anymore, but still keeping it.
// reads all the possible bosses that are placed in the array and reads them out.
// mostly used for testing purposes
function readAllBosses() {
	for (i = 0; i < myChar.monster.length; i++) {
		console.log(myChar.monster[i].name);
	}
}

// empties out the monsters in the array.
function clearMonsterArray() {
	for (i=0;i<myChar.monster.length; i++){
		myChar.monster = [];
	}
	updateCookie(myChar);
}

// creates a boss object to push into the monster array.
function setMonster(id, name, maxHp, atk, low, high, gold, def, perc) {
	var boss = {id:id,name:name,currHp:maxHp,maxHp:maxHp,atk:atk,low:low,high:high,gold:gold,def:def,perc:perc};
	myChar.monster.push(boss);
}

// switch statment function that decides which boss to summon and push into the monster array.
// might not need an array if we're going to do it this way, 
// but might have 2+ monsters summoned at once so might as well keep it as is. 
function setTestBossList(ID) {
	switch(ID) {
		case '1':
			setMonster(1,"Kobold", 50000, 40, 1,15,1000,0,false);
			displayMonster(0);
			break;
		case '2':
			setMonster(2,"Gruul", 100, 10, 1,5,1000,10,true);
			break;
		case '3':
			setMonster(3,"Cho'goth", 400, 10, 1,5,1000,0,false);
			break;
		case '4':
			setMonster(4,"Finn", 500, 10, 1,5,1000,0,false);
			break
		default:
			alert('The ID you have entered does not exist, please enter a boss id that exists');
			break;
	}
	updateCookie(myChar);
}

// this shows the current monster that is summoned.
// might have to modify this function if we want to have more than one monster at once
function displayMonster(id){
	currMonster = myChar.monster[id];
	console.log(currMonster.name);
	testMonster.style.display = "inline";
	testMonster.style.fontSize = "20px";
	bossName.innerHTML = currMonster.name;
	bossHpText.innerHTML = "HEALTH: " + currMonster.currHp + "/" + currMonster.maxHp;
	
}

// this function is to display when the boss does an ability against the user.
// might need to come up with a simplier way of doing this, so I suppose this will be temporary.
function bonusDamageText(value){
	switch(value){
		case 0:
			bossHeader.innerHTML += "<font color=#6C2DC7></br>" + currMonster.name + " used Rend, doing 10 extra damage!</font>";
			break;
		case 1:
			bossHeader.innerHTML += "<font color=#6C2DC7></br>" + currMonster.name + " used Cleave, doing 15 extra damage!</font>";
			break;
		case 2:
			bossHeader.innerHTML += "<font color=#6C2DC7></br>" + currMonster.name + " used Soaring Flame, doing 20 extra damage!</font>";
			break;
		case 3:
			bossHeader.innerHTML += "<font color=#6C2DC7></br>" + currMonster.name + " used Mystical Fire, doing 25 extra damage!</font>";
			break;
		case 4:
			bossHeader.innerHTML += "<font color=#6C2DC7></br>" + currMonster.name + " used Tidal Wave, doing 30 extra damage!</font>";
			break;
		case 5:
			bossHeader.innerHTML += "<font color=#6C2DC7></br>" + currMonster.name + " used Thunder, doing 35 extra damage!</font>";
			break;
		case 6:
			bossHeader.innerHTML += "<font color=#6C2DC7></br>" + currMonster.name + " used Earthquake, doing 40 extra damage!</font>";
			break;
		case 7:
			bossHeader.innerHTML += "<font color=#6C2DC7></br>" + currMonster.name + " used Ice Beam, doing 45 extra damage!</font>";
			break;
		case 8:
			bossHeader.innerHTML += "<font color=#6C2DC7></br>" + currMonster.name + " used Psyshock, doing 50 extra damage!</font>";
			break;
		case 9:
			bossHeader.innerHTML += "<font color=#6C2DC7></br>" + currMonster.name + " used Fissure, doing 100 extra damage!</font>";
			break;
	}
}

// gets how much damage the boss did and returns it.
// also calculates if the boss is going to do a special attack or not.
function getBossAttackValue() {
	var min = currMonster.low;
	var max = currMonster.high;
	var randomNum = Math.floor(Math.random() * (max - min + 1)) + min;
	if (randomNum <= 0) {
		randomNum = 1;
	}
	var randAtk = Math.floor((Math.random() * 100)+1);
	if (randAtk <= currMonster.atk){
		//choose a random attack
		randAtk = Math.floor(Math.random() * monsterAttacks.length);
		randomNum += monsterAttacks[randAtk];
		bonusDamageText(randAtk);
	}
	
	return randomNum;
}

// function called when attacking the boss.
// gets the damage you do to the boss and the damage the boss does to you.
// also calculates damage reduction from the boss if it has any.
function attackBoss(){
	var bossDmg = getBossAttackValue();
	var dmgB4Reduct = getAttackValue();
	var dmgReduct = currMonster.def;
	var playerDmg = dmgB4Reduct;
	var hasCrit = false;
	var critVal = Math.floor((Math.random() * 100)+1);
	if (critVal <= myChar.crit) {
		playerDmg = playerDmg * 2;
		hasCrit = true;
	}
	
	var isPerc = currMonster.perc;
	if(isPerc && dmgReduct > 0){
		playerDmg = dmgB4Reduct * (dmgReduct/100);
		bossHeader.innerHTML += "</br>Original Damage: " + dmgB4Reduct + " Damage After Reduction: " + playerDmg;
	}
	else if(dmgReduct > 0){
		bossHeader.innerHTML += "</br>Original Damage: " + dmgB4Reduct + " Damage After Reduction: " + playerDmg;
		playerDmg = dmgB4Reduct - dmgReduct;
		
	}
	
	removeCharHp(bossDmg);
	currMonster.currHp -= playerDmg;
	if(hasCrit){
		bossHeader.innerHTML += "<font color=red> </br>You've crit for " + playerDmg + " damage to " + currMonster.name + " and took " +
		bossDmg +" damage!</font>";
		hasCrit = false;
	}
	else
	bossHeader.innerHTML += "</br>You've done " + playerDmg + " damage to " + currMonster.name + " and took " + bossDmg +" damage!";

	if(currMonster.currHp <= 0) {
		currMonster.currHp = 0;
		alert("You have killed " + currMonster.name + "! \n You gained " + currMonster.gold + " gold!!!")
		myChar.gold += currMonster.gold;
		myChar.isBossDead = true;
		myChar.bossPageNum = 17;
		updateCookie(myChar);
		window.location = "storyPage.html";
	}
	bossHpText.innerHTML = "HEALTH: " + currMonster.currHp + "/" + currMonster.maxHp;
}

// base controller that handles the onclick functionality from html.
function bossPageController(element) {
	switch(element) {
		case "SetBoss":
			setTestBossList(bossId.value);
			break;
		case "BossList":
			readAllBosses();
			break;
		case "ClearBoss":
			clearMonsterArray();
			break;
		case "testMonster":
			displayMonster(0);
			break;
		case "attackMonster":
			attackBoss();
			break;
		case "attackMonsterx5":
			attackBoss();
			attackBoss();
			attackBoss();
			attackBoss();
			attackBoss();
			break;
		case "playerHp":
			myChar.hp = 100000;
			updateCookie(myChar);
			break;
	}
}



