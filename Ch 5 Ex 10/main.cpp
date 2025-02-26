// Average Rainfall: Write a program that uses nested loops to collect data and calculate the average rainfall over a period of years. The program should first ask for the number of years.
// The outer loop will iterate once for each year. The inner loop will iterate twelve times, once for each month. Each iteration of the inner loop will ask the user for the inches of rainfall
// for that month. After all iterations, the program should display the number of months, the total inches of rainfall, and the average rainfall per month for the entire period.
//Input Validation: Do not accept a number less than 1 for the number of years. Do not accept negative numbers for the monthly rainfall.
#include <iostream>
using namespace std;

int main() {
    int years;
    double input;
    double total;

    cout << "Please Enter the number of years you'd like to enter: ";
    cin >> years;

    if (years < 0) {
        cout << "Invalid Input!  Please enter a positive integer.";
    }
    else {
        for (int i = 1; i <= years; i++) {
            for (int months = 1; months < 13; months++) {
                cout << "Please enter the monthly rainfall for year " << i << " month " << months << ": ";
                cin >> input;

                total += input;
            }
        }
        double average = (total) /  (years * 12);
        cout << "The total rainfall for " << years * 12 << " months is: " << total << ". The average rainfall per month is: " << average;
    }
    return 0;
}