#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>

//====================================================
//This is the base class of the program.  It contains
// 2 protected data members: 1 string and 1 double.
// It also contains 2 member functions: an overloaded
// constructor and destructor.
//====================================================
class Animal
{
protected:
	std::string name;
	double weight;
public:
	Animal(std::string, double);
	~Animal();
};
#endif