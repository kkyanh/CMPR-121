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

bool Car::operator>(Car& car)
{
	return price > car.price;

	/*
	if (price > car.price)
		return true;
	else
		return false;
	*/
}

bool Car::operator>(float amount)
{
	return price > amount;
}

bool Car::operator>(int year)
{
	return this->year > year;
}

bool Car::operator==(Car& car)
{
	return price == car.price;
}

float Car::operator+(Car& car)
{
	return price + car.price;
}

ostream& operator<<(ostream& stream, Car& car)
{
	stream << "Year: " << car.year << endl
		<< "Model: " << car.model << endl
		<< "Price: $" << car.price << endl << endl;

	return stream;
}