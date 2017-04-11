function Initial(x,y,z)
%% Inverse Kinematics
dt = 0.1;
t=0;
order = [1;-1;1;1;1;1]; % the rotation direction of real robot versus the model
% qd = q0(1:5);
q0 = [0;-0.1;0.0;0.0;0.0;0.0];

% while(t < 10)
% qd = (qd-0.5).*order/pi;
xd = [x;y;z;0;0;0];%[6*sin(2*t);6*cos(2*t)+15;23;0;0;0];
q_star = InverseKinetics(xd)
q = q_star/(pi);
% qd = order.*q+0.5; % the joint angular from inverse kinematics
% qd(qd<0) = 0;qd(qd>1)=1; % saturation
qd = q*180.*order(1:5);
qd(6) = -80;

q0 = q0*180.*order;

save simu_xd qd q0

%%
servo_mixed
end