//Sales Prediction: The East Coast sales division of a company generates 58 percent of total sales. Based on that percentage, write a program that will predict how much the East Coast division
//will generate if the company has $8.6 million in sales this year.
#include <iostream>
using namespace std;
int main() {
    float total_sales = 8.6;
    double east_coast_sale_percent = 0.58;

    double east_coast_sales = total_sales * east_coast_sale_percent;
    cout << east_coast_sales;

    return 0;
}