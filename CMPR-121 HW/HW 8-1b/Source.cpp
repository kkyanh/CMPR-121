//====================================================
//Attached: HW 8-1a, 8-1b
//====================================================
//HW 8-1b
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program creates an UnderGrad and
// Grad instance and initializes them with data.  Then
// it displays the data to the user for each instance.
// Afterwards, it calls on the base class', Student,
// setUnits member function to change the units for
// the Grad instance from 12 to 15.  It then displays
// the new data to the user.
//====================================================

#include "Grad.h"
#include "UnderGrad.h"

//====start of main()=================================
//
//====================================================
int main()
{
	//Class Instances
	UnderGrad underGrad(100, "Tom Lee", 9, "Freshman");
	Grad grad(101, "Jim Jones", 12, "PHD");

	//Displays the UnderGrad and Grad instances' data
	underGrad.displayRecord();
	grad.displayRecord();

	//Call the setUnits member function from the Student class to change the units for the Grad instance
	grad.setUnits(15);

	//Display the new Grad instance's data
	grad.displayRecord();

	return 0;
}
//====end of main()===================================
//
//====================================================