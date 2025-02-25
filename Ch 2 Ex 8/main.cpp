//Total Purchase: A customer in a store is purchasing five items. The prices of the five items are
//Price of item 1 = $15.95
// Price of item 2 = $24.95
// Price of item 3 = $6.95
// Price of item 4 = $12.95
// Price of item 5 = $3.95
// Write a program that holds the prices of the five items in five variables. Display each item’s price, the subtotal of the sale, the amount of sales tax, and the total.
// Assume the sales tax is 7%.
#include <iostream>
using namespace std;

int main() {
    double item1 = 15.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 12.95;
    double item5 = 3.95;

    double sales_tax = 0.07;

    printf("Item 1: $%.2f \t", item1);
    printf("Item 1 Sales Tax: $%.2f \t", item1 * sales_tax);
    printf("Item 1 Total: $%.2f \n", item1 + item1*sales_tax);

    printf("Item 2: $%.2f \t", item2);
    printf("Item 2 Sales Tax: $%.2f \t", item2 * sales_tax);
    printf("Item 2 Total: $%.2f \n", item2 + item2*sales_tax);

    printf("Item 3: $%.2f \t", item3);
    printf("Item 3 Sales Tax: $%.2f \t", item3 * sales_tax);
    printf("Item 3 Total: $%.2f \n", item3 + item3 * sales_tax);

    printf("Item 4: $%.2f \t", item4);
    printf("Item 4 Sales Tax: $%.2f \t", item4 * sales_tax);
    printf("Item 4 Total: $%.2f \n", item4 + item4 * sales_tax);

    printf("Item 5: $%.2f \t", item5);
    printf("Item 5 Sales Tax: $%.2f \t", item5 * sales_tax);
    printf("Item 5 Total: $%.2f \n", item5 +item5 * sales_tax);

    return 0;
}