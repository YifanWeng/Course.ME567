%% Initialization
clc
clear all
close all

global a;
global led1_state;
global led2_state;
a = arduino('COM3');
a.pinMode(3,'output');
a.pinMode(4,'output');
a.pinMode(5,'input'); 
a.pinMode(6,'input'); 
led1_state = 0;
led2_state = 0;
