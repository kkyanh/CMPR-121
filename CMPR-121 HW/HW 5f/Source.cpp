//====================================================
//Attached: HW 5d, 5e, 5f
//====================================================
//HW 5f
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program prompts the user to enter
// a statement, with a max of 20 characters.  This is
// stored in a c-string and is then passed to a function
// after a function call.  The function then counts
// the amount of vowels in the statement with recursion. 
// It then displays the total number of vowels to the
// screen. 
//====================================================

#include <iostream>
#include <cstring>
using namespace std;

int countVowels(char[], int);

//====start of main()=================================
//
//====================================================
int main()
{
	const int SIZE = 20;
	char statement[SIZE] = " ";

	cout << "Enter a statement:\n";
	cin.getline(statement, SIZE);

	cout << "\nThere are " << countVowels(statement, 0) << " vowels in the statement.\n";

	return 0;
}
//====end of main()===================================
//
//====================================================



//====start of countVowels()==========================
//This value-returning function of data type int takes
// a c-string and an integer in as parameters.  It then
// uses if and else statements to tell whether or not
// the current index of the c-string is a vowel or not.
// If it is a vowel, then it adds one to the count and
// calls itself to move on to the next index.  Otherwise,
// it just calls itself without adding one to the count.
// If the index is equal to null, then the function ends.
// 
// Input:
//		statement[]: a c-string that is passed by value.
//		It represents the user's statement they entered.
// 
//		index: an int value that is passed by value.
//		It represents the current index of the statement.
// 
// Output:
//		None
//====================================================
int countVowels(char statement[], int index)
{
	if (statement[index] == '\0')
	{
		return 0;
	}
	else if (toupper(statement[index]) == 'A' || toupper(statement[index]) == 'E' || toupper(statement[index]) == 'I'
		|| toupper(statement[index]) == 'O' || toupper(statement[index]) == 'U')
	{
		return 1 + countVowels(statement, index + 1);
	}
	else
	{
		return countVowels(statement, index + 1);
	}
}
//====end of countVowels()============================
//
//====================================================