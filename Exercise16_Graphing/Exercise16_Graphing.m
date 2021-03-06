%This exercise consists of plotting some curves

clear; %It deletes all definited variables previously
clc; %It cleans the command window

figureFileExtension = '.pdf';

%Part 1: This exercise consists of plotting the functions f(x) = x * sin(x) for the
%   values -pi <= x <= pi and g(x) = x * cos(x) for the values -pi <= x <= pi
labelXAxis = 'x (rad)';
labelYAxis = 'f(x)';
plotTitle = 'Ejemplo de M�ltiples Gr�ficas';
legendA = 'xsin(x)';
legendB = 'xcos(x)';
initialXAxisValue = -pi;
finalXAxisValue = pi;
numberValues = 50;
valuesXAxis = linspace(initialXAxisValue, finalXAxisValue, numberValues)';
valuesYAxis1 = valuesXAxis .* sin(valuesXAxis);
valuesYAxis2 = valuesXAxis .* cos(valuesXAxis);
valuesYAxis = [valuesYAxis1, valuesYAxis2];
plot(valuesXAxis, valuesYAxis1, 'rx', 'LineWidth', 2);
hold on; %It lets keep new plots at the same graph, is to say, keep the following plots at the same plot window until the instruction hold off is called
plot(valuesXAxis, valuesYAxis2, 'g+', 'LineWidth', 2);
hold off; %To plot new graphs, the following plots are shown at a new plot window
xlabel(labelXAxis);
ylabel(labelYAxis);
title(plotTitle);
legend(legendA, legendB);
xlim([initialXAxisValue, finalXAxisValue]);
ylim([min(min(valuesYAxis)) - 1, max(max(valuesYAxis)) + 1]);
grid on; %It adds a grid to the plot
figure1 = gcf; %The plot's reference is saved at the variable gcf (Specially to multiple graphs at the same plot)
nameFigure1 = 'Figure 1';
filenameFigure1 = strcat(nameFigure1, figureFileExtension);
saveas(figure1, filenameFigure1);

%Part 2: This exercise consists of plotting the functions f(x) = {-x    if x < -1, 1    if 0 < x < 2
%   -x^2   if x > 2} and g(x) = x / e^|x - 1| for the values -10 <= x <= 10
labelXAxis = 'x';
labelYAxis = 'f(x)';
plotTitle = 'Ejemplo de M�ltiples Gr�ficas';
legendA = 'Funci�n 1';
legendB = 'Funci�n 2';
initialXAxisValue = -4;
finalXAxisValue = 8;
numberValues = 100;
valuesXAxis = linspace(initialXAxisValue, finalXAxisValue, numberValues)';
valuesXAxisA = linspace(initialXAxisValue, -1, numberValues)';
valuesXAxisB = linspace(0, 2, numberValues)';
valuesXAxisC = linspace(2, finalXAxisValue, numberValues)';
valuesYAxis1A = -valuesXAxisA;
valuesYAxis1B = ones(1, length(valuesXAxisB));
valuesYAxis1C = -valuesXAxisC .^ 2;
valuesYAxis2 = valuesXAxis ./ exp(abs(valuesXAxis - 1));
plot(valuesXAxisA, valuesYAxis1A, 'r-', 'LineWidth', 1.25);
hold on; %It lets keep new plots at the same graph, is to say, keep the following plots at the same plot window until the instruction hold off is called
plot(valuesXAxisB, valuesYAxis1B, 'r-', 'LineWidth', 1.25, 'HandleVisibility', 'off');
plot(valuesXAxisC, valuesYAxis1C, 'r-', 'LineWidth', 1.25, 'HandleVisibility', 'off');
plot(valuesXAxis, valuesYAxis2, 'b-', 'LineWidth', 1.25);
hold off; %To plot new graphs, the following plots are shown at a new plot window
xlabel(labelXAxis);
ylabel(labelYAxis);
title(plotTitle);
legend(legendA, legendB);
xlim([initialXAxisValue, finalXAxisValue]);
ylim([min([min(valuesYAxis1A), min(valuesYAxis1B), min(valuesYAxis1C), min(valuesYAxis2)]) - 1, max([max(valuesYAxis1A), max(valuesYAxis1B), max(valuesYAxis1C), max(valuesYAxis2)]) + 1]);
grid on; %It adds a grid to the plot
figure2 = gcf; %The plot's reference is saved at the variable gcf (Specially to multiple graphs at the same plot)
nameFigure2 = 'Figure 2';
filenameFigure2 = strcat(nameFigure2, figureFileExtension);
saveas(figure2, filenameFigure2);

%Part 3: This exercise consists of plotting the functions given by a fixed table
labelXAxis = 'x';
labelYAxis = 'F(x)';
plotTitle = 'Ejemplo de Gr�fica de Tabla de Valores';
legendA = 'F';
valuesXAxis = [2.8, 2.9, 2.998, 2.999, 3, 3.001, 3.002, 3.1, 3.2];
valuesYAxis = [1.02962, 1.06471, 1.09795, 1.09828, 1.09861, 1.09869, 5.09928, 3.1314, 4.16315];
plot(valuesXAxis, valuesYAxis, 'mp', 'LineWidth', 1.25);
xlabel(labelXAxis);
ylabel(labelYAxis);
title(plotTitle);
legend(legendA);
xlim([min(valuesXAxis), max(valuesXAxis)]);
ylim([min(valuesYAxis) - 1, max(valuesYAxis) + 1]);
grid on; %It adds a grid to the plot
figure3 = gcf; %The plot's reference is saved at the variable gcf (Specially to multiple graphs at the same plot)
nameFigure3 = 'Figure 3';
filenameFigure3 = strcat(nameFigure3, figureFileExtension);
saveas(figure3, filenameFigure3);