#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	//static variable - A variable that is shared by all objects
	static int carCount;

	//instance variables
	int year;
	string model;
	float price;
public:
	Car();
	Car(int, string, float);
	~Car();
	void displayCar() const;

	//static member function
	static int getCount();

	//friend function (not a class function)
	//friend void showPrice(Car&);

	//operator overloading examples
	bool operator>(Car&);
	bool operator>(float);
	bool operator>(int);
	bool operator==(Car&);

	float operator+(Car&);

	friend ostream& operator<<(ostream&, Car&);
};
#endif