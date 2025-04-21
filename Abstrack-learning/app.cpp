#include"square.h"
#include"rectangle.h"
#include"triangle.h"
#include"circle.h"
#include"ellipse.h"

int main()
{
	//实例化并测试Square对象
	cout << "Information about a square" << endl;
	Square square(5);
	square.print();
	cout << "area: " << square.getArea() << endl;
	cout << "Perimeter: " << square.getPerimeter() << endl;
	cout << endl;

	//实例化并测试Rectangle对象
	cout << "Information about a rectangle" << endl;
	Rectangle rectangle(5, 4);
	rectangle.print();
	cout << "area: " << rectangle.getArea() << endl;
	cout << "Perimeter: " << rectangle.getPerimeter() << endl;
	cout << endl;

	//实例化并测试Triangle对象
	cout << "Information about a taiangle" << endl;
	Triangle triangle(3, 4, 5);
	triangle.print();
	cout << "area: " << triangle.getArea() << endl;
	cout << "Perimeter: " << triangle.getPerimeter() << endl;
	cout << endl;

	//实例化并测试Circle对象
	cout << "Information about a circle" << endl;
	Circle circle(5);
	circle.print();
	cout << "area: " << circle.getArea() << endl;
	cout << "Perimeter: " << circle.getPerimeter() << endl;
	cout << endl;

	//实例化并测试ellipse对象
	cout << "Information about a ellipse" << endl;
	Ellipse ellipse(5, 4);
	ellipse.print();
	cout << "area: " << ellipse.getArea() << endl;
	cout << "Perimeter: " << ellipse.getPerimeter() << endl;
	return 0;
}