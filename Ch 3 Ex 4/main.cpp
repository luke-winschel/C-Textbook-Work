//Average Rainfall: Write a program that calculates the average rainfall for three months. The program should ask the user to enter the name of each month, such as June or July, and the
//amount of rain (in inches) that fell each month. The program should display a message similar to the following: The average rainfall for June, July, and August is 6.72 inches.
#include <iostream>
using namespace std;

int main() {
    string month1;
    string month2;
    string month3;
    double month1rainfall;
    double month2rainfall;
    double month3rainfall;

    cout << "Enter month 1: ";
    cin >> month1;
    cout << "Enter the rainfall amount for month 1: ";
    cin >> month1rainfall;

    cout << "Enter month 2: ";
    cin >> month2;
    cout << "Enter the rainfall amount for month 2: ";
    cin >> month2rainfall;

    cout << "Enter month 3: ";
    cin >> month3;
    cout << "Enter the rainfall amount for month 3: ";
    cin >> month3rainfall;

    double average_rainfall = (month1rainfall + month2rainfall + month3rainfall) / 3;

    printf("The Average rainfall for %s, %s,and %s is %.2f", month1.c_str(), month2.c_str(), month3.c_str(), average_rainfall);

    return 0;
}