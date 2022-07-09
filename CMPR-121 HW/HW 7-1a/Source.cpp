//====================================================
//Attached: HW 7-1a, 7-1b
//====================================================
//HW 7-1a
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program prompts the user to enter
// a pay day date, in month, day, and year format.
// Once the user does so, it sets the date to the Date
// class.  It then displays today's date to the user
// and the pay day date.  Afterwards, the program adds
// 7 days, or 1 week, to the pay day date.  Then the
// program displays next week's pay day date to the user.
//====================================================
#include "Date.h"

//====start of main()=================================
//
//====================================================
int main()
{
	//Variables
	Date today(4, 23, 2022);
	Date payDay;
	int month = 0;
	int day = 0;
	int year = 0;

	//Prompt user to enter pay day date and log the data
	std::cout << "Please enter the pay day date:\n";
	std::cout << "Month: ";
	std::cin >> month;
	std::cout << "Day: ";
	std::cin >> day;
	std::cout << "Year: ";
	std::cin >> year;
	payDay.setDate(month, day, year);

	//Display the user the date of today and pay day
	std::cout << "Today is ";
	today.displayDate();
	std::cout << "Pay day is ";
	payDay.displayDate();

	//Add one week to the pay day
	payDay.addDays(7);

	//Display next week's pay day
	std::cout << "Next week's pay day is ";
	payDay.displayDate();
	
	return 0;
}
//====end of main()===================================
//
//====================================================