#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "BasicShape.h"
using namespace std;
// Rectangle class declaration 
class Rectangle : public BasicShape
{
private: 
	long int width;
	long int length;
public:
	// Default constructor 
	Rectangle() 
	{
		width = 0;
		length = 0;
	}
	// Constructor
	Rectangle(long int w, long int l) 
	{
		width = w;
		length = l;
		area = calcArea(); // Calling overridden calcArea function and assigning it to variable area. 
	}
	// Accessor functions
	long int getWidth() const
	{
		return width;
	}
	long int getLength() const
	{
		return length;
	}
	// Overridden calcArea() function. 
	virtual double calcArea() const
	{
		double areaRectangle;
		areaRectangle = length * width;
		return areaRectangle;
	}
};


#endif
