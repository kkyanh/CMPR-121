//====================================================
//Attached: HW 6a, 6b, 6c, 6d, 6e
//====================================================
//HW 6a, 6b, 6c
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program opens a file named "data.txt"
// and reads the numbers that are in the text file.
// It then outputs the numbers and writes them to
// another file named "results.txt."  Afterwards, the
// program closes both files, and reopens the "results.txt"
// file to display the numbers in it.  After closing
// it again, the program opens it to append 3 more
// numbers to it, entered by the user.  Once the data
// has been appended, the program closes the file.
//====================================================
#include <iostream>
#include <fstream>
using namespace std;



//====start of main()=================================
//
//====================================================
int main()
{
	//Variables
	const int SIZE = 3;
	int numbers = 0;
	int outputNums[SIZE] = {};
	fstream numbersFile("data.txt", ios::in);
	fstream outputFile("results.txt", ios::out);

	//Check if the numbersFile fails to open
	if (numbersFile.fail())
		cout << "Error opening file!";
	else
	{
		//Else display file contents and write to outputFile
		while (numbersFile >> numbers)
		{
			cout << numbers << endl;
			outputFile << numbers << endl;
		}
		cout << "\nThe data has been written to the file.\n\n";
	}
	//Close files
	numbersFile.close();
	outputFile.close();

	//Open the results.txt file in input mode
	outputFile.open("results.txt", ios::in);

	//Display the results.txt file's contents
	cout << "Here are the numbers in the file:\n";
	while (outputFile >> numbers)
		cout << numbers << endl;

	//Close file
	outputFile.close();
	
	//Open results.txt file in output mode and append
	outputFile.open("results.txt", ios::out | ios::app);

	//Save 3 additional numbers to results.txt file
	cout << "Enter 3 more numbers:\n";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> outputNums[i];
		outputFile << outputNums[i] << endl;
	}
	cout << "The numbers have been written (appended) to results.txt.\n";

	//Close file
	outputFile.close();
	
	return 0;
}
//====end of main()===================================
//
//====================================================