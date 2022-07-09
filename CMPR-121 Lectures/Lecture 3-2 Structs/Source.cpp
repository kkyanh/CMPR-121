/*
#include "Date.h"

void getDate(Date&);
void showHoliday(Date&);

int main()
{
	
	int number = 3;
	Date today = { 3,1,2018 }; //today is an object, as it has 3 var's: month, day, year
	Date payDay;			   //uses an initialization list, like arrays

	getDate(today);

	payDay.month = 3;
	payDay.day = 1;
	payDay.year = 2018;

	cout << "Enter today's date (mmddyy): ";
	cin >> today.month >> today.day >> today.year;

	if ((today.month == payDay.month) && (today.day == payDay.day) && (today.year == payDay.year))
		cout << "Today is pay day!";
	

	Date summerHoliday = { "Independence Day",7,4,2022 };
	Date fallHoliday = { "Veteran's Day",11,10,2022 };

	cout << "A summer holiday:\n";
	showHoliday(summerHoliday);

	cout << "\nA fall holiday:\n";
	showHoliday(fallHoliday);

	return 0;
}

//pass a struct object to a function by reference
//the memory address of the first byte of the struct object is passed
void getDate(Date& date)
{
	cout << "Enter the date (mmddyy): ";
	cin >> date.month >> date.day >> date.year;
}

void showHoliday(Date& date)
{
	cout << "Holiday Name: " << date.name << endl
		<< "Date: " << date.month << "/" << date.day << "/" << date.year << endl;
}
*/