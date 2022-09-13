A = [5 2*r r; 3 6 (2*r)-1; 2 r-1 3*r];
B = [2; 3; 5];

disp(det(A));

X = A\B;
disp(X);