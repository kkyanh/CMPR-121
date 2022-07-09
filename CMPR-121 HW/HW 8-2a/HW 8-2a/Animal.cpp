#include "Animal.h"

//====start of Animal()===============================
//The overloaded constructor of the Animal class.  It
// initializes the data members with the values that
// are passed to it when it is called.
// 
// Input:
//		std::string name, double weight
// 
// Output:
//		this->name = name;
//		this->weight = weight;
//====================================================
Animal::Animal(std::string name, double weight)
{
	this->name = name;
	this->weight = weight;
}
//====end of Animal()=================================
//
//====================================================



//====start of ~Animal()==============================
//The destructor of the Animal class.  Does nothing.
// 
// Input:
//		None
// 
// Output:
//		None
//====================================================
Animal::~Animal() {}
//====end of ~Animal()================================
//
//====================================================