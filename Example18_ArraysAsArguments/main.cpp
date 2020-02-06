#include<iostream>

using namespace std;

void modifyArray(int arrayList[], int numberValues){
    for(int index = 0; index < numberValues; index++){
        arrayList[index] *= 2;
    }
}

int main(){
    const int numberValues = 5;
    int arrayList[numberValues] = {5, 10, 15, 20, 25};

    //In this part, the original list's values are shown
    cout << endl << " The list's values are: ";
    for(int index = 0; index < numberValues; index++){
        if(index < numberValues - 1){
            cout << arrayList[index] << ", ";
        }else{
            cout << arrayList[index] << ".";
        }
    }

    //In this step, the procedure is called to try to modify the array's values
    modifyArray(arrayList, numberValues);

    //In this part, the possible new list's values are shown
    cout << endl << " The list's values are: ";
    for(int index = 0; index < numberValues; index++){
        if(index < numberValues - 1){
            cout << arrayList[index] << ", ";
        }else{
            cout << arrayList[index] << ".";
        }
    }
    cout << endl;
    return 0;
}
