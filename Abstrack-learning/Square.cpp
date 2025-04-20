#include"square.h"

Square::Square(double s)
	:side(s)
{
	if (!isValid())
	{
		cout << "Invalid square!";
		assert(false);
	}
}

Square::~Square()
{
}

//print函数的定义
void Square::print()const
{
	cout << "Square of side" << side << endl;
}
//计算面积
double Square::getArea() const
{
	return(side * side);
}

//计算周长
double Square::getPerimeter() const
{
	return(4 * side);
}

//私有函数isValid
bool Square::isValid() const
{
	return (side > 0.0);
}