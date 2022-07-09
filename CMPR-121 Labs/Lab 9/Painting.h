#ifndef PAINTING_H
#define PAINTING_H
#include "Art.h"

//====================================================
// This class is a derived class and inherits from the
// Art base class.  It also contains a private string
// data member.  The class contains 3 member functions
// as well: 1 overloaded constructor, 1 destructor, and
// 1 virtual accessor function.
//====================================================
class Painting : public Art
{
private:
	std::string paintMedium;
public:
	Painting(std::string, std::string, std::string, std::string, int, double, std::string);
	~Painting();
	virtual void showArt();
};
#endif