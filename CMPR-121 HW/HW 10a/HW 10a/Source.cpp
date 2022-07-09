//====================================================
//Attached: HW 10a, 10b, 10c, 10d
//====================================================
//HW 10a
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program uses the max template
// function from the algorithm header file to compare
// 2 values of various data types.  It returns the
// greater of the 2 values.
//====================================================

#include <iostream>
#include <algorithm>

//====start of main()=================================
//
//====================================================
int main()
{
	std::cout << "The greater value of 1 and 2 = " << std::max(1, 2) << std::endl;
	std::cout << "The greater value of 2 and 1 = " << std::max(2, 1) << std::endl;
	std::cout << "The greater value of 'a' and 'z' = " << std::max('a', 'z') << std::endl;
	std::cout << "The greater value of 3.14 and 2.72 = " << std::max(3.14, 2.72) << std::endl;

	return 0;
}
//====end of main()===================================
//
//====================================================