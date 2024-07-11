// ArtShowDiscount.cpp - This program determines if an art show attendee gets a 5% discount for preregistering. 
// Input:  Interactive
// Output:  A statement telling the user if they get a discount or no discount.  

#include <iostream>
#include <string>
using namespace std;

void discount();
void noDiscount();

int main() 
{
   string registerString;              			
						
   cout << "Did you preregister? Enter Y or N: ";
   cin >> registerString; 
		
   // Test here. If = Y, call discount(), else call noDiscount(). 
   if (registerString == "y" || registerString == "Y") {
      discount();
   }else {
      noDiscount();
   }
   return 0;
} // End of main function

// Write discount function here
	
   void discount () {
      cout << "You are pre-registered and qualify for a 5 percent discount." << endl;
   }

// Write noDiscount function here
void noDiscount() {
    cout << "Sorry, you did not pre-register and do not qualify for a 5 percent discount." << endl;
}
