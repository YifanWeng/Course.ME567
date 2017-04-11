
x = [0;20;0;0;0;0];
warning('OFF','MATLAB:rankDeficientMatrix');
q_star = InverseKinetics(xd)

q = q_star/(pi);
order = [1;-1;1;1;1];
q = order.*q+0.5
