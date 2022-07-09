//Student.cpp

#include "Student.h"

Student::Student(string name, int month, int day, int year)
{
	this->name = name;
	birthday.setDate(month, day, year);
}

Student::~Student() {}

void Student::showStudent() const
{
	cout << "Name: " << name << endl
		<< "Date of Birth: ";
	birthday.displayDate();
}