// Markup: Write a program that asks the user to enter an item’s wholesale cost and its markup percentage. It should then display the item’s retail price. For example:
//• If an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the item’s retail price is 10.00.
//• If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s retail price is 7.50.
//The program should have a function named calculateRetail that receives the wholesale cost and the markup percentage as arguments and returns the retail price of the item.
//Input Validation: Do not accept negative values for either the wholesale cost of the item or the markup percentage.
#include <iostream>
using namespace std;

double calculateRetail (double wholesaleCost, double markupPercentage) {

    //Convert percentage into decimal.
    double markupDecimal = markupPercentage / 100;

    //Find the dollar amount mark up on the item.
    double increase = wholesaleCost * markupDecimal;

    //Add the dollar amount markup to the wholesale cost to find the retail price.
    double retailPrice = wholesaleCost + increase;

    //return the
    return retailPrice;
}

int main() {
    double wholesaleCost;
    double markupPercentage;

    cout << "Please enter the item's wholesale cost: ";
    cin >> wholesaleCost;

    cout << "Please enter the items markup percentage: ";
    cin >> markupPercentage;

    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);
    cout << "The item's wholesale cost is: $" << wholesaleCost << ", the mark up percentage is: " << markupPercentage << "%, and the retail price is: $" << retailPrice;

    return 0;
}