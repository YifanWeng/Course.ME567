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
servo_num = [3,5,6,9,10,11];
for i=1:6
    eval(['s',num2str(i),'= servo(a,[''D',num2str(servo_num(i)),''']);'])
end

%%
% angular initialize
q0 = [0.5;0.55;0.5;0.5;0.5;0.6];
for i = 1:6
    eval(['s = s',num2str(i),';']);
    p_r = readPosition(s)
     writePosition(s,q0(i));
end

%% Inverse Kinematics
dt = 0.1;
t=0;
order = [1;-1;1;1;1];
% qd = q0(1:5);

% while(t < 10)
% qd = (qd-0.5).*order/pi;
x = [0;10;20;0;0;0];%[6*sin(2*t);6*cos(2*t)+15;23;0;0;0];
q_star = InverseKinetics(x)
q = q_star/(pi);
qd = order.*q+0.5; % the joint angular from inverse kinematics
qd(qd<0) = 0;qd(qd>1)=1; % saturation
qd
%
for i = 1:5
    eval(['s = s',num2str(i),';']);
    p_r = readPosition(s);
     writePosition(s,qd(i));
end
% pause();
t = t+dt;
% end

%%
q0 = [0.5;0.6;0.5;0.5;0.5;0.5];
for i = 1:6
    eval(['s = s',num2str(i),';']);
    p_r = readPosition(s)
     writePosition(s,q0(i));
end

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