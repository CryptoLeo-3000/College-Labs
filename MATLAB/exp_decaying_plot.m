x = linspace(0, 4*pi, 50);
y = exp(-0.4*x).*sin(x);

plot(x, y, '--');
title('Exponentially Decaying Plot');