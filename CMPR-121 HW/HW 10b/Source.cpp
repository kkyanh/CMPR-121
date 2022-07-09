//====================================================
//Attached: HW 10a, 10b, 10c, 10d
//====================================================
//HW 10b
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program uses the vector header file
// to create a vector.  There are then operations
// performed on the vector, with the program displaying
// the results.
//====================================================

#include <iostream>
#include <vector>

//====start of main()=================================
//
//====================================================
int main()
{
	std::vector<int> values;

	values.push_back(1);
	values.push_back(2);
	values.push_back(4);
	values.push_back(9);
	values.push_back(5);

	std::cout << "Vector: ";
	for (int i = 0; i < values.size(); i++)
		std::cout << values[i] << ' ';
	std::cout << std::endl << std::endl;

	values.insert(values.begin(), 3);
	std::cout << "Vector: ";
	for (int i = 0; i < values.size(); i++)
		std::cout << values[i] << ' ';
	std::cout << std::endl << std::endl;

	values.erase(values.begin());
	std::cout << "Vector: ";
	for (int i = 0; i < values.size(); i++)
		std::cout << values[i] << ' ';
	std::cout << std::endl << std::endl;

	values.pop_back();
	std::cout << "Vector: ";
	for (int i = 0; i < values.size(); i++)
		std::cout << values[i] << ' ';
	std::cout << std::endl << std::endl;

	std::cout << "There are " << values.size() << " values.\n\n";

	return 0;
}
//====end of main()===================================
//
//====================================================