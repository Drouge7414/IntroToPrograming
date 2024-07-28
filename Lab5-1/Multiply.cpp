// Multiply.cpp - This program prints the numbers 0 through 10 along
// with these values multiplied by 2 and by 10.
// Input:  None
// Output: Prints the numbers 0 through 10 along with their values multiplied by 2 and by 10. 

#include <iostream>
#include <string>
using namespace std;

int main()
{		
   string head1 = "Number: ";
   string head2 = "Multiplied by 2: ";
   string head3 = "Multiplied by 10: ";				
   int numberCounter;  // Numbers 0 through 10
   int byTen;  // Stores the number multiplied by 10
   int byTwo;  // Stores the number multiplied by 2
   const int NUM_LOOPS = 10;    // Constant used to control loop
   int counter = 0;
   cout << "0 through 10 multiplied by 2 and by 10." << endl;

   // Write while loop here   
    while (counter <= 10) {
      int result1 = counter * 2;
      int result2 = counter *10;

      std::cout <<"counter value: "  << counter << std::endl;
      std::cout << "multiplied by 2: " << result1 << std::endl;
      std::cout << "multiplied by 10: " << result2 << std::endl;
      counter++;
   }
   return 0;
} 
