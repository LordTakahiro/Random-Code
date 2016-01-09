/**
  * @auth Michael Melendez (Takahiro)
  * @desc This script creates array's and headers based
  * on user's input. Main function is to allow the user
  * to create their own amount of draft lists to draft from
  * and the amount of players in the draft.
 */
 
 
var header2 = document.getElementById("thisHeader");
var mainHeader = document.getElementById("mainHeader");
var pageText = document.getElementById("text");
var form = document.getElementById("form1");
var btnCount = 1;
var textCount = 1;
var draftText = document.getElementById("draftText");
var draftBtn = document.getElementById("draftBtn");
var playerNum = "";
var poolNum = "";
var playerNames = [];

function formFunction(){
	playerNum = document.getElementById('draftNum').value;
	poolNum = document.getElementById('draftPools').value;
	//Validation
	if(playerNum == null | playerNum == ""){
		alert('Please enter how many players will be in the draft.');
	}
	else if(poolNum == null | poolNum == ""){
		alert('Please enter how many draft pools will be in the draft.');
	}
	else if(isNaN(playerNum) || isNaN(poolNum)){
		alert('Please Only Enter Numbers.');
	}
	else{
		pageText.innerHTML = "";
		cleanUp(form);
		draftFunction(playerNum, poolNum, true);
	}
}

function draftFunction(players, pools, isFirst){
	if(isFirst){
		pageText.innerHTML = "Enter Players Names Seperated by a Comma (Optional)";
		var textNames = createTextInput(1,draftText);
		var btnNames = createButtons("Submit",draftBtn);
	}
	else{
		pageText.innerHTML = "Enter Draft Components (Seperated by a Comma) and Click on Each Person's Name to Draft From All Pools"
		createTextInput(pools,draftText);
		if(playerNames.length > 0){
			for(var i = 0; i < playerNames.length; i++){
				createButtons(playerNames[i],draftBtn);
			}
		}
		else
			for(var j = 0; j < players;j++){
				createButtons("Player " + (j+1),draftBtn);
			}
	}
}

function createButtons(value, element){
	var button = document.createElement("input");
	button.type = "button";
	button.value = value;
	button.style.marginRight = "5px";
	button.style.marginTop = "10px";
	button.id = "btn" + btnCount;
	button.onclick = function() {
		buttonController(button.id);
	};
	element.appendChild(button);
	btnCount++;
}

function createTextInput(pools, element){
	for(var i = 0; i < pools; i++){
		var input = document.createElement("textarea");
		input.id = "text" + textCount;
		input.row = 1;
		input.cols = 25;
		input.style.height = "100px"
		input.style.resize = "none";
		input.style.marginRight = "8px";
		input.style.marginTop = "8px";
		element.appendChild(input);
		textCount++;
	}
}

function splitPlayerName(str){
	if(str == undefined || str == ''){
		playerNames = [];
		cleanUp(draftText);
		cleanUp(draftBtn);
		draftFunction(playerNum,poolNum,false);	
		
	}
	else{		
		playerNames = str.split(',');
		for(var i = 0; i < playerNames.length; i++){
			if(playerNames[i].length > 12){
				alert(playerNames[i] + " contains too many characters. Max 12");
			}
				
		}
		if(playerNames.length != playerNum){
			alert('Amount of Players Names Entered Does Not Match the Amount of Participants Entered.');
		}
		else{
			header2.innerHTML = playerNames;
			cleanUp(draftText);
			cleanUp(draftBtn);
			draftFunction(playerNum,poolNum,false);	
		}
	}
}

function buttonController(e){
	switch(e){
		case 'btn1': 
			var textBox = document.getElementById("text1").value;
			splitPlayerName(textBox);
			break;
		default: 
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












