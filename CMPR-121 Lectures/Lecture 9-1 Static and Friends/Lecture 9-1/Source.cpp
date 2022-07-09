#include "Car.h"

void showPrice(Car&);

int main()
{
	Car c1(2019, "Ford", 10000);
	cout << "There is " << Car::getCount() << " car.\n\n";

	Car c2(2016, "Nissan", 8000);
	cout << "There are " << Car::getCount() << " cars.\n\n";

	cout << "Car #1:\n";
	showPrice(c1);

	cout << "Car #2:\n";
	showPrice(c2);

	return 0;
}

void showPrice(Car& car)
{
	cout << "Price: $" << car.price << ".\n\n";
}