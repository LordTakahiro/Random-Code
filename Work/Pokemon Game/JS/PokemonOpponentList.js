var opponentList = [];

function setOpponent(id,name,p1,p2,p3,p4,diff){
	var opponent = {id:id,name:name,pokemon1:getPokieById(p1),pokemon2:getPokieById(p2),pokemon3:getPokieById(p3),pokemon4:getPokieById(p4),
	difficulty:diff};
	opponentList.push(opponent);
}

function getRandomOpponentByDiff(diff){
	var opponent = {};
	var randomList = [];
	for(var i=0;i<opponentList.length;i++){
		opponent = opponentList[i]; 
		if(opponent.difficulty == diff){
			randomList.push(opponent);
		}
	}
	var randOpp = Math.floor((Math.random() * randomList.length));
	return randomList[randOpp];
}

/* 
 * This function will be uncommented when needed to test opponents attributes
function getAllOpponents(){
	for (var i=0;i<opponentList.length;i++){
		console.log(opponentList[i].name);
	}		
} */









function loadOpponentsFromXml(){
	
	if (window.XMLHttpRequest)
	  {// code for IE7+, Firefox, Chrome, Opera, Safari
	  xmlhttp = new XMLHttpRequest();
	  }
	else
	  {// code for IE6, IE5
	  xmlhttp = new ActiveXObject("Microsoft.XMLHTTP");
	  }
	xmlhttp.open("GET","opponents.xml",false);
	xmlhttp.send();
	xmlDoc = xmlhttp.responseXML; 
	var opponent = xmlDoc.getElementsByTagName('opponent');

	for(var i=0;i<opponent.length;i++){
		var id = opponent[i].getAttribute('id');
		var name = opponent[i].getAttribute('name');
		var pokemon1 = opponent[i].getAttribute('pokemon1');
		var pokemon2 = opponent[i].getAttribute('pokemon2');
		var pokemon3 = opponent[i].getAttribute('pokemon3');
		var pokemon4 = opponent[i].getAttribute('pokemon4');
		var difficulty = opponent[i].getAttribute('difficulty');
		setOpponent(id,name,pokemon1,pokemon2,pokemon3,pokemon4,difficulty);
	}
}
