#include<iostream>
#include<stdio.h>

using namespace std;

const int indexAgePerson = 0, indexSalary = 1, indexAgeCompany = 2;

int main(){
    int numberEmployees;
    cout << endl << " Enter the company's number employees: ";
    cin >> numberEmployees;
    cout << endl;
    double payrollTable[3][numberEmployees] = {{0}};

    //In this part the employees' data are registered
    for(int index = 0; index < numberEmployees; index++){
        double currentEmployeeAgePerson, currentEmployeeSalary, currentEmployeeAgeCompany;
        cout << " Enter the employee's #" << index + 1 << "'s age: ";
        cin >> currentEmployeeAgePerson;
        cout << " Enter the employee's #" << index + 1 << "'s salary: ";
        cin >> currentEmployeeSalary;
        cout << " Enter the employee's #" << index + 1 << "'s age in company: ";
        cin >> currentEmployeeAgeCompany;
        payrollTable[indexAgePerson][index] = currentEmployeeAgePerson;
        payrollTable[indexSalary][index] = currentEmployeeSalary;
        payrollTable[indexAgeCompany][index] = currentEmployeeAgeCompany;
    }

    //In this part, the matrix values are shown, row by row to a good user's reading
    printf("\n Data Employees = \n");
    for(int index1 = 0; index1 < 3; index1++){
        for(int index2 = 0; index2 < numberEmployees; index2++){
            printf(" %4.2lf ", payrollTable[index1][index2]);
            if(index2 == numberEmployees - 1){
                printf("\n");
            }
        }
    }

    //In this part, the average salary is computed
    double averageSalary = 0.0;
    for(int index = 0; index < numberEmployees; index++){
        averageSalary += payrollTable[indexSalary][index];
    }
    averageSalary /= numberEmployees;
    printf("\n The average salary is %4.2lf", averageSalary);

    //In this part, the youngest employee is found (The salary should be equal or greater than the average salary), and later, the age in company for that employee is found
    double minimumAgeEmployee = 1000000000;
    int indexYoungestEmployee = 0;
    for(int index = 0; index < numberEmployees; index++){
        if(payrollTable[indexAgePerson][index] < minimumAgeEmployee && payrollTable[indexSalary][index] >= averageSalary){
            minimumAgeEmployee = payrollTable[indexAgePerson][index];
            indexYoungestEmployee = index;
        }
    }
    double youngestEmployeeSalary = payrollTable[indexSalary][indexYoungestEmployee];
    double youngestEmployeeAgeCompany = payrollTable[indexAgeCompany][indexYoungestEmployee];
    printf("\n The youngest employee (This employee's salary is equal or greater than the average salary) is the employee #%d", indexYoungestEmployee + 1);
    printf("\n The youngest employee's salary is %4.2lf", youngestEmployeeSalary);
    printf("\n The youngest employee's age in company is %4.2lf\n", youngestEmployeeAgeCompany);

    return 0;
}
