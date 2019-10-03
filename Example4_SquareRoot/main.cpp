#include<iostream>
#include<math.h>

using namespace std;

/*  This exercise consists of square root computing. In this exercise, it only computes a real number's square root,
    under the assumption this square root exist. */

int main(){
    double number = 6.54321;
    cout << endl << " This program computes a number's square root. This value is a not negative real number." << endl;
    if(number >= 0.0){
        cout << " The result is: sqrt(" << number << ") = " << sqrt(number) << endl;
    }else{
        cout << " The number given is negative. Therefore, that square root in real numbers is undefined." << endl;
    }
    return 0;
}
