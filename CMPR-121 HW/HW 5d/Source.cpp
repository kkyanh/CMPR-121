//====================================================
//Attached: HW 5d, 5e, 5f
//====================================================
//HW 5d
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program calls a recursive function
// that displays on the screen all even numbers from
// the range 1-20.
//====================================================

#include <iostream>
using namespace std;

void showEvens(int);

//====start of main()=================================
//
//====================================================
int main()
{
	int number = 2;

	cout << "Here are all even numbers from 1 to 20:\n\n";
	showEvens(number);

	return 0;
}
//====end of main()===================================
//
//====================================================



//====start of showEvens()============================
//This void-returning function displays to the screen
// the numbers from the range 1 to 20.  It is a
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
void showEvens(int number)
{
	if (number > 20)
		return;
	cout << number << "\t";
	showEvens(number + 2);
}
//====end of showEvens()==============================
//
//====================================================