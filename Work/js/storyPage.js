var storyHeader = document.getElementById("storyHeader");
var text = document.getElementById("storyText");
var storyCounter = 1;
var storyDiv = document.getElementById("story");
var decisionCounter = 1;
var afterChoiceCount = 0;
var test = false;

function isBossDead(){
	if (myChar.isBossDead == true) {
		myChar.isBossDead = false;
		storyCounter = myChar.bossPageNum;
		myChar.bossPageNum = 0;
		updateCookie(myChar);
		nextStoryText(storyCounter);
	}
}

function nextStoryText(pageNumber) {
	var currStory = document.getElementById(pageNumber);
	//storyHeader.innerHTML = currStory.id;
	var hasAttribute = currStory.getAttribute("data-option");
	if(pageNumber == '14' || pageNumber == '15' || pageNumber == '16') {
		window.location = "bossTestPage.html";
	}
	if (hasAttribute) {
		removeStoryButton();
		var num = currStory.getAttribute("data-num");
		var numOfOptions = +num.match(/-?\d+\.?\d*/)
		var counter = 0;
		for (var i=1; i < numOfOptions +1; i++) {
			var option = currStory.getAttribute("data-opt"+i);
			createButton(storyDiv,option);
			counter++;
		}
	}
	else {
		if (afterChoiceCount > 0){
			storyText.innerHTML = currStory.innerHTML;
			storyCounter=storyCounter + afterChoiceCount;
		}
		else {
			storyText.innerHTML = currStory.innerHTML;
			storyCounter++;	
		}	
	}
}

function removeStoryButton() {
	cleanUpSpecific(storyDiv,document.getElementById("continueStory"));
}

function createButton(element, value, story) {
	if (!story) {
		var button = document.createElement("input");
		button.type = "button";
		button.value = value;
		button.id = "Decision " + decisionCounter;
		button.onclick = function() {
			storyController(button.id);
		};
		element.appendChild(button);
		decisionCounter++;
	}
	else {
		var button = document.createElement("input");
		button.type = "button";
		button.value = "Continue";
		button.id = "continueStory";
		button.onclick = function() {
			storyController(button.id);
		};
		element.appendChild(button);
	}
}

function storyController(element) {
	switch(element) {
		case "continueStory":
			nextStoryText(storyCounter);
			break;		
		case "Decision 1":
			storyCounter++;	
			storyText.innerHTML = document.getElementById(storyCounter).innerHTML;
			cleanUp(storyDiv);
			createButton(storyDiv,"",true);	
			afterChoiceCount = 3;
			nextStoryText(storyCounter); //hacky way of not having to press continue twice (May find fix later)
			break;
		case "Decision 2":
			storyCounter=storyCounter + 2;	
			storyText.innerHTML = document.getElementById(storyCounter).innerHTML;
			cleanUp(storyDiv);
			createButton(storyDiv,"",true);	
			afterChoiceCount = 3;
			nextStoryText(storyCounter); //hacky way of not having to press continue twice (May find fix later)
			break;
		case "Decision 3":
			storyCounter=storyCounter + 3;	
			storyText.innerHTML = document.getElementById(storyCounter).innerHTML;
			cleanUp(storyDiv);
			createButton(storyDiv,"",true);	
			afterChoiceCount = 3;
			nextStoryText(storyCounter); //hacky way of not having to press continue twice (May find fix later)
			break;
	}
}