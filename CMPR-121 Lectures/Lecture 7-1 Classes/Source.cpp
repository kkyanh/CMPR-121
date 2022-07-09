#include "Auto.h"
#include "Truck.h"

void showRetail(Vehicle& vehicle);

int main()
{
	Truck t2(2015, "Toyota", 10000, 2000);
	Auto a2(2012, "Ford", 10000, true);

	cout << "Truck #2:\n";
	showRetail(t2);

	cout << "Auto #2:\n";
	showRetail(a2);

	return 0;
}

void showRetail(Vehicle& vehicle)
{
	cout << "Retail Price: $" << vehicle.calcRetail() << endl << endl;
}

/*
first half of class 4/20
#include "Auto.h"
#include "Truck.h"

using namespace std;

int main()
{
	Auto a1;
	Auto a2(2012, "Ford", 10000, true);
	Truck t1;
	Truck t2(2015, "Ford", 50000, 30000);

	cout << "Auto #1:\n";
	a1.displayVehicle();

	cout << "Auto #2:\n";
	a2.displayVehicle();

	cout << "Truck #1:\n";
	t1.displayVehicle();

	cout << "Truck #2:\n";
	t2.displayVehicle();

	cout << "The retail price of Auto #2 is $" << a2.calcRetail() << ".\n\n";

	return 0;
}
*/

/*
	last class (4/13)
	//v1 is an object of the Vehicle class
	//v1 is an instance of the Vehicle class (same thing)
	//The class has been instantiated
	Vehicle v1;
	Vehicle v2(2010, "Nissan Sentra", 4000);


	v1.setYear(2015);				//v1.year = 2015;
	v1.setModel("Toyota Prius");	//v1.model = "Toyota Prius";
	v1.setWholesale(10000);			//v1.wholesale = 10000;

	cout << "Vehicle #1: ";
	v1.displayVehicle();

	cout << "Vehicle #2: ";
	v2.displayVehicle();

	cout << "Vehicle #2's wholesale price is $" << v2.getWholesale() << ".\n\n";
	cout << "Vehicle #1's year is " << v1.getYear() << ".\n\n";
*/