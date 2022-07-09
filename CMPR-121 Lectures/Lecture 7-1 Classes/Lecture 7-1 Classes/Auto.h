//Auto.h
#include "Vehicle.h"

#ifndef AUTO_H
#define AUTO_H

class Auto : public Vehicle
{
private:
	bool convertible;
public:
	Auto();
	Auto(int, string, float, bool);
	~Auto();
	void setConvertible(bool);
	virtual void displayVehicle() const;
	virtual float calcRetail() const;
};
#endif