function [y,y_simu] = y_target(state)

S=coder.load('simu_xd');
if(state == 1)
    y=[S.qd;45];
    y_simu = (y-90)/180*pi;
    if(y_simu(6)> 0 )
        y_simu(6) = 0;
    end
if(state == 2 || state == 0)
    y=S.q0;
    y_simu = (y-90)/180*pi;
    if(y_simu(6)> 0 ) 
        y_simu(6) = 0;
    end
    
end
end