%% This code is written for transferring data of two computers using TCP/IP
%% Code written by Yifan Weng

clc
clear all
close all


%% sender
t = tcpip('localhost', 30000, 'NetworkRole', 'client');
fopen(t);
fwrite(t, data);
data = sin(1:64);
plot(data);



%% receiver
t = tcpip('0.0.0.0', 30000, 'NetworkRole', 'server');
fopen(t);
data = fread(t, t.BytesAvailable);
plot(data);
