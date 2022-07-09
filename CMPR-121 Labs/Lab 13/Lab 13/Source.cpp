//====================================================
//Attached: Lab 13
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program consists of a deque and
// a function to display information.  The deque adds
// values to the front and back of itself.  Then the
// function displays multiple messages about specific
// things about the deque, as well as remove values.
//====================================================

#include <iostream>
#include <deque>

//Function Prototype
void showNumbers(std::deque<int>&);

//====start of main()=================================
//
//====================================================
int main()
{
	std::deque<int> numbers;

	numbers.push_back(1);
	numbers.push_front(2);
	numbers.push_back(3);
	numbers.push_front(4);
	numbers.push_back(5);
	numbers.push_front(6);

	showNumbers(numbers);

	return 0;
}
//====end of main()===================================
//
//====================================================



//====start of showNumbers()==========================
//This void-returning function displays information
// about the container that is passsed by reference to
// it.  It performs operations to remove certain values
// as well.
// 
// Input:
//		std::deque<int>& container
// 
// Output:
//		See below
//====================================================
void showNumbers(std::deque<int>& container)
{
	std::deque<int>::iterator iter;

	std::cout << "Here are the values in the deque:\n";
	for (iter = container.begin(); iter != container.end(); iter++)
		std::cout << *iter << std::endl;
	
	std::cout << "Number of values in the deque: "
		<< container.size() << std::endl;

	std::cout << "Maximum values: "
		<< container.max_size() << " bytes.\n\n";

	std::cout << "The value at index[2]: "
		<< container.at(2) << std::endl;

	std::cout << "The value at the front: "
		<< container.front() << std::endl;

	std::cout << "The value at the back: "
		<< container.back() << std::endl;

	std::cout << "\nNow removing the front value. . .\n";
	container.pop_front();
	std::cout << "Here are the values after removing the front:\n";
	for (iter = container.begin(); iter != container.end(); iter++)
		std::cout << *iter << std::endl;
	std::cout << std::endl;

	std::cout << "Now removing the back value. . .\n";
	container.pop_back();
	std::cout << "Here are the values after removing the back:\n";
	for (iter = container.begin(); iter != container.end(); iter++)
		std::cout << *iter << std::endl;
}
//====end of showNumbers()============================
//
//====================================================