%% Magnetic levitation

%% Model parameters
model.m=0.058;              % [kg]               % mass of ball
model.g=9.81;               % [m/s^2]

%% Parameters for distance sensor
sensor.V=[9.22, 8.95, 8.57, 8.21, 7.83, 7.38,...
    6.86, 6.29, 5.67, 4.97, 4.25, 3.5, 2.67,...
    1.76, 0.79, -0.19, -1.21, -2.22, -3.18,...
    -4.1, -4.97, -5.72, -6.4, -6.98, -7.5, -7.94,...
    -8.3, -8.59, -8.82, -8.97, -9.07, -9.13, -9.15,...
    -9.16];                 % [V]                % measured voltage
sensor.d=(0:33)*0.7e-3;     % [m]                % distance from coil

%% Voltage to currrent characteristic
VIchar.V=[0.74, 0.9, 1.35, 1.83, 2.28,...
    2.72, 3.18, 3.62, 4.09, 4.53, 4.99,...
    5.46, 5.92, 6.37, 6.82, 7.28, 7.73,...
    8.18, 8.62, 9.05, 9.37];
VIchar.I=[0.005, 0.049, 0.184, 0.327, 0.471,...
    0.616, 0.762, 0.908, 1.054, 1.198, 1.344,...
    1.487, 1.631, 1.773, 1.914, 2.055, 2.194,...
    2.331, 2.466, 2.601, 2.703];
VIchar.Vmax=11.43;
VIchar.coefs=polyfit(VIchar.V,VIchar.I,2);
figure(1);
plot(VIchar.V,VIchar.I,VIchar.V,polyval(VIchar.coefs,VIchar.V));
grid on;

%% Distance to inductance characteristic
DLchar.d=sensor.d;
DLchar.L=[118.3, 118.3, 116.6, 114.9, 113.3,...
    112.0, 110.9, 109.9, 109.1, 108.3, 107.6,...
    107.1, 106.5, 106.0, 105.6, 105.2, 104.8,...
    104.5, 104.2, 104.0, 103.7, 103.5, 103.3,...
    103.1, 103.0, 102.8, 102.7, 102.6, 102.5,...
    102.4, 102.3, 102.2, 102.1, 102.1]/1e3;
DLchar.L0=101.5/1e3;
DLchar.coefs=fit(DLchar.d(2:end)',(DLchar.L(2:end)-DLchar.L0)','exp1');

%% Parameters for model
Par_Fem=[DLchar.coefs.a -1/DLchar.coefs.b];
m=model.m;
g=model.g;
UI=VIchar.coefs;
ki=2.8964;
uc=0;
P1=1.4142e-4;
P2=4.5626e-3;
pos=0.01;

%%
figure(2);
plot(DLchar.d,DLchar.L,'b',DLchar.d,DLchar.L0+DLchar.coefs.a*exp(DLchar.coefs.b*DLchar.d),'r');
xlabel('Distance [m]');
ylabel('Inductance [H]');
title('Comparison of calculated and measured inductance');
grid on;
legend('Measured','Calculated');

%% Linearized model - equilibrium point
x0=zeros(3,1);
x0(1)=0.01;
x0(2)=0;
x0(3)=sqrt(Par_Fem(2)*m*g*exp(x0(1)/Par_Fem(2))/Par_Fem(1));
u0=(x0(3)-uc)/ki;

%% Linearized model - Matrix - LQ
A=[0 1 0;x0(3)^2/m*Par_Fem(1)/Par_Fem(2)^2*exp(-x0(1)/Par_Fem(2))...
   0 -2*x0(3)/m*Par_Fem(1)/Par_Fem(2)*exp(-x0(1)/Par_Fem(2));...
   -(ki*u0+uc-x0(3))/P1*exp(x0(1)/P2) 0 -P2/P1*exp(x0(1)/P2)];
B=[0;0;ki*P2/P1*exp(x0(1)/P2)];
C=[eye(3)];
D=zeros(3,1);

%% Linearized model - Matrix - LQI
A=[0 1 0 0;x0(3)^2/m*Par_Fem(1)/Par_Fem(2)^2*exp(-x0(1)/Par_Fem(2))...
   0 -2*x0(3)/m*Par_Fem(1)/Par_Fem(2)*exp(-x0(1)/Par_Fem(2)) 0;...
   -(ki*u0+uc-x0(3))/P1*exp(x0(1)/P2) 0 -P2/P1*exp(x0(1)/P2) 0;...
   50 0 0 0];
B=[0;0;ki*P2/P1*exp(x0(1)/P2);0];
C=[eye(3) [0;0;0]];
D=zeros(3,1);

%% Model for Luenberger
Ao=[0 1 0 ;x0(3)^2/m*Par_Fem(1)/Par_Fem(2)^2*exp(-x0(1)/Par_Fem(2))...
   0 -2*x0(3)/m*Par_Fem(1)/Par_Fem(2)*exp(-x0(1)/Par_Fem(2));...
   -(ki*u0+uc-x0(3))/P1*exp(x0(1)/P2) 0 -P2/P1*exp(x0(1)/P2)];
Bo=[0;0;ki*P2/P1*exp(x0(1)/P2)];
Co=[1 0 0;0 0 1];
Do=zeros(2,1);
SSo=ss(Ao,Bo,Co,Do);

lambda=[-5 -3 -2];
L=place(Ao.',Co.',lambda).';
F=Ao-L*Co;

%% LQ regulator
sys=ss(A,B,C,D);
K=lqr(sys,eye(length(B)),1,zeros(length(B),1));