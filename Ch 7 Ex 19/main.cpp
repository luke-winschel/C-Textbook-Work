//2D Array Operations.  Write a program that creates a two-dimensional array initialized with test data. Use any data type you wish.
//The program should have the following functions:
// • getTotal . This function should accept a two-dimensional array as its argument and return the total of all the values in the array.
// • getAverage . This function should accept a two-dimensional array as its argument and return the average of all the values in the array.
// • getRowTotal . This function should accept a two-dimensional array as its first argument and an integer as its second argument.
//      The second argument should be the subscript of a row in the array. The function should return the total of the values in the specified row.
// • getColumnTotal . This function should accept a two-dimensional array as its first argument and an integer as its second argument.
//      The second argument should be the subscript of a column in the array. The function should return the total of the values in the specified
//      column.
// • getHighestInRow . This function should accept a two-dimensional array as its first argument and an integer as its second argument.
//      The second argument should be the subscript of a row in the array. The function should return the highest value in the specified row of
//      the array.
// • getLowestInRow . This function should accept a two-dimensional array as its first argument and an integer as its second argument.
//      The second argument should be the subscript of a row in the array. The function should return the lowest value in the specified row of
//      the array.
//Demonstrate each of the functions in this program.
#include <iostream>
using namespace std;

int getTotal(int matrix[][3]) {
    int array_total = 0;
    for (int rows = 0; rows < 3; rows++) {
        for (int columns = 0; columns < 3; columns++) {
            array_total += matrix[rows][columns];
        }
    }
    return array_total;
}

int getAverage(int matrix[][3]) {
    double array_avg;
    int array_total = 0;
    for (int rows = 0; rows < 3; rows++) {
        for (int columns = 0; columns < 3; columns++) {
            array_total += matrix[rows][columns];
        }
    }
    array_avg = array_total / 9;
    return array_avg;
}

int getColumnTotal(int matrix[][3], int tot_selected_column) {
    int column_total = 0;
    tot_selected_column -= 1;

    for (int row = 0; row < 3; row++) {
        column_total += matrix[row][tot_selected_column];
    }

    return column_total;
}

int getHighestInRow(int matrix[][3], int high_row_selection) {
    int largest_value;
    high_row_selection -= 1;

    largest_value = matrix[high_row_selection][0];
    for (int columns = 0; columns < 3; columns++) {
        if (largest_value < matrix[high_row_selection][columns]) {
            largest_value = matrix[high_row_selection][columns];
        }
    }
    return largest_value;
}

int getLowestInRow(int matrix[][3], int low_row_selection) {
    int smallest_value;
    low_row_selection -= 1;

    smallest_value = matrix[low_row_selection][0];
    for (int columns = 0; columns < 3; columns++) {
        if (smallest_value > matrix[low_row_selection][columns]) {
            smallest_value = matrix[low_row_selection][columns];
        }
    }
    return smallest_value;
}

int main() {
    int matrix [3][3];
    int input;

    int tot_selected_column;
    int high_row_selection;
    int low_row_selection;


    for (int rows = 0; rows < 3; rows++) {
        for (int columns = 0; columns < 3; columns++) {
            cout << "Please enter a number for the array: ";
            cin >> input;
            matrix[rows][columns] = input;
        }
    }
    int array_total = getTotal(matrix);
    int array_avg = getAverage(matrix);

    cout << "Please enter the column you'd like the total of: ";
    cin >> tot_selected_column;
    if (tot_selected_column > 3) {
        cout << "Invalid Input!  The array only has 3 columns, please select column 1,2, or 3!" << endl;
        return 0;
    }
    int array_column_total = getColumnTotal(matrix, tot_selected_column);

    cout << "Please enter the row you'd like to see the largest value of: ";
    cin >> high_row_selection;
    if (high_row_selection > 3) {
        cout << "Invalid Input!  The array only has 3 rows, please select row 1,2, or 3!" << endl;
        return 0;
    }
    int array_highest_in_row = getHighestInRow(matrix, high_row_selection);

    cout << "Please enter the row you'd like to see the smallest value of: ";
    cin >> low_row_selection;
    if (low_row_selection > 3) {
        cout << "Invalid Input!  The array only has 3 rows, please select row 1,2, or 3!" << endl;
        return 0;
    }
    int array_lowest_in_row = getLowestInRow(matrix, low_row_selection);

    cout << "The total of the array values is: " << array_total << endl;
    cout << "The average of the array is: " << array_avg << endl;
    cout << "The total of column " << tot_selected_column << " is: " << array_column_total << endl;
    cout << "The Highest value in row " << high_row_selection << " is: " << array_highest_in_row << endl;
    cout << "The smallest value in row " << low_row_selection << " is: " << array_lowest_in_row << endl;
    return 0;
}
