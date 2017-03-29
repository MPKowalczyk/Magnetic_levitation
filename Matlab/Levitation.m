%% Magnetic levitation

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
VIchar.coefs=polyfit(VIchar.V,VIchar.I,2);

%% Distance to inductance characteristic
DLchar.d=sensor.d;
DLchar.L=[118.3, 118.3, 116.6, 114.9, 113.3,...
    112.0, 110.9, 109.9, 109.1, 108.3, 107.6,...
    107.1, 106.5, 106.0, 105.6, 105.2, 104.8,...
    104.5, 104.2, 104.0, 103.7, 103.5, 103.3,...
    103.1, 103.0, 102.8, 102.7, 102.6, 102.5,...
    102.4, 102.3, 102.2, 102.1, 102.1];
DLchar.L0=98;
DLchar.coefs=polyfit(VIchar.V,VIchar.I,2);

%% Model parameters
model.m=0.058;              % [kg]               % mass of ball
model.g=9.81;
%% dL - method 1
m=model.m;
d=sensor.d;
g=model.g;
L0=DLchar.L0;
L=DLchar.L;
y=2e-3*m*g./(L-L0);
L_coefs=polyfit(d(2:end),y(2:end),1);
a=sqrt(L_coefs(1));
b=L_coefs(2)/a;
L_calc=L0+2e-3*m*g./(a^2*d+a*b);
dL_1=-2e-3*m*g./(a*d+b).^2;
L_coefs2=fit(d(2:end)',(L(2:end)-101.5)','exp1');
figure;
plot(d(2:end),L(2:end),'b',d(2:end),L_calc(2:end),'g',d(2:end),101.5+L_coefs2.a*exp(L_coefs2.b*d(2:end)),'r');
xlabel('Distance [m]');
ylabel('Inductance [H]');
title('Comparison of calculated and measured inductance');
grid on;
legend('Measured','Calculated');
%{
%% dL - method 2
I=zeros(1,100);
L_coefs=polyfit(d,I,2);
dL_2=-2e-3*m*g./(a*d+b).^2;
figure;
plot(d,dL_1,'b',d,dL_2,'r');
xlabel('Distance [m]');
ylabel('Inductance derivative [H/m]');
title('Comparison of calculated derivatives');
grid on;
legend('Method 1','Method 2');
%}