#include<iostream>

using namespace std;

/* This exercises consists of computing the sum of positive even numbers until a given number. */

int main(){
    int initialNumber = 0, finalNumber = 200, currentNumber = initialNumber, totalSum = 0;
    cout << endl << " This program computes the sum of positive even numbers until a given number." << endl;
    cout << " The numbers are positive even numbers until " << finalNumber << endl << endl;
    while(currentNumber <= finalNumber){
        totalSum += currentNumber;
        cout << "  Iteration: i = " << currentNumber << ", sum = " << totalSum << endl;
        currentNumber += 2;
    }
    cout << endl << " The result is sum = " << totalSum << endl;
    return 0;
}
