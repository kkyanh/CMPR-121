//====================================================
//Attached: HW 10a, 10b, 10c, 10d
//====================================================
//HW 10c
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program uses the vector header file
// to create 2 vectors.  One holds the hours of an
// employee while the other holds the wages.  The
// program prompts the user to enter information for
// both vectors.  Once done, the screen clears and then
// the program displays the gross pay of all employees
// and the first and last employee's hours.
//====================================================

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

//====start of main()=================================
//
//====================================================
int main()
{
	const int NUM_EMPLOYEES = 5;
	vector<int> hours(5);
	vector<double> wage(5);
	
	cout << "Enter hours worked and hourly wage of each employee:\n\n";

	for (int i = 0; i < hours.size(); i++)
	{
		cout << "Hours for Employee #" << i + 1 << ": ";
		cin >> hours[i];
		cout << "Wage for Employee #" << i + 1 << ": ";
		cin >> wage[i];
	}
	system("cls");

	cout << fixed << setprecision(2);

	cout << "Gross pay for each employee:\n\n";

	for (int i = 0; i < wage.size(); i++)
	{
		cout << setw(11) << "Employee #" << i + 1 << setw(5) << "$"
			<< setw(7) << hours[i] * wage[i] << endl;
	}

	cout << "Employee #1 hours = " << hours.front() << endl << endl;

	cout << "Employee #5 hours = " << hours.back() << endl << endl;

	return 0;
}
//====end of main()===================================
//
//====================================================