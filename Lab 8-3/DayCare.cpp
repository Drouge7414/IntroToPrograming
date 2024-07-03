#include <iostream>
using namespace std;

int main() 
{
   // Declare two dimensional array here
double rate[5][5] = {
{ 30.00, 60.00, 88.00, 115.00, 140.00 },
{ 26.00, 52.00, 70.00, 96.00, 120.00 },
{ 24.00, 46.00, 67.00, 89.00, 110.00 },
{ 22.00, 40.00, 60.00, 75.00, 88.00 },
{ 20.00, 35.00, 50.00, 66.00, 84.00 } };
// Declare other variables
int numDays;
int age;
int QUIT = 99;

// This is the work done in the getReady() function
// Perform a priming read to get the age of the child
cout<<"Enter age of child or 99 to quit: ";
cin>>age;
while(age != QUIT)
{
// This is the work done in the determineRateCharge() function
// Ask the user to enter the number of days
if(age > 4)
age = 4;
// Print the weekly rate
cout<<"Enter number of days: ";
cin>>numDays;
// Ask the user to enter the next child's age
cout<<"Weekly Rate is $" << rate[age][numDays-1]<<endl;
cout<<"Enter age of child or 99 to quit: ";
cin>>age;

}
// This is the work done in the finish() function
cout << "End of program" << endl;
return 0;
} // End of main() function
