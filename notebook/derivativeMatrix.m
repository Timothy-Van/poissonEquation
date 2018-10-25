N = 4;
h = 2*pi/N;
x = -pi + (1:N)'*h;
u = exp(sin(x)); uprime = cos(x).*u;
column = [0 .5*(-1).^(1:N-1).*cot((1:N-1)*h/2)];
D = toeplitz(column,column([1 N:-1:2]));

w = D*u;