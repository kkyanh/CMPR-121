#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int ROWS = 5;
const int COLS = 3;

void displayGrades(char[][COLS]);
void calculateGPAs(char[][COLS], double[]);
void displayStudentGPAs(double[]);
void calculateAverageGPA(char[][COLS], double[]);
void displayAverageGPA(double[]);

int main()
{
	ifstream inputFile;
	char studentGrades[ROWS][COLS];
	char grades = ' ';
	double studentGPAs[ROWS] = { 0.0,0.0,0.0,0.0,0.0 };
	double averageGPA[COLS] = { 0.0,0.0,0.0 };

	inputFile.open("grades.txt");

	if (inputFile.fail())
	{
		cout << "File failed to open.";
		inputFile.close();
	}
	else
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				inputFile >> studentGrades[i][j];
			}
		}
	}
	inputFile.close();
	
	displayGrades(studentGrades);
	calculateGPAs(studentGrades, studentGPAs);
	displayStudentGPAs(studentGPAs);
	calculateAverageGPA(studentGrades, averageGPA);
	displayAverageGPA(averageGPA);

	return 0;
}

void displayGrades(char studentGrades[][COLS])
{
	cout << "All Grades:\n" << "Student\t" << "English\t" << "History\t" << "Math\t\n";
	for (int i = 0; i < ROWS; i++)
	{
		cout << "#" << i + 1;
		for (int j = 0; j < COLS; j++)
			cout << "\t" << studentGrades[i][j];
		cout << endl;
	}
}

void calculateGPAs(char studentGrades[][COLS], double studentGPAs[])
{
	double gpa = 0.0;

	for (int i = 0; i < ROWS; i++)
	{
		gpa = 0.0;
		for (int j = 0; j < COLS; j++)
		{
			switch (studentGrades[i][j])
			{
				case 'A':
					gpa += 4;
					break;
				case 'B':
					gpa += 3;
					break;
				case 'C':
					gpa += 2;
					break;
				case 'D':
					gpa += 1;
					break;
				case 'F':
					gpa += 0;
					break;
			}
		}
		studentGPAs[i] = gpa / 3;
	}
}

void displayStudentGPAs(double studentGPAs[])
{
	cout << fixed << showpoint << setprecision(2);

	cout << "\nStudent GPAs\n" << "Student\n";
	for (int i = 0; i < ROWS; i++)
	{
		cout << "#" << i + 1 << setw(10) << studentGPAs[i] << endl;
	}
}

void calculateAverageGPA(char studentGrades[][COLS], double averageGPA[])
{
	double gpa = 0.0;

	for (int j = 0; j < COLS; j++)
	{
		gpa = 0.0;
		for (int i = 0; i < ROWS; i++)
		{
			switch (studentGrades[i][j])
			{
			case 'A':
				gpa += 4;
				break;
			case 'B':
				gpa += 3;
				break;
			case 'C':
				gpa += 2;
				break;
			case 'D':
				gpa += 1;
				break;
			case 'F':
				gpa += 0;
				break;
			}
		}
		averageGPA[j] = gpa / 5;
	}
}

void displayAverageGPA(double averageGPA[])
{
	cout << fixed << showpoint << setprecision(2);

	cout << "\nAverage GPA by Subject\n";
	cout << "English\tHistory\tMath\n";
	for (int i = 0; i < COLS; i++)
		cout << averageGPA[i] << "\t";
}