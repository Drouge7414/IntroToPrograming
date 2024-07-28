#include <iostream>
#include <string>
using namespace std;

int main()
{
   // Declare a named constant for array size here   
const int ARRAY_SIZE =8;


   // Declare array here
   double averages[ARRAY_SIZE];


   // Use this variable to store the batting average input by user
   double battingAverage;


   // Use these variables to store the minimum and maximum values
   double min, max;


   // Use these variables to store the total and the average
   double total = 0.0;
   double average; 


   // Write a loop to get batting averages from user and assign to array
   for (int i = 0; i < ARRAY_SIZE; ++i)
   {
      cout << "Enter a batting average: ";
      cin >> battingAverage;
      // Assign value to array
      averages[i] = battingAverage;

      total += battingAverage; 


   // Assign the first element in the array to be the minimum and the maximum
   
   if (i == 0)
   {
   min = battingAverage;
   max = battingAverage;
   }
   else
   {
      if (battingAverage < min)
      min = battingAverage;
      if (battingAverage > max)
      max = battingAverage;
   }
   }

   // Start out your total with the value of the first element in the array
 
   // Write a loop here to access array values starting with averages[1]
   
      // Within the loop test for minimum and maximum averages.
      
      // Also accumulate a total of all averages     
   
		   
   // Calculate the average of the 10 batting averages   
average = total / ARRAY_SIZE;


   // Print the batting averages stored in the averages array 
   
   for (int i = 0; i < ARRAY_SIZE; ++i)
   {
      cout << "averages[" << i << "]; " << averages[i] << endl;
   }
   
   // Print the maximum batting average, minimum batting average, and average batting average
   cout << "minimum batting average: " << min << endl;
   cout << "maximum batting average: " << max << endl;
   cout << "average batting average: " << average << endl;

   return 0;
}
