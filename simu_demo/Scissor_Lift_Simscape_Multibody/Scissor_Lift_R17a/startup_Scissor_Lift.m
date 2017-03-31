% Copyright 2012-2017 The MathWorks, Inc.

ScissLift_HomeDir = pwd;

addpath([pwd]);
addpath([pwd '/Images']);
addpath([pwd '/Libraries']);
addpath([pwd '/Scripts_Data']);
addpath([pwd '/01_Scissor_Jack']);
addpath([pwd '/02_Defining_Bodies']);
addpath([pwd '/03_Scissor_Lift']);
addpath([pwd '/Pace']);

cd Pace
if((exist('sfun_time.c')) && ~exist('sfun_time.mexw64'))
    mex sfun_time.c
end
cd(ScissLift_HomeDir)

% Code to use copy within this repository
addpath([ScissLift_HomeDir filesep 'Libraries' filesep 'CFL_Libs']);
cd([ScissLift_HomeDir filesep 'Libraries' filesep 'CFL_Libs']);
startup_Contact_Forces

cd(ScissLift_HomeDir)

Scissor_Lift_Model_PARAM

Scissor_Lift

