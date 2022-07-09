#ifndef FAMOUSPEOPLE_H
#define FAMOUSPEOPLE_H
#include "Date.h"
#include <string>

//====================================================
//This is a derived class of the Date class.  It
// contains 3 private data members: 2 strings and 1
// Date class member.  It also contains 7 member
// functions: a default constructor, a destructor, 3
// mutator functions, and 2 accessor functions.
//====================================================
class FamousPeople : public Date
{
private:
	std::string name;
	std::string quote;
	Date birthdate;
public:
	FamousPeople();
	~FamousPeople();
	void setName(std::string);
	void setQuote(std::string);
	void setDate(int, int, int);
	void displayPerson() const;
	void displayDate() const;
};
#endif