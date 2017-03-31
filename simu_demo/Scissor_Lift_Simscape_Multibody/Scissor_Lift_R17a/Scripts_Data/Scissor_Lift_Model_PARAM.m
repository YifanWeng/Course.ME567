% SCISSOR LIFT PARAMETERS
% Copyright 2012-2017 The MathWorks, Inc.

Scissor_Lift_Param.Colors.Yellow = [0.6 0.6 0.0];
Scissor_Lift_Param.Colors.Red = [0.8 0.2 0.0];
Scissor_Lift_Param.Colors.Blue = [0.0 0.6 0.8];
Scissor_Lift_Param.Colors.Dark_Gray = [0.5 0.5 0.5];
Scissor_Lift_Param.Colors.Gray = [0.9 0.9 0.9];
Scissor_Lift_Param.Colors.GrayBlue = [164 184 200]/255;

Scissor_Lift_Param.Link.Length = 240; % cm
Scissor_Lift_Param.Link.Width = 15; % cm
Scissor_Lift_Param.Link.Thickness = 4; % cm
Scissor_Lift_Param.Link.Hole_Radius = 5; % cm
Scissor_Lift_Param.Link.Density = 10; 
Scissor_Lift_Param.Link.Color = [0.6 0.6 0.0];
Scissor_Lift_Param.Link.Opacity = 1;

%Scissor_Lift_Param.Roller.Init_Pos_Target = (Scissor_Lift_Param.Link.Length-0.5); % cm 
Scissor_Lift_Param.Roller.Init_Pos_Target = (Scissor_Lift_Param.Link.Length-0.5)*-1; % cm 
Scissor_Lift_Param.Crossbar.Init_Angle_Target = asin(Scissor_Lift_Param.Roller.Init_Pos_Target/Scissor_Lift_Param.Link.Length)*180/pi-90;

Scissor_Lift_Param.Link_Separation.Outer_Outer = 80; %cm
Scissor_Lift_Param.Link_Separation.Outer_Inner = 10; %cm

Scissor_Lift_Param.Trans_Shaft.Radius = 5; % cm
Scissor_Lift_Param.Trans_Shaft.Density = 1000;
Scissor_Lift_Param.Trans_Shaft.Color = Scissor_Lift_Param.Colors.GrayBlue;
%Scissor_Lift_Param.Trans_Shaft.Color = [0.0 0.6 0.8];
Scissor_Lift_Param.Trans_Shaft.Opacity = 1;

Scissor_Lift_Param.Link_Pin.Radius = 5; % cm
Scissor_Lift_Param.Link_Pin.Density = 1000;
Scissor_Lift_Param.Link_Pin.Color = Scissor_Lift_Param.Colors.GrayBlue;
%Scissor_Lift_Param.Link_Pin.Color = [0.0 0.6 0.8];
Scissor_Lift_Param.Link_Pin.Opacity = 1;

Scissor_Lift_Param.Roller.Roller_Radius = 8;
Scissor_Lift_Param.Roller.Roller_Length = 6;
Scissor_Lift_Param.Roller.Shaft_Radius = 5;
Scissor_Lift_Param.Roller.Shaft_Length = Scissor_Lift_Param.Link.Thickness*1.1;
Scissor_Lift_Param.Roller.Density = 1000;
Scissor_Lift_Param.Roller.Color = [0.0 0.6 0.8];
Scissor_Lift_Param.Roller.Opacity = 1;

Scissor_Lift_Param.Base_Block.Height = Scissor_Lift_Param.Roller.Roller_Radius*2;
Scissor_Lift_Param.Base_Block.Width = Scissor_Lift_Param.Base_Block.Height;
Scissor_Lift_Param.Base_Block.Length = Scissor_Lift_Param.Roller.Roller_Length;
Scissor_Lift_Param.Base_Block.Shaft_Radius = Scissor_Lift_Param.Roller.Shaft_Radius;
Scissor_Lift_Param.Base_Block.Shaft_Length = Scissor_Lift_Param.Link.Thickness*1.1;
Scissor_Lift_Param.Base_Block.Density = 1000;
Scissor_Lift_Param.Base_Block.Color = [0.0 0.6 0.8];
Scissor_Lift_Param.Base_Block.Opacity = 1;


Scissor_Lift_Param.Actuator.Bracket.Flange.Width = 70; %cm
Scissor_Lift_Param.Actuator.Bracket.Flange.Height = 20; %cm
Scissor_Lift_Param.Actuator.Bracket.Flange.Thickness = Scissor_Lift_Param.Link.Thickness; %cm
Scissor_Lift_Param.Actuator.Bracket.Flange.Offset = Scissor_Lift_Param.Link.Width/2; %cm
Scissor_Lift_Param.Actuator.Bracket.Flange.Density = 1000; %cm
Scissor_Lift_Param.Actuator.Bracket.Flange.Color = Scissor_Lift_Param.Colors.Gray;
Scissor_Lift_Param.Actuator.Bracket.Flange.Opacity = 1;
Scissor_Lift_Param.Actuator.Bracket.Shaft.Radius = Scissor_Lift_Param.Trans_Shaft.Radius;
Scissor_Lift_Param.Actuator.Bracket.Shaft.Density = 1000;
Scissor_Lift_Param.Actuator.Bracket.Shaft.Color = Scissor_Lift_Param.Colors.GrayBlue;
%Scissor_Lift_Param.Actuator.Bracket.Shaft.Color = [0.0 0.6 0.8];
Scissor_Lift_Param.Actuator.Bracket.Shaft.Opacity = 1;

Scissor_Lift_Param.Actuator.Collar.Radius = Scissor_Lift_Param.Trans_Shaft.Radius*1.3; %cm
Scissor_Lift_Param.Actuator.Collar.Length = 30; %cm
Scissor_Lift_Param.Actuator.Collar.Density = 1000; %cm
Scissor_Lift_Param.Actuator.Collar.Color = [0.5 0.5 0.5]; %cm
Scissor_Lift_Param.Actuator.Collar.Opacity = 1; %cm

Scissor_Lift_Param.Actuator.Cylinder.Radius = Scissor_Lift_Param.Trans_Shaft.Radius*1.3; %cm
Scissor_Lift_Param.Actuator.Cylinder.Length = Scissor_Lift_Param.Link.Length*0.675; %cm

Scissor_Lift_Param.Actuator.Piston_Seat.Radius = Scissor_Lift_Param.Trans_Shaft.Radius*1.3; %cm
Scissor_Lift_Param.Actuator.Piston_Seat.Length = 20; %cm
Scissor_Lift_Param.Actuator.Piston_Length = Scissor_Lift_Param.Link.Length*0.675; %cm
Scissor_Lift_Param.Actuator.Piston_Radius = Scissor_Lift_Param.Actuator.Cylinder.Radius*0.9; %cm

Scissor_Lift_Param.Actuator.Spring.Stiffness = 5e4; %cm
Scissor_Lift_Param.Actuator.Spring.Damping = 9e3; %cm
Scissor_Lift_Param.Actuator.Spring.Equilibrium_Position = Scissor_Lift_Param.Link.Length; %cm

Scissor_Lift_Param.Cart.Axle.Radius = 4;
Scissor_Lift_Param.Cart.Axle.Wheel_Distance = 90;
Scissor_Lift_Param.Cart.Axle.Tire.Radius = 19;
Scissor_Lift_Param.Cart.Axle.Rim.Radius = Scissor_Lift_Param.Cart.Axle.Tire.Radius-5;
Scissor_Lift_Param.Cart.Axle.Tire.Thickness = 15;
Scissor_Lift_Param.Cart.Axle.Tire.Density = 100;
Scissor_Lift_Param.Cart.Axle.Tire.Color = Scissor_Lift_Param.Colors.Gray;
Scissor_Lift_Param.Cart.Axle.Rim.Thickness = 10;
Scissor_Lift_Param.Cart.Axle.Rim.Density = 1000;
Scissor_Lift_Param.Cart.Axle.Rim.Color = [0.5 0.5 0.5];

Scissor_Lift_Param.Cart.Axle.Tire.Stiffness = 1e5;
Scissor_Lift_Param.Cart.Axle.Tire.Damping = 1e6;
Scissor_Lift_Param.Cart.Axle.Tire.MuStatic = 0.8;
Scissor_Lift_Param.Cart.Axle.Tire.MuKinetic = 0.5;
Scissor_Lift_Param.Cart.Axle.Tire.MuVth = 0.005;

Scissor_Lift_Param.Cart.Platform.Height = 10;
Scissor_Lift_Param.Cart.Platform.Width = ...
    Scissor_Lift_Param.Cart.Axle.Wheel_Distance+...
    Scissor_Lift_Param.Cart.Axle.Tire.Thickness;
Scissor_Lift_Param.Cart.Platform.Length = Scissor_Lift_Param.Link.Length+40;

Scissor_Lift_Param.Cart.Platform.Rim.Width = 2; 
Scissor_Lift_Param.Cart.Platform.Rim.Depth = Scissor_Lift_Param.Base_Block.Height; 
Scissor_Lift_Param.Cart.Platform.Rim.Extrusion = Extr_Data_Box(...
    Scissor_Lift_Param.Cart.Platform.Length/2,...
    Scissor_Lift_Param.Cart.Platform.Length/2-Scissor_Lift_Param.Cart.Platform.Rim.Width,...
    Scissor_Lift_Param.Cart.Platform.Width/2,...
    Scissor_Lift_Param.Cart.Platform.Width/2-Scissor_Lift_Param.Cart.Platform.Rim.Width);

Scissor_Lift_Param.Cart.Axle.Wheelbase = Scissor_Lift_Param.Cart.Platform.Length-2*Scissor_Lift_Param.Cart.Axle.Tire.Radius;

Scissor_Lift_Param.Cart.Platform.Subhousing.FUD = 2;
Scissor_Lift_Param.Cart.Platform.Subhousing.RUD = 5;
Scissor_Lift_Param.Cart.Platform.Subhousing.FWHrad = 0.5*Scissor_Lift_Param.Cart.Axle.Tire.Radius;
Scissor_Lift_Param.Cart.Platform.Subhousing.RWHrad = Scissor_Lift_Param.Cart.Axle.Tire.Radius;

Scissor_Lift_Param.Cart.Platform.Subhousing.Extr = [...
    -Scissor_Lift_Param.Cart.Platform.Length/2 Scissor_Lift_Param.Cart.Platform.Subhousing.FUD;...
    -Scissor_Lift_Param.Cart.Platform.Length/2 0;...
    -Scissor_Lift_Param.Cart.Platform.Length/2+2*Scissor_Lift_Param.Cart.Axle.Tire.Radius 0;...
    [-Scissor_Lift_Param.Cart.Platform.Length/2+2*Scissor_Lift_Param.Cart.Axle.Tire.Radius+sind(1:1:90)*Scissor_Lift_Param.Cart.Platform.Subhousing.FWHrad; ...
    cosd(1:1:90)*Scissor_Lift_Param.Cart.Platform.Subhousing.FWHrad-Scissor_Lift_Param.Cart.Platform.Subhousing.FWHrad]';...
    -Scissor_Lift_Param.Cart.Platform.Length/2+2*Scissor_Lift_Param.Cart.Axle.Tire.Radius+Scissor_Lift_Param.Cart.Platform.Subhousing.FWHrad ...
    -Scissor_Lift_Param.Cart.Platform.Subhousing.FWHrad-Scissor_Lift_Param.Cart.Axle.Tire.Radius*1.6;...
    Scissor_Lift_Param.Cart.Platform.Length/2-Scissor_Lift_Param.Cart.Axle.Tire.Radius*2.2...
    -Scissor_Lift_Param.Cart.Platform.Subhousing.FWHrad-Scissor_Lift_Param.Cart.Axle.Tire.Radius*1.6;
    Scissor_Lift_Param.Cart.Platform.Length/2-Scissor_Lift_Param.Cart.Axle.Tire.Radius*2.2...
    -Scissor_Lift_Param.Cart.Platform.Subhousing.FWHrad-Scissor_Lift_Param.Cart.Axle.Tire.Radius*0.8;
    [Scissor_Lift_Param.Cart.Platform.Length/2+sind(-89:1:0)*Scissor_Lift_Param.Cart.Axle.Tire.Radius*1.2-Scissor_Lift_Param.Cart.Axle.Tire.Radius; ...
    cosd(-89:1:0)*Scissor_Lift_Param.Cart.Axle.Tire.Radius*1.2-Scissor_Lift_Param.Cart.Platform.Subhousing.FWHrad-Scissor_Lift_Param.Cart.Axle.Tire.Radius*0.8]';...
    Scissor_Lift_Param.Cart.Platform.Length/2 -Scissor_Lift_Param.Cart.Axle.Tire.Radius*(0.1);...    
    Scissor_Lift_Param.Cart.Platform.Length/2 Scissor_Lift_Param.Cart.Platform.Subhousing.FUD...    
    ];

%figure(1);
%plot(Scissor_Lift_Param.Cart.Platform.Subhousing.Extr(:,1),Scissor_Lift_Param.Cart.Platform.Subhousing.Extr(:,2));
%axis equal

Scissor_Lift_Param.Cart.Platform.Subhousing.Color = Scissor_Lift_Param.Colors.Blue;
Scissor_Lift_Param.Floor.Width = 10;
Scissor_Lift_Param.Floor.Length = 10;
Scissor_Lift_Param.Floor.Height = 0.05;

Scissor_Lift_Param.Cage.PipeWidth = 5; %cm
Scissor_Lift_Param.Cage.Height  = 150; %cm
Scissor_Lift_Param.Cage.RailRad = 20; %cm

Scissor_Lift_Param.Platform.Ext.Width = Scissor_Lift_Param.Cart.Platform.Width-Scissor_Lift_Param.Cage.PipeWidth*3; %cm
Scissor_Lift_Param.Platform.Ext.Height  = Scissor_Lift_Param.Cart.Platform.Height*0.5; %cm
Scissor_Lift_Param.Platform.Ext.Length = Scissor_Lift_Param.Cart.Platform.Length-Scissor_Lift_Param.Cage.PipeWidth*3; %cm

Scissor_Lift_Param.Platform.Ext.Cage.Height = Scissor_Lift_Param.Cage.Height-Scissor_Lift_Param.Platform.Ext.Height;
Scissor_Lift_Param.Platform.Ext.Cage.TrapRail.Curve1.H = Scissor_Lift_Param.Platform.Ext.Cage.Height*0.4;
Scissor_Lift_Param.Platform.Ext.Cage.TrapRail.Curve1.Rad = 20;
Scissor_Lift_Param.Platform.Ext.Cage.TrapRail.Curve1.Ang = 30;
Scissor_Lift_Param.Platform.Ext.Cage.TrapRail.Width = 90;

Scissor_Lift_Param.Platform.Ext.Cage.TrapRail.Curve2.Rad = 20;
Scissor_Lift_Param.Platform.Ext.Cage.TrapRail.Curve2.H = Scissor_Lift_Param.Platform.Ext.Cage.Height-Scissor_Lift_Param.Platform.Ext.Cage.TrapRail.Curve2.Rad;
Scissor_Lift_Param.Platform.Ext.Cage.TrapRail.Curve2.Ang = 90-Scissor_Lift_Param.Platform.Ext.Cage.TrapRail.Curve1.Ang;

Scissor_Lift_Param.Joystick.Box = [40 20 20];
Scissor_Lift_Param.Joystick.Stick.Rad = 3;
Scissor_Lift_Param.Joystick.Stick.Len = 25;
Scissor_Lift_Param.Joystick.Panel = [45 0.5 45];




    


