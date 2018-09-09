#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"
using namespace std;

class Circle : public BasicShape
{
private:
	long int centerX;
	long int centerY;
	double radius;
public:
	Circle() : BasicShape()
	{
		centerX = 0;
		CenterY = 0;
		radius = 0.0;
	}
	Circle(double a, long int cX, long int cY, double r) : BasicShape(double a)
	{
		centerX = cX;
		centerY = cY;
		radiius = r;	
		calcArea();
	}
	long int getCenterX() const
	{
		return centerX;
	}
	long int getCenterY() const
	{
		return centerY;
	}
	virtual double calcArea() const
	{
		area = 3.14159 * radius * radius;
		return area;
	}
};

#endif
