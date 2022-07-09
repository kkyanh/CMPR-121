//====================================================
//Attached: HW 8-2a, 8-2b
//====================================================
//HW 8-2b
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program creates 3 instances of
// the FamousPeople class to hold information about
// 3 people the user enters.  It clears the screen
// after every time a person's information has been
// taken.  Once the program has collected the
// information, it clears the screen for the final
// time and displays to the user all 3 people.
//====================================================

#include "FamousPeople.h"

//====start of main()=================================
//
//====================================================
int main()
{
	FamousPeople person1;
	FamousPeople person2;
	FamousPeople person3;
	std::string name = "";
	std::string quote = "";
	int month = 0;
	int day = 0;
	int year = 0;

	std::cout << "Enter the first famous person: ";
	std::cin >> name;
	std::cin.ignore();
	std::cout << "\nEnter the quotation:\n";
	std::getline(std::cin, quote);
	std::cout << "\nEnter the birthdate:\n" << "Month: ";
	std::cin >> month;
	std::cout << "Day: ";
	std::cin >> day;
	std::cout << "Year: ";
	std::cin >> year;

	person1.setName(name);
	person1.setQuote(quote);
	person1.setDate(month, day, year);

	system("cls");

	std::cout << "Enter the second famous person: ";
	std::cin >> name;
	std::cin.ignore();
	std::cout << "\nEnter the quotation:\n";
	std::getline(std::cin, quote);
	std::cout << "\nEnter the birthdate:\n" << "Month: ";
	std::cin >> month;
	std::cout << "Day: ";
	std::cin >> day;
	std::cout << "Year: ";
	std::cin >> year;

	person2.setName(name);
	person2.setQuote(quote);
	person2.setDate(month, day, year);

	system("cls");

	std::cout << "Enter the third famous person: ";
	std::cin >> name;
	std::cin.ignore();
	std::cout << "\nEnter the quotation:\n";
	std::getline(std::cin, quote);
	std::cout << "\nEnter the birthdate:\n" << "Month: ";
	std::cin >> month;
	std::cout << "Day: ";
	std::cin >> day;
	std::cout << "Year: ";
	std::cin >> year;

	person3.setName(name);
	person3.setQuote(quote);
	person3.setDate(month, day, year);

	system("cls");

	std::cout << "Here are the famous people:\n\n";
	person1.displayPerson();
	person2.displayPerson();
	person3.displayPerson();

	return 0;
}
//====end of main()===================================
//
//====================================================