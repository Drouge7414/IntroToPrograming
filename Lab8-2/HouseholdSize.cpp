// HouseholdSize.cpp - This program uses a bubble sort to arrange up to 300 household sizes in
// descending order and then prints the mean and median household size. 
// Input:  Interactive.
// Output:  Mean and median household size. 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 300; // Number of household sizes
    int householdSizes[SIZE]; // Array used to store 300 household sizes
    int x;
    int limit = SIZE;
    int householdSize = 0;
    int pairsToCompare;
    bool switchOccurred;
    int temp;
    double sum = 0;
    double mean = 0;
    double median = 0;

    // Input household size
    cout << "Enter household size or 999 to quit: ";
    cin >> householdSize;

    // This is the work done in the fillArray() function
    x = 0;
    while (x < limit && householdSize != 999)
    {
        // Place value in array.
        householdSizes[x] = householdSize;
        // Calculate total of household sizes
        sum += householdSizes[x];
        x++; // Get ready for the next input item.
        cout << "Enter household size or 999 to quit: ";
        cin >> householdSize;
    } // End of input loop.
    limit = x;

    // Find the mean
    mean = sum / limit;
    cout << "Mean is: " << mean << endl;

    // This is the work done in the sortArray() function
    pairsToCompare = limit - 1;
    switchOccurred = true;

    while (switchOccurred == true)
    {
        x = 0;
        switchOccurred = false; // Corrected typo: == to =
        while (x < pairsToCompare)
        {
            if (householdSizes[x] > householdSizes[x + 1]) // Corrected the if statement
            {
                // Perform switch
                temp = householdSizes[x];
                householdSizes[x] = householdSizes[x + 1];
                householdSizes[x + 1] = temp;
                switchOccurred = true;
            }
            x++;
        }
        pairsToCompare--;
    }

    // This is the work done in the displayArray() function

    // Find the median
    median = (limit - 1) / 2.0;
    if (limit % 2 == 0)
    {
        cout << "Median is: " << (householdSizes[(int)median] + householdSizes[(int)median + 1]) / 2.0 << endl;
    }
    else
    {
        // Print the median household size for odd limit
        cout << "Median is: " << householdSizes[(int)median] << endl;
    }

    return 0;
} // End of main function
