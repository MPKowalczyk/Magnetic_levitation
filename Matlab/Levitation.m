%% Magnetic levitation

%% dL - method 1
d=1:100;
g=9.81;
m=0.2;
L0=0;
L=zeros(1,100);
y=2e-3*m*g./(L-L0);
L_coefs=polyfit(d,y,2);
a=sqrt(L_coefs(1));
b=L_coefs(2)/a;
L_calc=L0+2e-3*m*g./(a^2*d+a*b);
dL_1=-2e-3*m*g./(a*d+b).^2;
figure;
plot(d,L,'b',d,L_calc,'g');
xlabel('Distance [m]');
ylabel('Iductance [H]');
title('Comparison of calculated and measured inductance');
grid on;
legend('Measured','Calculated');

%% dL - method 2
I=zeros(1,100);
L_coefs=polyfit(d,I,2);
dL_2=-2e-3*m*g./(a*d+b).^2;
figure;
plot(d,dL_1,'b',d,dL_2,'r');
xlabel('Distance [m]');
ylabel('Iductance derivative [H/m]');
title('Comparison of calculated derivatives');
grid on;
legend('Method 1','Method 2');