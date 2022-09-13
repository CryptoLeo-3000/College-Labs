% Q1
% x = input('Enter value of x:')
% y = sin(x) + (x^3)

% Q2
% x = input('Enter value of x:')
% y = abs(x)

% Q3
% x = input('Enter value of x:')
% y = round(x)

% Q4
% a = input('Enter value of a:')
% b = input('Enter value of b:')
% y = rem(a, b)

% Q5
% x = 3:10
% y = sin(x) + (x.^3)
% plot(x, y)

% Q6
% y = rand(3, pi)

% Q7.1
% x = input('Enter value of x:')
% y = (x^3) + (2*(x^2)) - (5*x) - 8

% Q7.2.a
% x = -5:5
% y = (x.^3) + (2*(x.^2)) - (5*x) - 8
% plot(x, y)

% Q7.2.b
% x = 0:5
% y = (x.^3) + (2*(x.^2)) - (5*x) - 8
% z = islocalmin(y)

% Q7.2.b
% x = -5:0
% y = (x.^3) + (2*(x.^2)) - (5*x) - 8
% z = islocalmax(y)

% Q7.2.c
% x = 0:5
% y = (x.^3) + (2*(x.^2)) - (5*x) - 8
% roots([1 2 -5 -8])

% Q7.2.d
x = 10
y = (x.^3) + (2*(x.^2)) - (5*x) - 8
int(y)