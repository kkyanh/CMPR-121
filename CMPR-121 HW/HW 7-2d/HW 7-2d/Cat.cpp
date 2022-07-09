#include "Cat.h"

//====start of Cat()==================================
//The default constructor of the Cat class.  This
// function initializes the data members to 0 and
// empty string.
// 
// Input:
//		None
// 
// Output:
//		weight = 0;
//		color = "";
//====================================================
Cat::Cat()
{
	weight = 0;
	color = "";
}



//====start of ~Cat()=================================
//The destructor of the Cat class.  Does nothing.
// 
// Input:
//		None
// 
// Output:
//		None
//====================================================
Cat::~Cat() {}



//====start of setWeight()============================
//A mutator function of the Cat class.  It sets the
// weight of the cat the user inputs in main.
// 
// Input:
//		weight, a variable of data type int.  Passed
//		by value from main.
// 
// Output:
//		this->weight = weight;
//====================================================
void Cat::setWeight(int weight)
{
	this->weight = weight;
}



//====start of setColor()=============================
//A mutator function of the Cat class.  It sets the
// color of the cat the user inputs in main.
// 
// Input:
//		color, a variable of data type string.  Passed
//		by value from main.
// 
// Output:
//		this->color = color;
//====================================================
void Cat::setColor(std::string color)
{
	this->color = color;
}



//====start of displayInfo()==========================
//An accessor function which displays the data of the
// cat to the user.
// 
// Input:
//		None
// 
// Output:
//		Displays the weight and color of the cat to
//		the user.
//====================================================
void Cat::displayInfo() const
{
	std::cout << "weighs " << weight << " pounds and is " << color << ".\n";
}



//====start of meow()=================================
//This function allows the cat to meow.
// 
// Input:
//		None
// 
// Output:
//		None
//====================================================
void Cat::meow() const
{
	std::cout << "MEOW!\n";
}