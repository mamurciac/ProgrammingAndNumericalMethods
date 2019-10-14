#include<stdio.h>

using namespace std;

/*  This exercise consists of computing the summation of Fibonacci numbers (The Fibonacci's numbers are a natural numbers
    sucesion, which recursive definition is F(0) = 0, F(1) = 1, F(n + 2) = F(n + 1) + F(n) for n >= 2), for two natural numbers
    given by the user (A and B), this program will compute F(A) + F(A + 1) + ... + F(B) except F(4). */

int main(){
    const int fibonacciFor0 = 0, fibonacciFor1 = 1;
    int initialNumber, finalNumber, indexExcluded = 4, currentFibonacciNumber, penultimateComputedFibonacciNumber, lastComputedFibonacciNumber, totalSum = 0;
    printf("\n This program computes the summation of Fibonacci numbers whose indexes are between two integer numbers between two\n");
    printf(" positive integers given by the user, with the restriction of excluding a fixed index number, in this case %d\n", indexExcluded);
    printf("\n Give the 2 limit numbers (You may split them using a space): ");
    scanf("%d%d", &initialNumber, &finalNumber);

    for(int currentIndex = initialNumber; currentIndex <= finalNumber; currentIndex++){
        if(currentIndex == 1){
            penultimateComputedFibonacciNumber = 0;
            lastComputedFibonacciNumber = fibonacciFor0;
        }else if(currentIndex == 2){
            penultimateComputedFibonacciNumber = fibonacciFor0;
            lastComputedFibonacciNumber = fibonacciFor1;
        }else{
            int temporalFibonacciNumber = lastComputedFibonacciNumber;
            lastComputedFibonacciNumber += penultimateComputedFibonacciNumber;
            penultimateComputedFibonacciNumber = temporalFibonacciNumber;
        }
        currentFibonacciNumber = lastComputedFibonacciNumber;
        if(currentIndex == indexExcluded){
            printf("  Current index: i = %d, Current Fibonacci number: F(%d) = %d, Sum: sum = %d\n", currentIndex, currentIndex, currentFibonacciNumber, totalSum);
            continue;
        }
        totalSum += currentFibonacciNumber;
        printf("  Current index: i = %d, Current Fibonacci number: F(%d) = %d, Sum: sum = %d\n", currentIndex, currentIndex, currentFibonacciNumber, totalSum);
    }
    printf("\n The sum is: %d\n", totalSum);
    return 0;
}
