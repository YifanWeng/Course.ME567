%% Initialization
clc
clear
close all

%% Initialize
% link length
l1 = 8.5;
l2 = 2;
l3 = 10.5;
l4 = 9.6;
l5 = 3;
l6=15;
lg = l6/2; % length of grabber
% angular initialize: rest config
Project
% % angular initialize
% qi = [0.5;0.55;0.5;0.5;0.5;0.35];
% for i = 1:6
%     eval(['s = S.s',num2str(i),';']);
%     p_r = readPosition(s)
%      writePosition(s,qi(i));
% end


%%
% t=0;
% dt= 0.01;
% traj = 0;
% while(1)
%     traj = 0.5*sin(5*t)+0.5;
%     for i = 1:4
%         eval(['s = s',num2str(i),';']);
%         p = readPosition(s)
%         writePosition(s, traj);
%     end
%     t = t + dt;
%     pause(0.01);
% 