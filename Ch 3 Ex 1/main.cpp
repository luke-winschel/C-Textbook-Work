//Miles Per Gallon: Write a program that calculates a car’s gas mileage. The program should ask the user to enter the number of gallons of gas the car can hold and the number of miles
//it can be driven on a full tank. It should then display the number of miles that may be driven per gallon of gas.
#include <iostream>
using namespace std;

int main() {
    double gallons;
    int miles;

    cout << "Please enter the number of gallons your vehicle can hold: ";
    cin >> gallons;

    cout << "Please enter the number of Miles your vehicle can be driven on a full tank of gas: ";
    std::cin >> miles;

    double milesPerGallon = miles / gallons;
    printf("Miles per gallon: %.2f", milesPerGallon);
    return 0;
}