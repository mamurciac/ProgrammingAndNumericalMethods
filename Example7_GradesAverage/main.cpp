#include<iostream>

using namespace std;

/* This exercise consists of computing the average grade of some grades given by the user. */

int main(){
    int numberGrades = 10, currentGradeCount = 1, currentGrade;
    double gradeSum = 0.0, gradeAverage = 0.0;

    cout << endl << " This program computes the average grade of " << numberGrades << " grades entered by the user." << endl;
    do{
        cout << "  Add the grade #" << currentGradeCount << ": ";
        cin >> currentGrade;
        gradeSum += currentGrade * 1.0;
        currentGradeCount++;
    }while(currentGradeCount <= numberGrades);
    gradeAverage = gradeSum / numberGrades;
    cout << endl << " The sum of all " << numberGrades << " grades is: " << gradeSum << endl;
    cout << " The average grade is: " << gradeAverage << endl;
    return 0;
}
