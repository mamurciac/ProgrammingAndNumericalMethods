#include <iostream>

using namespace std;

/* This exercise consists of computing the factorial expression (The factorial consists of a multiple product). */

int main(){
    long int initialNumber = 1, finalNumber = 12, totalProduct = 1;
    for(int currentNumber = initialNumber; currentNumber <= finalNumber; currentNumber++){
        totalProduct *= currentNumber;
    }
    cout << endl << " This program computes a natural number's factorial, with the following conditions:" << endl;
    cout << "  Initial Number: " << initialNumber << endl;
    cout << "  Final Number: " << finalNumber << endl;
    cout << endl << " The answer is: " << totalProduct << endl;
    return 0;
}
