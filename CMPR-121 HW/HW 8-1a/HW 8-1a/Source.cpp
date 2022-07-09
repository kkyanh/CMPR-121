//====================================================
//Attached: HW 8-1a, 8-1b
//====================================================
//HW 8-1a
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program creates 2 Student instances.
// The first isn't initialized with any values while
// the other is.  The program then displays both students
// to the user.  Once this is done, the program sets the
// first student instance with values and then displays
// it once again, with the new information.
//====================================================

#include "Student.h"

//====start of main()=================================
//
//====================================================
int main()
{
	//Student instances and variables
	Student s1;
	Student s2(100, "Tom P. Lee", 12);

	//Display the Student instances
	std::cout << "Here is student #1:\n";
	s1.displayRecord();
	std::cout << "Here is student #2:\n";
	s2.displayRecord();

	//Set the information to the data members of the s1 Student instance
	s1.setID(101);
	s1.setName("John Lee Hooker");
	s1.setUnits(15);

	//Display the new s1 Student instance's information
	std::cout << "Here is student #1 after the set functions:\n";
	s1.displayRecord();

	return 0;
}
//====end of main()===================================
//
//====================================================