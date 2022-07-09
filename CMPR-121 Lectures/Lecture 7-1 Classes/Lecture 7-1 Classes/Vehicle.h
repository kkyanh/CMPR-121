//Vehicle.h
#include <iostream>
#include <string>
using namespace std;

#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
protected:
	//instance variables
	int year;
	string model;
	float wholesale;
public:
	Vehicle();						//default constructor (no parameters)
	Vehicle(int, string, float);	//overloaded constructor
	~Vehicle();						//destructor
									
	//"set" functions are mutator functions (they change the object)
	void setYear(int);
	void setModel(string);
	void setWholesale(float);

	//get functions and display functions do not change the object, so they are called accessor functions
	int getYear() const;
	float getWholesale() const;

	virtual void displayVehicle() const = 0; //pure virtual function (makes a class an abstract class)
	virtual float calcRetail() const = 0;    //pure virtual function
};
#endif