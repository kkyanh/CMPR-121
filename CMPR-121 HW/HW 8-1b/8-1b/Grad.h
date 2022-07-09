#ifndef GRAD_H
#define GRAD_H
#include "Student.h"

//====================================================
//This is a derived class from the base class, Student,
// Grad.  It inherits from Student and contains 1 
// protected data member: a string named degree.  Along
// with this is a constructor, destructor, and an 
// accessor function.
//====================================================
class Grad : public Student
{
protected:
	std::string degree;
public:
	Grad(int, std::string, int, std::string);
	~Grad();
	virtual void displayRecord() const;
};
#endif