#include<iostream>

using namespace std;

/*  This exercise consists of implementing a single counter for two variables where those counter variables reach to two
    different fixed numbers. */

int main(){
    int counter1 = 0, counter2 = 0, numberLimit1 = 100, numberLimit2 = 1000;
    cout << endl << " This program consists of a single counter for two variables where those counter variables reach to two" << endl;
    cout << " different fixed numbers. These fixed numbers are " << numberLimit1 << " and " << numberLimit2 << endl;
    while(counter1 < numberLimit2){
        counter1++;
        if(counter2 >= numberLimit1){
            continue;
        }
        counter2++;
    }
    cout << "  Counter 1: " << counter1 << endl;
    cout << "  Counter 2: " << counter2 << endl;
    return 0;
}
