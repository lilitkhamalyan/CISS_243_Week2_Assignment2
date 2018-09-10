// Name: Lilit Khamalyan
// Class: CISS 243
// Date: 09/09/2018
#include "Circle.h"
#include "Rectangle.h"
#include "BasicShape.h"
#include <iostream>
using namespace std;
// Declaring DisplayArea function. 
void DisplayArea(BasicShape*);

int main()
{
	BasicShape *circle = new Circle(3, 5, 3.5); 
	cout << "The area of the circle is: " << endl;
	DisplayArea(circle);
	BasicShape *rectangle = new Rectangle(8, 9);
	cout << "The area of the rectangle is: " << endl;
	DisplayArea(rectangle);
	return 0;
}
void DisplayArea(BasicShape* shape)
{
	cout << shape->getArea() << endl; 
}
