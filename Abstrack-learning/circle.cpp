#include"circle.h"

//构造函数
Circle::Circle(double r)
	:radius(r)
{
	if (!isValid())
	{
		cout << "Invalid circle!";
		assert(false);
	}
}

//析构函数
Circle::~Circle()
{
}

//defination of print
void Circle::print() const
{
	cout << "Circle of radius : " << radius << endl;
}

//dedination of area
double Circle::getArea() const
{
	return(3.14 * radius * radius);
}

//defination of permeter
double Circle::getPrimeter() const
{
	return 2 * 3.14 * radius;
}

//primate isValid
bool Circle::isValid() const
{
	return (radius > 0);
}