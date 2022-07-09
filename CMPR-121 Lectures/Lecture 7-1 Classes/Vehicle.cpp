#include "Vehicle.h"

Vehicle::Vehicle()
{
	year = 0;
	model = "";
	wholesale = 0.0;
}

Vehicle::Vehicle(int year, string model, float wholesale)
{
	this->year = year;
	this->model = model;
	this->wholesale = wholesale;
}

Vehicle::~Vehicle(){}

void Vehicle::setYear(int year)
{
	this->year = year;
}
void Vehicle::setModel(string model)
{
	this->model = model;
}

void Vehicle::setWholesale(float wholesale)
{
	this->wholesale = wholesale;
}

int Vehicle::getYear() const
{
	return year;
}

float Vehicle::getWholesale() const
{
	return wholesale;
}
/*
void Vehicle::displayVehicle() const
{
	cout << "Year: " << year << endl
		<< "Model: " << model << endl
		<< "Wholesale Price: $" << wholesale << endl << endl;
}
*/

/*
float Vehicle::calcRetail() const
{
	return wholesale * 1.4;
}
*/