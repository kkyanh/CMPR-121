#pragma once
//Student.h

#include "Date.h"

class Student
{
private:
	string name;
	Date birthday;
public:
	Student(string name, int month, int day, int year);
	~Student();
	void showStudent() const;
};