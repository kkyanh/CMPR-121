//====================================================
//Attached: HW 9a, 9b
//====================================================
//HW 9a
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program creates 2 instances of
// the Dog class.  The two instances are initialized
// with values and then the program displays outputs
// based on what is returned by the overloaded operators
// and their comparisons and such.
//====================================================

#include "Dog.h"

//====start of main()=================================
//
//====================================================
int main()
{
	//Class Instances
	Dog myDog("Spot", 5.5, 3);
	Dog yourDog("Jack", 4.5, 3);

	//Overloaded Operators
	if (myDog >= 2)
		std::cout << "The dog is at least 2 years old.\n\n";
	else
		std::cout << "The dog is less than 2 years old.\n\n";

	if (yourDog < myDog)
		std::cout << "Your dog weighs less than my dog.\n\n";
	else
		std::cout << "Your dog does not weigh less than my dog.\n\n";

	if (myDog == yourDog)
		std::cout << "They have the same name.\n\n";
	else
		std::cout << "They do not have the same name.\n\n";

	std::cout << yourDog << std::endl;

	return 0;
}
//====end of main()===================================
//
//====================================================