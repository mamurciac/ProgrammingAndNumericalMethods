#include<iostream>

using namespace std;

/* This exercise consists of decide whether a grade given by the user is approval, regular or not. */

int main(){
    int grade;
    cout << endl << " This program decides whether a grade given by the user is approval, regular or not." << endl;
    cout << " Enter the grade (It's a number between 0 and 5): ";
    cin >> grade;
    if(0 <= grade && grade <= 5){
        switch(grade){
            case 5:
            case 4:
                cout << "  The grade is " << grade << ". You approved, very well." << endl;
                break;
            case 3:
                cout << "  The grade is " << grade << ". You approved." << endl;
                break;
            case 2:
                cout << "  The grade is " << grade << ". You may reable the subject." << endl;
                break;
            default:
                cout << "  The grade is " << grade << ". You didn't approve." << endl;
        }
    }else{
        cout << "  The grade you gave isn't right." << endl;
    }
    return 0;
}
