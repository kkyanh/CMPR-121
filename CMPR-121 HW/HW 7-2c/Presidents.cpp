#include "Presidents.h"

//====start of Presidents()===========================
//The default constructor of the Presidents class.
// This function initializes the data members to 0.
// 
// Input:
//		None
// 
// Output:
//		number = 0;
//		name = "";
//		quote = "";
//====================================================
Presidents::Presidents()
{
	number = 0;
	name = "";
	quote = "";
}



//====start of ~Presidents()==========================
//The destructor of the Presidents class.  Does nothing
// 
// Input:
//		None
// 
// Output:
//		None
//====================================================
Presidents::~Presidents() {}



//====start of setNumber()============================
//A mutator function of the Presidents class.  It sets
// the number of the president the user inputs in main.
// 
// Input:
//		number, a variable of data type int.  Passed
//		by value from main.
// 
// Output:
//		this->number = number;
//====================================================
void Presidents::setNumber(int number)
{
	this->number = number;
}



//====start of setName()==============================
//A mutator function of the Presidents class.  It sets
// the name of the president the user inputs in main.
// 
// Input:
//		name, a variable of data type string.  Passed
//		by value from main.
// 
// Output:
//		this->name = name;
//====================================================
void Presidents::setName(std::string name)
{
	this->name = name;
}



//====start of setQuote()=============================
//A mutator function of the Presidents class.  It sets
// the quote of the president the user inputs in main.
// 
// Input:
//		quote, a variable of data type string.  Passed
//		by value from main.
// 
// Output:
//		this->quote = quote;
//====================================================
void Presidents::setQuote(std::string quote)
{
	this->quote = quote;
}



//====start of displayPresidents()====================
//An accessor function of the Presidents class.  It
// displays to the user information about the president
// they inputted data for.  Uses a switch case to output
// what number they are correctly to the screen.
// 
// Input:
//		None
// 
// Output:
//		See below for the switch case
//====================================================
void Presidents::displayPresidents() const
{
	switch (number)
	{
	case(1):
		std::cout << name << ", " << number << "st president, said:\n\t" << '"' << quote << '"' << std::endl;
		break;
	case(2):
		std::cout << name << ", " << number << "nd president, said:\n\t" << '"' << quote << '"' << std::endl;
		break;
	case(3):
		std::cout << name << ", " << number << "rd president, said:\n\t" << '"' << quote << '"' << std::endl;
		break;
	default:
		std::cout << name << ", " << number << "th president, said:\n\t" << '"' << quote << '"' << std::endl;
		break;
	}
}