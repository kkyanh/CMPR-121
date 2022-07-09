//====================================================
//Attached: Lab 9
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program creates 2 derived class
// instances of the base class, Art.  Each one has
// their own unique showArt() function.  Since the
// base class' is a pure virtual function, the calls
// aren't statically bound when passed to the displayArt
// function in Source.cpp.  The program displays to
// the user each class instance's information.
//====================================================

#include "Painting.h"
#include "Sculpture.h"

//Function Prototype
void displayArt(Art&);

//====start of main()=================================
//
//====================================================
int main()
{
	//Class Instances
	Painting a1("12345", "The Kiss", "Gustav Klimt", "Symbolist", 1908, 2500, "Oil");
	Sculpture a2("54321", "The Thinker", "Rodin", "Impressionism", 1880, 2000, "Bronze");

	//Instances calling their showArt() functions
	displayArt(a1);
	displayArt(a2);

	return 0;
}
//====end of main()===================================
//
//====================================================



//====start of displayArt()===========================
//This void-returning function calls the Art class'
// showArt function.  Since it is a pure virtual
// function, the compiler dynamically binds the function
// calls to the actual calling classes and their showArt()
// function.
// 
// Input:
//		Art& art
// 
// Output:
//		art.showArt();
//====================================================
void displayArt(Art& art)
{
	art.showArt();
}
//====end of displayArt()=============================
//
//====================================================