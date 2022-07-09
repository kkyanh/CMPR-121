//====================================================
//Attached: HW 7-2c, 7-2d
//====================================================
//HW 7-2c
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program prompts the user to enter
// the details for 3 presidents.  In each president
// instance that the user enters input for, they are
// entering data for the president's number, name, and
// quote.  After taking in data for the 3 instances, 
// the program displays the data.
//====================================================

#include "Presidents.h"

//====start of main()=================================
//
//====================================================
int main()
{
	//Variables
	Presidents president1;
	Presidents president2;
	Presidents president3;
	int number = 0;
	std::string name = "";
	std::string quote = "";

	//Prompt the user to enter details about the first president they are entering
	std::cout << "Enter the first president's number: ";
	std::cin >> number;
	std::cin.ignore();
	std::cout << "Enter his name: ";
	std::getline(std::cin, name);
	std::cout << "Enter his quote: ";
	std::getline(std::cin, quote);

	//Set the data values to the president1 instance
	president1.setNumber(number);
	president1.setName(name);
	president1.setQuote(quote);

	//Prompt the user to enter details about the second president they are entering
	std::cout << "\nEnter the second president's number: ";
	std::cin >> number;
	std::cin.ignore();
	std::cout << "Enter his name: ";
	std::getline(std::cin, name);
	std::cout << "Enter his quote: ";
	std::getline(std::cin, quote);

	//Set the data values to the president2 instance
	president2.setNumber(number);
	president2.setName(name);
	president2.setQuote(quote);

	//Prompt the user to enter details about the third president they are entering
	std::cout << "\nEnter the third president's number: ";
	std::cin >> number;
	std::cin.ignore();
	std::cout << "Enter his name: ";
	std::getline(std::cin, name);
	std::cout << "Enter his quote: ";
	std::getline(std::cin, quote);

	//Set the data values to the president3 instance
	president3.setNumber(number);
	president3.setName(name);
	president3.setQuote(quote);

	//Display the presidents and their info the user entered
	std::cout << "\nThe presidents are:\n";
	president1.displayPresidents();
	president2.displayPresidents();
	president3.displayPresidents();

	return 0;
}
//====end of main()===================================
//
//====================================================