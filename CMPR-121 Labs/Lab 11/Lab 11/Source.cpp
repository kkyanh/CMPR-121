//====================================================
//Attached: Lab 11
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program consists of two template
// functions.  The user is asked to get the integer
// dimensions of a rectangle which calls the getDimensions
// function.  It then calls the calcArea with the values
// to display the area.  The program then does the same,
// except with float values in the second time.
//====================================================

#include <iostream>

//Function Prototypes
template <class T>
void getDimensions(T&, T&);
template <class T>
float calcArea(T, T);

//====start of main()=================================
//
//====================================================
int main()
{
	int side1, side2 = 0;
	float width, length = 0.0;

	std::cout << "Enter the integer dimensions of a rectangle:\n";
	getDimensions(side1, side2);
	std::cout << "The area equals: " << calcArea(side1, side2) << std::endl << std::endl;

	std::cout << "Enter the float dimensions of a rectangle:\n";
	getDimensions(width, length);
	std::cout << "The area equals: " << calcArea(width, length) << std::endl << std::endl;

	return 0;
}
//====end of main()===================================
//
//====================================================



//====start of getDimensions()========================
//This void-returning function prompts the user to
// enter the first and second dimensions, passing
// the user input by reference to the variables in the
// parameter list.
// 
// Input:
//		T& s1, T& s2
// 
// Output:
//		See below
//====================================================
template <class T>
void getDimensions(T& s1, T& s2)
{
	std::cout << "Enter the first dimension: ";
	std::cin >> s1;
	std::cout << "Enter the second dimension: ";
	std::cin >> s2;
}
//====end of getDimensions()==========================
//
//====================================================



//====start of calcArea()=============================
//This value-returning function of data type float
// returns the area (or length * width) of a rectangle
// using the user's input from before.
// 
// Input:
//		T width, T length
// 
// Output:
//		return width * length;
//====================================================
template <class T>
float calcArea(T width, T length)
{
	return width * length;
}
//====end of calcArea()===============================
//
//====================================================