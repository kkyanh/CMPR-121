#include "Date.h"

void getDates(Date dates[], const int SIZE);

int main()
{
	const int SIZE = 3;
	Date dates[SIZE];

	getDates(dates, SIZE);

	cout << "Here is the date in dates[1]:\n";
	cout << dates[1].month << "/" << dates[1].day << "/" << dates[1].year << endl;

	for (int index = 0; index < SIZE; index++)
	{
		cout << "Date #" << index + 1 << ": ";
		cout << dates[index].month << "/" << dates[index].day << "/" << dates[index].year << endl;
	}

	return 0;
}

void getDates(Date dates[], const int SIZE)
{
	cout << "Enter " << SIZE << " dates:\n";
	for (int index = 0; index < SIZE; index++)
	{
		cout << "#" << index + 1 << ":\n";
		cout << "Month: ";
		cin >> dates[index].month;
		cout << "Day: ";
		cin >> dates[index].day;
		cout << "Year: ";
		cin >> dates[index].year;
	}
}