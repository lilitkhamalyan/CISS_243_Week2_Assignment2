#ifndef BASICSHAPE_H
#define BASICSHAPE_H
using namespace std;

class BasicShape
{
protected:
	double area;
public:
	BasicShape()
	{
		area = 0.0;
	}
	BasicShape(double a)
	{
		setArea(a);
	}
	void setArea(double a)
	{
		area = a;
	}
	const double getArea() const
	{
		return area;
	}
	virtual double calcArea() const = 0;
};
#endif
