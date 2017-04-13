%% This code is written for transferring data of two computers using TCP/IP
%% Code written by Yifan Weng

clc
clear all
close all

flag = 1;

if flag
    %% client
    tcpipClient = tcpip('localhost',80,'NetworkRole','Client');
    set(tcpipClient,'InputBufferSize',7688);
    set(tcpipClient,'Timeout',30);
    fopen(tcpipClient);
    rawData = fread(tcpipClient,961,'double');
    fclose(tcpipClient);
    reshapedData = reshape(rawData,31,31);
    surf(reshapedData);


else
    %% server
    data = membrane(1);
    s = whos('data');
    tcpipServer = tcpip('0.0.0.0',80,'NetworkRole','Server');
    set(tcpipServer,'OutputBufferSize',s.bytes);
    fopen(tcpipServer);
    fwrite(tcpipServer,data(:),'double');
    fclose(tcpipServer);
end