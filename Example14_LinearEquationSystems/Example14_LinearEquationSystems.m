%This exercise consists of computing the solution of some linear equation systems

clear; %It deletes all definited variables previously
clc; %It cleans the command window

A = [2, 1, -3; 5, -4, 1; 1, -1, -4];
B = [7; -19; 4];
C = magic(4);

[reducedStepwise, columnsWithPivot] = rref(A);
solutionSystem1 = inv(A) * B;
solutionSystem2 = A \ B;
solutionHomogeneousSystem1 = null(A);
solutionHomogeneousSystem2 = null(C);

%A 3x3 Linear System Solution, with the fixed variables x, y and z
syms x y z;
solutionSystem3 = solve(2 * x + y - 3 * z == 7, 5 * x - 4 * y + z == -19, x - y - 4 * z == 4, [x, y, z]);