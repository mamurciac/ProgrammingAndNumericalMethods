#include<stdio.h>

using namespace std;

/* This exercise consists of computing a summation of double index. */

int main(){
    int limitNumber = 20, sum = 0;
    printf("\n This program computes a summation of double index. The iterations are the following:\n");
    for(int controlNumber1 = 1, controlNumber2 = limitNumber; controlNumber1 < controlNumber2 && controlNumber1 * controlNumber1 < controlNumber2 * controlNumber2 - 10 * controlNumber2; controlNumber1++, controlNumber2 -= 2){
        sum += controlNumber1 + controlNumber2;
        printf("  Values: i = %d, j = %d, sum = %d\n", controlNumber1, controlNumber2, sum);
    }
    printf("\n Sum: %d\n", sum);
    return 0;
}
