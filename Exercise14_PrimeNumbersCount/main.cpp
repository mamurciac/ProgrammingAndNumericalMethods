#include<iostream>
#include<math.h>

using namespace std;

/*  This program computes the number of prime numbers between 1 and a positive integer number given by the user. All integer
    numbers between 1 and n are verified whether they are prime numbers or not, each number k is checked whether it's
    divisible by a number between 2 and floor(sqrt(k)); with this, k counts like a prime number or not. */

int main(){
    int number, countPrimeNumbers = 0;
    cout << endl << " This program computes the number of prime numbers between 1 and a positive integer number given by the user. All" << endl;
    cout << " integer numbers between 1 and n are verified whether they are prime numbers or not, each number k is checked whether" << endl;
    cout << " it's divisible by a number between 1 and floor(sqrt(k)); with this, k counts like a prime number or not." << endl;
    cout << endl << " Give the number: ";
    cin >> number;
    if(number >= 1){
        for(int currentNumber = 1; currentNumber <= number; currentNumber++){
            bool currentNumberIsPrime = true;
            int maximumDivider = floor(sqrt(currentNumber));
            for(int possibleDivider = 2; possibleDivider <= maximumDivider; possibleDivider++){
                if(currentNumber % possibleDivider == 0){
                    currentNumberIsPrime = false;
                    break;
                }
            }
            if(currentNumberIsPrime == true && currentNumber != 1){
                countPrimeNumbers++;
                cout << "  The number " << currentNumber << " is prime. The count's value is " << countPrimeNumbers << endl;
            }
        }
        cout << endl << " You gave the number " << number << " and there are(is) " << countPrimeNumbers << " prime numbers up to it." << endl;
    }else{
        cout << " You didn't give a positive integer number." << endl;
    }
    return 0;
}
