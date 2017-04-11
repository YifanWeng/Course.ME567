function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Serial Receive */
	this.urlHashMap["untitled:1"] = "untitled.c:37&untitled.h:54,57&untitled_data.c:26,29";
	/* <Root>/Serial Transmit */
	this.urlHashMap["untitled:2"] = "untitled.c:41,42,79,92,99,100,106&untitled.h:47,48";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled"};
	this.sidHashMap["untitled"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Serial Receive"] = {sid: "untitled:1"};
	this.sidHashMap["untitled:1"] = {rtwname: "<Root>/Serial Receive"};
	this.rtwnameHashMap["<Root>/Serial Transmit"] = {sid: "untitled:2"};
	this.sidHashMap["untitled:2"] = {rtwname: "<Root>/Serial Transmit"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
