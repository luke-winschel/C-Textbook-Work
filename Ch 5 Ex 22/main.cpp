//Square Display: Square Display Write a program that asks the user for a positive integer no greater than 15. The program should then display a square on the screen using the
//character ‘X’. The number entered by the user will be the length of each side of the square. For example, if the user enters 5, the program should display the following:
// XXXXX
// XXXXX
// XXXXX
// XXXXX
// XXXXX
#include <iostream>
using namespace std;

int main() {
    int input;

    cout << "Please enter a positive integer: ";
    cin >> input;

    if (input < 0) {
        cout << "Invalid Input!  Please enter a positive integer.";
    }
    else if (input > 15) {
        cout << "Invalid Input! Input number is too large, please enter a number no greater than 15.";
    }
    else {
        for (int length = 0; length < input; length++) {
            for (int height = 0; height < input; height++) {
                cout << "*";
            }
            cout << "\n";
        }
    }
    return 0;
}