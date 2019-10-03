#include<stdio.h>

using namespace std;

/* This exercise consists of computing the addition of two integer numbers given by user. */

int main(){
    int numberA, numberB;
    printf("\n This program computes the addition of two integer numbers.\n");
    printf("\n Enter the first integer number: ");
    scanf("%d", &numberA);
    printf(" Enter the second integer number: ");
    scanf("%d", &numberB);
    printf("\n You gave the values: a = %d and b = %d\n\n", numberA, numberB);
    printf(" The addition gives as result: a + b = %d\n", numberA + numberB);
    printf(" The addition gives as result: a + b = %3d\n", numberA + numberB); //It prints the value reserving 3 spots to print the number, the remaining spaces are blank spaces, if the number of spots aren't enough, it just prints the number
    printf(" The addition gives as result: a + b = %6d\n", numberA + numberB); //It prints the value reserving 6 spots to print the number, the remaining spaces are blank spaces, if the number of spots aren't enough, it just prints the number
    printf(" The addition gives as result: a + b = %03d\n", numberA + numberB); //It prints the value reserving 3 spots to print the number, the remaining spaces are filled with 0, if the number of spots aren't enough, it just prints the number
    printf(" The addition gives as result: a + b = %06d\n", numberA + numberB); //It prints the value reserving 6 spots to print the number, the remaining spaces are filled with 0, if the number of spots aren't enough, it just prints the number
    printf(" The addition gives as result: a + b = %.2lf\n", (double)(numberA + numberB)); //It prints the value with 2 decimal digits
    printf(" The addition gives as result: a + b = %.4lf\n", (double)(numberA + numberB)); //It prints the value with 4 decimal digits
    return 0;
}
