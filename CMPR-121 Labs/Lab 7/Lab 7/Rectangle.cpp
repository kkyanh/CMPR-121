#include "Rectangle.h"

//====start of Rectangle()============================
//This is the default constructor of the Rectangle
// class.  It takes in no parameters, and initializes
// the width and length variables to 0.0 each.
// 
// Input:
//		None
// Output:
//		None
//====================================================
Rectangle::Rectangle()
{
	width = 0.0;
	length = 0.0;
}
//====end of Rectangle()==============================
//
//====================================================



//====start of ~Rectangle()===========================
//This is the destructor of the Rectangle class.  It
// takes in no parameters and does nothing.
//====================================================
Rectangle::~Rectangle()
{

}
//====end of ~Rectangle()=============================
//
//====================================================



//====start of setWidth()=============================
//This void-returning function of the Rectangle class
// takes in a double as its parameter.  It assigns
// the width data member the value of the parameter.
// If the user enters a value that is less than or
// equal to 0, then it is not valid and the program
// ends.
// 
// Input:
//		w: A variable of data type double.  It is
//		passed by value.
// Output:
//		None
//====================================================
void Rectangle::setWidth(double w)
{
	if (w > 0)
		width = w;
	else
	{
		cout << "The value you entered was not valid.\n";
		exit(EXIT_FAILURE);
	}
}
//====end of setWidth()===============================
//
//====================================================



//====start of setLength()============================
//This void-returning function of the Rectangle class
// takes in a double as its parameter.  It assigns
// the length data member the value of the parameter.
// If the user enters a value that is less than or
// equal to 0, then it is not valid and the program
// ends.
// 
// Input:
//		l: A variable of data type double.  It is
//		passed by value.
// Output:
//		None
//====================================================
void Rectangle::setLength(double l)
{
	if (l > 0)
		length = l;
	else
	{
		cout << "The value you entered was not valid.\n";
		exit(EXIT_FAILURE);
	}
}
//====end of setLength()==============================
//
//====================================================



//====start of getWidth()=============================
//This value-returning function of data type double
// returns the width data member after its function
// call executes.
// 
// Input:
//		None
// Output:
//		None
//====================================================
double Rectangle::getWidth() const
{
	return width;
}
//====end of getWidth()===============================
//
//====================================================



//====start of getLength()============================
//This value-returning function of data type double
// returns the length data member after its function
// call executes.
// 
// Input:
//		None
// Output:
//		None
//====================================================
double Rectangle::getLength() const
{
	return length;
}
//====end of getLength()==============================
//
//====================================================



//====start of getArea()==============================
//This value-returning function of data type double
// returns the area calculated by multiplying the class'
// width and length data members after its function
// call executes.
// 
// Input:
//		None
// Output:
//		None
//====================================================
double Rectangle::getArea() const
{
	return width * length;
}
//====end of getArea()================================
//
//====================================================