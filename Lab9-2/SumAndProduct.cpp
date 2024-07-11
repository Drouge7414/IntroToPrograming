// SumAndProduct.cpp - This program computes sums and products 
// Input:  Interactive
// Output:  Computed sum and product 

#include <iostream>
#include <string>
using namespace std; 

void sums(int);
void products(int);

int main() 
{
  double number;              	
   						
   cout << "Enter a positive integer or 0 to quit: ";
   cin >> number; 

   while(number != 0)
   {		
      // Call sums function here 
      sums(number);
      // Call products function here
      products(number);

      cout << "Enter a positive integer or 0 to quit: ";
      cin >> number; 
   }
   return 0;
} // End of main function
	
// Write sums function here
void sums(int num) {
   int sum = 0;
   for (int i = 1; i <= num; ++i){
      sum += i;
   }
   cout << "The Sum is " << sum << "." << endl;
   }

// Write products function here

void products(int num) {
   long long product =1;
   for (int i = 1; i <= num; ++i) {
      product *= i;

   }
   cout << "The prodcut is " << product << "." << endl;

}
