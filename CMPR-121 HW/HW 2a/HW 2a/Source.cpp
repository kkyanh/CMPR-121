#include <iostream>
#include <iomanip>
using namespace std;

void getScores(double [], int);
void showMenu();
char getChoice();
void displayResult(double[], int, char);

int main()
{
	const int SIZE = 5;
	double testScores[SIZE] = { 0.0,0.0,0.0,0.0,0.0 };
	char choice = ' ';

	getScores(testScores, SIZE);
	showMenu();
	choice = getChoice();
	displayResult(testScores, SIZE, choice);

	return 0;
}

void getScores(double testScores[], int size)
{
	cout << "Enter 5 test scores:\n";

	for (int count = 0; count < size; count++)
		cin >> testScores[count];
}

void showMenu()
{
	system("cls");

	cout << "A.) Calculate the average of the test scores.\n";
	cout << "B.) Display all test scores.\n";
}

char getChoice()
{
	char choice = ' ';

	cin >> choice;

	while (choice != 'a' && choice != 'A' && choice != 'b' && choice != 'B')
	{
		cout << "Please enter a valid option: ";
		cin >> choice;
	}

	return choice;
}

void displayResult(double testScores[], int size, char choice)
{
	system("cls");
	cout << fixed << showpoint << setprecision(2);

	double total = 0.0;

	if (choice == 'A' || choice == 'a')
	{
		for (int count = 0; count < size; count++)
			total += testScores[count];
		
		total /= size;

		cout << "The average is " << total << endl;
	}
	else
	{
		for (int count = 0; count < size; count++)
			cout << "Test Score #" << count + 1 << ": " << testScores[count] << endl;
	}
}