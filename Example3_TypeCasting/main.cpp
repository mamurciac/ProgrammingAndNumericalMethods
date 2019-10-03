#include <iostream>

using namespace std;

/* This exercise consists of computing some arithmetic operations that involve mixed datatype operators. */

int main(){
    int numberM = 8, numberN = 3;
    double numberW = 1.5, numberX = numberM * numberN / numberW, numberY = numberM * numberW / numberN, numberZ = numberM + numberN + numberW;
    cout << endl << " This program computes some arithmetic operations involving datatype conversion (Typecasting) for some numbers." << endl;
    cout << " The values used are the following:" << endl;
    cout << "  Value as int datatype: m = " << numberM << endl;
    cout << "  Value as int datatype: n = " << numberN << endl;
    cout << "  Value as double datatype: w = " << numberW << endl;
    cout << endl << " Some operations are the following:" << endl;
    cout << "  Value as double: x = m * n / w" << endl;
    cout << "  Result: x = " << numberX << endl;
    cout << endl << "  Value as double: y = m * w / n" << endl;
    cout << "  Result: y = " << numberY << endl;
    cout << endl << "  Value as double: z = m + n + w" << endl;
    cout << "  Result: z = " << numberZ << endl;
    return 0;
}
