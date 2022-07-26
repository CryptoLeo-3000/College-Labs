% mat = [1:3; 44 9 2; 5:-1:3];

% Displying Matrix
% disp(mat);

% Display size of matrix
% disp(size(mat));

% Display element 2x3
% disp(mat(2, 3));

% Disply row 2
% disp(mat(2, :));

% Display column 1
% disp(mat(:, 1));

% Display transpose of matrix
% disp(transpose(mat));

% Display inverse of matrix
% disp(inv(mat));

% Product of no. of rows and columns
% disp(numel(mat));

% Assign row 3
% V = mat(3, :);

% Display matrix
% disp(V);

% Display element 2
% disp(V(2));

% Error - index out of bounds
% disp(V(V(2)));

% Using empty matrix
% V(1) = [];
% disp(V);

% Concatenation
% mat_2 = [6:8; 56 12 78; 15:-5:3];
% disp([mat, mat_2]);

% Normal multiplication
% disp(mat*inv(mat));

% Matrix Multiplication
% disp(mat.*inv(mat));

% Reshape matrix
% mat = [1:3; 44 9 2; 5:-1:3];
% disp(reshape(mat, 1, 9));

% Plotting
% theta = 0:pi/16:2*pi;
% r = 10;
% x = r*cos(theta);
% y = r*sin(theta);
% plot(x, y);
% plot(x, y, 'O');
% plot(x, y, '+');
% xlabel('X-Axis');
% ylabel('Y-Axis');
% title('Plotted by Kartik Padave');

% Vector & Matrix
% V = 0:1:12;
% M = [sin(V); cos(V)];
% disp(size(V));
% disp(size(M));
% disp(M(:, 1:10));