function q_star = InverseKinetics(x)
q0 = zeros(5,1);
dt = 0.02;
xd = x;
K = 0.1*eye(6);
q = q0;
err = 1000;
t = 0;
Q = diag([1;1;1;1;1;1]);
times = 0;
while(times<1e4 && err > 1.015 )
 % RK4
    f0 = dotq(t,q,xd,K);
    f1 = dotq(t+dt/2,q+1/2*dt*f0,xd,K);
    f2 = dotq(t+dt/2,q+1/2*dt*f1,xd,K);
    f3 = dotq(t+dt,q+dt*f2,xd,K);
    q = q + dt/6*(f0+2*f1+2*f2+f3);
    if(abs(q(2))>pi/4) % joint constraints 
        q(2) = q(2)/2;
    end
    if(abs(q(3))<pi/6) 
        q(3) = q(3)*2;
    end
    xe = forward(q);
    err = (xd - xe)'*Q*(xd - xe)
    t = t + dt;
    times = times +1;
end
q_star = q;
forward(q);
end


function x = forward(q)
x = zeros(6,1);
st1 = sin(q(1));
st2 = sin(q(2));
st3 = sin(q(3));
st4 = sin(q(4));
st5 = sin(q(5));
ct1 = cos(q(1));
ct2 = cos(q(2));
ct3 = cos(q(3));
ct4 = cos(q(4));
ct5 = cos(q(5));
 x(1:3) = [ 2*(-st1) + (21*(-st1)*(st2))/2 - 15*ct4*(ct3*(-st1)*(-ct2) + (-st1)*(st2)*st3) + 3*ct4*(ct3*(-st1)*(st2) - (-st1)*st3*(-ct2)) - 3*st4*(ct3*(-st1)*(-ct2) + (-st1)*(st2)*st3) - 15*st4*(ct3*(-st1)*(st2) - (-st1)*st3*(-ct2)) + (48*ct3*(-st1)*(st2))/5 - (48*(-st1)*st3*(-ct2))/5;
 2*(ct1) + (21*(st2)*(ct1))/2 - 15*ct4*(ct3*(ct1)*(-ct2) + (st2)*st3*(ct1)) + 3*ct4*(ct3*(st2)*(ct1) - st3*(ct1)*(-ct2)) - 3*st4*(ct3*(ct1)*(-ct2) + (st2)*st3*(ct1)) - 15*st4*(ct3*(st2)*(ct1) - st3*(ct1)*(-ct2)) + (48*ct3*(st2)*(ct1))/5 - (48*st3*(ct1)*(-ct2))/5;
 15*st4*(ct3*(-ct2) + st2*st3) - (21*(-ct2))/2 - 3*st4*(ct3*st2 - st3*(-ct2)) - (48*ct3*(-ct2))/5 - (48*st2*st3)/5 - 3*ct4*(ct3*(-ct2) + st2*st3) - 15*ct4*(ct3*st2 - st3*(-ct2)) + 17/2];


R =[ct5*(ct4*(ct3*(-st1)*st2 - (-st1)*st3*(-ct2)) - st4*(ct3*(-st1)*(-ct2) + (-st1)*st2*st3)) + st5*ct1,   ct5*ct1 - st5*(ct4*(ct3*(-st1)*st2 - (-st1)*st3*(-ct2)) - st4*(ct3*(-st1)*(-ct2) + (-st1)*st2*st3)), - ct4*(ct3*(-st1)*(-ct2) + (-st1)*st2*st3) - st4*(ct3*(-st1)*st2 - (-st1)*st3*(-ct2))
 ct5*(ct4*(ct3*st2*ct1 - st3*ct1*(-ct2)) - st4*(ct3*ct1*(-ct2) + st2*st3*ct1)) - (-st1)*st5, - ct5*(-st1) - st5*(ct4*(ct3*st2*ct1 - st3*ct1*(-ct2)) - st4*(ct3*ct1*(-ct2) + st2*st3*ct1)), - ct4*(ct3*ct1*(-ct2) + st2*st3*ct1) - st4*(ct3*st2*ct1 - st3*ct1*(-ct2))
                                                                                     -ct5*(st4*(ct3*st2 - st3*(-ct2)) + ct4*(ct3*(-ct2) + st2*st3)),                                                                                        st5*(st4*(ct3*st2 - st3*(-ct2)) + ct4*(ct3*(-ct2) + st2*st3)),                                                               st4*(ct3*(-ct2) + st2*st3) - ct4*(ct3*st2 - st3*(-ct2))];
% keyboard();
[V,D] = eig(R);
[~,ix] = min(abs(diag(D)-1));
x(4:6) = real(V(:,ix));
%[x(4:6),~] = eigs(R,1); 
 
end

function J = Jacobian(q)

st1 = sin(q(1));
st2 = sin(q(2));
st3 = sin(q(3));
st4 = sin(q(4));
ct1 = cos(q(1));
ct2 = cos(q(2));
ct3 = cos(q(3));
ct4 = cos(q(4));
J =[ 15*ct4*(ct3*ct1*-ct2 + st2*st3*ct1) - (21*st2*ct1)/2 - 2*ct1 - 3*ct4*(ct3*st2*ct1 - st3*ct1*-ct2) + 3*st4*(ct3*ct1*-ct2 + st2*st3*ct1) + 15*st4*(ct3*st2*ct1 - st3*ct1*-ct2) - (48*ct3*st2*ct1)/5 + (48*st3*ct1*-ct2)/5, 15*st4*(ct3*(-st1)*-ct2 + (-st1)*st2*st3) - 3*ct4*(ct3*(-st1)*-ct2 + (-st1)*st2*st3) - 15*ct4*(ct3*(-st1)*st2 - (-st1)*st3*-ct2) - (21*(-st1)*-ct2)/2 - 3*st4*(ct3*(-st1)*st2 - (-st1)*st3*-ct2) - (48*ct3*(-st1)*-ct2)/5 - (48*(-st1)*st2*st3)/5, 15*st4*(ct3*(-st1)*-ct2 + (-st1)*st2*st3) - 15*ct4*(ct3*(-st1)*st2 - (-st1)*st3*-ct2) - 3*ct4*(ct3*(-st1)*-ct2 + (-st1)*st2*st3) - 3*st4*(ct3*(-st1)*st2 - (-st1)*st3*-ct2) - (48*ct3*(-st1)*-ct2)/5 - (48*(-st1)*st2*st3)/5, 15*st4*(ct3*(-st1)*-ct2 + (-st1)*st2*st3) - 15*ct4*(ct3*(-st1)*st2 - (-st1)*st3*-ct2) - 3*ct4*(ct3*(-st1)*-ct2 + (-st1)*st2*st3) - 3*st4*(ct3*(-st1)*st2 - (-st1)*st3*-ct2),                                                                                                                                                                                   0;
2*(-st1) + (21*(-st1)*st2)/2 - 15*ct4*(ct3*(-st1)*-ct2 + (-st1)*st2*st3) + 3*ct4*(ct3*(-st1)*st2 - (-st1)*st3*-ct2) - 3*st4*(ct3*(-st1)*-ct2 + (-st1)*st2*st3) - 15*st4*(ct3*(-st1)*st2 - (-st1)*st3*-ct2) + (48*ct3*(-st1)*st2)/5 - (48*(-st1)*st3*-ct2)/5, 15*st4*(ct3*ct1*-ct2 + st2*st3*ct1) - 3*ct4*(ct3*ct1*-ct2 + st2*st3*ct1) - 15*ct4*(ct3*st2*ct1 - st3*ct1*-ct2) - (21*ct1*-ct2)/2 - 3*st4*(ct3*st2*ct1 - st3*ct1*-ct2) - (48*ct3*ct1*-ct2)/5 - (48*st2*st3*ct1)/5, 15*st4*(ct3*ct1*-ct2 + st2*st3*ct1) - 15*ct4*(ct3*st2*ct1 - st3*ct1*-ct2) - 3*ct4*(ct3*ct1*-ct2 + st2*st3*ct1) - 3*st4*(ct3*st2*ct1 - st3*ct1*-ct2) - (48*ct3*ct1*-ct2)/5 - (48*st2*st3*ct1)/5, 15*st4*(ct3*ct1*-ct2 + st2*st3*ct1) - 15*ct4*(ct3*st2*ct1 - st3*ct1*-ct2) - 3*ct4*(ct3*ct1*-ct2 + st2*st3*ct1) - 3*st4*(ct3*st2*ct1 - st3*ct1*-ct2),                                                                                                                                                                                   0;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       0,                                                                                                                                                                      3*st4*(ct3*-ct2 + st2*st3) - (21*st2)/2 + 15*st4*(ct3*st2 - st3*-ct2) - (48*ct3*st2)/5 + (48*st3*-ct2)/5 + 15*ct4*(ct3*-ct2 + st2*st3) - 3*ct4*(ct3*st2 - st3*-ct2),                                                                                                                                                       3*st4*(ct3*-ct2 + st2*st3) + 15*st4*(ct3*st2 - st3*-ct2) - (48*ct3*st2)/5 + (48*st3*-ct2)/5 + 15*ct4*(ct3*-ct2 + st2*st3) - 3*ct4*(ct3*st2 - st3*-ct2),                                                                                                                         3*st4*(ct3*-ct2 + st2*st3) + 15*st4*(ct3*st2 - st3*-ct2) + 15*ct4*(ct3*-ct2 + st2*st3) - 3*ct4*(ct3*st2 - st3*-ct2),                                                                                                                                                                                   0;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      -ct1,                                                                                                                                                                                                                                                                                                                                                                                                                                                               -ct1,                                                                                                                                                                                                                                                                                                                                                                 -ct1, - ct4*(ct3*(-st1)*-ct2 + (-st1)*st2*st3) - st4*(ct3*(-st1)*st2 - (-st1)*st3*-ct2);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       (-st1),                                                                                                                                                                                                                                                                                                                                                                                                                                                                (-st1),                                                                                                                                                                                                                                                                                                                                                                  (-st1), - ct4*(ct3*ct1*-ct2 + st2*st3*ct1) - st4*(ct3*st2*ct1 - st3*ct1*-ct2);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       1,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    0,                                                                                                                                                                                                                                                                                                                                                                                                                                                                             0,                                                                                                                                                                                                                                                                                                                                                                               0,                                                               st4*(ct3*-ct2 + st2*st3) - ct4*(ct3*st2 - st3*-ct2)];
end      

function dq = dotq(t,q,xd,K)
J = Jacobian(q);
e = xd - forward(q);
dq = J'*K*e;
end