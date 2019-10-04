#include <iostream>

using namespace std;

/*  This exercise consists of computing the correspondent multiplication table for a number given by the user. */

int main(){
    int initialTableNumber = 1, finalTableNumber = 20, tableNumber;
    cout << endl << " This program computes the multiplication table for a number given by the user." << endl;
    cout << " Enter the number to build its multiplication table: ";
    cin >> tableNumber;
    cout << endl << " Table of Number " << tableNumber << endl;

    for(int currentNumber = initialTableNumber; currentNumber <= finalTableNumber; currentNumber++){
        cout << "  " << tableNumber << " * " << currentNumber << " = " << tableNumber * currentNumber << endl;
    }
    return 0;
}
