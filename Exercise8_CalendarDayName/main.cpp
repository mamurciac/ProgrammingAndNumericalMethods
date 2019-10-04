#include<iostream>

using namespace std;

/*  This exercise consists of computing the correspondent day name of a 2006's november day, considering 1st November of
    2006 is wednesday. The number given by user is validated to consider only right dates. */

int main(){
    /* The current day number is assigned as follows:
        0: Sunday
        1: Monday
        2: Tuesday
        3: Wednesday
        4: Thursday
        5: Friday
        6: Saturday */
    int currentDay = 1, currentMonth = 10, currentYear = 2006, currentDayName = 3, targetDay;
    cout << endl << " This program computes the correspondent day name of a 2006's november day, considering 1st November of" << endl;
    cout << " 2006 is wednesday." << endl;
    cout << endl << " Enter the day number (It's a number between 1 and 30): ";
    cin >> targetDay;

    if(1 <= targetDay && targetDay <= 30){
        int targetDayName = (targetDay - currentDay + currentDayName) % 7;
        switch(targetDayName){
            case 0:
                cout << "  The date " << targetDay << "/" << currentMonth << "/" << currentYear << " is Sunday" << endl;
                break;
            case 1:
                cout << "  The date " << targetDay << "/" << currentMonth << "/" << currentYear << " is Monday" << endl;
                break;
            case 2:
                cout << "  The date " << targetDay << "/" << currentMonth << "/" << currentYear << " is Tuesday" << endl;
                break;
            case 3:
                cout << "  The date " << targetDay << "/" << currentMonth << "/" << currentYear << " is Wednesday" << endl;
                break;
            case 4:
                cout << "  The date " << targetDay << "/" << currentMonth << "/" << currentYear << " is Thursday" << endl;
                break;
            case 5:
                cout << "  The date " << targetDay << "/" << currentMonth << "/" << currentYear << " is Friday" << endl;
                break;
            case 6:
                cout << "  The date " << targetDay << "/" << currentMonth << "/" << currentYear << " is Saturday" << endl;
                break;
        }
    }else{
        cout << " The number you gave isn't valid, because that date doesn't exist." << endl;
    }
    return 0;
}
