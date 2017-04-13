%% Initialization
clc
clear
close all

%% Solving the q_1,q_2,q_3

%% Arduino code
if ~isempty(instrfind)
    fclose(instrfind);
    delete(instrfind);
end
a = arduino('/dev/ttyS99', 'Uno')

%%
configurePin(a,'D13','DigitalOutput');

while(1)
    writeDigitalPin(a, 'D13', 1);
    pause(0.5);
    writeDigitalPin(a, 'D13', 0);
    pause(0.5);
end