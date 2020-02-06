#include<iostream>

using namespace std;

int main(){
    int numberValues = 12;
    double arrayList[] = {9, 1, 2, 8, 7, 3, 4, 6, 5, 100, -100, 0};

    //In this part, the original list's values are shown
    cout << endl << " The list's values are: ";
    for(int index = 0; index < numberValues; index++){
        if(index < numberValues - 1){
            cout << arrayList[index] << ", ";
        }else{
            cout << arrayList[index] << ".";
        }
    }

    //In this part, the original list's values are ordered (This list ordering algorithm is known such insertion ordering or bubble's algorithm)
    for(int index1 = 1; index1 < numberValues; index1++){
        for(int index2 = 0; index2 < numberValues - 1; index2++){
            if(arrayList[index2] > arrayList[index2 + 1]){
                double temporalValue = arrayList[index2];
                arrayList[index2] = arrayList[index2 + 1];
                arrayList[index2 + 1] = temporalValue;
            }
        }
    }

    //In this part, the ordered list's values are shown
    cout << endl << " The ordered (Ascendent order) list's values are: ";
    for(int index = 0; index < numberValues; index++){
        if(index < numberValues - 1){
            cout << arrayList[index] << ", ";
        }else{
            cout << arrayList[index] << "." << endl;
        }
    }
    return 0;
}
