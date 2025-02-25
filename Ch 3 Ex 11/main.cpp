//Automobile Costs: Write a program that asks the user to enter the monthly costs for the following expenses incurred from operating his or her automobile: loan payment, insurance, gas,
//oil, tires, and maintenance. The program should then display the total monthly cost of these expenses, and the total annual cost of these expenses.
#include <iostream>
using namespace std;

int main() {
    double loan_payment;
    double insurance;
    double gas;
    double oil;
    double tires;
    double maintenance;

    cout << "Enter your monthly loan payment: ";
    cin >> loan_payment;

    cout << "Enter your monthly insurance costs: ";
    cin >> insurance;

    cout << "Enter your monthly Gas costs: ";
    cin >> gas;

    cout << "Enter your monthly Oil Costs: ";
    cin >> oil;

    cout << "Enter your monthly tires costs: ";
    cin >> tires;

    cout << "Enter your monthly maintenance costs: ";
    cin >> maintenance;

    double total_monthly_costs = loan_payment + insurance + gas + oil + tires;

    printf("Your total monthly costs are $%.2f.", total_monthly_costs);
    printf("Your estimated annual costs are $%.2f", total_monthly_costs * 12);

    return 0;
}