#include "Car.h"

void showPrice(Car&);

int main()
{
	Car c1(2019, "Ford", 12550);
	Car c2(2016, "Nissan", 7775);

	// (c1.operator>(c2));
	if (c1 > c2)
		cout << "The price of car #1 is greater than the price of car #2.\n\n";
	else
		cout << "The price of car #1 is not greater than the price of car #2.\n\n";
	//---------------------------------------------------------
	float price = 15000;
	if (c1 > price)
		cout << "Car #1's price is greater than $15,000.\n\n";
	else
		cout << "Car #1's price is not greater than $15,000.\n\n";
	//---------------------------------------------------------
	int year = 2015;
	if (c1 > year)
		cout << "Car #1's year is newer than 2015.\n\n";
	else
		cout << "Car #1's year is not newer than 2015.\n\n";
	//---------------------------------------------------------
	if (c1 == c2)
		cout << "The cars are the same price.\n\n";
	else
		cout << "The cars are not the same price.\n\n";
	//---------------------------------------------------------
	float avg = (c1 + c2) / 2;
	cout << "The average price of the two cars is $" << avg << ".\n\n";
	//---------------------------------------------------------
	cout << "Car #1:\n" << c1;

	return 0;
}