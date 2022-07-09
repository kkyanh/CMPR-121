//====================================================
//Attached: Lab 5
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program prompts the user to enter
// a number.  This number will specify which student's
// birthday the program will display from 1-5.  If an
// answer is not in the range of 1-5, then the program
// will print a message telling the user that was an 
// invalid selection.
//====================================================

#include <iostream>
using namespace std;

enum Roster { TOM = 1, SHARON, BILL, TERESA, JOHN };

//====start of main()=================================
//
//====================================================
int main()
{
	int answer = 0;

	cout << "This program will give you a student's birthday.\n\n";
	cout << "1.) = Tom\n";
	cout << "2.) = Sharon\n";
	cout << "3.) = Bill\n";
	cout << "4.) = Teresa\n";
	cout << "5.) = John\n\n";
	cout << "Whose birthday do you want to know?   ";
	cin >> answer;

	switch (answer)
	{
		case 1:
			cout << "\nTom's birthday is January 3.\n";
			break;
		case 2:
			cout << "\nSharon's birthday is April 22.\n";
			break;
		case 3:
			cout << "\nBill's birthday is May 19.\n";
			break;
		case 4:
			cout << "\nTeresa's birthday is July 2.\n";
			break;
		case 5:
			cout << "\nJohn's birthday is June 17.\n";
			break;
		default:
			cout << "\nInvalid selection.\n";
	}

	return 0;
}
//====end of main()===================================
//
//====================================================