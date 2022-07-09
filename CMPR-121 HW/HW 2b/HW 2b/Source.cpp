#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void getData(int[][COLS]);
void displayArray(int[][COLS]);

int main()
{
	int numArray[ROWS][COLS] = { {0,0,0,0},{0,0,0,0},{0,0,0,0} };

	getData(numArray);
	displayArray(numArray);

	return 0;
}

void getData(int numArray[][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << "Enter a number: ";
			cin >> numArray[i][j];
		}
	}
}

void displayArray(int numArray[][COLS])
{
	system("cls");

	cout << "Here is the data in the 2-Dimensional Array: ";

	for (int i = 0; i < ROWS; i++)
	{
		cout << endl;
		for (int j = 0; j < COLS; j++)
		{
			cout << setw(6) << right << numArray[i][j];
		}
	}
}