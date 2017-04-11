%% This code is written for transferring data of two computers using TCP/IP
%% Code written by Yifan Weng

clc
clear all
close all

flag = 1;

if flag
    %% sender
    data = sin(1:64);
    plot(data);
    %echotcpip('on',30000);
    t = tcpip('localhost', 30000, 'NetworkRole', 'client');
    fopen(t);
    fwrite(t, data);
    data = sin(1:64);
    plot(data);


else
    %% receiver
    echotcpip('on',30000);
    t = tcpip('0.0.0.0', 30000, 'NetworkRole', 'server');
    fopen(t);
    data = fread(t, t.BytesAvailable);
    plot(data);

end
