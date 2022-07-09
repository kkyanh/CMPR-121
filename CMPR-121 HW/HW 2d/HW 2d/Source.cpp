#include <iostream>
using namespace std;

void getInput(int&);
int sequentialSearch(int[], int, int);
void displayID(int);

int main()
{
	const int SIZE = 5;
	int idNumbers[SIZE] = { 12345,54321,11223,33211,44411 };
	int id = 0;
	int position = 0;

	getInput(id);
	position = sequentialSearch(idNumbers, SIZE, id);
	displayID(position);

	return 0;
}

void getInput(int& id)
{
	cout << "Enter an ID number to be searched: ";
	cin >> id;
}

int sequentialSearch(int idNumbers[], int size, int id)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (idNumbers[index] == id)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

void displayID(int position)
{
	if (position == -1)
		cout << "The ID number you entered was not found in the list";
	else
		cout << "The ID number you entered was found in the list at position " << position;
}