//====================================================
//Attached: HW 9a, 9b
//====================================================
//HW 9b
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program creates 2 instances of
// the Car class.  The first is initially initialized
// with the default constructor while the second is
// initialized with a 2007 Toyota.  The program then
// displays both cars.  After this, it sets the first
// instance to a 2002 Ford and displays it.  Afterwards,
// the program uses the areSame function to check
// if the cars are the same.  It'll display specific
// output depending on what is returned and finally,
// will display how many Car instances there are.
//====================================================

#include "Car.h"

//Function Prototype
bool areSame(Car& car1, Car& car2);

//====start of main()=================================
//
//====================================================
int main()
{
	Car myCar;
	Car yourCar("Toyota", 2007);

	std::cout << "My Car\n";
	myCar.displayCar();

	std::cout << "Your Car\n";
	yourCar.displayCar();

	myCar.setCar("Ford", 2002);

	std::cout << "My Car\n";
	myCar.displayCar();

	if (areSame(myCar, yourCar))
		std::cout << "The two cars are the same model and year.\n\n";
	else
		std::cout << "The two cars are not the same model and year.\n\n";

	std::cout << Car::getCount() << " cars have been declared.\n";

	return 0;
}
//====end of main()===================================
//
//====================================================



//====start of areSame()==============================
//This value-returning function returns a bool.  It
// takes 2 Car instances' references as parameters
// and returns if both instances' models are the same
// or not.  (True is they're the same, false otherwise)
// 
// Input:
//		Car& car1, Car& car2
// 
// Output:
//		return ((car1.model == car2.model) && (car1.year == car2.year));
//====================================================
bool areSame(Car& car1, Car& car2)
{
	return ((car1.model == car2.model) && (car1.year == car2.year));
}
//====end of areSame()================================
//
//====================================================