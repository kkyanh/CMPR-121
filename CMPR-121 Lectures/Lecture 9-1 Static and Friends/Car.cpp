#include "Car.h"

//the static variable carCount's definition
int Car::carCount = 0;

Car::Car()
{
	carCount++;
	year = 0;
	price = 0.0;
}

Car::Car(int year, string model, float price)
{
	carCount++;
	this->year = year;
	this->model = model;
	this->price = price;
}

Car::~Car() 
{
	carCount--;
}

void Car::displayCar() const
{
	cout << "Year: " << year << endl
		<< "Model: " << model << endl
		<< "Price: $" << price << endl << endl;
}

//static member function getCount's definition
int Car::getCount()
{
	return carCount;
}