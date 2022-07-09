#ifndef DATE_H
#define DATE_H
#include <iostream>

//====================================================
//This class has 3 private data members of data type
// int: month, day, and year.  These hold the respective
// values the user enters.  In the class are the default
// constructor, overloaded constructor, and destructor,
// as well as two mutator functions: set date and add days.
// The final function is an accessor function that
// displays the date.
//====================================================
class Date
{
private:
	int month;
	int day;
	int year;
public:
	Date();
	Date(int, int, int);
	~Date();

	void setDate(int, int, int);
	void addDays(int);

	void displayDate() const;
};
#endif