//====================================================
//Attached: HW 11
//====================================================
//HW 11
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program shows how long it takes
// to run a program without threads that writes square
// roots and squares to a file.
//====================================================

#include <iostream>
#include <thread>
#include <fstream>
#include <cmath>
#include <ctime>

//Function Prototypes
void writeRoots();
void writeSquares();

//====start of main()=================================
//
//====================================================
int main()
{
	std::clock_t start = clock();
	std::clock_t end = clock();

	std::cout << "main: startup\n\n";

	std::cout << "Waiting for file thread\n\n";

	std::cout << "Writing 1,000,000 square roots to a file\n\n";
	writeRoots();
	std::cout << "The square roots are ready.\n\n";

	std::cout << "Squaring 1,000,000 numbers\n\n";
	writeSquares();
	std::cout << "The squares are ready.\n\n";

	end = clock();

	std::cout << "main: done\n\n";

	std::cout << "Runtime without threads = " << (end - start) / CLK_TCK << " seconds.\n\n";

	return 0;
}
//====end of main()===================================
//
//====================================================



//====start of writeRoots()===========================
//This void-returning function writes the square roots
// from 1 - 1,000,000 to a file that is passed to it
// by reference.
// 
// Input:
//		std::ofstream& roots
// 
// Output:
//		See below
//====================================================
void writeRoots()
{
	std::ofstream squareRoots("roots.txt");
	double root = 0.0;

	for (int i = 1; i < 1000001; i++)
	{
		root = sqrt(i);
		squareRoots << root;
	}

	squareRoots.close();
}
//====end of writeRoots()=============================
//
//====================================================



//====start of writeSquares()=========================
//This void-returning function writes the squares
// from 1 - 1,000,000 to a file that is passed to it
// by reference.
// 
// Input:
//		std::ofstream& squares
// 
// Output:
//		See below
//====================================================
void writeSquares()
{
	std::ofstream squares("squares.txt");

	for (int i = 1; i < 1000001; i++)
	{
		squares << i * i;
	}

	squares.close();
}
//====end of writeSquares()===========================
//
//====================================================
