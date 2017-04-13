% Compute Kinematics and Differential Kinematics of the robot

syms t1 t2 t3 t4 t5
l1 = 8.5;
l2 = 2;
l3 = 10.5;
l4 = 9.6;
l5 = 3;
l6=15;

H =zeros(4,4);

DH = [-pi/2 l2 l1 pi/2+t1;
    0 l3 0 -pi/2+t2;
    0 l4 0 t3;
    -pi/2 l5 0 t4;
    0 0 l6 t5];

A00 = eye(4);
for i = 1:5
    theta = DH(i,4);
    alpha = DH(i,1);
    a = DH(i,2);
    d = DH(i,3);
    ct = cos(theta);
    st = sin(theta);
    ca = cos(alpha);
    sa = sin(alpha);
    A = [ct -st*ca st*sa a*ct;
        st ct*ca -ct*sa a*st;
        0 sa ca d;
        0 0 0 1];
    eval(['A0',num2str(i),'=A0',num2str(i-1),'*A;']);
end
%%
K = A05(1:3,4);% forward kinematics

Jp =[diff(K,'t1'),diff(K,'t2'),diff(K,'t3'),diff(K,'t4'),diff(K,'t5')];
z0 = [0;0;1];
for i=1:4
    eval(['z',num2str(i),'=A0',num2str(i),'(1:3,3);']);
end
Jo =[z0,z1,z2,z3,z4];
J = [Jp;Jo];
%%
R = A05(1:3,1:3);