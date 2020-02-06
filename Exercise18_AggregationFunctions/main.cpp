#include<iostream>

using namespace std;

double sum(const double arrayList[], int numberValues){
    double sumValue = 0.0;
    for(int index = 0; index < numberValues; index++){
        sumValue += arrayList[index];
    }
    return sumValue;
}

double average(const double arrayList[], int numberValues){
    double averageValue = 0.0;
    for(int index = 0; index < numberValues; index++){
        averageValue += arrayList[index];
    }
    return averageValue / numberValues;
}

double maximum(const double arrayList[], int numberValues){
    double maximumValue = arrayList[0];
    for(int index = 1; index < numberValues; index++){
        if(arrayList[index] > maximumValue){
            maximumValue = arrayList[index];
        }
    }
    return maximumValue;
}

double minimum(const double arrayList[], int numberValues){
    double minimumValue = arrayList[0];
    for(int index = 1; index < numberValues; index++){
        if(arrayList[index] < minimumValue){
            minimumValue = arrayList[index];
        }
    }
    return minimumValue;
}

int main(){
    int numberValues = 14;
    double arrayList[numberValues] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 87, 56, 43, -50, -10};
    double sumValue = sum(arrayList, numberValues), averageValue = average(arrayList, numberValues), maximumValue = maximum(arrayList, numberValues), minimumValue = minimum(arrayList, numberValues); //In this part, the necessary values are computed

    //In this part, the original list's values are shown
    cout << endl << " The list's values are: ";
    for(int index = 0; index < numberValues; index++){
        if(index < numberValues - 1){
            cout << arrayList[index] << ", ";
        }else{
            cout << arrayList[index] << ".";
        }
    }

    cout << endl << " The array's stats are the following:" << endl;
    cout << "   Sum: " << sumValue << endl;
    cout << "   Average: " << averageValue << endl;
    cout << "   Maximum: " << maximumValue << endl;
    cout << "   Minimum: " << minimumValue << endl;
    return 0;
}
