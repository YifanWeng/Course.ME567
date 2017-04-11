function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant */
	this.urlHashMap["serial_demo:19"] = "serial_demo.c:46&serial_demo.h:80&serial_demo_data.c:50";
	/* <Root>/Constant1 */
	this.urlHashMap["serial_demo:54"] = "serial_demo.c:52&serial_demo.h:77&serial_demo_data.c:47";
	/* <Root>/Constant2 */
	this.urlHashMap["serial_demo:55"] = "serial_demo.c:53&serial_demo.h:74&serial_demo_data.c:44";
	/* <Root>/Demux1 */
	this.urlHashMap["serial_demo:4"] = "msg=&block=serial_demo:4";
	/* <Root>/Digital Output */
	this.urlHashMap["serial_demo:50"] = "msg=&block=serial_demo:50";
	/* <Root>/Logical
Operator */
	this.urlHashMap["serial_demo:18"] = "serial_demo.c:45";
	/* <Root>/Serial Receive */
	this.urlHashMap["serial_demo:3"] = "serial_demo.c:41&serial_demo.h:83,140&serial_demo_data.c:53,110";
	/* <Root>/Servo Motor */
	this.urlHashMap["serial_demo:28"] = "msg=&block=serial_demo:28";
	/* <Root>/Switch */
	this.urlHashMap["serial_demo:20"] = "serial_demo.c:99,109";
	/* <Root>/Switch1 */
	this.urlHashMap["serial_demo:53"] = "serial_demo.c:51,61";
	/* <S1>/In1 */
	this.urlHashMap["serial_demo:50:7"] = "msg=&block=serial_demo:50:7";
	/* <S1>/Data Type Conversion */
	this.urlHashMap["serial_demo:50:11"] = "serial_demo.c:63,74";
	/* <S1>/Digital Output */
	this.urlHashMap["serial_demo:50:12"] = "serial_demo.c:76,77,142,198,199,205&serial_demo.h:49,50";
	/* <S2>/In1 */
	this.urlHashMap["serial_demo:29"] = "msg=&block=serial_demo:29";
	/* <S2>/In2 */
	this.urlHashMap["serial_demo:30"] = "msg=&block=serial_demo:30";
	/* <S2>/In3 */
	this.urlHashMap["serial_demo:31"] = "msg=&block=serial_demo:31";
	/* <S2>/In4 */
	this.urlHashMap["serial_demo:32"] = "msg=&block=serial_demo:32";
	/* <S2>/In5 */
	this.urlHashMap["serial_demo:33"] = "msg=&block=serial_demo:33";
	/* <S2>/In6 */
	this.urlHashMap["serial_demo:34"] = "msg=&block=serial_demo:34";
	/* <S2>/Standard Servo Read */
	this.urlHashMap["serial_demo:21"] = "serial_demo.c:81,147&serial_demo.h:86,104&serial_demo_data.c:56,74";
	/* <S2>/Standard Servo Read1 */
	this.urlHashMap["serial_demo:22"] = "serial_demo.c:84,151&serial_demo.h:89,107&serial_demo_data.c:59,77";
	/* <S2>/Standard Servo Read2 */
	this.urlHashMap["serial_demo:23"] = "serial_demo.c:87,155&serial_demo.h:92,110&serial_demo_data.c:62,80";
	/* <S2>/Standard Servo Read3 */
	this.urlHashMap["serial_demo:24"] = "serial_demo.c:90,159&serial_demo.h:95,113&serial_demo_data.c:65,83";
	/* <S2>/Standard Servo Read4 */
	this.urlHashMap["serial_demo:25"] = "serial_demo.c:93,163&serial_demo.h:98,116&serial_demo_data.c:68,86";
	/* <S2>/Standard Servo Read5 */
	this.urlHashMap["serial_demo:26"] = "serial_demo.c:96,167&serial_demo.h:101,119&serial_demo_data.c:71,89";
	/* <S2>/Standard Servo Write */
	this.urlHashMap["serial_demo:12"] = "msg=&block=serial_demo:12";
	/* <S2>/Standard Servo Write1 */
	this.urlHashMap["serial_demo:13"] = "msg=&block=serial_demo:13";
	/* <S2>/Standard Servo Write2 */
	this.urlHashMap["serial_demo:14"] = "msg=&block=serial_demo:14";
	/* <S2>/Standard Servo Write3 */
	this.urlHashMap["serial_demo:15"] = "msg=&block=serial_demo:15";
	/* <S2>/Standard Servo Write4 */
	this.urlHashMap["serial_demo:16"] = "msg=&block=serial_demo:16";
	/* <S2>/Standard Servo Write5 */
	this.urlHashMap["serial_demo:17"] = "msg=&block=serial_demo:17";
	/* <S2>/Out1 */
	this.urlHashMap["serial_demo:35"] = "msg=&block=serial_demo:35";
	/* <S2>/Out2 */
	this.urlHashMap["serial_demo:36"] = "msg=&block=serial_demo:36";
	/* <S2>/Out3 */
	this.urlHashMap["serial_demo:37"] = "msg=&block=serial_demo:37";
	/* <S2>/Out4 */
	this.urlHashMap["serial_demo:38"] = "msg=&block=serial_demo:38";
	/* <S2>/Out5 */
	this.urlHashMap["serial_demo:39"] = "msg=&block=serial_demo:39";
	/* <S2>/Out6 */
	this.urlHashMap["serial_demo:40"] = "msg=&block=serial_demo:40";
	/* <S3>/In1 */
	this.urlHashMap["serial_demo:12:116"] = "msg=&block=serial_demo:12:116";
	/* <S3>/Data Type Conversion */
	this.urlHashMap["serial_demo:12:114"] = "msg=&block=serial_demo:12:114";
	/* <S3>/Servo Write */
	this.urlHashMap["serial_demo:12:215"] = "serial_demo.c:111,171&serial_demo.h:56,122&serial_demo_data.c:26,92";
	/* <S4>/In1 */
	this.urlHashMap["serial_demo:13:116"] = "msg=&block=serial_demo:13:116";
	/* <S4>/Data Type Conversion */
	this.urlHashMap["serial_demo:13:114"] = "msg=&block=serial_demo:13:114";
	/* <S4>/Servo Write */
	this.urlHashMap["serial_demo:13:215"] = "serial_demo.c:114,174&serial_demo.h:59,125&serial_demo_data.c:29,95";
	/* <S5>/In1 */
	this.urlHashMap["serial_demo:14:116"] = "msg=&block=serial_demo:14:116";
	/* <S5>/Data Type Conversion */
	this.urlHashMap["serial_demo:14:114"] = "msg=&block=serial_demo:14:114";
	/* <S5>/Servo Write */
	this.urlHashMap["serial_demo:14:215"] = "serial_demo.c:117,178&serial_demo.h:62,128&serial_demo_data.c:32,98";
	/* <S6>/In1 */
	this.urlHashMap["serial_demo:15:116"] = "msg=&block=serial_demo:15:116";
	/* <S6>/Data Type Conversion */
	this.urlHashMap["serial_demo:15:114"] = "msg=&block=serial_demo:15:114";
	/* <S6>/Servo Write */
	this.urlHashMap["serial_demo:15:215"] = "serial_demo.c:120,182&serial_demo.h:65,131&serial_demo_data.c:35,101";
	/* <S7>/In1 */
	this.urlHashMap["serial_demo:16:116"] = "msg=&block=serial_demo:16:116";
	/* <S7>/Data Type Conversion */
	this.urlHashMap["serial_demo:16:114"] = "msg=&block=serial_demo:16:114";
	/* <S7>/Servo Write */
	this.urlHashMap["serial_demo:16:215"] = "serial_demo.c:123,186&serial_demo.h:68,134&serial_demo_data.c:38,104";
	/* <S8>/In1 */
	this.urlHashMap["serial_demo:17:116"] = "msg=&block=serial_demo:17:116";
	/* <S8>/Data Type Conversion */
	this.urlHashMap["serial_demo:17:114"] = "msg=&block=serial_demo:17:114";
	/* <S8>/Servo Write */
	this.urlHashMap["serial_demo:17:215"] = "serial_demo.c:126,190&serial_demo.h:71,137&serial_demo_data.c:41,107";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "serial_demo"};
	this.sidHashMap["serial_demo"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "serial_demo:50"};
	this.sidHashMap["serial_demo:50"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "serial_demo:28"};
	this.sidHashMap["serial_demo:28"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "serial_demo:12"};
	this.sidHashMap["serial_demo:12"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "serial_demo:13"};
	this.sidHashMap["serial_demo:13"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "serial_demo:14"};
	this.sidHashMap["serial_demo:14"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<S6>"] = {sid: "serial_demo:15"};
	this.sidHashMap["serial_demo:15"] = {rtwname: "<S6>"};
	this.rtwnameHashMap["<S7>"] = {sid: "serial_demo:16"};
	this.sidHashMap["serial_demo:16"] = {rtwname: "<S7>"};
	this.rtwnameHashMap["<S8>"] = {sid: "serial_demo:17"};
	this.sidHashMap["serial_demo:17"] = {rtwname: "<S8>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "serial_demo:19"};
	this.sidHashMap["serial_demo:19"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "serial_demo:54"};
	this.sidHashMap["serial_demo:54"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Constant2"] = {sid: "serial_demo:55"};
	this.sidHashMap["serial_demo:55"] = {rtwname: "<Root>/Constant2"};
	this.rtwnameHashMap["<Root>/Demux1"] = {sid: "serial_demo:4"};
	this.sidHashMap["serial_demo:4"] = {rtwname: "<Root>/Demux1"};
	this.rtwnameHashMap["<Root>/Digital Output"] = {sid: "serial_demo:50"};
	this.sidHashMap["serial_demo:50"] = {rtwname: "<Root>/Digital Output"};
	this.rtwnameHashMap["<Root>/Logical Operator"] = {sid: "serial_demo:18"};
	this.sidHashMap["serial_demo:18"] = {rtwname: "<Root>/Logical Operator"};
	this.rtwnameHashMap["<Root>/Serial Receive"] = {sid: "serial_demo:3"};
	this.sidHashMap["serial_demo:3"] = {rtwname: "<Root>/Serial Receive"};
	this.rtwnameHashMap["<Root>/Servo Motor"] = {sid: "serial_demo:28"};
	this.sidHashMap["serial_demo:28"] = {rtwname: "<Root>/Servo Motor"};
	this.rtwnameHashMap["<Root>/Switch"] = {sid: "serial_demo:20"};
	this.sidHashMap["serial_demo:20"] = {rtwname: "<Root>/Switch"};
	this.rtwnameHashMap["<Root>/Switch1"] = {sid: "serial_demo:53"};
	this.sidHashMap["serial_demo:53"] = {rtwname: "<Root>/Switch1"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "serial_demo:50:7"};
	this.sidHashMap["serial_demo:50:7"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "serial_demo:50:11"};
	this.sidHashMap["serial_demo:50:11"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/Digital Output"] = {sid: "serial_demo:50:12"};
	this.sidHashMap["serial_demo:50:12"] = {rtwname: "<S1>/Digital Output"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "serial_demo:29"};
	this.sidHashMap["serial_demo:29"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/In2"] = {sid: "serial_demo:30"};
	this.sidHashMap["serial_demo:30"] = {rtwname: "<S2>/In2"};
	this.rtwnameHashMap["<S2>/In3"] = {sid: "serial_demo:31"};
	this.sidHashMap["serial_demo:31"] = {rtwname: "<S2>/In3"};
	this.rtwnameHashMap["<S2>/In4"] = {sid: "serial_demo:32"};
	this.sidHashMap["serial_demo:32"] = {rtwname: "<S2>/In4"};
	this.rtwnameHashMap["<S2>/In5"] = {sid: "serial_demo:33"};
	this.sidHashMap["serial_demo:33"] = {rtwname: "<S2>/In5"};
	this.rtwnameHashMap["<S2>/In6"] = {sid: "serial_demo:34"};
	this.sidHashMap["serial_demo:34"] = {rtwname: "<S2>/In6"};
	this.rtwnameHashMap["<S2>/Standard Servo Read"] = {sid: "serial_demo:21"};
	this.sidHashMap["serial_demo:21"] = {rtwname: "<S2>/Standard Servo Read"};
	this.rtwnameHashMap["<S2>/Standard Servo Read1"] = {sid: "serial_demo:22"};
	this.sidHashMap["serial_demo:22"] = {rtwname: "<S2>/Standard Servo Read1"};
	this.rtwnameHashMap["<S2>/Standard Servo Read2"] = {sid: "serial_demo:23"};
	this.sidHashMap["serial_demo:23"] = {rtwname: "<S2>/Standard Servo Read2"};
	this.rtwnameHashMap["<S2>/Standard Servo Read3"] = {sid: "serial_demo:24"};
	this.sidHashMap["serial_demo:24"] = {rtwname: "<S2>/Standard Servo Read3"};
	this.rtwnameHashMap["<S2>/Standard Servo Read4"] = {sid: "serial_demo:25"};
	this.sidHashMap["serial_demo:25"] = {rtwname: "<S2>/Standard Servo Read4"};
	this.rtwnameHashMap["<S2>/Standard Servo Read5"] = {sid: "serial_demo:26"};
	this.sidHashMap["serial_demo:26"] = {rtwname: "<S2>/Standard Servo Read5"};
	this.rtwnameHashMap["<S2>/Standard Servo Write"] = {sid: "serial_demo:12"};
	this.sidHashMap["serial_demo:12"] = {rtwname: "<S2>/Standard Servo Write"};
	this.rtwnameHashMap["<S2>/Standard Servo Write1"] = {sid: "serial_demo:13"};
	this.sidHashMap["serial_demo:13"] = {rtwname: "<S2>/Standard Servo Write1"};
	this.rtwnameHashMap["<S2>/Standard Servo Write2"] = {sid: "serial_demo:14"};
	this.sidHashMap["serial_demo:14"] = {rtwname: "<S2>/Standard Servo Write2"};
	this.rtwnameHashMap["<S2>/Standard Servo Write3"] = {sid: "serial_demo:15"};
	this.sidHashMap["serial_demo:15"] = {rtwname: "<S2>/Standard Servo Write3"};
	this.rtwnameHashMap["<S2>/Standard Servo Write4"] = {sid: "serial_demo:16"};
	this.sidHashMap["serial_demo:16"] = {rtwname: "<S2>/Standard Servo Write4"};
	this.rtwnameHashMap["<S2>/Standard Servo Write5"] = {sid: "serial_demo:17"};
	this.sidHashMap["serial_demo:17"] = {rtwname: "<S2>/Standard Servo Write5"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "serial_demo:35"};
	this.sidHashMap["serial_demo:35"] = {rtwname: "<S2>/Out1"};
	this.rtwnameHashMap["<S2>/Out2"] = {sid: "serial_demo:36"};
	this.sidHashMap["serial_demo:36"] = {rtwname: "<S2>/Out2"};
	this.rtwnameHashMap["<S2>/Out3"] = {sid: "serial_demo:37"};
	this.sidHashMap["serial_demo:37"] = {rtwname: "<S2>/Out3"};
	this.rtwnameHashMap["<S2>/Out4"] = {sid: "serial_demo:38"};
	this.sidHashMap["serial_demo:38"] = {rtwname: "<S2>/Out4"};
	this.rtwnameHashMap["<S2>/Out5"] = {sid: "serial_demo:39"};
	this.sidHashMap["serial_demo:39"] = {rtwname: "<S2>/Out5"};
	this.rtwnameHashMap["<S2>/Out6"] = {sid: "serial_demo:40"};
	this.sidHashMap["serial_demo:40"] = {rtwname: "<S2>/Out6"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "serial_demo:12:116"};
	this.sidHashMap["serial_demo:12:116"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Data Type Conversion"] = {sid: "serial_demo:12:114"};
	this.sidHashMap["serial_demo:12:114"] = {rtwname: "<S3>/Data Type Conversion"};
	this.rtwnameHashMap["<S3>/Servo Write"] = {sid: "serial_demo:12:215"};
	this.sidHashMap["serial_demo:12:215"] = {rtwname: "<S3>/Servo Write"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "serial_demo:13:116"};
	this.sidHashMap["serial_demo:13:116"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/Data Type Conversion"] = {sid: "serial_demo:13:114"};
	this.sidHashMap["serial_demo:13:114"] = {rtwname: "<S4>/Data Type Conversion"};
	this.rtwnameHashMap["<S4>/Servo Write"] = {sid: "serial_demo:13:215"};
	this.sidHashMap["serial_demo:13:215"] = {rtwname: "<S4>/Servo Write"};
	this.rtwnameHashMap["<S5>/In1"] = {sid: "serial_demo:14:116"};
	this.sidHashMap["serial_demo:14:116"] = {rtwname: "<S5>/In1"};
	this.rtwnameHashMap["<S5>/Data Type Conversion"] = {sid: "serial_demo:14:114"};
	this.sidHashMap["serial_demo:14:114"] = {rtwname: "<S5>/Data Type Conversion"};
	this.rtwnameHashMap["<S5>/Servo Write"] = {sid: "serial_demo:14:215"};
	this.sidHashMap["serial_demo:14:215"] = {rtwname: "<S5>/Servo Write"};
	this.rtwnameHashMap["<S6>/In1"] = {sid: "serial_demo:15:116"};
	this.sidHashMap["serial_demo:15:116"] = {rtwname: "<S6>/In1"};
	this.rtwnameHashMap["<S6>/Data Type Conversion"] = {sid: "serial_demo:15:114"};
	this.sidHashMap["serial_demo:15:114"] = {rtwname: "<S6>/Data Type Conversion"};
	this.rtwnameHashMap["<S6>/Servo Write"] = {sid: "serial_demo:15:215"};
	this.sidHashMap["serial_demo:15:215"] = {rtwname: "<S6>/Servo Write"};
	this.rtwnameHashMap["<S7>/In1"] = {sid: "serial_demo:16:116"};
	this.sidHashMap["serial_demo:16:116"] = {rtwname: "<S7>/In1"};
	this.rtwnameHashMap["<S7>/Data Type Conversion"] = {sid: "serial_demo:16:114"};
	this.sidHashMap["serial_demo:16:114"] = {rtwname: "<S7>/Data Type Conversion"};
	this.rtwnameHashMap["<S7>/Servo Write"] = {sid: "serial_demo:16:215"};
	this.sidHashMap["serial_demo:16:215"] = {rtwname: "<S7>/Servo Write"};
	this.rtwnameHashMap["<S8>/In1"] = {sid: "serial_demo:17:116"};
	this.sidHashMap["serial_demo:17:116"] = {rtwname: "<S8>/In1"};
	this.rtwnameHashMap["<S8>/Data Type Conversion"] = {sid: "serial_demo:17:114"};
	this.sidHashMap["serial_demo:17:114"] = {rtwname: "<S8>/Data Type Conversion"};
	this.rtwnameHashMap["<S8>/Servo Write"] = {sid: "serial_demo:17:215"};
	this.sidHashMap["serial_demo:17:215"] = {rtwname: "<S8>/Servo Write"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
