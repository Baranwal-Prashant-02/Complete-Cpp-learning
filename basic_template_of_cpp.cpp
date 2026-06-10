// Preprocessor directive
// #include is used to include header files
#include <iostream>

// Using the standard namespace
// This allows us to use standard library names like cout, cin without 'std::'
// helps to Avoid writing std:: again and again
using namespace std;

// Main function
// Execution of the program starts from main()
int main()
{
    // Statement
    // cout is used to print output on the screen
    cout << "Hello, World!" << endl;

    // Variable declaration
    // int is a data type, number is a variable
    int number = 10;

    // Outputting variable value
    cout << "Number = " << number << endl;

    // Conditional statement
    if (number > 0)
    {
        cout << "Number is positive" << endl;
    }
    else
    {
        cout << "Number is not positive" << endl;
    }

    // Loop example (for loop)
    for (int i = 1; i <= 3; i++)
    {
        cout << "Loop iteration: " << i << endl;
    }

    // Return statement
    // Ends the main function and returns value to OS
    return 0;
}


// Hello, World!
// Number = 10
// Number is positive
// Loop iteration: 1
// Loop iteration: 2
// Loop iteration: 3