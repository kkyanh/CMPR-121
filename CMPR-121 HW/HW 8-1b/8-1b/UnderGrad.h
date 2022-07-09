#ifndef UNDERGRAD_H
#define UNDERGRAD_H
#include "Student.h"

//====================================================
//This is a derived class from the base class, Student,
// UnderGrad.  It inherits from Student and contains
// 1 protected data member: a string named level.
// Along with this is a constructor, destructor, and
// an accessor function.
//====================================================
class UnderGrad : public Student
{
protected:
	std::string level;
public:
	UnderGrad(int id, std::string name, int units, std::string level);
	~UnderGrad();
	virtual void displayRecord() const;
};
#endif