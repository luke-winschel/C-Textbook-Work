// Rainfall Statistics: Write a program that lets the user enter the total rainfall for each of 12 months into an array of doubles. The program should calculate and display the total
// rainfall for the year, the average monthly rainfall, and the months with the highest and lowest amounts. Input Validation: Do not accept negative numbers for monthly rainfall figures.
#include <iostream>
using namespace std;

int main() {
    double monthly_rainfall [12];
    double total_yearly_rainfall;
    double monthly_avg_rainfall;
    double highest_index;
    double lowest_index;
    int highest_month;
    int lowest_month;
    double input;


    for (int i = 0; i < 12; i++) {
        cout << "Please enter the amount of rainfall for month " << i + 1 << " in inches: ";
        cin >> input;
        monthly_rainfall[i] = input;
    }

    for (int a = 0; a < 12; a++) {
        total_yearly_rainfall += monthly_rainfall[a];
    }


    monthly_avg_rainfall = total_yearly_rainfall / 12;


    highest_index = monthly_rainfall[0];
    for (int b = 0; b < 12; b++) {
        if (monthly_rainfall[b] > highest_index) {
            highest_index = monthly_rainfall[b];
            highest_month = b + 1;
        }
    }


    lowest_index = monthly_rainfall[0];
    for (int c = 0; c < 12; c++) {
        if (monthly_rainfall[c] < lowest_index) {
            lowest_index = monthly_rainfall[c];
            lowest_month = c + 1;
        }
    }

    printf("The total yearly rainfall is: %.2f inches!\n", total_yearly_rainfall);
    printf("The average monthly rainfall of the inputted months is: %.2f inches per month \n", monthly_avg_rainfall);
    printf("The month with the highest amount of rainfall was month: %d which had %.2f inches of rainfall!\n", highest_month, monthly_rainfall[highest_month - 1]);
    printf("THe month with the lowest amount of rainfall was month: %d which had %.2f inches of rainfall!\n", lowest_month, monthly_rainfall[lowest_month - 1]);
    return 0;
}