#include <iostream>

using namespace std;

/* This exercise consists of computing a Harmonica summation. */

int main(){
    int initialNumber = 1, finalNumber = 15, stepNumber = 1;
    double totalSum = 0.0;
    for(int currentNumber = initialNumber; currentNumber <= finalNumber; currentNumber += stepNumber){
        totalSum += 1.0 / currentNumber;
    }
    cout << endl << " This program computes a Harmonica summation, with the following conditions:" << endl;
    cout << "  Initial Number: " << initialNumber << endl;
    cout << "  Final Number: " << finalNumber << endl;
    cout << "  Step to Next Number: " << stepNumber << endl;
    cout << endl << " The sum is: " << totalSum << endl;
    return 0;
}
