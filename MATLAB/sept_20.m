% Practice 3.1
% r = input('Enter radius of circle: ')
% c = 2*pi*r

% Practice 3.2
% len = input('Enter length: ')
% fm = input('Is that f(eet) or m(eters)?: ', 's')

% Practice 3.3
% a=input('Enter a character: ','s');
% n=input('Enter a number: ');
% fprintf('%3c\n',a);
% fprintf('%-8.3f\n',n);

% Practice 3.4
% time = input('Enter time: ');
% temp = input('Enter temperature: ');
% plot(time, temp, 'r*')
% 
% axis([time-10 time+10 temp-10 temp+10])
% xlabel('Time')
% ylabel('Temperature')
% 
% title('Time and Temp')

% Practice 3.5
x=1:5;
y1=[2 11 6 9 3];
y2=[4 5 8 6 2];
figure(1)
bar(x,y1)
axis([0 6 1 12]);

figure(2)
plot(x,y1,'k*')
hold on
plot(x,y2,'ko')
grid on
legend( 'y1', 'y2')
axis([0 6 1 12]);