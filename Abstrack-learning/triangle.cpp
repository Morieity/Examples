#include"triangle.h"

Triangle::Triangle(double s1, double s2, double s3)
	:side1(s1), side2(s2), side3(s3)
{
	if (!isValid())
	{
		cout << "Invalid triangle!";
		assert(false);
	}
}

//Îö¹¹º¯Êý
Triangle::~Triangle()
{
}

//defination of print()
void Triangle::print() const
{
	cout << "Triangle of:" << side1 << "X" << side2 << "X";
	cout << side3 << endl;
}

//cacular area
double Triangle::getArea() const
{
	double s = (side1 + side2 + side3) / 2;
	return (sqrt(s * (s - side1) * (s - side2) * (s - side3)));
}

//cacular length
double Triangle::getPerimeter() const
{
	return (side1 + side2 + side3);
}

//defination isValid
bool Triangle::isValid() const
{
	bool fact1 = (side1 + side2) > side3;
	bool fact2 = (side1 + side3) > side2;
	bool fact3 = (side2 + side3) > side1;
	return (fact1 && fact2 && fact3);
}