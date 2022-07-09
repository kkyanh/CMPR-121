/*
#include "Date.h"

void showDate(Date&);
void addOneDay(Date&);

int main()
{
	Date today = { 12,30,2022 };

	cout << "Today's date is ";
	showDate(today);

	addOneDay(today);

	cout << "\nTomorrow's date is ";
	showDate(today);

	return 0;
}

void showDate(Date& date)
{
	cout << date.month << "/" << date.day << "/" << date.year << endl;
}

void addOneDay(Date& date)
{
	date.day++;

	if (date.day == 31)
	{
		date.day = 1;
		date.month++;

		if (date.month == 13)
		{
			date.month = 1;
			date.year++;
		}
	}
}
*/