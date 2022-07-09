#ifndef SCULPTURE_H
#define SCULPTURE_H
#include "Art.h"

//====================================================
// This class is a derived class and inherits from the
// Art base class.  It also contains a private string
// data member.  The class contains 3 member functions
// as well: 1 overloaded constructor, 1 destructor, and
// 1 virtual accessor function.
//====================================================
class Sculpture : public Art
{
private:
	std::string material;
public:
	Sculpture(std::string, std::string, std::string, std::string, int, double, std::string);
	~Sculpture();
	virtual void showArt();
};
#endif