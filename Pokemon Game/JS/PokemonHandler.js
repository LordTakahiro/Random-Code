/**
* Pokemon game Idea - (Need to write this down so I remember)
*
* Features - 
* -		Battle Swap idea (take one of the opposing trainer's pokemon and add it to your collection)
* -		Level your pokemon based on the level of the pokemon it's going against
* -		Earn money after every battle, after every battle you can go to the shop and buy items for your pokemon
* -		Randomized trainers that are in your skill range(Range determined on the median of your pokemon levels)
* -		Boss battle that is a bit stronger than your skill level every 10 consecutive wins.
* -		Losing allows you to keep 4 of your pokemon in your collection and give the rest up. 
* 		(might be difficult to do, I'll figure it out, maybe regex)
* 
* 
* 		Writing this down for my own sanity:   
*		Exp Gained Forumla: Experience = ((Base Experience * Level) * 1.5) / 7  (Changed Wild to 1.5 and took away Trainer)
*		Exp To Next Level Formula: 0.8(current level + 1)^3 (Using the fast formula because why not)
*
*
**/

var STATUS_NONE = 0;
var STATUS_BURNED = 1;
var STATUS_FROZEN = 2;
var STATUS_PARALYZED = 3;
var STATUS_POISONED = 4;
var STATUS_ASLEEP = 5;
var STATUS_CONFUSED = 6;

var TYPE_NORMAL = 0;
var TYPE_FIRE = 1;
var TYPE_FIGHTING = 2;
var TYPE_WATER = 3;
var TYPE_FLYING = 4;
var TYPE_GRASS = 5;
var TYPE_POISON = 6;
var TYPE_ELECTRIC = 7;
var TYPE_GROUND = 8;
var TYPE_PSYCHIC = 9;
var TYPE_ROCK = 10;
var TYPE_ICE = 11;
var TYPE_BUG = 12;
var TYPE_DRAGON = 13;
var TYPE_GHOST = 14;
var TYPE_DARK = 15;
var TYPE_STEEL = 16;
var TYPE_FAIRY = 17;

var party = [];
var opponentParty = [];
var collection = [];
var allPokemon = [];
var startingFights = [];


function createStartingFights(){
	var opp1 = {pokemon:getPokieById(1)};
	var opp2 = {pokemon1:getPokieById(1),pokemon2:getPokieById(2)};
	var opp3 = {pokemon1:getPokieById(1),pokemon2:getPokieById(2),pokemon3:getPokieById(3)};
	startingFights.push(opp1,opp2,opp3);
}


function calculateNextLevel(currLvl) {
	var toNextLvl = 0.8*Math.pow(currLvl+1,3);
	return toNextLvl;
}

function calculateExpGained(baseExp, level) {
	var expGained = ((baseExp * level) * 1.5) / 7;
	var expShared = expGained / party.length;
	return expShared;
}

function calculateStatValue(baseValue,pokie,isHP){
	 isHP = (isHP === undefined) ? false : isHP; // change false to the default value you want..
	if(isHP){
		var stat = Math.floor((2 * baseValue + 31 + 255) * (pokie.level / 100) + pokie.level + 10)
		console.log(stat);
		return stat;
	}
	
	var stat = Math.floor((2 * baseValue + 31 + 255) * (pokie.level / 100) + 5);
	return stat;
}

function calculateAllStatValues(hpBase,atkBase,defBase,spAtkBase,spDefBase,spdBase,pokie){
	var hpGained = calculateStatValue(hpBase,pokie,true) - pokie.hp;
	pokie.hp = calculateStatValue(hpBase,pokie,true);
	var atkGained = calculateStatValue(atkBase,pokie) - pokie.attack;
	pokie.attack = calculateStatValue(atkBase,pokie); 
	var defGained = calculateStatValue(defBase,pokie) - pokie.defense;
	pokie.defense = calculateStatValue(defBase,pokie); 
	var spAtkGained = calculateStatValue(spAtkBase,pokie) - pokie.spAtk;
	pokie.spAtk = calculateStatValue(spAtkBase,pokie); 
	var spDefGained = calculateStatValue(spDefBase,pokie) - pokie.spDef;
	pokie.spDef = calculateStatValue(spDefBase,pokie); 
	var speedGained = calculateStatValue(spdBase,pokie) - pokie.speed;
	pokie.speed = calculateStatValue(spdBase,pokie); 
	alert(pokie.name + 'Has Gained: \n' + hpGained + ' HP\n' + atkGained + ' ATK\n' + defGained + ' DEF\n' + spAtkGained + ' SPATK\n'
	+ spDefGained + ' SPDEF\n' + speedGained + ' SPD' );
}

function calculateIfLeveled(pokie,expGained){
	var currExp = pokie.currExp;
	var nextLevel = pokie.expToNext;
	var tempExp = currExp + expGained;
	var expNeeded = nextLevel-currExp;
	if(tempExp >= expNeeded){ 
		var expAfterLevel = tempExp - expNeeded;
		pokie.currExp = expNeeded;
		pokie.level++;
		evoPokemon(pokie);
		confirm(pokie.name + ' Has leveled to level ' + pokie.level);
		calculateAllStatValues(pokie.baseHp,pokie.baseAtk,pokie.baseDef,pokie.baseSpAtk,pokie.baseSpDef,
		pokie.baseSpd,pokie);
		pokie.expToNext = calculateNextLevel(pokie.level);
		calculateIfLeveled(pokie,expAfterLevel);
	}
	pokie.currExp += expGained;
	return pokie;
}

function evoPokemon(pokie){
	if(pokie.level == pokie.evoLevel){
		var tempPokieName = pokie.name;
		for(var i=0; i < party.length; i++){
			if(party[i].id == pokie.id){
				var pokieId = parseInt(pokie.id);
				pokie = getPokieById(pokieId+1);
			}
		}
		alert(tempPokieName + ' has evolved into ' + pokie.name);
	}
}


function effectiveness(power, type1, type2, typeAttack){
	
	
	
	
}







