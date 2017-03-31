function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Sine Wave */
	this.urlHashMap["test:5"] = "test.c:37,45,66,157&test.h:83,84,85,94,97,100,103,106,109,112&test_data.c:29,32,35,38,41,44,47";
	/* <S1>/Data Type Conversion */
	this.urlHashMap["test:3:114"] = "test.c:44,61";
	/* <S1>/Servo Write */
	this.urlHashMap["test:3:215"] = "test.c:63,154&test.h:91,115&test_data.c:26,50";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "test"};
	this.sidHashMap["test"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "test:3"};
	this.sidHashMap["test:3"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Sine Wave"] = {sid: "test:5"};
	this.sidHashMap["test:5"] = {rtwname: "<Root>/Sine Wave"};
	this.rtwnameHashMap["<Root>/Standard Servo Write"] = {sid: "test:3"};
	this.sidHashMap["test:3"] = {rtwname: "<Root>/Standard Servo Write"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "test:3:116"};
	this.sidHashMap["test:3:116"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "test:3:114"};
	this.sidHashMap["test:3:114"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/Servo Write"] = {sid: "test:3:215"};
	this.sidHashMap["test:3:215"] = {rtwname: "<S1>/Servo Write"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
