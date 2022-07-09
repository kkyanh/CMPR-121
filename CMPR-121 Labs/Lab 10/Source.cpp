//====================================================
//Attached: Lab 10
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program creates 3 class instances
// of the Book class.  The 1st 2 instances are
// instantiated with data, while the 3rd is left empty.
// A variety of functions are then called, many of
// which are overloaded in the class to display to the
// user different information.
//====================================================

#include "Book.h"

//====start of main()=================================
//
//====================================================
int main()
{
	//Class Instances
	Book b1("0-12345-9", 1990, 12.50);
	Book b2("0-54321-9", 2001, 7.75);
	Book b3;
	double avg = 0.0;

	//Display book #1 and book #2 and how many book instances there are
	std::cout << "Here is book #1:\n";
	b1.displayBook();
	std::cout << "Here is book #2:\n";
	b2.displayBook();
	std::cout << "There are " << b1.getCount() << " books.\n\n";

	//Use the overloaded operator > to compare 2 book instances' prices
	if (b1 > b2)
		std::cout << "Book #1 has a higher price.\n\n";
	else
		std::cout << "Book #1 does not have a higher price.\n\n";

	//Use the overloaded operator == to compare 2 book instances' prices
	if (b1 == b2)
		std::cout << "Same price.\n\n";
	else
		std::cout << "Not the same price.\n\n";

	//Use the overloaded operator > to compare a book instance's price with a double
	if (b2 > 10.00)
		std::cout << "The price is more than $10.00.\n\n";
	else
		std::cout << "The price is not more than $10.00.\n\n";

	//Use the overloaded operator + to add 2 book instances' prices together and display the avg
	avg = (b1 + b2) / 2.0;

	std::cout << "The average book price is " << avg << ".\n\n";

	//Use the overloaded operator < to compare a book instance's year with an int
	if (b1 < 2000)
		std::cout << "The book was published before 2000.\n\n";
	else
		std::cout << "The book was not published before 2000.\n\n";

	//Use the friend ostream& operator<<() to output a book instance's data
	std::cout << b1;

	//Use the friend istream& operator>>() to get input about a book instance's data from the user
	std::cout << "\nEnter Book #3 information.\n";
	std::cin >> b3;

	//Use the friend ostream& operator<<() to output a book instance's data
	std::cout << "\nHere is what you entered for Book #3:\n";
	std::cout << b3;

	return 0;
}
//====end of main()===================================
//
//====================================================