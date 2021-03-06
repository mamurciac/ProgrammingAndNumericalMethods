%This exercise consists of plotting some curves and surfaces

clear; %It deletes all definited variables previously
clc; %It cleans the command window

figureFileExtension = '.pdf';

%Part 1: This exercise consists of plotting the function f(x) = x^2 * e^(-x^2) for the
%   values -5 <= x <= 5
valuesXAxis = -5:0.1:5;
valuesYAxis = valuesXAxis .^ 2 .* exp(-valuesXAxis .^ 2);
plot(valuesXAxis, valuesYAxis);
figure1 = gcf; %The plot's reference is saved at the variable gcf (Specially to multiple graphs at the same plot)
nameFigure1 = 'Figure 1';
filenameFigure1 = strcat(nameFigure1, figureFileExtension);
saveas(figure1, filenameFigure1);

%Part 2: This exercise consists of plotting the functions f(x) = sin(x) and g(x) = cos(x)
%   at the same graph for the values 0 <= x <= 2pi
functionA = 'sin(x)';
functionB = 'cos(x)';
intervalValuesXAxis = [0, 2 * pi];
fplot(functionA, intervalValuesXAxis);
hold on; %It lets keep new plots at the same graph, is to say, keep the following plots at the same plot window until the instruction hold off is called
fplot(functionB, intervalValuesXAxis);
hold off; %To plot new graphs, the following plots are shown at a new plot window
figure2 = gcf; %The plot's reference is saved at the variable gcf (Specially to multiple graphs at the same plot)
nameFigure2 = 'Figure 2';
filenameFigure2 = strcat(nameFigure2, figureFileExtension);
saveas(figure2, filenameFigure2);

%Part 3: This exercise consists of plotting the function f(x) = e^x with easy plot
%   offered in Matlab
functionC = 'exp(x)';
ezplot(functionC);
figure3 = gcf; %The plot's reference is saved at the variable gcf (Specially to multiple graphs at the same plot)
nameFigure3 = 'Figure 3';
filenameFigure3 = strcat(nameFigure3, figureFileExtension);
saveas(figure3, filenameFigure3);

%Part 4: This exercise consists of plotting the implicit curve given by x^2 - y^2 = 1
implicitCurveA = 'x^2 - y^2 - 1'; %The curve may be expressed in the form R(x, y) = 0
implicitCurveB = 'x^2 - y^2 = 1'; %The curve may be expressed in the form R(x, y) commonly
ezplot(implicitCurveA);
figure4 = gcf; %The plot's reference is saved at the variable gcf (Specially to multiple graphs at the same plot)
nameFigure4 = 'Figure 4';
filenameFigure4 = strcat(nameFigure4, figureFileExtension);
saveas(figure4, filenameFigure4);

%Part 5: This exercise consists of plotting the scalar field given by f(x, y) = x^2 *
%   e^(-y^2) for the values -5 <= x <= 5 and -5 <= y <= 5
valuesXAxis = -5:0.1:5;
valuesYAxis = -5:0.1:5;
[valuesXAxis, valuesYAxis] = meshgrid(valuesXAxis, valuesYAxis);
valuesZAxis = valuesXAxis .^2 .* exp(-valuesYAxis .^ 2);
surf(valuesXAxis, valuesYAxis, valuesZAxis);
figure5 = gcf; %The plot's reference is saved at the variable gcf (Specially to multiple graphs at the same plot)
nameFigure5 = 'Figure 5';
filenameFigure5 = strcat(nameFigure5, figureFileExtension);
saveas(figure5, filenameFigure5);

%Part 6: This exercise consists of plotting the scalar field f(x, y) = sin(x * y) with
%   easy plot offered in Matlab
functionD = 'sin(x * y)';
gridValuesXYAxis = [-2, 2, -2, 2];
ezsurf(functionD, gridValuesXYAxis);
figure6 = gcf; %The plot's reference is saved at the variable gcf (Specially to multiple graphs at the same plot)
nameFigure6 = 'Figure 6';
filenameFigure6 = strcat(nameFigure6, figureFileExtension);
saveas(figure6, filenameFigure6);

%Part 7: This exercise consists of plotting the functions given by f(x) = sin(x), g(x)
%   = cos(x), h(x) = sin(x)cos(x) and l(x) = |x|sin(x) for the values 0 <= x <= 2pi
labelXAxis = 'x (rad)';
labelYAxis = 'f(x)';
plotTitle = 'Ejemplo de M�ltiples Gr�ficas';
legendA = 'sin(x)';
legendB = 'cos(x)';
legendC = 'sin(x)cos(x)';
legendD = '|x|sin(x)';
numberValues = 100;
valuesXAxis = linspace(0, 2 * pi, numberValues)';
valuesYAxis1 = sin(valuesXAxis);
valuesYAxis2 = cos(valuesXAxis);
valuesYAxis3 = sin(valuesXAxis) .* cos(valuesXAxis);
valuesYAxis4 = abs(valuesXAxis) .* sin(valuesXAxis);
valuesYAxis = [valuesYAxis1, valuesYAxis2, valuesYAxis3, valuesYAxis4];
plot(valuesXAxis, valuesYAxis);
xlabel(labelXAxis);
ylabel(labelYAxis);
title(plotTitle);
legend(legendA, legendB, legendC, legendD);
grid on; %It adds a grid to the plot
figure7 = gcf; %The plot's reference is saved at the variable gcf (Specially to multiple graphs at the same plot)
nameFigure7 = 'Figure 7';
filenameFigure7 = strcat(nameFigure7, figureFileExtension);
saveas(figure7, filenameFigure7);