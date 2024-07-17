// CalculaatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dylan Barrett

#include <iostream> // Allows you to reference code located in other files
#include "Calculator.h" //Allows you to reference the Claculator.h file
using namespace std; // Tells the compiler to expect stuff from the C++ Library to be used in this file. Without this you would have to put std:: in front of things like cout or endl

int main() // All C++ programs must contain a main() function, it is the function that the program runs at start
{
    double x = 0.0; // Declares the first variable as x
    double y = 0.0; // Declares the Second variable as y
    double result = 0.0; // Declares the result of the operation as result
    char oper = '+'; // Declares the what operator is being used as the variable oper

    cout << "Calculator Console Application" << endl << endl; // Prints out "calculator Console Application" and adds two line breaks with endl
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" // Prints out "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" to tell user how to format what is put in
        << endl;// adds line break it is better practice to add line breaks with "\n" because endl alwasy flushes the buffer which can harm performance

    Calculator c; // Declares that an object named c is an instance of the Calculator class
    while (true) // Opens a loop that will continue to run untill the user closes the windows because the condition is listed as true
    {
        cin >> x >> oper >> y; // Accepts user input in the order that it was typed in 
        if (oper == '/' && y == 0)// Adds an if Statement to check if the operator is / and if the variable y is 0 
        {
            cout << "Attempted to divide by zero!" << endl; //Outputs the user is tring to divide a number by 0 
            continue;// Continues the loop after the mathmatical error
        }
        else//If the If statement is not true then it falls to the else statement to contiunue the program
        {
            result = c.Calculate(x, oper, y);// Calls the Calculate function is supplies the data that the user hass inputed
        }
            cout << "Result " << "of " << x << oper << y << " is: " << result << endl; // Outputs the answer to the operation in the format "Result of x+y is: z" and adds a line break
    }

    return 0; // signifies that the program executed successfully
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
