#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"
using namespace std;
// Circle class dectaration 
class Circle : public BasicShape
{
private:
	long int centerX;
	long int centerY;
	double radius;
public:
	// Default constructor 
	Circle() 
	{
		centerX = 0;
		centerY = 0;
		radius = 0.0;
	}
	// Constructor
	Circle(long int cX, long int cY, double r) 
	{
		centerX = cX;
		centerY = cY;
		radius = r;	
		area = calcArea(); // Calling overridden calcArea function and assigning it to variable area.  
	}
	// Accessor functions
	long int getCenterX() const
	{
		return centerX;
	}
	long int getCenterY() const
	{
		return centerY;
	}
	// Overridden calcArea() function. 
	virtual double calcArea() const
	{
		double areaCircle;
		areaCircle = 3.14159 * radius * radius;
		return areaCircle;
	}
};

#endif
