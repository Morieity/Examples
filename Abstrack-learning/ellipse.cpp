#include"ellipse.h"

//构造函数
Ellipse::Ellipse(double r1, double r2)
	:radius1(r1), radius2(r2)
{
	if (!isValid())
	{
		cout << "Invalid ellipse!";
		assert(false);
	}
}

//析构函数
Ellipse::~Ellipse()
{
}

//print defination
void Ellipse::print()const
{
	cout << "Ellipse of radius: " << radius1 << "X" ;
	cout << radius2 << endl;
}

//cacular area
double Ellipse::getArea() const
{
	return (3.14 * radius1 * radius2);
}

//cacular perimeter
double Ellipse::getPerimeter() const
{
	double temp = (radius1 * radius1 + radius2 * radius2) / 2;
	return (2 * 3.14 * temp);
}

//private isValid
bool Ellipse::isValid() const
{
	return (radius1 > 0 && radius2 > 0);
}
