#include<iostream>

using namespace std;

int main(){
    int numberGrades = 15;
    double arrayList[numberGrades], average = 0;

    //In this part, the user enters the grades one by one
    cout << endl;
    for(int index = 0; index < numberGrades; index++){
        cout << " Enter the grade #" << index + 1 << ": ";
        cin >> arrayList[index];
    }

    //In this part, the mean or average grade is computed
    for(int index = 0; index < numberGrades; index++){
        average += arrayList[index];
    }
    average /= numberGrades;

    //In this part, the original list's grades are ordered (This list ordering algorithm is known such insertion ordering or bubble's algorithm)
    for(int index1 = 1; index1 < numberGrades; index1++){
        for(int index2 = 0; index2 < numberGrades - 1; index2++){
            if(arrayList[index2] < arrayList[index2 + 1]){
                double temporalValue = arrayList[index2];
                arrayList[index2] = arrayList[index2 + 1];
                arrayList[index2 + 1] = temporalValue;
            }
        }
    }

    //In this part, the grades greater than the average grade are shown
    cout << endl << " The average grade is: " << average << endl;
    cout << " The grades greater than the average are: ";
    for(int index = 0; index < numberGrades; index++){
        if(arrayList[index] > average){
            cout << arrayList[index] << " ";
        }
    }
    cout << endl;
    return 0;
}
