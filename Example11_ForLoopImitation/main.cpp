#include<iostream>

using namespace std;

/* This exercise consists of imitating a single for loop using goto instructions. */

int main(){
    int numberSteps = 500000, counter = 1;
    cout << endl << " This program makes a single loop travel." << endl;

    Bucle: counter++;
    if(counter <= numberSteps){
        goto Bucle;
    }
    cout << endl << " The program is finished." << endl;
    return 0;
}
