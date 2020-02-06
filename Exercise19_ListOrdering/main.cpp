#include<iostream>

using namespace std;

void orderArrayList(const double arrayList[], double orderedArrayList[], int numberValues, bool ascendingOrder){
    //In this part, the original array is copied in a new array
    for(int index = 0; index < numberValues; index++){
        orderedArrayList[index] = arrayList[index];
    }

    //In this part, the original list's values are ordered (This list ordering algorithm is known such insertion ordering or bubble's algorithm)
    if(ascendingOrder == true){
        for(int index1 = 1; index1 < numberValues; index1++){
            for(int index2 = 0; index2 < numberValues - 1; index2++){
                if(orderedArrayList[index2] > orderedArrayList[index2 + 1]){
                    double temporalValue = orderedArrayList[index2];
                    orderedArrayList[index2] = orderedArrayList[index2 + 1];
                    orderedArrayList[index2 + 1] = temporalValue;
                }
            }
        }
    }else{
        for(int index1 = 1; index1 < numberValues; index1++){
            for(int index2 = 0; index2 < numberValues - 1; index2++){
                if(orderedArrayList[index2] < orderedArrayList[index2 + 1]){
                    double temporalValue = orderedArrayList[index2];
                    orderedArrayList[index2] = orderedArrayList[index2 + 1];
                    orderedArrayList[index2 + 1] = temporalValue;
                }
            }
        }
    }
}

//In this part, the original list's values are shown
void showArrayList(const double arrayList[], int numberValues){
    cout << endl << " The list's values are: ";
    for(int index = 0; index < numberValues; index++){
        if(index < numberValues - 1){
            cout << arrayList[index] << ", ";
        }else{
            cout << arrayList[index] << ".";
        }
    }
}

int main(){
    int numberValues = 12;
    double arrayList[numberValues] = {9, 1, 2, 8, 7, 3, 4, 6, 5, 100, -100, 0}, ascendingOrderedArrayList[numberValues] = {0}, descendingOrderedArrayList[numberValues] = {0};
    orderArrayList(arrayList, ascendingOrderedArrayList, numberValues, true);
    orderArrayList(arrayList, descendingOrderedArrayList, numberValues, false);
    showArrayList(arrayList, numberValues);
    showArrayList(ascendingOrderedArrayList, numberValues);
    showArrayList(descendingOrderedArrayList, numberValues);

    cout << endl;
    return 0;
}
