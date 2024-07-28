// LargeSmall.cpp - This program calculates the largest and smallest of three integer values. 

#include <iostream>
using namespace std;
int main()
{
   // Declare and initialize variables here
   int largest;	// Largest of the three values
   int smallest; // Smallest of the three values
   int firstNumber = -50;	
   int secondNumber = 53;
   int thirdNumber = 78;


   
   // Write assignment, if, or if else statements here as appropriate
	if (firstNumber >= secondNumber && firstNumber >=thirdNumber) 
         largest = firstNumber;
      else if (secondNumber >= firstNumber && secondNumber >= thirdNumber)
         largest = secondNumber;
      else
         largest = thirdNumber;   

    if (firstNumber <= secondNumber && firstNumber <=thirdNumber) 
         smallest = firstNumber;
      else if (secondNumber <= firstNumber && secondNumber <= thirdNumber)
         smallest = secondNumber;
      else
         smallest = thirdNumber;   

   // Output largest and smallest number. 
   cout << "The largest value is " << largest << endl;
   cout << "The smallest value is " << smallest << endl;
   
   return 0; 
} 	
