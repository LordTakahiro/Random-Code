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
var draftText = document.getElementById("draftText");
var draftBtn = document.getElementById("draftBtn");
var playerText = document.getElementById("playerText");
var draftLink = document.getElementById("link");
var btnCount = 1;
var textCount = 1;
var testCount = 2;
var playerNum = "";
var poolNum = "";
var combinedPara = "";
var playerNames = [];
var draftArr = [];
var playerArr = [];
var firstRun = true;

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
				var newPara = document.createElement('p');
				newPara.id = "para" + btnCount;
				newPara.value = 1;
				newPara.innerHTML = "<br />" + playerNames[i] + "'s Draft List: ";
				playerText.appendChild(newPara);
				createButtons(playerNames[i],draftBtn);		
			}
		}
		else
			for(var j = 0; j < players;j++){			
				var newPara = document.createElement('p');
				newPara.id = "para" + btnCount;
				newPara.innerHTML = "<br />Player " + (j+1) + "'s Draft List: ";
				newPara.value = 1;
				playerText.appendChild(newPara);
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
	button.id = btnCount;
	button.onclick = function() {
		buttonController(button);
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
			cleanUp(draftText);
			cleanUp(draftBtn);
			draftFunction(playerNum,poolNum,false);	
		}
	}
}

function buttonController(e){
	switch(e.id){
		case '1': 
			var textBox = document.getElementById("text1").value;
			splitPlayerName(textBox);
			break;
		default: 
			draftRoller(e);
			break;
	}
}

function draftRoller(e){
	var currDrafts = [];
	var playerPara = document.getElementById("para"+e.id);
	for(var i = 0; i < poolNum; i++){
		if(firstRun){
			getArrays();
			firstRun = false;
		}
		var length = draftArr[i].length;
		var draftRolled = Math.floor(Math.random()* (length));
		var draftee = draftArr[i][draftRolled];
		if(draftee != undefined){
			currDrafts.push(draftee);
			playerPara.innerHTML += '<br />' + playerPara.value + ". " + draftee;
			playerPara.value++;
			draftArr[i].splice(draftRolled,1);
		}
		else{
			alert('There are no more possible draft picks in pool #' + (i+1));
			draftArr.splice(i,1);
			poolNum--;
			i--;
		}
	}
	if(poolNum == 0){
		for(var i = 0; i < playerNum; i++){
			var para = document.getElementById("para"+(i+2));
			combinedPara += para.innerHTML;
			combinedPara = combinedPara.replace(/<br\s*[\/]?>/g, ' \r\n');
		}
		exportCSV();
		cleanUp(draftBtn);
		cleanUp(draftText);
	}
	else{
		header2.innerHTML = currDrafts + " has been drafted by " + e.value + "!!!";	
	}
}

function getArrays(){	
	for(var i = 0; i < poolNum; i++){
		var poolVal = document.getElementById("text"+(i+2)).value;
		var innerArr = poolVal.split(',');
 		draftArr.push(innerArr);
	}
	for(var j = 0; i < playerNum; i++){
		var newArr = [];
		playerArr.push(newArr);
	}
}

function exportCSV(){
	var csvContent = "data:text/plain;charset=utf-8," + combinedPara;
	var encodedUri = encodeURI(csvContent);
	var link = document.createElement("a");
	link.setAttribute("href", encodedUri);
	link.setAttribute("download", "draft_data.txt");
	link.innerHTML = "Click Here to Download the Draft Data!"
	draftLink.appendChild(link);
}

function cleanUpSpecific(parent, element) {
	parent.removeChild(element);
}

function cleanUp(parent) {
	while (parent.hasChildNodes()) {
		parent.removeChild(parent.lastChild);
	}
}