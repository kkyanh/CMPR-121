//====================================================
//Attached: HW 8-2a, 8-2b
//====================================================
//HW 8-2a
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program creates 2 instances of
// derived classes, Bird and Mammal, from the base class,
// Animal.  These instances hold information about
// specific animals.  The program then displays the
// information to the user.
//====================================================

#include "Bird.h"
#include "Mammal.h"

//====start of main()=================================
//
//====================================================
int main()
{
	//Class instances of the Bird and Mammal classes
	Bird bird("pelican", 8.5, "grey");
	Mammal cow("dairy cow", 500, "black and white");

	//Display information of Bird instance
	std::cout << "Birds are vertebrates in the Aves class.\n";
	bird.showAnimal();

	//Display information of Mammal instance
	std::cout << "Mammals are vertebrates in the Mammalia class.\n";
	cow.showAnimal();

	return 0;
}
//====end of main()===================================
//
//====================================================