#include "Date.h"

//====start of Date()=================================
//The default constructor of the Date class.  This
// function initializes the data members to 0.
// 
// Input:
//		None
// 
// Output:
//		month = 0;
//		day = 0;
//		year = 0;
//====================================================
Date::Date()
{
	month = 0;
	day = 0;
	year = 0;
}



//====start of Date()=================================
//The overloaded constructor of the Date class.  This
// function initializes the data members to the arguments
// that were passed to this function from main.
// 
// Input:
//		month, day, and year are passed by value
// 
// Output:
//		this->month = month;
//		this->day = day;
//		this->year = year;
//====================================================
Date::Date(int month, int day, int year)
{
	this->month = month;
	this->day = day;
	this->year = year;
}



//====start of ~Date()================================
//The destructor of the Date class.  Does nothing.
// 
// Input:
//		None
// 
// Output:
//		None
//====================================================
Date::~Date() {}



//====start of setDate()==============================
//A mutator function of the Date class.  It sets the
// date that the user inputs in main.
// 
// Input:
//		month, day, and year are passed by value
// 
// Output:
//		this->month = month;
//		this->day = day;
//		this->year = year;
//====================================================
void Date::setDate(int month, int day, int year)
{
	this->month = month;
	this->day = day;
	this->year = year;
}



//====================================================
//A mutator function of the Date class.  It adds 1
// day to the days member function and checks for
// if it is now a new month.  Then checks for if
// it is a new year.
// 
// Input:
//		days are passed by value
// 
// Output:
//		Adds 1 day and checks for if the day is now
//		greater than 1 month.  If it is, then day is
//		adjusted to the new month, and the month is
//		incremented.  If the month is greater than 12,
//		then the month is reset to the 1st and year is
//		incremented.
//====================================================
void Date::addDays(int days)
{
	day += days;

	if (day > 30)
	{
		day -= 30;
		month++;
		if (month > 12)
		{
			month = 1;
			year++;
		}
	}
}



//====================================================
//An accessor function of the Date class.  It displays
// to the user the date in a formatted manner.
// 
// Input:
//		None
// 
// Output:
//		Displays the date in a mm/dd/yy format.
//====================================================
void Date::displayDate() const
{
	std::cout << month << '/' << day << '/' << year << ".\n\n";
}