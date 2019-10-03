#include<iostream>

using namespace std;

/* This exercise consists of computing a Gauss summation formula. */

int main(){
    int initialNumber = 2, finalNumber = 100, stepNumber = 2, totalSum = 0;
    for(int currentNumber = initialNumber; currentNumber <= finalNumber; currentNumber += stepNumber){
        totalSum += currentNumber;
    }
    cout << endl << " This program computes a Gauss summation formula, with the following conditions:" << endl;
    cout << "  Initial Number: " << initialNumber << endl;
    cout << "  Final Number: " << finalNumber << endl;
    cout << "  Step to Next Number: " << stepNumber << endl;
    cout << endl << " The sum is: " << totalSum << endl;
    return 0;
}
