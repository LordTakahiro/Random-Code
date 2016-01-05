var pokeHead = document.getElementById("pokeHeader");
var mahHeadr = document.getElementById("thisHeader");
document.getElementById("miPokies").addEventListener("click",searchForPokies,false);
document.getElementById("evo").addEventListener("click",evoMahPokie,false);
document.getElementById("givePokie").addEventListener("click",givePokie,false);
document.getElementById("expGain").addEventListener("click",testPokieExp,false);
document.getElementById("beginGame").addEventListener("click",startGame,false);
	
	function searchForPokies(){
		var mahPokie = getPokieById(document.getElementById("arrayTest").value);
		mahHeadr.innerHTML = mahPokie.name;
	}
	
	function testPokieExp(){
		var pokie = party[0];
		var expGain  = calculateExpGained(65,100);
		var nextLevel = calculateNextLevel(pokie.level);
		pokie.expToNext = nextLevel;
		var newPokie = calculateIfLeveled(pokie,expGain);
	}
	
	function givePokie(){
		var random = Math.floor((Math.random() * allPokemon.length));
		alert('YOU HAVE OBTAINED ' + allPokemon[random].name);
		for(var i=0; i < party.length; i++){
			if(party[i].id == allPokemon[random].id){
				alert('YOU ALREADY HAVE ' + allPokemon[random].id + ' IN YOUR PARTY! TRY AGAIN!');
				return;
			}
		}
		putPokieInParty(allPokemon[random]);
	}
	
	function putPokieInParty(pokie){
		if(party.length <= 4){
			party.push(pokie);
		}
	}
	
	function evoMahPokie(){
		var pokie = allPokemon[3];
		pokie.level = 15;
		putPokieInParty(pokie);
		evoPokemon(pokie);
	}
	
	function getPokieById(id){
		var pokieId = parseInt(id)
		return allPokemon[pokieId-1];
	}
	
	function setPokiemon(id,name,type,type2,baseHp,baseAttack,baseDefense,baseSpAtk,baseSpDef,baseSpeed,baseExp,evoLevel,needsStone,stoneId){
		var tempPokie = {level:5};
		var hp = calculateStatValue(baseHp,tempPokie,true);
		var attack = calculateStatValue(baseAttack,tempPokie);
		var defense = calculateStatValue(baseDefense,tempPokie);
		var spAtk = calculateStatValue(baseSpAtk,tempPokie);
		var spDef = calculateStatValue(baseSpDef,tempPokie);
		var speed = calculateStatValue(baseSpeed,tempPokie);
		var Type2 = type2;
		if (Type2 == null){
			Type2 = -1;
		}
		var pokemon = {id:id,name:name,type:type,type2:Type2,hp:hp,baseHp:baseHp,attack:attack,baseAtk:baseAttack,defense:defense,baseDef:
		baseDefense,spAtk:spAtk,baseSpAtk:baseSpAtk,spDef:spDef,baseSpDef:baseSpDef,speed:speed,baseSpd:baseSpeed,accuracy:100
		,evasion:100,status:0,level:5,baseExp:baseExp,currExp:0,expToNext:0,evoLevel:evoLevel,needsStone:needsStone,stoneId:stoneId,
		slot1:-1,slot2:-1,slot3:-1,slot4:-1};
		
		allPokemon.push(pokemon);
	}
	
	function startGame(){
		window.location="PokemonIndex.html";
	}
	
	function getPokeFromXML(){
	if (window.XMLHttpRequest)
	  {// code for IE7+, Firefox, Chrome, Opera, Safari
	  xmlhttp = new XMLHttpRequest();
	  }
	else
	  {// code for IE6, IE5
	  xmlhttp = new ActiveXObject("Microsoft.XMLHTTP");
	  }
	xmlhttp.open("GET","pokemon.xml",false);
	xmlhttp.send();
	xmlDoc = xmlhttp.responseXML; 
	var pokemon_xml = xmlDoc.getElementsByTagName('pokemon');
	for(var i=0; i < pokemon_xml.length;i++){
		var id = pokemon_xml[i].getAttribute('id');
		var name = pokemon_xml[i].getAttribute('Name');
		var type = pokemon_xml[i].getAttribute('Type');
		var type2 = pokemon_xml[i].getAttribute('Type2');
		var baseHp = pokemon_xml[i].getAttribute('BaseHp');
		var baseAttack = pokemon_xml[i].getAttribute('BaseAttack');
		var baseDefense = pokemon_xml[i].getAttribute('BaseDefense');
		var baseSpAtk = pokemon_xml[i].getAttribute('BaseSpAtk');
		var baseSpDef = pokemon_xml[i].getAttribute('BaseSpDef');
		var baseSpeed = pokemon_xml[i].getAttribute('BaseSpeed');
		var baseExp = pokemon_xml[i].getAttribute('BaseExp');
		var evoLevel = pokemon_xml[i].getAttribute('EvoLevel');
		var needsStone = pokemon_xml[i].getAttribute('NeedsStone');
		var stoneId = '0';
		if (needsStone == "true"){
			stoneId = pokemon_xml[i].getAttribute('StoneId');
		}
		
		setPokiemon(id,name,type,type2,baseHp,baseAttack,baseDefense,baseSpAtk,baseSpDef,baseSpeed,baseExp,evoLevel,needsStone,stoneId);
		}
	}
	
	
	