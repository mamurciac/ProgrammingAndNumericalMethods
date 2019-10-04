#include<iostream>
#include<stdio.h>

using namespace std;

/*  This exercise consists of drawing a rectangle which its perimeter visually is represented by * characters and its
    interior area visually is represented by spaces. The user gives the rectangle dimensions in number of rows and columns. */

int main(){
    int numberRows, numberColumns, counterColumn = 1, counterRow = 1;
    cout << endl << " This program draws a rectangle which dimensions are given by the user according a number of rows and" << endl;
    cout << " columns. Both values should be positive numbers." << endl;
    printf(" Enter the rectangle dimensions (Number of Rows and Columns, you may split them using a space): ");
    scanf("%d%d", &numberRows, &numberColumns);
    printf(" Rectangle Dimensions: %d rows and %d columns.\n\n", numberRows, numberColumns);
    if(numberRows <= 0 || numberColumns <= 0){
        cout << endl << "You gave incorrect values to draw the rectangle." << endl;
        return 0;
    }

    bucleFirstLine:
        counterColumn++;
        cout << "*";
        if(counterColumn <= numberColumns){
            goto bucleFirstLine;
        }
        if(numberRows == 1){
            cout << endl;
            return 0;
        }else if(counterRow == numberRows - 1){
            counterColumn = 1;
            counterRow++;
            cout << endl;
            goto bucleLastLine;
        }

    bucleStartIntermediateLine:
        counterColumn = 1;
        counterRow++;
        cout << endl;
        counterColumn++;
        cout << "*";
        if(numberColumns == 1){
            if(counterRow == numberRows - 1){
                counterColumn = 1;
                counterRow++;
                cout << endl;
                goto bucleLastLine;
            }
            goto bucleStartIntermediateLine;
        }
    bucleCompleteIntermediateLine:
        counterColumn++;
        cout << " ";
        if(counterColumn <= numberColumns - 1){
            goto bucleCompleteIntermediateLine;
        }
        cout << "*";
        if(counterRow <= numberRows - 2){
            goto bucleStartIntermediateLine;
        }
        counterColumn = 1;
        cout << endl;

    bucleLastLine:
        counterColumn++;
        cout << "*";
        if(counterColumn <= numberColumns){
            goto bucleLastLine;
        }
        cout << endl;
    return 0;
}
