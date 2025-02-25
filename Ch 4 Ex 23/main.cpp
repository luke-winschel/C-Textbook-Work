//Geometry Calculator: Write a program that displays the following menu:
// Geometry Calculator
// 1. Calculate the Area of a Circle
// 2. Calculate the Area of a Rectangle
// 3. Calculate the Area of a Triangle
// 4. Quit
// Enter your choice (1-4):
//If the user enters 1, the program should ask for the radius of the circle and then display its area. Use the following formula: area π r 2 Use 3.14159 for π and the radius of the circle for r .
//If the user enters 2, the program should ask for the length and width of the rectangle and then display the rectangle’s area. Use the following formula: area = length * width
//If the user enters 3 the program should ask for the length of the triangle’s base and its height, and then display its area. Use the following formula: area = base * height * .5
//If the user enters 4, the program should end.  Input Validation: Display an error message if the user enters a number outside the range of 1 through 4 when selecting an item from the menu.
//Do not accept negative values for the circle’s radius, the rectangle’s length or width, or the triangle’s base or height.
#include <iostream>
using namespace std;

int main() {
    int choice;
    //Variables for each area calculation
    double circle_radius;
    double rectangle_length;
    double rectangle_width;
    double triangle_base;
    double triangle_height;

    //Area Variables for calculations
    double circle_area;
    double rectangle_area;
    double triangle_area;


    cout << "Geometry Calculator.\n";
    cout << "1. Calculate the Area of a Circle.\n";
    cout << "2. Calculate the Area of a Rectangle.\n";
    cout << "3. Calculate the Area of a Triangle.\n";
    cout << "4. Quit.\n";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Please enter the radius of your circle: ";
            cin >> circle_radius;
            if (circle_radius < 0)
                cout << "Invalid input! Please enter a positive number.";
            else
                circle_area = 3.14159 * pow(circle_radius, 2);
                printf("The Area of your circle is: %.2f", circle_area);
            break;

        case 2:
            cout << "Please enter the length of your rectangle: ";
            cin >> rectangle_length;
            cout << "Please enter the width of your rectangle: ";
            cin >> rectangle_width;
            if (rectangle_length < 0 || rectangle_width < 0)
                cout << "Invalid input! Please enter a positive number.";
            else
                rectangle_area = rectangle_length * rectangle_width;
                printf("The area of your rectangle is: %.2f", rectangle_area);
            break;

        case 3:
            cout << "Please enter the base of your triangle: ";
            cin >> triangle_base;
            cout << "Please enter the height of your triangle: ";
            cin >> triangle_height;
            if (triangle_base < 0 || triangle_height < 0)
                cout << "Invalid input! Please enter a positive number.";
            else
                triangle_area = triangle_base * triangle_height * 0.5;
                printf("The Area of your triangle is: %.2f", triangle_area);
            break;

        case 4:
            return 0;

        default:
            cout << "Invalid Input, Please try again!";
    }
    return 0;
}