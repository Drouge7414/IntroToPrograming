// This program calculates your age in the year 2050.
// Input:  None
// Output: Your current age followed by your age in 2050

#include <iostream>
using namespace std;

int main()
{

   // Write your code here
   //datatype nameOfVariable; declare a variable
   int myNewAge; //declared a variable
   int myCurrentAge = 25;  
   int currentYear = 2024; //initialized
   myNewAge = myCurrentAge + (2050 - currentYear);

   cout << "My Current Age is " << myCurrentAge << "." << endl;
   cout << "I will be " << myNewAge << " in 2050." << endl;
   
   
   return 0;
}
