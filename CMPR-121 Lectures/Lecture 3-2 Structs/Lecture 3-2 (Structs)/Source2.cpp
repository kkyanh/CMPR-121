/*
#include "Date.h"

int main()
{
	Date today = { 12,30,2022 };
	Date* ptr = &today;

	//arrow operator: dereferences the pointer and works with structs
	cout << ptr->month << "/" << ptr->day << "/" << ptr->year << endl << endl;
	//same as
	cout << today.month << "/" << today.day << "/" << today.year << endl << endl;
	//-------------------------------
	//arrow operator is viable in dynamically allocated memory uses while dot isnt
	ptr = new Date { 2,23,2022 };

	cout << ptr->month << "/" << ptr->day << "/" << ptr->year << endl << endl;

	delete ptr;
	ptr = nullptr;

	return 0;
}
*/