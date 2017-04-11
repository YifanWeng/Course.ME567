function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <S1>/Subsystem2_sfcn */
	this.urlHashMap["servo_mixed_test:409"] = "servo_mixed_test.c:42,48,461,469,481&servo_mixed_test.h:129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "servo_mixed_test"};
	this.sidHashMap["servo_mixed_test"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "servo_mixed_test:408"};
	this.sidHashMap["servo_mixed_test:408"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Subsystem1"] = {sid: "servo_mixed_test:408"};
	this.sidHashMap["servo_mixed_test:408"] = {rtwname: "<Root>/Subsystem1"};
	this.rtwnameHashMap["<S1>/Subsystem2_sfcn"] = {sid: "servo_mixed_test:409"};
	this.sidHashMap["servo_mixed_test:409"] = {rtwname: "<S1>/Subsystem2_sfcn"};
	this.rtwnameHashMap["<S1>/__InputSSForSFun__"] = {sid: "servo_mixed_test:410"};
	this.sidHashMap["servo_mixed_test:410"] = {rtwname: "<S1>/__InputSSForSFun__"};
	this.rtwnameHashMap["<S1>/__OutputSSForSFun__"] = {sid: "servo_mixed_test:411"};
	this.sidHashMap["servo_mixed_test:411"] = {rtwname: "<S1>/__OutputSSForSFun__"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
