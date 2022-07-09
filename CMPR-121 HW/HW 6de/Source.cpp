//====================================================
//Attached: HW 6a, 6b, 6c, 6d, 6e
//====================================================
//HW 6d, 6e
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program gets the user to input
// 3 records of cats.  These are stored in a struct that
// contains a name (c-string) and age (int).  Afterwards,
// these are put into a binary file named "critters.bin."
// It then closes a file and reopens it for both input
// and output, as well as appends the new data that
// the user inputs.  Once the user enters one more cat's
// data, the program appends the data to the binary
// file.  Afterwards, the program goes to the beginning
// of the file and displays all the data in a formatted
// manner to the screen.  It then closes the file.
//====================================================

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//====start of Cat()==================================
//This struct contains data that can hold a c-string,
// name, with a size of 50, and an int, age.  The c-string
// represents the name of the cat and the int represents
// the age of the cat.
//====================================================
struct Cat
{
	char name[50];
	int age;
};
//====end of Cat()====================================
//
//====================================================



//====start of main()=================================
//
//====================================================
int main()
{
	//Variables
	Cat catInfo;
	fstream catData("critters.bin", ios::out | ios::binary);
	int index = 0;

	cout << "Enter 3 cat records.\n";

	//Saves the information of 3 cats
	while (index < 3)
	{
		//Get cat name and age
		cout << "Enter information about a cat:\n";
		cout << "NAME: ";
		cin.getline(catInfo.name, 50);
		cout << "AGE: ";
		cin >> catInfo.age;
		cin.ignore();

		//Save cat info to file
		catData.write(reinterpret_cast<char*>(&catInfo), sizeof(Cat));

		index++;
	}
	//Tell user the record has been written to the file
	cout << "Record written to file.\n\n";

	//Close file
	catData.close();

	//Open file in input and output modes, binary, and append
	catData.open("critters.bin", ios::in | ios::out | ios::binary | ios::app);

	//Get cat info for one more cat
	cout << "Enter one more cat\n";
	cout << "NAME: ";
	cin.getline(catInfo.name, 50);
	cout << "AGE: ";
	cin >> catInfo.age;

	//Save cat info to file
	catData.write(reinterpret_cast<char*>(&catInfo), sizeof(Cat));

	cout << "\nHere is a list of all cats:\n";
	catData.seekg(0, ios::beg);

	//Reset index and display all cats info
	index = 0;
	while (index < 4)
	{
		catData.read(reinterpret_cast<char*>(&catInfo), sizeof(Cat));
		cout << setw(10) << left << catInfo.name;
		cout << setw(10) << left << catInfo.age << endl;
		index++;
	}

	//Close file
	catData.close();

	return 0;
}
//====end of main()===================================
//
//====================================================