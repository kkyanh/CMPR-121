#include "FamousPeople.h"

//====start of FamousPeople()=========================
//The default constructor of the FamousPeople class.
// It initializes the data members to 0 and sets the
// birthdate data member to 0/0/0.
// 
// Input:
//		None
// 
// Output:
//		name = "";
//		quote = "";
//		birthdate.setDate(0, 0, 0);
//====================================================
FamousPeople::FamousPeople()
{
	name = "";
	quote = "";
	birthdate.setDate(0, 0, 0);
}
//====end of FamousPeople()===========================
//
//====================================================



//====start of ~FamousPeople()========================
//The destructor of the FamousPeople class.  Does
// nothing.
// 
// Input:
//		None
// 
// Output:
//		None
//====================================================
FamousPeople::~FamousPeople() {}
//====end of ~FamousPeople()==========================
//
//====================================================



//====start of setName()==============================
//A mutator function of the FamousPeople class.  It
// sets the name of the person the user is entering 
// about.
// 
// Input:
//		std::string name
// 
// Output:
//		this->name = name;
//====================================================
void FamousPeople::setName(std::string name)
{
	this->name = name;
}
//====end of setName()================================
//
//====================================================



//====start of setQuote()=============================
//A mutator function of the FamousPeople class.  It
// sets the quote of the person the user is entering 
// about.
// 
// Input:
//		std::string quote
// 
// Output:
//		this->quote = quote;
//====================================================
void FamousPeople::setQuote(std::string quote)
{
	this->quote = quote;
}
//====end of setQuote()===============================
//
//====================================================



//====start of setDate()==============================
//A mutator function of the FamousPeople class.  It
// sets the date of birth of the person the user is
// entering about.
// 
// Input:
//		int m, int d, int y
// 
// Output:
//		birthdate.setDate(m, d, y);
//====================================================
void FamousPeople::setDate(int m, int d, int y)
{
	birthdate.setDate(m, d, y);
}
//====end of setDate()================================
//
//====================================================



//====start of displayPerson()========================
//An accessor function of the FamousPeople class.  It
// displays to the user the name, birthdate, and quote
// of the person they entered information about.
// 
// Input:
//		None
// 
// Output:
//		See below
//====================================================
void FamousPeople::displayPerson() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Birth Date: ";
	birthdate.displayDate();
	std::cout << "Quote:\n" << '"' << quote << '"' << std::endl << std::endl;
}
//====end of displayPerson()==========================
//
//====================================================



//====start of displayDate()==========================
//An accessor function of the FamousPeople class.  It
// calls the Date object's displayDate function to
// display the date.
// 
// Input:
//		None
// 
// Output:
//		birthdate.displayDate();
//====================================================
void FamousPeople::displayDate() const
{
	birthdate.displayDate();
}
//====end of displayDate()============================
//
//====================================================