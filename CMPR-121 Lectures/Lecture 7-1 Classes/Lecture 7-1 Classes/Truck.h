//Truck.h
#include "Vehicle.h"

#ifndef TRUCK_H
#define TRUCK_H

class Truck : public Vehicle
{
private:
	int loadCapacity;
public:
	Truck();
	Truck(int year, string model, float wholesale, int loadCapacity);
	~Truck();
	void setLoadCapacity(int loadCapacity);
	virtual void displayVehicle() const;
	virtual float calcRetail() const;
};
#endif