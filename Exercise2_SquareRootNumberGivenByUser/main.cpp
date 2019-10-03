#include<stdio.h>
#include<math.h>

using namespace std;

/*  This exercise consists of square root computing. In this exercise, it only computes a real number's square root,
    with that number given by the user, under the assumption this square root exist. */

int main(){
    double number;
    printf("\n This program computes a number's square root. This value is a not negative real number.\n");
    printf(" Enter the number (Not Negative): ");
    scanf("%lf", &number);

    if(number >= 0.0){
        printf(" The result is: sqrt(%lf) = %lf\n", number, sqrt(number));
    }else{
        printf(" You gave a negative number. Therefore, that square root in real numbers is undefined.\n");
    }
    return 0;
}
