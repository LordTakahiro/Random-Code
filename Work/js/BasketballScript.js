/**
*
*	This is a script made to choose possible draft prospects
*	in the 2015 draft. Each player will be weighted by their 
*	
*
*/

var text = document.getElementById("text");

players = [];

function factorPlayerStats() {
	for (var player in players) {
		var ppg = players[player].ppg *0.5;
		var apg = players[player].apg *1;
		var rpg = players[player].rpg *1;
		var bpg = players[player].bpg *1.5;
		var spg = players[player].spg *1.5;
		var position = players[player].position;
		var fgPerc = players[player].fgPerc /10;
		if (fgPerc < 5) {
			if (fgPerc < 4) {
				fgPerc = fgPerc -2;
			}
			else
			fgPerc = fgPerc -1;
		}
		var ftPerc = players[player].ftPerc / 20;
		var turnOvers = players[player].turnovers * -0.5;
		var playerValue = ppg + apg + rpg + bpg + spg + fgPerc + ftPerc + turnOvers;
		players[player].overall = playerValue;
		console.log(players[player].name + ": " + "ppg: " + ppg + " apg: " + apg + 
		" rpg: " + rpg + " bpg: " + bpg + " spg: " + spg + " FG%: " + fgPerc + 
		" ft%: " + ftPerc + " TO: " + turnOvers + " OVERALL: " + playerValue);
	}
	players.sort(function(a, b){
		var a1= a.overall, b1= b.overall;
		if(a1== b1) return 0;
		return a1< b1? 1: -1;
	});
	printNewList();
}

function playerToString(index) {
	var name = players[index].name;
	var position = players[index].position;
	var ppg = players[index].ppg;
	var rpg = players[index].rpg;
	var apg = players[index].apg;
	var bpg = players[index].bpg;
	var spg = players[index].spg;
	var fgPerc = players[index].fgPerc;
	var ftPerc = players[index].ftPerc;
	var TO = players[index].turnovers;
	var overall = players[index].overall;
	
	var toString = "<b>Name: </b>" + name + ", <b>Position: </b>" + position + ", <b>Overall: </b>" + Math.floor(overall) + ", <b>PPG: </b>" + ppg 
	+ ", <b>RPG: </b>" + rpg + ", <b>APG: </b>" + apg + ", <b>BPG: </b>" + bpg + ", <b>SPG: </b>" + spg + ", <b>FG%: </b>" + fgPerc + 
	"%, <b>FT%: </b>" + ftPerc + "%, <b>TO's: </b>" + TO;
	
	return toString;
}

function printNewList() {
	var count = 1;
	text.innerHTML = "";
	for (var player in players) {
		text.innerHTML += count + ". " + playerToString(player) + "</br></br>";
		count++;
	}
}

function sortByPositionAndOverall() {
	players.sort(function(a, b){
		var a1= a.overall, b1= b.overall;
		var a2= a.position, b2=b.position;
		if(a2===b2){
			return a1<b1? 1: -1;
		}
		return a2>b2? 1: -1;
	});
	printNewList();
}

function createPlayerList() {
	setPlayers("C","Karl Towns",0,10.3,1.1,6.7,2.2,0.5,56.6,81.3,1.4);
	setPlayers("C", "Jahlil Okafor",0,17.3,1.3,8.6,1.4,0.8,66.4,51,2.5);
	setPlayers("PG", "D'Angelo Russell",0,19.3,5,5.7,0.3,1.6,44.9,75.6,2.9);
	setPlayers("PF", "Kristaps Porzingis",0,10.7,0.4,4.8,1,0.9,47.1,77.4,1.3);
	setPlayers("PG", "Emmanuel Mundiay",0,18,5,6.3,0.1,1.6,47.8,57.4,3.3);
	setPlayers("SF", "Mario Hezonja",0,9.6,2.6,4,0.2,1.4,46.5,75,2);
	setPlayers("SF", "Justise Winslow",0,12.6,2.1,6.5,0.9,1.3,48.5,64.1,1.8);
	setPlayers("C", "Willie Cauley-Stein",0,8.9,1,6.4,1.7,1.2,57.2,61.7,1.2);
	setPlayers("PF", "Trey Lyles",0,8.7,1.1,5.2,0.5,0.5,48.8,73.5,1.3);
	setPlayers("PF", "Myles Turner",0,10.1,0.6,6.5,2.6,0.3,45.5,83.9,1.4);
	setPlayers("PG", "Cameron Payne",0,20.3,6,3.8,0.5,1.8,44.9,78.3,2.6);
	setPlayers("SG", "Devin Booker",0,10,1.1,2,0.1,0.4,47,82.8,1);
	setPlayers("SF", "Stanley Johnson",0,13.8,1.7,6.5,0.4,1.5,44.6,74.2,2.2);
	setPlayers("SF", "Kelly Oubre",0,9.3,0.8,5,0.4,1.1,44.4,71.8,1.2);
	setPlayers("C", "Frank Kaminsky",0,18.8,2.6,8.2,1.5,0.8,54.7,78,1.5);
	setPlayers("PF", "Bobby Portis",0,17.5,1.2,8.9,1.4,1.1,53.6,73.7,1.6);
	setPlayers("SG", "R.J. Hunter",0,19.5,3.5,4.7,1,2.1,39.3,88.7,2.2);
	setPlayers("PG", "Tyus Jones",0,11.8,5.6,3.5,0.1,1.5,41.7,88.9,1.9);
	setPlayers("SF", "Sam Dekker",0,13.9,1.2,5.6,0.5,0.5,52.5,70.8,0.9);
	setPlayers("PG", "Jerian Grant",0,16.5,6.6,3,0.5,1.7,47.8,78,2.2);
	factorPlayerStats();
}

function setPlayers(position,name,overall,ppg,apg,rpg,bpg,spg,fgPerc,ftPerc,turnovers) {
	players.push({position,name,overall,ppg,apg,rpg,bpg,spg,fgPerc,ftPerc,turnovers});
}


