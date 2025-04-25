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

//print�����Ķ���
void Square::print()const
{
	cout << "Square of side" << side << endl;
}
//�������
double Square::getArea() const
{
	return(side * side);
}

//�����ܳ�
double Square::getPerimeter() const
{
	return(4 * side);
}

//˽�к���isValid
bool Square::isValid() const
{
	return (side > 0.0);
}