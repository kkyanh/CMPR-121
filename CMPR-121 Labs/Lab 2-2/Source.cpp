//====================================================
//Attached: Lab 2a, 2b
//====================================================
//Lab 2b
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program gets the first name, last
// name, and state from the user.  It then uses c-string
// functions to concatenate the first and last names
// together to create the full name, as well as use 
// the length function to get the length of the first 
// and last names.  In addition, it uses the compare
// function to compare the first and last name to check
// if the names are the same or not.
//====================================================

#include <iostream>
#include <cstring>
using namespace std;

void getInfo(char*, char*, char*, char*);
void displayInfo(char*, char*, char*, char*);

//====start of main()=================================
//
//====================================================
int main()
{
	char firstName[20] = " ";
	char lastName[20] = " ";
	char fullName[40] = " ";
	char state[30] = " ";
	
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
// input data for the variables and uses the strcpy and
// strcat c-string functions to assign to fullName.
// 
// Input:
//		firstName: a pointer to the firstName c-string
//		in main.  Represents the user's first name.
// 
//		lastName: a pointer to the lastName c-string
//		in main.  Represents the user's last name.
// 
//		fullName: a pointer to the fullName c-string in
//		main.  Represents the user's full name.
// 
//		state: a pointer to the state c-string in main.
//		Represents the user's state.
// 
// Output:
//		None
//====================================================
void getInfo(char* firstName, char* lastName, char* fullName, char* state)
{
	cout << "Enter your first name: ";
	cin.getline(firstName, 20);
	cout << "Enter your last name: ";
	cin.getline(lastName, 20);
	strcpy(fullName, firstName);
	strcat(fullName, " ");
	strcat(fullName, lastName);
	cout << "Enter the state you live in: ";
	cin.getline(state, 30);
}
//====end of getInfo()================================
//
//====================================================



//====start of displayInfo()==========================
//This void-returning function displays the data that
// the user inputted in the previous function.  It also
// shows that length of the user's first and last name,
// as well as compares them to see if the user's first
// and last names are the same.
// 
// Input:
//		firstName: a pointer to the firstName c-string
//		in main.  Represents the user's first name.
// 
//		lastName: a pointer to the lastName c-string
//		in main.  Represents the user's last name.
// 
//		fullName: a pointer to the fullName c-string in
//		main.  Represents the user's full name.
// 
//		state: a pointer to the state c-string in main.
//		Represents the user's state.
// 
// Output:
//		None
//====================================================
void displayInfo(char* firstName, char* lastName, char* fullName, char* state)
{
	cout << "\nHi " << fullName << ".  So your live in " << state << ".\n";
	cout << "Your first name has " << strlen(firstName) << " characters,\n";
	cout << "and your last name has " << strlen(lastName) << " characters.\n\n";

	if (strcmp(firstName, lastName) == 0)
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