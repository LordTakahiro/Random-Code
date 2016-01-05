document.getElementById("pokeMart").addEventListener("click",chooseMart,false);

var pokeMart = [];
var itemList = [];

function chooseMart(){
	var mart1 = pokeMart[0];
	var mart2 = pokeMart[1];
	var pokeCombinedLvl = getCombinedLevl();
	for (var i=1;i<pokeMart.length;i++){
		if(pokeCombinedLvl > mart1.martLevel && pokeCombinedLvl < mart2.martLevel){
			openMart(mart1);
			continue;
		} 
		mart1 = pokeMart[i-1];
		mart2 = pokeMart[i];
	}
}

function openMart(pokeMart){
	var mart = pokeMart;
}

function setItemList(){
	itemList.push();
}

function setPokeMartList(){
	pokeMart.push();
}

function getItemsFromXML(){
	if (window.XMLHttpRequest)
	  {// code for IE7+, Firefox, Chrome, Opera, Safari
	  xmlhttp = new XMLHttpRequest();
	  }
	else
	  {// code for IE6, IE5
	  xmlhttp = new ActiveXObject("Microsoft.XMLHTTP");
	  }
	xmlhttp.open("GET","Items.xml",false);
	xmlhttp.send();
	xmlDoc = xmlhttp.responseXML; 
	var items_xml = xmlDoc.getElementsByTagName('item');
	for(var i=0; i < items_xml.length;i++){
		var id = items_xml[i].getAttribute('id');
		var name = items_xml[i].getAttribute('name');
		var doesHeal = items_xml[i].getAttribute('doesHeal');
		var healValue = 0;
		if(doesHeal){
			healValue = items_xml[i].getAttribute('healValue');
		}
		setItemList();
	}
}


function getPokeMartFromXML(){
	if (window.XMLHttpRequest)
	  {// code for IE7+, Firefox, Chrome, Opera, Safari
	  xmlhttp = new XMLHttpRequest();
	  }
	else
	  {// code for IE6, IE5
	  xmlhttp = new ActiveXObject("Microsoft.XMLHTTP");
	  }
	xmlhttp.open("GET","PokieMart.xml",false);
	xmlhttp.send();
	xmlDoc = xmlhttp.responseXML; 
	var pokeMart_xml = xmlDoc.getElementsByTagName('mart');
	var pokeMart_item_xml = xmlDoc.getElementsByTagName('item');
	for(var i=0; i < pokeMart_xml.length;i++){
		var id = pokeMart_xml[i].getAttribute('id');
		var martLvl = pokeMart_xml[i].getAttribute('martLevel');
		for(var i=0;i<pokeMart_item_xml.length;i++){
			var item = pokeMart_item_xml[i].getAttribute('id');
			var price = pokeMart_item_xml[i].getAttribute('price');
		}
	}
}








