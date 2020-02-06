#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int listLength = 20;
    int arrayList[listLength] = {0, 0, 0};

    //Explicit array's initialization in 0
    for(int index = 0; index < listLength; index++){
        arrayList[index] = 0;
    }

    cout << "---------------------------" << endl;
    cout << "    Index" << setw(13) << "Value" << endl;
    cout << "---------------------------" << endl;

    //The array's values are shown in a table form
    for(int index = 0; index < listLength; index++){
        cout << setw(7) << index << setw(13) << arrayList[index] << endl;
    }
    return 0;
}
