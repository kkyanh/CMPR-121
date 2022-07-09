//====================================================
//Attached: HW 5d, 5e, 5f
//====================================================
//HW 5e
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program calls a recursive function
// that displays on the screen all odd numbers from
// the range 20 to 0.
//====================================================

#include <iostream>
using namespace std;

void showOdds(int);

//====start of main()=================================
//
//====================================================
int main()
{
	int number = 19;

	cout << "Here are all odd numbers from 20 to 0:\n\n";
	showOdds(number);

	return 0;
}
//====end of main()===================================
//
//====================================================



//====start of showOdds()=============================
//This void-returning function displays to the screen
// the numbers from the range 20 to 0.  It is a
// recursive function that calls itself until the if
// statement is true.
// 
// Input:
//		number: an int variable that is passed by value.
//		It represents the first number that is displayed
//		and the subsequent numbers in the recursive cases.
// 
// Output:
//		None
//====================================================
void showOdds(int number)
{
	if (number < 1)
		return;
	cout << number << "\t";
	showOdds(number - 2);
}
//====end of showOdds()===============================
//
//====================================================