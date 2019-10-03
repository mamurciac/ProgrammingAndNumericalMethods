#include<iostream>
#include<math.h>

using namespace std;

/*  This exercise consists of cuadratic formula's root computing. The cuadratic formula is applied to a grade 2 polynomial.
    These polynomials are expressed as P(x) = ax^2 + bx + c, where a, b and c are real numbers with a != 0.
    In this exercise, it only computes the P's real roots given the coefficients by the user, under the assumption these
    real roots exist. */

int main(){
    double coefficientA, coefficientB, coefficientC, polynomialDiscriminant, realRoot1, realRoot2;
    cout << endl << " This program computes the two cuadratic polynomial's real roots, expressing the polynomial as P(x) = ax^2 + bx + c." << endl;
    cout << " The coefficients a, b and c are real numbers where a != 0." << endl;
    cout << endl << " Enter the polynomial's coefficients (Use a point \".\" as decimal separator):" << endl;
    cout << "  Coefficient a (a != 0.0): ";
    cin >> coefficientA;
    cout << "  Coefficient b: ";
    cin >> coefficientB;
    cout << "  Coefficient c: ";
    cin >> coefficientC;

    if(coefficientA != 0.0){
        if(coefficientA == 1.0){
            cout << endl << " The polynomial given is P(x) = x^2";
        }else if(coefficientA == -1.0){
            cout << endl << " The polynomial given is P(x) = -x^2";
        }else{
            cout << endl << " The polynomial given is P(x) = " << coefficientA << "x^2";
        }

        if(coefficientB > 0.0){
            if(coefficientB == 1.0){
                cout << " + x";
            }else{
                cout << " + " << coefficientB << "x";
            }
        }else if(coefficientB < 0.0){
            if(coefficientB == -1.0){
                cout << " - x";
            }else{
                cout << " - " << fabs(coefficientB) << "x";
            }
        }

        if(coefficientC > 0.0){
            cout << " + " << coefficientC;
        }else if(coefficientC < 0.0){
            cout << " - " << fabs(coefficientC);
        }
        cout << endl;

        polynomialDiscriminant = coefficientB * coefficientB - 4 * coefficientA * coefficientC;
        if(polynomialDiscriminant > 0.0){
            realRoot1 = (-coefficientB + sqrt(polynomialDiscriminant)) / (2 * coefficientA);
            realRoot2 = (-coefficientB - sqrt(polynomialDiscriminant)) / (2 * coefficientA);
            cout << " This polynomial has two real roots, they are r1 = " << realRoot1 << " and r2 = " << realRoot2 << endl;
        }else if(polynomialDiscriminant == 0.0){
            realRoot1 = (-coefficientB + sqrt(polynomialDiscriminant)) / (2 * coefficientA);
            cout << " This polynomial has only a real root (This root is repeated twice), it is r = " << realRoot1 << endl;
        }else{
            cout << " This polynomial has two complex roots." << endl;
        }
    }else{
        cout << endl << " You didn't give the suitable values (a != 0.0)" << endl;
    }
    return 0;
}
