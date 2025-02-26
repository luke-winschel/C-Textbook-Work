// Sum of Numbers: Write a program that asks the user for a positive integer value. The program should use a loop to get the sum of all the integers from 1 up to the number entered.
// For example, if the user enters 50, the loop will find the sum of 1, 2, 3, 4, … 50. **Input Validation: Do not accept a negative starting number.
#include <iostream>
using namespace std;

int main() {
    int input;
    int total = 0;

    cout << "Please enter a number: ";
    cin >> input;
    if (input < 0) {
        cout << "Invalid input!  Please enter a positive integer. \n";
    }
    else {
        for (int i = 0; i <= input; i++) {
            total += i;
        }
        cout << "The sum of numbers 0 to " << input << " is: " << total;
    }
    return 0;
}