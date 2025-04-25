#include"rectangle.h"

Rectangle::Rectangle(double lg, double wd)
	:length(lg), width(wd)
{
	if (!isValid())
	{
		cout << "Invalid rectangle!";
		assert(false);
	}
}

//Îö¹¹º¯Êý
Rectangle::~Rectangle()
{
}

//print defination
void Rectangle::print() const
{
	cout << "Rectangle of" << length << "X" << width << endl;
}

//cacular area
double Rectangle::getArea() const
{
	return width * length;
}

//cacular around length
double Rectangle::getPerimeter() const
{
	return 2 * (length + width);
}

//isValid defination
bool Rectangle::isValid() const
{
	return (length > 0.0 && width > 0.0);
}