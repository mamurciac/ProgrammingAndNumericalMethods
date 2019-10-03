#include <iostream>

using namespace std;

/* This exercise consists of computing some arithmetic operations that involve all the C++ language's basic arithmetic
.  operators. */

int main(){
    double numberA = 100.4, numberB = 567.3;
    int numberM = 1567, numberN = 187;

    cout << endl << " This program computes some arithmetic operations for some numbers. The values used are the following:" << endl;
    cout << "  a = " << numberA << endl;
    cout << "  b = " << numberB << endl;
    cout << "  m = " << numberM << endl;
    cout << "  n = " << numberN << endl;

    double addition1 = numberA + numberB, substraction1 = numberA - numberB, multiplication1 = numberA * numberB, division1 = numberA / numberB;
    int addition2 = numberM + numberN, substraction2 = numberM - numberN, multiplication2 = numberM * numberN, division2 = numberM / numberN, remainder = numberM % numberN;
    cout << endl << " Some arithmetic operations are the following:" << endl;
    cout << "  Addition (+): " << numberA << " + " << numberB << " = " << addition1 << endl;
    cout << "  Addition (+): " << numberM << " + " << numberN << " = " << addition2 << endl;
    cout << "  Substraction (-): " << numberA << " - " << numberB << " = " << substraction1 << endl;
    cout << "  Substraction (-): " << numberM << " - " << numberN << " = " << substraction2 << endl;
    cout << "  Multiplication (*): " << numberA << " * " << numberB << " = " << multiplication1 << endl;
    cout << "  Multiplication (*): " << numberM << " * " << numberN << " = " << multiplication2 << endl;
    cout << "  Division (/): " << numberA << " / " << numberB << " = " << division1 << endl;
    cout << "  Integer Division (/): " << numberM << " / " << numberN << " = " << division2 << endl;
    cout << "  Remainder (%): " << numberM << " % " << numberN << " = " << remainder << endl;
    return 0;
}
