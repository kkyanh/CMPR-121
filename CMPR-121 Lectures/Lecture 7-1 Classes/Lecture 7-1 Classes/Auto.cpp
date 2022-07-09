#include "Auto.h"

Auto::Auto()
{
	convertible = false;
}

Auto::Auto(int year, string model, float wholesale, bool convertible)
{
	this->year = year;
	this->model = model;
	this->wholesale = wholesale;
	this->convertible = convertible;
}

Auto::~Auto() {}

void Auto::setConvertible(bool convertible)
{
	this->convertible = convertible;
}

//The derived class function overrides the base class function
void Auto::displayVehicle() const
{
	cout << "Year: " << year << endl
		<< "Model: " << model << endl
		<< "Wholesale Price: $" << wholesale << endl
		<< "Convertible: ";
	if (convertible == true)
		cout << "Yes\n\n";
	else
		cout << "No\n\n";
}

float Auto::calcRetail() const
{
	return wholesale * 1.4;
}