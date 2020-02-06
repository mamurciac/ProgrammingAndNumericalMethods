#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(){
    int numberValues = 15;
    float arrayList[numberValues], vector[numberValues], average = 0, standardDeviation = 0;

    //In this part, the user enters the values one by one
    cout << endl;
    for(int index = 0; index < numberValues; index++){
        cout << " Enter the value #" << index + 1 << ": ";
        cin >> arrayList[index];
    }

    //In this part, the mean or average value is computed
    for(int index = 0; index < numberValues; index++){
        average += arrayList[index];
    }
    average /= numberValues;

    //In this part, the standard deviation (Version sample) value is computed
    for(int index = 0; index < numberValues; index++){
        vector[index] = arrayList[index] - average;
        standardDeviation += vector[index] * vector[index];
    }
    standardDeviation /= numberValues - 1;
    standardDeviation = sqrt(standardDeviation);

    cout << endl << " The average is: " << average << endl;
    cout << " The standard deviation (Version sample) is: " << standardDeviation << endl;
    return 0;
}
