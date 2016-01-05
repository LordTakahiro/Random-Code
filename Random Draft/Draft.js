/**
  * @auth Michael Melendez (Takahiro)
  * @desc This script creates array's and headers based
  * on user's input. Main function is to allow the user
  * to create their own amount of draft lists to draft from
  * and the amount of players in the draft.
 */
 
 
var header2 = document.getElementById("thisHeader");
var mainHeader = document.getElementById("mainHeader");

var blankArr = [];

function formFunction(){
	var playerNum = document.getElementById('draftNum').value;
	var poolNum = document.getElementById('draftPools').value;
	//Validation
	if(playerNum == null | playerNum == ""){
		alert('Please enter how many players will be in the draft.');
	}
	if(poolNum == null | poolNum == ""){
		alert('Please enter how many draft pools will be in the draft.');
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
/*function rollSuperstarTy(){
	var length = superstars.length;
	var superstarRolled = Math.floor(Math.random() * (length));
	var superstar = superstars[superstarRolled];
	if(superstar != undefined){		
		superstarHeader.innerHTML = superstar + " has been drafted by Tyler!!!";
		superstars.splice(superstarRolled, 1);
		tyFunction(superstar);
	}
	else
		superstarHeader.innerHTML = "There are no more superstar's to choose from!";
}

function rollDivaTy(){
	var length = divas.length;
	var divasRolled = Math.floor(Math.random() * (length));
	var diva = divas[divasRolled];
	if(diva != undefined){		
		superstarHeader.innerHTML = diva + " has been drafted by Tyler!!!";
		divas.splice(divasRolled, 1);
		tyFunction(diva);
	}
	else
		superstarHeader.innerHTML = "There are no more diva's to choose from!";
}

function rollTagTy(){
	var length = tagTeams.length;
	var superstarRolled = Math.floor(Math.random() * (length));
	var tag = tagTeams[superstarRolled];
	if(tag != undefined){		
		superstarHeader.innerHTML = tag + " has been drafted by Tyler!!!";
		tagTeams.splice(superstarRolled, 1);
		tyFunction(tag);
	}
	else
		superstarHeader.innerHTML = "There are no more superstar's to choose from!";
}

function rollSuperstarMike(){
	var length = superstars.length;
	var superstarRolled = Math.floor(Math.random() * (length));
	var superstar = superstars[superstarRolled];
	if(superstar != undefined){	
		superstarHeader.innerHTML = superstar + " has been drafted by Mike!!!";
		superstars.splice(superstarRolled, 1);
		mikeFunction(superstar);
	}
	else
		superstarHeader.innerHTML = "There are no more superstar's to choose from!";
}

function rollDivaMike(){
	var length = divas.length;
	var divasRolled = Math.floor(Math.random() * (length));
	var diva = divas[divasRolled];
	if(diva != undefined){		
		superstarHeader.innerHTML = diva + " has been drafted by Mike!!!";
		divas.splice(divasRolled, 1);
		mikeFunction(diva);
	}
	else
		superstarHeader.innerHTML = "There are no more diva's to choose from!";
}

function rollTagMike(){
	var length = tagTeams.length;
	var superstarRolled = Math.floor(Math.random() * (length));
	var tag = tagTeams[superstarRolled];
	if(tag != undefined){		
		superstarHeader.innerHTML = tag + " has been drafted by Mike!!!";
		tagTeams.splice(superstarRolled, 1);
		mikeFunction(tag);
	}
	else
		superstarHeader.innerHTML = "There are no more superstar's to choose from!";
}

function tyFunction(superstar){
	tyArr.push(superstar);
	tyStr = "Ty's Draft List: ";
	var count = 0;
	for(var i=0;i<tyArr.length;i++){
		count++
		tyStr += '<br />' + count + ". " + tyArr[i];
		tyHeader.innerHTML = tyStr;
	}
}

function mikeFunction(superstar){
	mikeArr.push(superstar);
	mikeStr = "Mike's Draft List: ";
	var count = 0;
	for(var i=0;i<mikeArr.length;i++){
		count++
		mikeStr += '<br />' + count + ". " + mikeArr[i];
		mikeHeader.innerHTML = mikeStr;
	}
}*/












