// HouseSign.cpp - This program calculates prices for custom made signs.

#include <iostream>
#include <string>
using namespace std;
int main()
{
   // This is the work done in the housekeeping() function
   // Declare and initialize variables here
   	    // Charge for this sign
            // Color of characters in sign
    	    // Number of characters in sign
            // Type of wood

   double charge = 0.00;
   int numChars = 8;
   string color = "gold";
   string woodType = "oak";

   // This is the work done in the detailLoop() function
   // Write assignment and if statements here

   if(numChars > 5) {
      charge += (numChars -5) * 4;
   }
   if(woodType == "oak") {
      charge += 20;
   }
   if(color == "gold") {
      charge += 15;
   }
  
   // This is the work done in the endOfJob() function			
   // Output charge for this sign
   charge += 35;
   cout << "The charge for this sign is $" << charge << endl;
   return(0); 
} 	
