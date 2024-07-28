// Flowers.cpp - This program reads names of flowers and whether they are grown in shade or sun from an input
// file and prints the information to the user's screen.
// Input: flowers.dat.
// Output: Names of flowers and the words sun or shade.

#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
// Declare variables here
ifstream fin;
string flowerName;
string sunOrShade;

// Open input file

fin.open ("flowers.dat");

//Check if the input file exists
if (!fin)
{
cout << "This file does not exist" << endl;
exit(0);
}
// Write while loop that reads records from file.


while (!fin.eof()) {
fin >> flowerName;
fin >> sunOrShade;






// Print flower name

cout << flowerName << " is grown in the " << sunOrShade << endl;

}
fin.close();

return 0;
}
