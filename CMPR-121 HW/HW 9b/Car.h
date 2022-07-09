#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>

//====================================================
//This class represents a car.  It contains 3 private
// data members: 1 string, 1 int, and 1 static int.
// It also contains 7 member functions: 1 default
// constructor, 1 overloaded constructor, 1 destructor,
// 1 mutator function, 2 accessor functions, and 1
// friend function.
//====================================================
class Car
{
private:
	std::string model;
	int year;
	static int carCount;
public:
	Car();
	Car(std::string model, int year);
	~Car();
	void setCar(std::string model, int year);
	static int getCount();
	void displayCar() const;
	friend bool areSame(Car& car1, Car& car2);
};
#endif