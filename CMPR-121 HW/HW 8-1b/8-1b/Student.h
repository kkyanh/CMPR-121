#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

//====================================================
//This is the base class Student.  It contains 3 protected
// data members: id (int), units (int), and name (string).
// It also contains 8 public member functions: the
// default constructor, overloaded constructor, destructor,
// 2 mutator functions, 2 accessor functions, and a
// pure virtual function.
//====================================================
class Student
{
protected:
	int id;
	int units;
	std::string name;
public:
	Student();
	Student(int, std::string, int);
	~Student();
	void setID(int);
	int getID() const;
	void setUnits(int);
	int getUnits() const;
	virtual void displayRecord() const = 0;
};
#endif