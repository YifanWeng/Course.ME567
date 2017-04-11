function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <S1>/In1 */
	this.urlHashMap["servo_mixed:304"] = "msg=&block=servo_mixed:304";
	/* <S1>/In2 */
	this.urlHashMap["servo_mixed:305"] = "msg=&block=servo_mixed:305";
	/* <S1>/In3 */
	this.urlHashMap["servo_mixed:306"] = "msg=&block=servo_mixed:306";
	/* <S1>/In4 */
	this.urlHashMap["servo_mixed:307"] = "msg=&block=servo_mixed:307";
	/* <S1>/In5 */
	this.urlHashMap["servo_mixed:308"] = "msg=&block=servo_mixed:308";
	/* <S1>/In6 */
	this.urlHashMap["servo_mixed:309"] = "msg=&block=servo_mixed:309";
	/* <S1>/Standard Servo Write */
	this.urlHashMap["servo_mixed:310"] = "msg=&block=servo_mixed:310";
	/* <S1>/Standard Servo Write1 */
	this.urlHashMap["servo_mixed:311"] = "msg=&block=servo_mixed:311";
	/* <S1>/Standard Servo Write2 */
	this.urlHashMap["servo_mixed:312"] = "msg=&block=servo_mixed:312";
	/* <S1>/Standard Servo Write3 */
	this.urlHashMap["servo_mixed:313"] = "msg=&block=servo_mixed:313";
	/* <S1>/Standard Servo Write4 */
	this.urlHashMap["servo_mixed:314"] = "msg=&block=servo_mixed:314";
	/* <S1>/Standard Servo Write5 */
	this.urlHashMap["servo_mixed:315"] = "msg=&block=servo_mixed:315";
	/* <S2>/In1 */
	this.urlHashMap["servo_mixed:310:116"] = "msg=&block=servo_mixed:310:116";
	/* <S2>/Data Type Conversion */
	this.urlHashMap["servo_mixed:310:114"] = "Servo.c:36,49";
	/* <S2>/Servo Write */
	this.urlHashMap["servo_mixed:310:215"] = "Servo.c:51,148";
	/* <S3>/In1 */
	this.urlHashMap["servo_mixed:311:116"] = "msg=&block=servo_mixed:311:116";
	/* <S3>/Data Type Conversion */
	this.urlHashMap["servo_mixed:311:114"] = "Servo.c:54,67";
	/* <S3>/Servo Write */
	this.urlHashMap["servo_mixed:311:215"] = "Servo.c:69,151";
	/* <S4>/In1 */
	this.urlHashMap["servo_mixed:312:116"] = "msg=&block=servo_mixed:312:116";
	/* <S4>/Data Type Conversion */
	this.urlHashMap["servo_mixed:312:114"] = "Servo.c:72,85";
	/* <S4>/Servo Write */
	this.urlHashMap["servo_mixed:312:215"] = "Servo.c:87,154";
	/* <S5>/In1 */
	this.urlHashMap["servo_mixed:313:116"] = "msg=&block=servo_mixed:313:116";
	/* <S5>/Data Type Conversion */
	this.urlHashMap["servo_mixed:313:114"] = "Servo.c:90,103";
	/* <S5>/Servo Write */
	this.urlHashMap["servo_mixed:313:215"] = "Servo.c:105,157";
	/* <S6>/In1 */
	this.urlHashMap["servo_mixed:314:116"] = "msg=&block=servo_mixed:314:116";
	/* <S6>/Data Type Conversion */
	this.urlHashMap["servo_mixed:314:114"] = "Servo.c:108,121";
	/* <S6>/Servo Write */
	this.urlHashMap["servo_mixed:314:215"] = "Servo.c:123,160";
	/* <S7>/In1 */
	this.urlHashMap["servo_mixed:315:116"] = "msg=&block=servo_mixed:315:116";
	/* <S7>/Data Type Conversion */
	this.urlHashMap["servo_mixed:315:114"] = "Servo.c:126,139";
	/* <S7>/Servo Write */
	this.urlHashMap["servo_mixed:315:215"] = "Servo.c:141,163";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Servo"};
	this.sidHashMap["Servo"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "servo_mixed:303"};
	this.sidHashMap["servo_mixed:303"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "servo_mixed:310"};
	this.sidHashMap["servo_mixed:310"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "servo_mixed:311"};
	this.sidHashMap["servo_mixed:311"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "servo_mixed:312"};
	this.sidHashMap["servo_mixed:312"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "servo_mixed:313"};
	this.sidHashMap["servo_mixed:313"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<S6>"] = {sid: "servo_mixed:314"};
	this.sidHashMap["servo_mixed:314"] = {rtwname: "<S6>"};
	this.rtwnameHashMap["<S7>"] = {sid: "servo_mixed:315"};
	this.sidHashMap["servo_mixed:315"] = {rtwname: "<S7>"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "servo_mixed:304"};
	this.sidHashMap["servo_mixed:304"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/In2"] = {sid: "servo_mixed:305"};
	this.sidHashMap["servo_mixed:305"] = {rtwname: "<S1>/In2"};
	this.rtwnameHashMap["<S1>/In3"] = {sid: "servo_mixed:306"};
	this.sidHashMap["servo_mixed:306"] = {rtwname: "<S1>/In3"};
	this.rtwnameHashMap["<S1>/In4"] = {sid: "servo_mixed:307"};
	this.sidHashMap["servo_mixed:307"] = {rtwname: "<S1>/In4"};
	this.rtwnameHashMap["<S1>/In5"] = {sid: "servo_mixed:308"};
	this.sidHashMap["servo_mixed:308"] = {rtwname: "<S1>/In5"};
	this.rtwnameHashMap["<S1>/In6"] = {sid: "servo_mixed:309"};
	this.sidHashMap["servo_mixed:309"] = {rtwname: "<S1>/In6"};
	this.rtwnameHashMap["<S1>/Standard Servo Write"] = {sid: "servo_mixed:310"};
	this.sidHashMap["servo_mixed:310"] = {rtwname: "<S1>/Standard Servo Write"};
	this.rtwnameHashMap["<S1>/Standard Servo Write1"] = {sid: "servo_mixed:311"};
	this.sidHashMap["servo_mixed:311"] = {rtwname: "<S1>/Standard Servo Write1"};
	this.rtwnameHashMap["<S1>/Standard Servo Write2"] = {sid: "servo_mixed:312"};
	this.sidHashMap["servo_mixed:312"] = {rtwname: "<S1>/Standard Servo Write2"};
	this.rtwnameHashMap["<S1>/Standard Servo Write3"] = {sid: "servo_mixed:313"};
	this.sidHashMap["servo_mixed:313"] = {rtwname: "<S1>/Standard Servo Write3"};
	this.rtwnameHashMap["<S1>/Standard Servo Write4"] = {sid: "servo_mixed:314"};
	this.sidHashMap["servo_mixed:314"] = {rtwname: "<S1>/Standard Servo Write4"};
	this.rtwnameHashMap["<S1>/Standard Servo Write5"] = {sid: "servo_mixed:315"};
	this.sidHashMap["servo_mixed:315"] = {rtwname: "<S1>/Standard Servo Write5"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "servo_mixed:310:116"};
	this.sidHashMap["servo_mixed:310:116"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Data Type Conversion"] = {sid: "servo_mixed:310:114"};
	this.sidHashMap["servo_mixed:310:114"] = {rtwname: "<S2>/Data Type Conversion"};
	this.rtwnameHashMap["<S2>/Servo Write"] = {sid: "servo_mixed:310:215"};
	this.sidHashMap["servo_mixed:310:215"] = {rtwname: "<S2>/Servo Write"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "servo_mixed:311:116"};
	this.sidHashMap["servo_mixed:311:116"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Data Type Conversion"] = {sid: "servo_mixed:311:114"};
	this.sidHashMap["servo_mixed:311:114"] = {rtwname: "<S3>/Data Type Conversion"};
	this.rtwnameHashMap["<S3>/Servo Write"] = {sid: "servo_mixed:311:215"};
	this.sidHashMap["servo_mixed:311:215"] = {rtwname: "<S3>/Servo Write"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "servo_mixed:312:116"};
	this.sidHashMap["servo_mixed:312:116"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/Data Type Conversion"] = {sid: "servo_mixed:312:114"};
	this.sidHashMap["servo_mixed:312:114"] = {rtwname: "<S4>/Data Type Conversion"};
	this.rtwnameHashMap["<S4>/Servo Write"] = {sid: "servo_mixed:312:215"};
	this.sidHashMap["servo_mixed:312:215"] = {rtwname: "<S4>/Servo Write"};
	this.rtwnameHashMap["<S5>/In1"] = {sid: "servo_mixed:313:116"};
	this.sidHashMap["servo_mixed:313:116"] = {rtwname: "<S5>/In1"};
	this.rtwnameHashMap["<S5>/Data Type Conversion"] = {sid: "servo_mixed:313:114"};
	this.sidHashMap["servo_mixed:313:114"] = {rtwname: "<S5>/Data Type Conversion"};
	this.rtwnameHashMap["<S5>/Servo Write"] = {sid: "servo_mixed:313:215"};
	this.sidHashMap["servo_mixed:313:215"] = {rtwname: "<S5>/Servo Write"};
	this.rtwnameHashMap["<S6>/In1"] = {sid: "servo_mixed:314:116"};
	this.sidHashMap["servo_mixed:314:116"] = {rtwname: "<S6>/In1"};
	this.rtwnameHashMap["<S6>/Data Type Conversion"] = {sid: "servo_mixed:314:114"};
	this.sidHashMap["servo_mixed:314:114"] = {rtwname: "<S6>/Data Type Conversion"};
	this.rtwnameHashMap["<S6>/Servo Write"] = {sid: "servo_mixed:314:215"};
	this.sidHashMap["servo_mixed:314:215"] = {rtwname: "<S6>/Servo Write"};
	this.rtwnameHashMap["<S7>/In1"] = {sid: "servo_mixed:315:116"};
	this.sidHashMap["servo_mixed:315:116"] = {rtwname: "<S7>/In1"};
	this.rtwnameHashMap["<S7>/Data Type Conversion"] = {sid: "servo_mixed:315:114"};
	this.sidHashMap["servo_mixed:315:114"] = {rtwname: "<S7>/Data Type Conversion"};
	this.rtwnameHashMap["<S7>/Servo Write"] = {sid: "servo_mixed:315:215"};
	this.sidHashMap["servo_mixed:315:215"] = {rtwname: "<S7>/Servo Write"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
