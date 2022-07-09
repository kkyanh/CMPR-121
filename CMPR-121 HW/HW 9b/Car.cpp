#include "Car.h"

//====start of carCount===============================
//This is a static member variable of the Car class.
// It represents the amount of Car instances there are
// in the program.
//====================================================
int Car::carCount = 0;
//====end of carCount=================================
//
//====================================================



//====start of Car()==================================
//The default constructor of the Car class.  It
// initializes the member variables to empty string
// and 0, as well as incrementing the carCount variable.
// 
// Input:
//		None
// 
// Output:
//		model = "";
//		year = 0;
//		carCount++;
//====================================================
Car::Car()
{
	model = "";
	year = 0;
	carCount++;
}
//====end of Car()====================================
//
//====================================================



//====start of Car()==================================
//The overloaded constructor of the Car class.  It
// initializes the member variables to what is passed
// to it from its initializes in main, as well as 
// incrementing the carCount variable.
// 
// Input:
//		std::string model, int year
// 
// Output:
//		this->model = model;
//		this->year = year;
//		carCount++;
//====================================================
Car::Car(std::string model, int year)
{
	this->model = model;
	this->year = year;
	carCount++;
}
//====end of Car()====================================
//
//====================================================



//====start of ~Car()=================================
//The destructor of the Car class.  It decrements the
// carCount member variable.
// 
// Input:
//		None
// 
// Output:
//		carCount--;
//====================================================
Car::~Car() 
{
	carCount--;
}
//====end of ~Car()===================================
//
//====================================================



//====start of setCar()===============================
//A mutator function of the Car class.  It sets the
// model and year to what is passed to it from its
// function call.
// 
// Input:
//		std::string model, int year
// 
// Output:
//		this->model = model;
//		this->year = year;
//====================================================
void Car::setCar(std::string model, int year)
{
	this->model = model;
	this->year = year;
}
//====end of setCar()=================================
//
//====================================================



//====start of getCount()=============================
//An accessor function of the Car class.  It returns
// carCount to where it is called.
// 
// Input:
//		None
// 
// Output:
//		return carCount;
//====================================================
int Car::getCount()
{
	return carCount;
}
//====end of getCount()===============================
//
//====================================================



//====start of displayCar()===========================
//An accessor function of the Car class.  It displays
// to the user information about the Car instance.
// 
// Input:
//		None
// 
// Output:
//		See below
//====================================================
void Car::displayCar() const
{
	std::cout << "Model: " << model << std::endl;
	std::cout << "Year: " << year << std::endl << std::endl;
}
//====end of displayCar()=============================
//
//====================================================