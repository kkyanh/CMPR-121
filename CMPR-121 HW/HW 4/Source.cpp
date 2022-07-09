//====================================================
//Attached: HW 4
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program gets the user to input
// data for a linked list of boxes.  Each node in the
// list is a struct Box object, with data members that
// represent the ID number, width, height, and length
// of a box.  The program then displays the linked list
// and asks the user to delete a box.  After this is
// done, a new list is displayed for the user and the
// user is prompted with an option to add more boxes.
//====================================================

#include <iostream>
#include <iomanip>
using namespace std;

struct Box
{
	int idNum;
	double width;
	double height;
	double length;
	Box* next;
};

bool insertBox(Box*&);
void displayBox(Box*&);
void deleteBox(Box*&);

//====start of main()=================================
//
//====================================================
int main()
{
	char answer = 'Y';
	Box* head = nullptr;

	do
	{
		system("cls");

		cout << "Enter the specifications of different types of boxes.\n"
			<< "Include the number of boxes present in inventory.\n"
			<< "Enter boxes - (-1 to quit):\n";
		bool doAgain = true;

		do
		{
			doAgain = insertBox(head);
		} while (doAgain == true);

		cout << "\nWould you like to see the list of boxes (Y/N)?  ";
		cin >> answer;
		if (toupper(answer) == 'Y')
			displayBox(head);
		if (head != nullptr)
		{
			deleteBox(head);
			system("cls");
			displayBox(head);
		}

		cout << "\nDo you want to enter more boxes(Y/N)?  ";
		cin >> answer;
	} while (toupper(answer) == 'Y');

	return 0;
}
//====end of main()===================================
//
//====================================================



//====start of insertBox()============================
//This value-returning function of data type bool
// by default returns true, unless the user enters -1.
// It inserts a box node into the linked list as long
// as the user enters an ID number that is not -1.  Each
// node is made up of an ID number, width, height, and
// length for the box entered.
// 
// Input:
//		head: a Box struct pointer that is passed by
//		reference.  It is the head of the list.
// 
// Output:
//		None
//====================================================
bool insertBox(Box*& head)
{
	Box* temp = new Box;
	bool doAgain = true;
	int idNum = 0;

	cout << "\nID Number: ";
	cin >> idNum;

	if (idNum == -1)
		return false;
	else
	{
		temp->idNum = idNum;
		cout << "Width: ";
		cin >> temp->width;
		cout << "Height: ";
		cin >> temp->height;
		cout << "Length: ";
		cin >> temp->length;

		temp->next = head;
		head = temp;
	}
	return doAgain;
}
//====end of insertBox()==============================
//
//====================================================



//====start of displayBox()===========================
//This void-returning function displays the list of
// boxes.  If the list is empty, then the user is
// prompted by a message telling them that the list
// is empty.  Otherwise, the user is shown the list of 
// boxes they inputted in an organized manner.
// 
// Input:
//		head: a Box struct pointer that is passed by
//		reference.  It is the head of the list.
// 
// Output:
//		None
//====================================================
void displayBox(Box*& head)
{
	Box* temp = head;
	system("cls");
	cout << fixed << showpoint << setprecision(2);

	if (temp == nullptr)
	{
		cout << "The list of boxes is empty.\n";
	}
	else
	{
		cout << "Types of boxes:\n\n";
		cout << "ID#" << setw(11) << "Width" << setw(11) << "Height" << setw(11) << "Length\n"
			<< "-----------------------------------\n";
		while (temp != nullptr)
		{
			cout << temp->idNum << setw(11) << temp->width << setw(11) << temp->height << setw(10) << temp->length << endl;
			temp = temp->next;
		}
	}
}
//====end of displayBox()=============================
//
//====================================================



//====start of deleteBox()============================
//This void-returning function is used to delete a node
// from the linked list.  The user is prompted to enter
// the ID of the box that they want deleted, and the
// function goes through the linked list to delete it.
// If the list has one entry, then there are two possibilities.
// If the function finds that the ID number is found,
// then the ID is deleted.  Otherwise, the user is told
// that the ID is not in the list.  If the function
// reaches the end of the list, then there are also
// two possibilities.  If the function finds that the
// ID number is found, then the ID is deleted.  Otherwise,
// the user is told that the ID is not in the list.  
// And if both cases aren't true, then the ID is found 
// in the middle of the list and the same concepts
// from before apply.
// 
// Input:
//		head: a Box struct pointer that is passed by
//		reference.  It is the head of the list.
// 
// Output:
//		None
//====================================================
void deleteBox(Box*& head)
{
	Box* lead = head;
	Box* follow = head;
	int boxID = 0;

	cout << "Enter the ID of the box to be deleted: ";
	cin >> boxID;

	while (lead->idNum != boxID && lead->next != nullptr)
	{
		follow = lead;
		lead = lead->next;
	}

	if (lead == head)
	{
		if (lead->idNum == boxID)
		{
			head = head->next;
			delete lead;
		}
		else
		{
			cout << endl << boxID << " is not in the list.\n";
			system("pause");
		}
			
	}
	else if (lead->next == nullptr)
	{
		if (lead->idNum == boxID)
		{
			follow->next = lead->next;
			delete lead;
		}
		else
		{
			cout << endl << boxID << " is not in the list.\n";
			system("pause");
		}
	}
	else
	{
		follow->next = lead->next;
		delete lead;
	}
}
//====end of deleteBox()==============================
//
//====================================================