%% Initialization
clc
clear all
close all

%% Solving the q_1,q_2,q_3


%% Arduino code
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

if led1_state == 0
    a.digitalWrite(3,1);
    led1_state = a.digitalRead(5);
else
    a.digitalWrite(3,0);
    led1_state = a.digitalRead(5);
end
