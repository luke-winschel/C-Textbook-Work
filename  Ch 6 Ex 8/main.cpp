//Coin Toss: Write a function named coinToss that simulates the tossing of a coin. When you call the function, it should generate a random number in the range of 1 through 2. If the
//random number is 1, the function should display “heads.” If the random number is 2, the function should display “tails.” Demonstrate the function in a program that asks the user how many times
//the coin should be tossed and then simulates the tossing of the coin that number of times.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int coinToss () {
    int coin = (rand() % 2) + 1;

    return coin;
}

int main() {
    srand((unsigned)time(0));
    int flips;
    int output;

    cout << "How many times would you like to flip the coin?: ";
    cin >> flips;

    if (flips < 0) {
        cout << "Invalid Input! Please enter a positive integer!";
    }
    else {
        for (int i = 0; i < flips; i++) {
            output = coinToss();
        }
        if (output == 1) {
            cout << "Heads";
        }
        else {
            cout << "Tails";
        }
    }
    return 0;
}