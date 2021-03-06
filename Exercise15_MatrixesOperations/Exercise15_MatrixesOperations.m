%This exercise consists of computing some basic operations between matrixes

clear; %It deletes all definited variables previously
clc; %It cleans the command window

A = [1, 3, 5, 8; 2, 6, 5, 3; 4, 1, 9, 7; 1, 8, 0, 2];
B = [1, 9, 5, 8; 12, 5, 5, 9; 4, 2, 9, 74; 0, 6, 0, 3];
C = [1, 9; 10, 2];

%Part 1: If the operations are possible, this program computes the matrixes given by:
%   3A, A - 7, A - B^t, A^(-1) and B^(-1)
matrix1 = 3 * A
matrix2 = A - 7
matrix3 = A - B'
matrix4 = inv(A)
matrix5 = inv(B)

%Part 2: Let D be the A's submatrix formed by the rows and columns 1st and 3rd; and
%   E be the B's submatrix formed by the rows and columns 2nd and 4th. If the
%   operations are possible, this program computes the matrixes given by:
%   D * E^t, D * C and C * E
D = A([1, 3], [1, 3])
E = B([2, 4], [2, 4])

matrix6 = D * E'
matrix7 = D * C
matrix8 = C * E

%Part 3: Using the inverse matrix method, this program computes the solution of the
%   equations systems Ax = B and Dx = C, is to say, this program computes the
%   matrix operations given by A^(-1) * B and D^(-1) * C
solutionSystem1 = A \ B
solutionSystem2 = D \ C

%Part 4: Let F be the A's submatrix formed by the rows 2st 3rd and 4th; and E be
%   the B's submatrix formed by the columns 1st, 2nd and 4th. If the operations
%   are possible, this program computes the matrix given by F * G
F = A(2:4, :)
G = B(:, [1, 2, 4])

matrix9 = F * G

A = [1, 2, -2, 0; 2, 4, -1, 0; -3, -6, 12, 2; 1, 2, -2, -4]
B = [1; -4; -12; 3]

%Part 5: This program will compute if it's possible, the solution of the equations
%   system given by Ax = B
matrixADeterminant = det(A)
solutionSystem3 = A \ B