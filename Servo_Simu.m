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
q0 = [0;0;0.0;0.0;0.0;0.1];


% % angular initialize
% qi = [0.5;0.55;0.5;0.5;0.5;0.35];
% for i = 1:6
%     eval(['s = S.s',num2str(i),';']);
%     p_r = readPosition(s)
%      writePosition(s,qi(i));
% end

%% Inverse Kinematics
dt = 0.1;
t=0;
order = [1;-1;1;1;1;1]; % the rotation direction of real robot versus the model
% qd = q0(1:5);

% while(t < 10)
% qd = (qd-0.5).*order/pi;
xd = [0;20;0;0;0;0];%[6*sin(2*t);6*cos(2*t)+15;23;0;0;0];
q_star = InverseKinetics(xd)
q = q_star/(pi);
% qd = order.*q+0.5; % the joint angular from inverse kinematics
% qd(qd<0) = 0;qd(qd>1)=1; % saturation
qd = q*180.*order(1:5) + 90;
qd(6) = 45;
q0 = q0*180.*order + 90;

save simu_xd qd q0

%%
servo_mixed



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
% end