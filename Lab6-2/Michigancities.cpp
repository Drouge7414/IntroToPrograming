// MichiganCities.cpp - This program prints a message for invalid cities in Michigan.  
// Input:  Interactive
// Output:  Error message or nothing

#include <iostream>
#include <string>
using namespace std;

int main() 
{
   // Declare variables
   string inCity;  // name of city to look up in array
   const int NUM_CITIES = 10;
   // Initialized array of cities
   string citiesInMichigan[] = {"Acme", "Albion", "Detroit", "Watervliet", "Coloma", "Saginaw", "Richland", "Glenn", "Midland", "Brooklyn"}; 
   bool foundIt = false;  // Flag variable

   // Get user input
   cout << "Enter name of city: ";
   cin >> inCity; 
	
   // Write your loop here 	
   for (int i = 0; i < NUM_CITIES; ++i)
   {
      // Write your test statement here to see if there is 
      // a match. Set the flag to true if city is found. 			
      if (inCity == citiesInMichigan[i])
      {
         foundIt = true;
         break;
      }
      }
   // Test to see if city was found. If found, output "City Found."
   // Else, output "Not a city in Michigan."
    	if (foundIt)
         cout << "City Found." << endl;
      else 
         cout << "Not a city in Michigan." << endl;
   return 0;	
} 
