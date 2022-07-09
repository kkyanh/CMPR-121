//====================================================
//Attached: Lab 7
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program prompts the user to enter
// a width and length for a tennis court using a
// class named Rectangle.  It then displays the width,
// length, and area of the tennis court to the user.
//====================================================

#include "Rectangle.h"

//====start of main()=================================
//
//====================================================
int main()
{
	//Variables
	Rectangle tennisCourt;
	double width = 0.0;
	double length = 0.0;
	double area = 0.0;

	//Prompt the user to enter a width and length
	//Assign the width and length variables to the data members
	cout << "Enter the width of the court: ";
	cin >> width;
	tennisCourt.setWidth(width);
	cout << "Enter the length of the court: ";
	cin >> length;
	tennisCourt.setLength(length);
	
	
	

	//Assign the tennisCourt's width, length, and area to main's width, length, and area 
	width = tennisCourt.getWidth();
	length = tennisCourt.getLength();
	area = tennisCourt.getArea();

	//Displaying to the user the width, length, and area
	cout << "\nThe width of the court is " << width << " feet.\n";
	cout << "The length of the court is " << length << " feet.\n";
	cout << "The area of the court is " << area << " square feet.\n";

	return 0;
}
//====end of main()===================================
//
//====================================================