#ifndef MAMMAL_H
#define MAMMAL_H
#include "Animal.h"

//====================================================
//This is a derived class of the Animal class.  It
// contains 1 private data member: 1 string.  It also
// contains 3 member functions: an overloaded
// constructor, destructor, and an accessor function.
//====================================================
class Mammal : public Animal
{
private:
	std::string hairColor;
public:
	Mammal(std::string, double, std::string);
	~Mammal();
	void showAnimal() const;
};
#endif