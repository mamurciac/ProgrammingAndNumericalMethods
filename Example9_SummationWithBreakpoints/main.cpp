#include<stdio.h>

using namespace std;

/*  This exercise consists of computing the summation of integer numbers between two integers given by the user, with
    the restriction of excluding some numbers divisible by some fixed number. */

int main(){
    int initialNumber, finalNumber, multiple = 10, totalSum = 0;
    printf("\n This program computes the summation of integer numbers between two integers given by the user, with\n");
    printf(" the restriction of excluding some numbers divisible by some fixed number, in this case by %d\n", multiple);
    printf("\n Give the 2 limit numbers (You may split them using a space): ");
    scanf("%d%d", &initialNumber, &finalNumber);

    for(int currentNumber = initialNumber; currentNumber <= finalNumber; currentNumber++){
        if(currentNumber % multiple == 0){
            continue;
        }
        totalSum += currentNumber;
        printf("  Current number: i = %d, Sum: sum = %d\n", currentNumber, totalSum);
    }
    printf("\n The sum is: %d\n", totalSum);
    return 0;
}
