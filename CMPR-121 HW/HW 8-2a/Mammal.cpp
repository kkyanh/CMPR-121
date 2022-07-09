#include "Mammal.h"

//====start of Mammal()===============================
//The overloaded constructor of the Mammal class.  It
// initializes the data members with the values that
// are passed to it as well as using the Animal constructor
// to initialize values.
// 
// Input:
//		std::string name, double weightm std::string
//		hairColor
// 
// Output:
//		this->hairColor = hairColor;
//====================================================
Mammal::Mammal(std::string name, double weight, std::string hairColor) :
	Animal(name, weight)
{
	this->hairColor = hairColor;
}
//====end of Mammal()=================================
//
//====================================================



//====startt of ~Mammal()=============================
//The destructor of the Mammal class.  Does nothing.
// 
// Input:
//		None
// 
// Output:
//		None
//====================================================
Mammal::~Mammal() {}
//====end of ~Mammal()================================
//
//====================================================



//====start of showAnimal()===========================
//An accessor function of the Mammal class.  It displays
// to the user the information within the class when
// called.
// 
// Input:
//		None
// 
// Output:
//		See below
//====================================================
void Mammal::showAnimal() const
{
	std::cout << "This " << hairColor << " " << name 
		<< " weighs " << weight << " pounds.\n\n";
}
//====end of showAnimal()=============================
//
//====================================================