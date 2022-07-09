#include <cstdlib>
#include <iostream>
using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H
//====start of Rectangle==============================
//This class has 2 private data members, width and
// length, both of which are of data type double.  It
// has 7 public data functions, one default constructor,
// one destructor, two setter functions (setWidth and
// setLength), and 3 getter functions (getWidth,
// getLength, and getArea) which are constants.
//====================================================
class Rectangle
{
private:
	double width;
	double length;
public:
	Rectangle();
	~Rectangle();
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;
};
//====end of Rectangle================================
//
//====================================================
#endif