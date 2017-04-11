function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["rtInf"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_nonfinite.c",
	size: 8};
	 this.metricsArray.var["rtInfF"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_nonfinite.c",
	size: 4};
	 this.metricsArray.var["rtMinusInf"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_nonfinite.c",
	size: 8};
	 this.metricsArray.var["rtMinusInfF"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_nonfinite.c",
	size: 4};
	 this.metricsArray.var["rtNaN"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_nonfinite.c",
	size: 8};
	 this.metricsArray.var["rtNaNF"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_nonfinite.c",
	size: 4};
	 this.metricsArray.fcn["calloc"] = {file: "/usr/local/MATLAB/R2016b/sys/lcc/include/stdlib.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["fabs"] = {file: "/usr/local/MATLAB/R2016b/sys/lcc/include/math.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["malloc"] = {file: "/usr/local/MATLAB/R2016b/sys/lcc/include/stdlib.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["memcpy"] = {file: "/usr/local/MATLAB/R2016b/sys/lcc/include/string.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["pm_printf_dummy"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/pm_printf.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["rtGetInf"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rtGetInf.c",
	stack: 30,
	stackTotal: 30};
	 this.metricsArray.fcn["rtGetInfF"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rtGetInf.c",
	stack: 4,
	stackTotal: 4};
	 this.metricsArray.fcn["rtGetMinusInf"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rtGetInf.c",
	stack: 30,
	stackTotal: 30};
	 this.metricsArray.fcn["rtGetMinusInfF"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rtGetInf.c",
	stack: 4,
	stackTotal: 4};
	 this.metricsArray.fcn["rtGetNaN"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rtGetNaN.c",
	stack: 30,
	stackTotal: 30};
	 this.metricsArray.fcn["rtGetNaNF"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rtGetNaN.c",
	stack: 8,
	stackTotal: 8};
	 this.metricsArray.fcn["rtIsInf"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_nonfinite.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["rtIsInfF"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_nonfinite.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["rtIsNaN"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_nonfinite.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["rtIsNaNF"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_nonfinite.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["rtPrintfNoOp"] = {file: "/usr/local/MATLAB/R2016b/rtw/c/src/rt_printf.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["rt_BackwardSubstitutionRR_Dbl"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_backsubrr_dbl.c",
	stack: 20,
	stackTotal: 20};
	 this.metricsArray.fcn["rt_CallSys"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_sfcn_helper.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["rt_ComplexRDivide_Dbl"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_matrixlib_dbl.c",
	stack: 72,
	stackTotal: 72};
	 this.metricsArray.fcn["rt_ComplexReciprocal_Dbl"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_matrixlib_dbl.c",
	stack: 16,
	stackTotal: 16};
	 this.metricsArray.fcn["rt_ComplexTimes_Dbl"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_matrixlib_dbl.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["rt_DisableSys"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_sfcn_helper.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["rt_EnableSys"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_sfcn_helper.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["rt_ForwardSubstitutionRR_Dbl"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_forwardsubrr_dbl.c",
	stack: 20,
	stackTotal: 20};
	 this.metricsArray.fcn["rt_Hypot_Dbl"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_matrixlib_dbl.c",
	stack: 16,
	stackTotal: 16};
	 this.metricsArray.fcn["rt_InitInfAndNaN"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_nonfinite.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["rt_lu_real"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/servo_mixed_ert_rtw/rt_lu_real.c",
	stack: 54,
	stackTotal: 54};
	 this.metricsArray.fcn["rt_mxCreateCharMatrixFromStrings"] = {file: "/usr/local/MATLAB/R2016b/rtw/c/src/rt_matrx.c",
	stack: 16,
	stackTotal: 16};
	 this.metricsArray.fcn["rt_mxCreateDoubleMatrix"] = {file: "/usr/local/MATLAB/R2016b/rtw/c/src/rt_matrx.c",
	stack: 2,
	stackTotal: 2};
	 this.metricsArray.fcn["rt_mxCreateNumericArray"] = {file: "/usr/local/MATLAB/R2016b/rtw/c/src/rt_matrx.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["rt_mxCreateString"] = {file: "/usr/local/MATLAB/R2016b/rtw/c/src/rt_matrx.c",
	stack: 8,
	stackTotal: 8};
	 this.metricsArray.fcn["rt_mxDuplicateArray"] = {file: "/usr/local/MATLAB/R2016b/rtw/c/src/rt_matrx.c",
	stack: 4,
	stackTotal: 4};
	 this.metricsArray.fcn["rt_mxGetDimensions"] = {file: "/usr/local/MATLAB/R2016b/rtw/c/src/rt_matrx.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["rt_mxGetEps"] = {file: "/usr/local/MATLAB/R2016b/rtw/c/src/rt_matrx.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["rt_mxGetString"] = {file: "/usr/local/MATLAB/R2016b/rtw/c/src/rt_matrx.c",
	stack: 8,
	stackTotal: 8};
	 this.metricsArray.fcn["sqrt"] = {file: "/usr/local/MATLAB/R2016b/sys/lcc/include/math.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["strlen"] = {file: "/usr/local/MATLAB/R2016b/sys/lcc/include/string.h",
	stack: 0,
	stackTotal: 0};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data;}
}
	 CodeMetrics.instance = new CodeMetrics();
