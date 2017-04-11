function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.fcn["fabs"] = {file: "/usr/local/MATLAB/R2016b/sys/lcc/include/math.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["rt_BackwardSubstitutionRR_Dbl"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/Simulation_ert_rtw/rt_backsubrr_dbl.c",
	stack: 20,
	stackTotal: 20};
	 this.metricsArray.fcn["rt_ForwardSubstitutionRR_Dbl"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/Simulation_ert_rtw/rt_forwardsubrr_dbl.c",
	stack: 20,
	stackTotal: 20};
	 this.metricsArray.fcn["rt_Hypot_Dbl"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/Simulation_ert_rtw/rt_matrixlib_dbl.c",
	stack: 16,
	stackTotal: 16};
	 this.metricsArray.fcn["rt_lu_real"] = {file: "/media/pec/DataOne/PROG/EECS567/proj/Course.ME567/Simulation_ert_rtw/rt_lu_real.c",
	stack: 54,
	stackTotal: 54};
	 this.metricsArray.fcn["sqrt"] = {file: "/usr/local/MATLAB/R2016b/sys/lcc/include/math.h",
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
