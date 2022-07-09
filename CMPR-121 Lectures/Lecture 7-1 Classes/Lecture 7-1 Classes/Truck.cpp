#include "Truck.h"

Truck::Truck()
{
	loadCapacity = 0;
}

Truck::Truck(int year, string model, float wholesale, int loadCapacity)
	: Vehicle(year, model, wholesale)
{
	this->loadCapacity = loadCapacity;
}

/*
Truck::Truck(int year, string model, float wholesale, int loadCapacity)
{
	this->year = year;
	this->model = model;
	this->wholesale = wholesale;
	this->loadCapacity = loadCapacity;
}
*/

Truck::~Truck() {}

void Truck::setLoadCapacity(int loadCapacity)
{
	this->loadCapacity = loadCapacity;
}

void Truck::displayVehicle() const
{
	cout << "Year: " << year << endl
		<< "Model: " << model << endl
		<< "Wholesale Price: $" << wholesale << endl
		<< "Load Capacity: " << loadCapacity << endl << endl;
}

float Truck::calcRetail() const
{
	return wholesale * 1.5;
}