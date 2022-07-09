#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>					//Step #1 - Include the fstream directory
using namespace std;

int main()
{
	/*
	int number = 3;
	ofstream outFile;				//Step #2 - Declare an object for output

	outFile.open("numbers.txt");	//Step #3 - Open the file

	outFile << number << endl;		//Step #4 - Write to the file

	outFile.close();				//Step #5 - Close the file

	cout << "The numbers have been written to the file.\n\n";
	*/

	/*
	int number = 0;
	ifstream inFile;				//Step #2 - Declare an object for input
	
	inFile.open("numbers.txt");		//Step #3 - Open the file

	inFile >> number;				//Step #4 - Read the file

	inFile.close();					//Step #5 - Close the file

	cout << "Here is the number in the file: " << number << "\n\n";
	*/
	int number = -1;
	//ifstream file;							//Step #2 - Declare an object for input
	fstream file("D:\\Coding\\Projects\\CMPR-121 Lectures\\Lecture 6-2 Advanced File Operations\\numbers.txt", ios::out | ios::app); 
	//Step #2 & 3

	if (file.fail())
	{
		cout << "Error! File did not open...Now closing program\n\n";
		exit(EXIT_FAILURE);					//exit(1);
	}

	file << number << endl;

	/*
	cout << "Here are the numbers in the file:\n";

	while (!file.eof())		//while it's not the end of the file, read a number
	{
		file >> number;						//Step #4 - Read the file
		cout << number << endl;
	}
	*/

	file.close();							//Step #5 - Close the file

	return 0;
}