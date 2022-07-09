//====================================================
//Attached: Lab 2a, 2b
//====================================================
//Lab 2a
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program gets the first name, last
// name, and city from the user.  It then uses string
// functions to concatenate the first and last names
// together to create the full name, as well as use 
// the length function to get the length of the first 
// and last names.  In addition, it uses the compare
// function to compare the first and last name to check
// if the names are the same or not.
//====================================================

#include <iostream>
#include <string>
using namespace std;

void getInfo(string&, string&, string&, string&);
void displayInfo(string&, string&, string&, string&);

//====start of main()=================================
//
//====================================================
int main()
{
	string firstName = " ";
	string lastName = " ";
	string fullName = " ";
	string state = " ";

	getInfo(firstName, lastName, fullName, state);
	displayInfo(firstName, lastName, fullName, state);

	return 0;
}
//====end of main()===================================
//
//====================================================



//====start of getInfo()==============================
//This void-returning function gets the firstName,
// lastName, fullName, and city variables from main
// via pass by reference.  It then prompts the user to
// input data for the variables and uses the + operator
// to concatenate a space and the last name to first
// name to assign to the fullName variable.
// 
// Input:
//		firstName: a string variable that is passed by
//		reference.  It represents the user's first name.
// 
//		lastName: a string variable that is passed by
//		reference.  It represents the user's last name.
// 
//		fullName: a string variable that is passed by
//		reference.  It represents the user's full name.
// 
//		state: a string variable that is passed by
//		reference.  It represents the user's state.
// 
// Output:
//		None
//====================================================
void getInfo(string& firstName, string& lastName, string& fullName, string& state)
{
	cout << "Enter your first name: ";
	getline(cin, firstName);
	cout << "Enter your last name: ";
	getline(cin, lastName);
	fullName = firstName + " " + lastName;
	cout << "Enter the state you live in: ";
	getline(cin, state);
}
//====end of getInfo()================================
//
//====================================================



//====start of displayinfo()==========================
//This void-returning function displays the data that
// the user inputted in the previous function.  It also
// shows that length of the user's first and last name,
// as well as compares them to see if the user's first
// and lats names are the same.
// 
// Input:
//		firstName: a string variable that is passed by
//		reference.  It represents the user's first name.
// 
//		lastName: a string variable that is passed by
//		reference.  It represents the user's last name.
// 
//		fullName: a string variable that is passed by
//		reference.  It represents the user's full name.
// 
//		state: a string variable that is passed by
//		reference.  It represents the user's state.
// 
// Output:
//		None
//====================================================
void displayInfo(string& firstName, string& lastName, string& fullName, string& state)
{
	cout << "\nHello " << fullName << ".  So you live in " << state << ".\n";
	cout << "Your first name has " << firstName.length() << " characters,\n";
	cout << "and your last name has " << lastName.length() << " characters.\n\n";
	
	if (firstName.compare(lastName) == 0)
	{
		cout << "Your first and last names are the same.\n";
		system("pause");
	}
	else
	{
		cout << "Your first and last names are different.\n";
		system("pause");
	}
}
//====end of displayInfo()============================
//
//====================================================