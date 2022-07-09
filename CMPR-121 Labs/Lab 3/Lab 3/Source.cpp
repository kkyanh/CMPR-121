#include <iostream>
using namespace std;

struct Vehicle
{
	int id;
	int year;
	string model;
};

void displayCar(Vehicle);

int main()
{
	double values[5] = { 2,4,7,9,11 };
	int number = 5;

	double* doublePtr = NULL;
	int* ptr = &number;
	doublePtr = values;

	cout << *ptr << endl;
	*ptr = 44;

	Vehicle myCar;
	Vehicle yourCar{ 12345, 2005, "Ford" };

	displayCar(yourCar);

	return 0;
}

void displayCar(Vehicle yourCar)
{
	cout << "Your car's ID number is " << yourCar.id << endl;
	cout << "Your car's year is " << yourCar.year << endl;
	cout << "Your car's model is a " << yourCar.model << endl;
}