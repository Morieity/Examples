#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include"shape.h"

//class defination
class Circle :public Shape
{
private:
	double radius;
	bool isValid() const;
public:
	Circle(double radius);
	~Circle();
	void print() const;
	double getArea() const;
	double getPrimeter() const;
};

#endif
