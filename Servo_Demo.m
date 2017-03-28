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
s = servo(a,'D7')