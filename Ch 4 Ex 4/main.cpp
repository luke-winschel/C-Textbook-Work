//Areas of Rectangles: The area of a rectangle is the rectangle’s length times its width. Write a program that asks for the length and width of two rectangles. The program should tell the
//user which rectangle has the greater area, or if the areas are the same.
#include <iostream>
using namespace std;

int main() {
    double rectangle1_length;
    double rectangle1_width;
    double rectangle2_length;
    double rectangle2_width;

    cout << "Enter the first rectangles length: ";
    cin >> rectangle1_length;

    cout << "Enter the first rectangles width: ";
    cin >> rectangle1_width;

    cout << "Enter the second rectangles length: ";
    cin >> rectangle2_length;

    cout << "Enter the second rectangles width: ";
    cin >> rectangle2_width;

    double rectangle1_area = rectangle1_length * rectangle1_width;
    double rectangle2_area = rectangle2_length * rectangle2_width;

    if  (rectangle1_area > rectangle2_area)
        cout << "Rectangle 1's area is greater than rectangle 2's area.";
    else if (rectangle1_area < rectangle2_area)
        cout << "Rectangle 2's area is greater than rectangle 1's area.";
    else if (rectangle1_area == rectangle2_area)
        cout << "The two rectangles have equal areas!";

    return 0;
}