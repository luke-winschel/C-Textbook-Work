//Days Out: Write a program that calculates the average number of days a company’s employees are absent. The program should have the following functions:
//• A function called by main that asks the user for the number of employees in the company. This value should be returned as an int . (The function accepts no arguments.)
//• A function called by main that accepts one argument: the number of employees in the company. The function should ask the user to enter the number of days each employee missed during the
//past year. The total of these days should be returned asan int .
//• A function called by main that takes two arguments: the number of employees in the company and the total number of days absent for all employees during the year.
//The function should return, as a double , the average number of days absent. (This function does not perform screen output and does not ask the user for input.)
//Input Validation: Do not accept a number less than 1 for the number of employees. Do not accept a negative number for the days any employee missed.
#include <iostream>
using namespace std;

int NumOfEmployees() {
    int numofemployees;
    cout << "Please enter the number of employees in the company: ";
    cin >> numofemployees;

    if (numofemployees < 0) {
        cout << "Invalid Input!  Please enter a positive integer.";
        return 0;
    }
    else {
        return numofemployees;
    }
}

int missedDays(int numofemployees) {
    int totalMissedDays;
    int input;

    for (int i = 1; i <= numofemployees; i++) {
        cout << "Please enter the number of days that employee #" << i << " has missed.";
        cin >> input;
        if (input < 0) {
            cout << "Invalid Input! Please enter a positive integer.";
            return 0;
        }
        else {
            totalMissedDays += input;
        }
    }
    return totalMissedDays;
}

double averageMissedDays(double numofemployees, double totalMissedDays) {
    double avgdaysmissed;

    avgdaysmissed = totalMissedDays / numofemployees;

    return avgdaysmissed;
}

int main() {
    int employees = NumOfEmployees();
    int totalMissed = missedDays(employees);
    double avgmissed = averageMissedDays(employees, totalMissed);
    if (employees == 0 || totalMissed == 0 || avgmissed == 0) {
        return 0;
    }
    else {
        cout << "Your company has " << employees << " who missed a total of: " << totalMissed << " days.  Which is an average of: " << avgmissed << " missed days per employee!";
    }
}