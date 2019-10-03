#include<iostream>

using namespace std;

/*  This exercise consists of compute a conversion factor between currencies, in this case, the program will convert COP
    (Colombian Pesos) to USD (United States Dollar) with an amount given by user. */

int main(){
    double amountCOP, dollarUnitPrice = 1821.76, amountUSD; //The dollar's unit price is given by TRM for Tuesday 12th August of 2008
    cout << endl << " This program computes the amount in USD (United States Dollar) given the amount in COP (Colombian Pesos)." << endl;
    cout << " The reference value is given by 1 USD = " << dollarUnitPrice << " COP." << endl;
    cout << " Enter the amount in COP (Colombian Pesos): ";
    cin >> amountCOP;
    amountUSD = amountCOP / dollarUnitPrice;
    cout << endl << " The conversion is: " << amountCOP << " COP = " << amountUSD << " USD." << endl;
    return 0;
}
