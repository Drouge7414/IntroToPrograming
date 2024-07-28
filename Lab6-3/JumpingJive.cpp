// JumpinJava.cpp - This program looks up and prints the names and prices of coffee orders.  
// Input:  Interactive
// Output:  Name and price of coffee orders or error message if add-in is not found 

#include <iostream>
#include <string>
using namespace std;

int main()
{
   // Declare variables.
   string addIn;  // Add-in ordered
   const int NUM_ITEMS = 5;  // Named constant
   // Initialized array of add-ins
   string addIns[] = {"Cream", "Cinnamon", "Chocolate", "Amaretto", "Whiskey"}; 
   // Initialized array of add-in prices
   double addInPrices[] = {.89, .25, .59, 1.50, 1.75};
   bool foundIt = false;  // Flag variable
   double orderTotal = 2.00;  // All orders start with a 2.00 charge

   // Get user input
   cout << "Enter coffee add-in or XXX to quit: ";
   cin >> addIn;
		
   // Write the rest of the program here. 
    // Loop to process user input
   while (addIn != "XXX")
   {
      foundIt = false;  // Reset flag for each new input
      
      // Search for the add-in in the addIns array
      for (int i = 0; i < NUM_ITEMS; ++i)
      {
         if (addIn == addIns[i])
         {
            // Add the price of the add-in to order total
            orderTotal += addInPrices[i];
            foundIt = true;  // Set flag to true if add-in is found

            cout << addIn << ": $" << addInPrices[i] << endl;
            break;  // Exit the loop since add-in is found
         }
      }
      
      // Check if add-in was found
      if (!foundIt)
      {
          cout << "Sorry we do not carry that" << endl;
      }
      
      // Prompt user for next input
      cout << "Enter coffee add-in or XXX to quit: ";
      cin >> addIn;
   }

   // Output final order total
   cout << "Order total: $" << orderTotal << endl;
   
   return 0;
} 
