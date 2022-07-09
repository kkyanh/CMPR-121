#include "Date.h"

//====start of Date()=================================
//This is the default constructor of the Date class.
// It initializes the data members to 0.
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
//====end of Date()===================================
//
//====================================================



//====start of Date(int, int, int)====================
//This is the overloaded constructor of the Date class.
// It initializes the data members to the values that
// are passed to it.
// 
// Input:
//		int month, int day, int year
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
//====end of Date(int, int, int)======================
//
//====================================================



//====start of ~Date()================================
//This is the destructor of the Date class.  Does
// nothing.
// 
// Input:
//		None
// 
// Output:
//		None
//====================================================
Date::~Date() {}
//====end of ~Date()==================================
//
//====================================================



//====start of setDate()==============================
//This is a mutator function of the Date class.  It
// sets the date to what is passed to it through
// its parameters.
// 
// Input:
//		int month, int day, int year
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
//====end of setDate()================================
//
//====================================================



//====start of displayDate()==========================
//This is an accessor function of the Date class.
// It displays the date in a formatted manner when it
// is called.
// 
// Input:
//		None
// 
// Output:
//		See below
//====================================================
void Date::displayDate() const
{
	std::cout << month << '/' << day << '/' << year << std::endl;
}
//====end of displayDate()============================
//
//====================================================