#include <iostream>

using namespace std;

/* This exercise consists of computing some arithmetic operations that involve pre and post increasing and decreasing
.  operators. */

int main(){
    double numberA = 3.14159265, numberB = 3.14159265;
    cout << endl << " This program computes some preincreasing, predecreasing, postincreasing and postdecreasing operations for some" << endl;
    cout << " numbers. The values used are the following:" << endl;
    cout << "  a = " << numberA << endl;
    cout << "  b = " << numberB << endl;
    cout << endl << " Some preincreasing and postincreasing operations are the following:" << endl;
    cout << "  Preincrement => ++a: In this case, a = " << ++numberA << endl;
    cout << "  The a's value is increased inmediatly and then it's showed, where its current value is a = " << numberA << endl;
    cout << endl << "  Postincrement => a++: In this case, a = " << numberA++ << endl;
    cout << "  The a's value is showed and then its value is increased, where its current value is a = " << numberA << endl;
    cout << endl << "  Postincrement => b++: In this case, b = " << numberB++ << endl;
    cout << "  The b's value is showed and then its value is increased, where its current value is a = " << numberB << endl;
    cout << endl << "  Preincrement => ++b: In this case, b = " << ++numberB << endl;
    cout << "  The b's value is increased inmediatly and then it's showed, where its current value is a = " << numberB << endl;
    return 0;
}
