//====================================================
//Attached: Lab 12
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program consists of a vector and
// a function to display information.  A vector is
// passed to the function and has vector operations
// performed, with the results displayed to the user.
//====================================================

#include <iostream>
#include <vector>

//Function Prototype
void showInfo(std::vector<int>&);

//====start of main()=================================
//
//====================================================
int main()
{
	//Vector Declaration
	std::vector<int> numbers{ 1,3,5,7,9 };

	//Function Call
	showInfo(numbers);

	return 0;
}
//====end of main()===================================
//
//====================================================



//====start of showInfo()=============================
//This void-returning function has a vector passed by
// reference to it.  It performs operations and displays
// information about the vector that was passed, as
// well as the results of some operations.
// 
// Input:
//		std::vector<int>& vector
// 
// Output:
//		See below
//====================================================
void showInfo(std::vector<int>& vector)
{
	vector.pop_back();
	std::cout << "There are " << vector.size() << " values in the vector.\n\n";
	std::cout << "There are " << vector.capacity() << " array elements in the vector.\n\n";
	std::cout << "The maximum number of int values the vector can hold is " << vector.max_size() << ".\n\n";
	std::cout << "The value at the front is: " << vector.front() << ".\n\n";
	std::cout << "The value at the back is: " << vector.back() << ".\n\n";
	std::cout << "Here are all the values in the vector:\n";
	for (int i = 0; i < vector.size(); i++)
		std::cout << vector[i] << std::endl;
	vector.resize(2);
	std::cout << "After resizing, there are 2 values in the vector.\n\n";
}
//====end of showInfo()===============================
//
//====================================================