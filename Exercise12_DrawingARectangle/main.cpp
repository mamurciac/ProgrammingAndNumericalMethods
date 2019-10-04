#include<iostream>
#include<stdio.h>

using namespace std;

/*  This exercise consists of drawing a rectangle which its perimeter visually is represented by * characters and its
    interior area visually is represented by spaces. The user gives the rectangle dimensions in number of rows and columns. */

int main(){
    int numberRows, numberColumns, currentColumn = 1, currentLine = 1;
    cout << endl << " This program draws a rectangle which dimensions are given by the user according a number of rows and" << endl;
    cout << " columns. Both values should be positive numbers." << endl;
    printf(" Enter the rectangle dimensions (Number of Rows and Columns, you may split them using a space): ");
    scanf("%d%d", &numberRows, &numberColumns);
    printf(" Rectangle Dimensions: %d rows and %d columns.\n\n", numberRows, numberColumns);
    if(numberRows <= 0 || numberColumns <= 0){
        cout << endl << "You gave incorrect values to draw the rectangle." << endl;
        return 0;
    }

	BucleCompleteLine:
		if(currentColumn <= numberColumns){
			if(2 <= currentColumn && currentColumn <= numberColumns - 1 && 2 <= currentLine && currentLine <= numberRows - 1){
				cout << " ";
			}else{
				cout << "*";
			}
			currentColumn++;
			goto BucleCompleteLine;
		}else{
			goto BucleNewLine;
		}

	BucleNewLine:
		cout << endl;
		currentColumn = 1;
		currentLine++;
	if(currentLine <= numberRows){
		goto BucleCompleteLine;
	}
	return 0;
}
