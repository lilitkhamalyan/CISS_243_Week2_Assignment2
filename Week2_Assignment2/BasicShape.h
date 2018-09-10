#ifndef BASICSHAPE_H
#define BASICSHAPE_H
using namespace std;
// BasicShape class declaration 
class BasicShape
{
protected:
	double area;
public:
	// Default constructor 
	BasicShape()
	{
		area = 0.0;
	}
	// Constructor
	BasicShape(double a)
	{
		setArea(a);
	}
	// Mutator function
	void setArea(double a)
	{
		area = a;
	}
	//Accessor function
	const double getArea() const
	{
		return area;
	}
	// Pure virtual function 
	virtual double calcArea() const = 0;
};
#endif
