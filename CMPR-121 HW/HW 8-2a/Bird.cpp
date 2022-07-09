#include "Bird.h"

//====start of Bird()=================================
//The overloaded constructor of the Bird class.  It
// initializes the data members with the values that
// are passed to it as well as using the Animal constructor
// to initialize values.
// 
// Input:
//		std::string name, double weightm std::string
//		featherColor
// 
// Output:
//		this->featherColor = featherColor;
//====================================================
Bird::Bird(std::string name, double weight, std::string featherColor) :
	Animal(name, weight)
{
	this->featherColor = featherColor;
}
//====end of Bird()===================================
//
//====================================================



//====start of ~Bird()================================
//The destructor of the Bird class.  Does nothing.
// 
// Input:
//		None
// 
// Output:
//		None
//====================================================
Bird::~Bird() {}
//====end of ~Bird()==================================
//
//====================================================



//====start of showAnimal()===========================
//An accessor function of the Bird class.  It displays
// to the user the information within the class when
// called.
// 
// Input:
//		None
// 
// Output:
//		See below
//====================================================
void Bird::showAnimal() const
{
	std::cout << "This " << name << " has " << featherColor
		<< " feathers and weighs " << weight << " pounds.\n\n";
}
//====end of showAnimal()=============================
//
//====================================================