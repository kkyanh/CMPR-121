#ifndef DATE_H
#define DATE_H
#include <iostream>

//====================================================
//This is the base class of the program.  It contains
// 3 protected data members, all of which are int's.
// It also contains 5 member functions: a default
// constructor, an overloaded constructor, a destructor,
// 1 mutator function, and 1 accessor function.
//====================================================
class Date
{
protected:
	int month;
	int day;
	int year;
public:
	Date();
	Date(int, int, int);
	~Date();
	void setDate(int, int, int);
	void displayDate() const;
};
#endif