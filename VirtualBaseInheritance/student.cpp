#include"student.h"

//构造函数
Student::Student(string name, double gp)
	:Person(name), gpa(gp)
{
	assert(gpa <= 4.0);
}

//析构函数
Student::~Student()
{
}

void Student::print()
{
	cout << "Student" << endl;
	cout << "Name:" << name << " ";
	cout << "GPA:" << gpa << endl << endl;
}