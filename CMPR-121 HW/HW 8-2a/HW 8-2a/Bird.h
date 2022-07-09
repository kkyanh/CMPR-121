#ifndef BIRD_H
#define BIRD_H
#include "Animal.h"

//====================================================
//This is a derived class of the Animal class.  It
// contains 1 private data member: 1 string.  It also
// contains 3 member functions: an overloaded
// constructor, destructor, and an accessor function.
//====================================================
class Bird : public Animal
{
private:
	std::string featherColor;
public:
	Bird(std::string, double, std::string);
	~Bird();
	void showAnimal() const;
};
#endif