Example Problems are from Starting out with C++ From Control Structures through Objects. Eight Edition By Tony Gaddis

-------------------------------------------------------------------------------------------------------------------------------------------------------
Chapter 1: Introduction to Computers and Programming.
-------------------------------------------------------------------------------------------------------------------------------------------------------
Chapter 2: Introduction to C++
-------------------------------------------------------------------------------------------------------------------------------------------------------
* Exercise 1: Sum of Two Numbers
    Write a program that stores the integers 50 and 100 in variables, and stores the sum of
    these two in a variable named total.

* Exercise 2: Sales Prediction
    The East Coast sales division of a company generates 58 percent of total sales. Based
    on that percentage, write a program that will predict how much the East Coast division
    will generate if the company has $8.6 million in sales this year.

* Exercise 8: Total Purchase
    A customer in a store is purchasing five items. The prices of the five items are
    Price of item 1 = $15.95
    Price of item 2 = $24.95
    Price of item 3 = $6.95
    Price of item 4 = $12.95
    Price of item 5 = $3.95
    Write a program that holds the prices of the five items in five variables. Display each
    item’s price, the subtotal of the sale, the amount of sales tax, and the total. Assume the
    sales tax is 7%.
-------------------------------------------------------------------------------------------------------------------------------------------------------
Chapter 3: Expressions and Interactivity
-------------------------------------------------------------------------------------------------------------------------------------------------------
* Exercise 1: Miles per Gallon
    Write a program that calculates a car’s gas mileage. The program should ask the user
    to enter the number of gallons of gas the car can hold and the number of miles it can
    be driven on a full tank. It should then display the number of miles that may be driven
    per gallon of gas.

* Exercise 4: Average Rainfall
    Write a program that calculates the average rainfall for three months. The program
    should ask the user to enter the name of each month, such as June or July, and the
    amount of rain (in inches) that fell each month. The program should display a message
    similar to the following:
    The average rainfall for June, July, and August is 6.72 inches.

* Exercise 11:Automobile Costs
    Write a program that asks the user to enter the monthly costs for the following
    expenses incurred from operating his or her automobile: loan payment, insurance, gas,
    oil, tires, and maintenance. The program should then display the total monthly cost of
    these expenses, and the total annual cost of these expenses.

-------------------------------------------------------------------------------------------------------------------------------------------------------
Chapter 4: Making Decisions
-------------------------------------------------------------------------------------------------------------------------------------------------------
* Exercise 4: Areas of Rectangles
    The area of a rectangle is the rectangle’s length times its width. Write a program that
    asks for the length and width of two rectangles. The program should tell the user which
    rectangle has the greater area, or if the areas are the same.

* Exercise 13: Book Club Points
    Serendipity Booksellers has a book club that awards points to its customers based on
    the number of books purchased each month. The points are awarded as follows:
  * If a customer purchases 0 books, he or she earns 0 points.
  * If a customer purchases 1 book, he or she earns 5 points.
  * If a customer purchases 2 books, he or she earns 15 points.
  * If a customer purchases 3 books, he or she earns 30 points.
  * If a customer purchases 4 or more books, he or she earns 60 points.
    Write a program that asks the user to enter the number of books that he or she has
    purchased this month and then displays the number of points awarded.
    
* Exercise 23: Geometry Calculator
    Write a program that displays the following menu:
    Geometry Calculator
      1. Calculate the Area of a Circle
      2. Calculate the Area of a Rectangle
      3. Calculate the Area of a Triangle
      4. Quit
      Enter your choice (1-4):
    If the user enters 1, the program should ask for the radius of the circle and then display
    its area. Use the following formula:
    area π r 2
    Use 3.14159 for π and the radius of the circle for r. If the user enters 2, the program
    should ask for the length and width of the rectangle and then display the rectangle’s
    area. Use the following formula:
    area = length * width
    If the user enters 3 the program should ask for the length of the triangle’s base and its
    height, and then display its area. Use the following formula:
    area = base * height * .5
    If the user enters 4, the program should end.
    Input Validation: Display an error message if the user enters a number outside the range
    of 1 through 4 when selecting an item from the menu. Do not accept negative values
    for the circle’s radius, the rectangle’s length or width, or the triangle’s base or height.
-------------------------------------------------------------------------------------------------------------------------------------------------------
Chapter 5: Loops and Files
-------------------------------------------------------------------------------------------------------------------------------------------------------
* Exercise 1: Sum of Numbers
    Write a program that asks the user for a positive integer value. The program should use
    a loop to get the sum of all the integers from 1 up to the number entered. For example,
    if the user enters 50, the loop will find the sum of 1, 2, 3, 4, … 50.
    Input Validation: Do not accept a negative starting number.

* Exercise 10: Average Rainfall.
    Write a program that uses nested loops to collect data and calculate the average rainfall
    over a period of years. The program should first ask for the number of years. The outer
    loop will iterate once for each year. The inner loop will iterate twelve times, once for
    each month. Each iteration of the inner loop will ask the user for the inches of rainfall
    for that month.
    After all iterations, the program should display the number of months, the total inches
    of rainfall, and the average rainfall per month for the entire period.
    Input Validation: Do not accept a number less than 1 for the number of years. Do not
    accept negative numbers for the monthly rainfall.
  
* Exercise 22: Square Display
    Write a program that asks the user for a positive integer no greater than 15. The pro-
    gram should then display a square on the screen using the character ‘X’. The number
    entered by the user will be the length of each side of the square. For example, if the
    user enters 5, the program should display the following:
        XXXXX
        XXXXX
        XXXXX
        XXXXX
        XXXXX
    If the user enters 8, the program should display the following:
        XXXXXXXX
        XXXXXXXX
        XXXXXXXX
        XXXXXXXX
        XXXXXXXX
        XXXXXXXX
        XXXXXXXX
        XXXXXXXX
-------------------------------------------------------------------------------------------------------------------------------------------------------
Chapter 6: Functions
-------------------------------------------------------------------------------------------------------------------------------------------------------
* Exercise 1: Markup
    Write a program that asks the user to enter an item’s wholesale cost and its markup
    percentage. It should then display the item’s retail price. For example:
    • If an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the
        item’s retail price is 10.00.
    • If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s
        retail price is 7.50.
    The program should have a function named calculateRetail that receives the
    wholesale cost and the markup percentage as arguments and returns the retail price
    of the item.
    Input Validation: Do not accept negative values for either the wholesale cost of the
    item or the markup percentage.
  
*  Exercise 8: Coin Toss
    Write a function named coinToss that simulates the tossing of a coin. When you call
    the function, it should generate a random number in the range of 1 through 2. If the
    random number is 1, the function should display “heads.” If the random number is 2,
    the function should display “tails.” Demonstrate the function in a program that asks
    the user how many times the coin should be tossed and then simulates the tossing of
    the coin that number of times.
   
*  Exercise 13: Days Out
    Write a program that calculates the average number of days a company’s employees
    are absent. The program should have the following functions:
   * A function called by main that asks the user for the number of employees in
        the company. This value should be returned as an int. (The function accepts no
        arguments.)
   * A function called by main that accepts one argument: the number of employees in
        the company. The function should ask the user to enter the number of days each
        employee missed during the past year. The total of these days should be returned as
        an int.
   * A function called by main that takes two arguments: the number of employees in
        the company and the total number of days absent for all employees during the year.
        The function should return, as a double, the average number of days absent. (This
        function does not perform screen output and does not ask the user for input.)
    Input Validation: Do not accept a number less than 1 for the number of employees. Do
    not accept a negative number for the days any employee missed.
-------------------------------------------------------------------------------------------------------------------------------------------------------
Chapter 7: Arrays
-------------------------------------------------------------------------------------------------------------------------------------------------------
* Exercise 1: Largest/Smallest Array Values
    Write a program that lets the user enter 10 values into an array. The program should
    then display the largest and smallest values stored in the array.
  
* Exercise 2: Rainfall Statistics
    Write a program that lets the user enter the total rainfall for each of 12 months into
    an array of doubles. The program should calculate and display the total rainfall for
    the year, the average monthly rainfall, and the months with the highest and lowest
    amounts.
    Input Validation: Do not accept negative numbers for monthly rainfall figures.
  
* Exercise 19 2D Array Operations
    Write a program that creates a two-dimensional array initialized with test data. Use any
    data type you wish. The program should have the following functions:
  * getTotal . This function should accept a two-dimensional array as its argument and
    return the total of all the values in the array.
  * getAverage . This function should accept a two-dimensional array as its argument
    and return the average of all the values in the array.
  * getRowTotal . This function should accept a two-dimensional array as its first argu-
    ment and an integer as its second argument. The second argument should be the
    subscript of a row in the array. The function should return the total of the values in
    the specified row.
  * getColumnTotal . This function should accept a two-dimensional array as its first
    argument and an integer as its second argument. The second argument should be the
    subscript of a column in the array. The function should return the total of the values
    in the specified column.
  * getHighestInRow . This function should accept a two-dimensional array as its first
    argument and an integer as its second argument. The second argument should be the
    subscript of a row in the array. The function should return the highest value in the
    specified row of the array.
  * getLowestInRow . This function should accept a two-dimensional array as its first
    argument and an integer as its second argument. The second argument should be the
    subscript of a row in the array. The function should return the lowest value in the
    specified row of the array.
  Demonstrate each of the functions in this program.
