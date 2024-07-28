// LetterE.cpp - This program prints the letter E with 3 asterisks
// across and 5 asterisks down. 
// Input:  None
// Output: Prints the outline of the letter E. 

#include <iostream>
#include <string>
using namespace std;
int main()
{
   const int NUM_ACROSS = 3;  // Number of asterisks to print across
   const int NUM_DOWN = 5;    // Number of asterisks to print down
  
    for (int row = 1; row <= 5; row++) { // Outer loop for rows
        for (int col = 1; col <= 3; col++) { // Inner loop for columns
            if (row == 1 || row == 3 || row == 5) { // First and last row
                std::cout << "*"; // Print asterisk
            } else if (col == 1) { // First column (middle row)
                std::cout << "*"; // Print asterisk
            } else {
                std::cout << " "; // Print space
            }
        }
        std::cout << std::endl; // Move to the next line after each row
    }

    return 0;
}
