function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Chart */
	this.urlHashMap["servo_control:59"] = "servo_control.c:23,55,111,241&servo_control.h:50,55,56,57,58";
	/* <Root>/Clock */
	this.urlHashMap["servo_control:61"] = "servo_control.c:52";
	/* <Root>/Inverse Kinematics */
	this.urlHashMap["servo_control:60"] = "servo_control.c:113,131&servo_control_types.h:24";
	/* <Root>/Scope */
	this.urlHashMap["servo_control:62"] = "msg=&block=servo_control:62";
	/* <S1>:6 */
	this.urlHashMap["servo_control:59:6"] = "servo_control.c:75,103";
	/* <S1>:1 */
	this.urlHashMap["servo_control:59:1"] = "servo_control.c:66,79";
	/* <S1>:3 */
	this.urlHashMap["servo_control:59:3"] = "servo_control.c:86,96";
	/* <S1>:2 */
	this.urlHashMap["servo_control:59:2"] = "servo_control.c:63";
	/* <S1>:4 */
	this.urlHashMap["servo_control:59:4"] = "servo_control.c:83";
	/* <S1>:7 */
	this.urlHashMap["servo_control:59:7"] = "servo_control.c:100";
	/* <S1>:1:1 */
	this.urlHashMap["servo_control:59:1:1"] = "servo_control.c:67,70";
	/* <S1>:4:1 */
	this.urlHashMap["servo_control:59:4:1"] = "servo_control.c:80,81";
	/* <S1>:3:1 */
	this.urlHashMap["servo_control:59:3:1"] = "servo_control.c:87,90";
	/* <S1>:7:1 */
	this.urlHashMap["servo_control:59:7:1"] = "servo_control.c:97,98";
	/* <S1>:6:1 */
	this.urlHashMap["servo_control:59:6:1"] = "servo_control.c:104";
	/* <S2>:1 */
	this.urlHashMap["servo_control:60:1"] = "servo_control.c:114";
	/* <S2>:1:2 */
	this.urlHashMap["servo_control:60:1:2"] = "servo_control.c:115";
	/* <S2>:1:3 */
	this.urlHashMap["servo_control:60:1:3"] = "servo_control.c:116";
	/* <S2>:1:4 */
	this.urlHashMap["servo_control:60:1:4"] = "servo_control.c:117";
	/* <S2>:1:5 */
	this.urlHashMap["servo_control:60:1:5"] = "servo_control.c:119";
	/* <S2>:1:6 */
	this.urlHashMap["servo_control:60:1:6"] = "servo_control.c:124";
	/* <S2>:1:7 */
	this.urlHashMap["servo_control:60:1:7"] = "servo_control.c:125";
	/* <S4>/Data Type Conversion */
	this.urlHashMap["servo_control:1:114"] = "servo_control.c:134";
	/* <S4>/Servo Write */
	this.urlHashMap["servo_control:1:215"] = "servo_control.c:133,217&servo_control.h:64,82&servo_control_data.c:26,44";
	/* <S5>/Data Type Conversion */
	this.urlHashMap["servo_control:2:114"] = "servo_control.c:139";
	/* <S5>/Servo Write */
	this.urlHashMap["servo_control:2:215"] = "servo_control.c:138,221&servo_control.h:67,85&servo_control_data.c:29,47";
	/* <S6>/Data Type Conversion */
	this.urlHashMap["servo_control:3:114"] = "servo_control.c:144";
	/* <S6>/Servo Write */
	this.urlHashMap["servo_control:3:215"] = "servo_control.c:143,225&servo_control.h:70,88&servo_control_data.c:32,50";
	/* <S7>/Data Type Conversion */
	this.urlHashMap["servo_control:4:114"] = "servo_control.c:149";
	/* <S7>/Servo Write */
	this.urlHashMap["servo_control:4:215"] = "servo_control.c:148,229&servo_control.h:73,91&servo_control_data.c:35,53";
	/* <S8>/Data Type Conversion */
	this.urlHashMap["servo_control:5:114"] = "servo_control.c:154";
	/* <S8>/Servo Write */
	this.urlHashMap["servo_control:5:215"] = "servo_control.c:153,233&servo_control.h:76,94&servo_control_data.c:38,56";
	/* <S9>/Data Type Conversion */
	this.urlHashMap["servo_control:8:114"] = "servo_control.c:159";
	/* <S9>/Servo Write */
	this.urlHashMap["servo_control:8:215"] = "servo_control.c:158,237&servo_control.h:79,97&servo_control_data.c:41,59";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "servo_control"};
	this.sidHashMap["servo_control"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "servo_control:59"};
	this.sidHashMap["servo_control:59"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "servo_control:60"};
	this.sidHashMap["servo_control:60"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "servo_control:9"};
	this.sidHashMap["servo_control:9"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "servo_control:1"};
	this.sidHashMap["servo_control:1"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "servo_control:2"};
	this.sidHashMap["servo_control:2"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<S6>"] = {sid: "servo_control:3"};
	this.sidHashMap["servo_control:3"] = {rtwname: "<S6>"};
	this.rtwnameHashMap["<S7>"] = {sid: "servo_control:4"};
	this.sidHashMap["servo_control:4"] = {rtwname: "<S7>"};
	this.rtwnameHashMap["<S8>"] = {sid: "servo_control:5"};
	this.sidHashMap["servo_control:5"] = {rtwname: "<S8>"};
	this.rtwnameHashMap["<S9>"] = {sid: "servo_control:8"};
	this.sidHashMap["servo_control:8"] = {rtwname: "<S9>"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "servo_control:59"};
	this.sidHashMap["servo_control:59"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Clock"] = {sid: "servo_control:61"};
	this.sidHashMap["servo_control:61"] = {rtwname: "<Root>/Clock"};
	this.rtwnameHashMap["<Root>/Demux"] = {sid: "servo_control:30"};
	this.sidHashMap["servo_control:30"] = {rtwname: "<Root>/Demux"};
	this.rtwnameHashMap["<Root>/Inverse Kinematics"] = {sid: "servo_control:60"};
	this.sidHashMap["servo_control:60"] = {rtwname: "<Root>/Inverse Kinematics"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "servo_control:62"};
	this.sidHashMap["servo_control:62"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<Root>/Servo Motor"] = {sid: "servo_control:9"};
	this.sidHashMap["servo_control:9"] = {rtwname: "<Root>/Servo Motor"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "servo_control:59:6"};
	this.sidHashMap["servo_control:59:6"] = {rtwname: "<S1>:6"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "servo_control:59:1"};
	this.sidHashMap["servo_control:59:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:3"] = {sid: "servo_control:59:3"};
	this.sidHashMap["servo_control:59:3"] = {rtwname: "<S1>:3"};
	this.rtwnameHashMap["<S1>:2"] = {sid: "servo_control:59:2"};
	this.sidHashMap["servo_control:59:2"] = {rtwname: "<S1>:2"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "servo_control:59:4"};
	this.sidHashMap["servo_control:59:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "servo_control:59:7"};
	this.sidHashMap["servo_control:59:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:1:1"] = {sid: "servo_control:59:1:1"};
	this.sidHashMap["servo_control:59:1:1"] = {rtwname: "<S1>:1:1"};
	this.rtwnameHashMap["<S1>:4:1"] = {sid: "servo_control:59:4:1"};
	this.sidHashMap["servo_control:59:4:1"] = {rtwname: "<S1>:4:1"};
	this.rtwnameHashMap["<S1>:3:1"] = {sid: "servo_control:59:3:1"};
	this.sidHashMap["servo_control:59:3:1"] = {rtwname: "<S1>:3:1"};
	this.rtwnameHashMap["<S1>:7:1"] = {sid: "servo_control:59:7:1"};
	this.sidHashMap["servo_control:59:7:1"] = {rtwname: "<S1>:7:1"};
	this.rtwnameHashMap["<S1>:6:1"] = {sid: "servo_control:59:6:1"};
	this.sidHashMap["servo_control:59:6:1"] = {rtwname: "<S1>:6:1"};
	this.rtwnameHashMap["<S2>:1"] = {sid: "servo_control:60:1"};
	this.sidHashMap["servo_control:60:1"] = {rtwname: "<S2>:1"};
	this.rtwnameHashMap["<S2>:1:2"] = {sid: "servo_control:60:1:2"};
	this.sidHashMap["servo_control:60:1:2"] = {rtwname: "<S2>:1:2"};
	this.rtwnameHashMap["<S2>:1:3"] = {sid: "servo_control:60:1:3"};
	this.sidHashMap["servo_control:60:1:3"] = {rtwname: "<S2>:1:3"};
	this.rtwnameHashMap["<S2>:1:4"] = {sid: "servo_control:60:1:4"};
	this.sidHashMap["servo_control:60:1:4"] = {rtwname: "<S2>:1:4"};
	this.rtwnameHashMap["<S2>:1:5"] = {sid: "servo_control:60:1:5"};
	this.sidHashMap["servo_control:60:1:5"] = {rtwname: "<S2>:1:5"};
	this.rtwnameHashMap["<S2>:1:6"] = {sid: "servo_control:60:1:6"};
	this.sidHashMap["servo_control:60:1:6"] = {rtwname: "<S2>:1:6"};
	this.rtwnameHashMap["<S2>:1:7"] = {sid: "servo_control:60:1:7"};
	this.sidHashMap["servo_control:60:1:7"] = {rtwname: "<S2>:1:7"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "servo_control:10"};
	this.sidHashMap["servo_control:10"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/In2"] = {sid: "servo_control:11"};
	this.sidHashMap["servo_control:11"] = {rtwname: "<S3>/In2"};
	this.rtwnameHashMap["<S3>/In3"] = {sid: "servo_control:12"};
	this.sidHashMap["servo_control:12"] = {rtwname: "<S3>/In3"};
	this.rtwnameHashMap["<S3>/In4"] = {sid: "servo_control:13"};
	this.sidHashMap["servo_control:13"] = {rtwname: "<S3>/In4"};
	this.rtwnameHashMap["<S3>/In5"] = {sid: "servo_control:14"};
	this.sidHashMap["servo_control:14"] = {rtwname: "<S3>/In5"};
	this.rtwnameHashMap["<S3>/In6"] = {sid: "servo_control:15"};
	this.sidHashMap["servo_control:15"] = {rtwname: "<S3>/In6"};
	this.rtwnameHashMap["<S3>/Standard Servo Write"] = {sid: "servo_control:1"};
	this.sidHashMap["servo_control:1"] = {rtwname: "<S3>/Standard Servo Write"};
	this.rtwnameHashMap["<S3>/Standard Servo Write1"] = {sid: "servo_control:2"};
	this.sidHashMap["servo_control:2"] = {rtwname: "<S3>/Standard Servo Write1"};
	this.rtwnameHashMap["<S3>/Standard Servo Write2"] = {sid: "servo_control:3"};
	this.sidHashMap["servo_control:3"] = {rtwname: "<S3>/Standard Servo Write2"};
	this.rtwnameHashMap["<S3>/Standard Servo Write3"] = {sid: "servo_control:4"};
	this.sidHashMap["servo_control:4"] = {rtwname: "<S3>/Standard Servo Write3"};
	this.rtwnameHashMap["<S3>/Standard Servo Write4"] = {sid: "servo_control:5"};
	this.sidHashMap["servo_control:5"] = {rtwname: "<S3>/Standard Servo Write4"};
	this.rtwnameHashMap["<S3>/Standard Servo Write5"] = {sid: "servo_control:8"};
	this.sidHashMap["servo_control:8"] = {rtwname: "<S3>/Standard Servo Write5"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "servo_control:1:116"};
	this.sidHashMap["servo_control:1:116"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/Data Type Conversion"] = {sid: "servo_control:1:114"};
	this.sidHashMap["servo_control:1:114"] = {rtwname: "<S4>/Data Type Conversion"};
	this.rtwnameHashMap["<S4>/Servo Write"] = {sid: "servo_control:1:215"};
	this.sidHashMap["servo_control:1:215"] = {rtwname: "<S4>/Servo Write"};
	this.rtwnameHashMap["<S5>/In1"] = {sid: "servo_control:2:116"};
	this.sidHashMap["servo_control:2:116"] = {rtwname: "<S5>/In1"};
	this.rtwnameHashMap["<S5>/Data Type Conversion"] = {sid: "servo_control:2:114"};
	this.sidHashMap["servo_control:2:114"] = {rtwname: "<S5>/Data Type Conversion"};
	this.rtwnameHashMap["<S5>/Servo Write"] = {sid: "servo_control:2:215"};
	this.sidHashMap["servo_control:2:215"] = {rtwname: "<S5>/Servo Write"};
	this.rtwnameHashMap["<S6>/In1"] = {sid: "servo_control:3:116"};
	this.sidHashMap["servo_control:3:116"] = {rtwname: "<S6>/In1"};
	this.rtwnameHashMap["<S6>/Data Type Conversion"] = {sid: "servo_control:3:114"};
	this.sidHashMap["servo_control:3:114"] = {rtwname: "<S6>/Data Type Conversion"};
	this.rtwnameHashMap["<S6>/Servo Write"] = {sid: "servo_control:3:215"};
	this.sidHashMap["servo_control:3:215"] = {rtwname: "<S6>/Servo Write"};
	this.rtwnameHashMap["<S7>/In1"] = {sid: "servo_control:4:116"};
	this.sidHashMap["servo_control:4:116"] = {rtwname: "<S7>/In1"};
	this.rtwnameHashMap["<S7>/Data Type Conversion"] = {sid: "servo_control:4:114"};
	this.sidHashMap["servo_control:4:114"] = {rtwname: "<S7>/Data Type Conversion"};
	this.rtwnameHashMap["<S7>/Servo Write"] = {sid: "servo_control:4:215"};
	this.sidHashMap["servo_control:4:215"] = {rtwname: "<S7>/Servo Write"};
	this.rtwnameHashMap["<S8>/In1"] = {sid: "servo_control:5:116"};
	this.sidHashMap["servo_control:5:116"] = {rtwname: "<S8>/In1"};
	this.rtwnameHashMap["<S8>/Data Type Conversion"] = {sid: "servo_control:5:114"};
	this.sidHashMap["servo_control:5:114"] = {rtwname: "<S8>/Data Type Conversion"};
	this.rtwnameHashMap["<S8>/Servo Write"] = {sid: "servo_control:5:215"};
	this.sidHashMap["servo_control:5:215"] = {rtwname: "<S8>/Servo Write"};
	this.rtwnameHashMap["<S9>/In1"] = {sid: "servo_control:8:116"};
	this.sidHashMap["servo_control:8:116"] = {rtwname: "<S9>/In1"};
	this.rtwnameHashMap["<S9>/Data Type Conversion"] = {sid: "servo_control:8:114"};
	this.sidHashMap["servo_control:8:114"] = {rtwname: "<S9>/Data Type Conversion"};
	this.rtwnameHashMap["<S9>/Servo Write"] = {sid: "servo_control:8:215"};
	this.sidHashMap["servo_control:8:215"] = {rtwname: "<S9>/Servo Write"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
