//Largest/Smallest Array Values. Write a program that lets the user enter 10 values into an array. The program should then display the largest and smallest
//values stored in the array.
#include <iostream>
using namespace std;

int main() {
    int matrix [10];
    int input;
    int max;
    int min;

    for (int i = 0; i < 10; i++) {
        cout << "Please enter a number: ";
        cin >> input;
        matrix[i] = input;
    }

    min = matrix[0];
    max = matrix[0];

    for (int a = 0; a < 10; a++) {
        if (min > matrix[a]) {
            min = matrix[a];
        }
    }

    for (int b = 0; b < 10; b++) {
        if (max < matrix[b]) {
            max = matrix[b];
        }
    }
    cout << "The largest value in the array is: " << max << endl;
    cout << "The smallest value in the array is: " << min;
    return 0;
}