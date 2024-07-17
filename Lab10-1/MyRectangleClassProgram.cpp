// This program uses the programmer-defined Rectangle class. 
#include "RectangleImp.cpp"
#include <iostream>
using namespace std;
using namespace RectangleImp;
int main()
{
   
   // Create Rectangle objects here
   RectangleImp::Rectangle rect1, rect2;
   
   // Set the lengths and widths here
   rect1.setLength(10.0);
   rect1.setWidth(5.0);
   rect2.setLength(7.0);
   rect2.setWidth(3.0);

   // Print the areas and perimeters here
   cout << "Perimeter of rectangle1 is " <<rect1.calculatePerimeter() << endl;
   cout << "Area of rectangle1 is " << rect1.calculateArea() << endl;

   cout << "Perimeter of rectangle2 is " << rect2.calculatePerimeter() << endl;
   cout << "Area of rectangle2 is " <<rect2.calculateArea() << endl;
   
   return 0;
}
