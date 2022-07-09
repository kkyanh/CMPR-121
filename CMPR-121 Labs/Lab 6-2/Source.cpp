#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int SIZE = 10;
	int numbers[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	fstream file;

	file.open("numbers.bin", ios::out | ios::binary);
	cout << "Writing the data to the file.\n";
	file.write(reinterpret_cast<char*>(numbers), sizeof(numbers));
	file.close();

	file.open("numbers.bin", ios::in | ios::binary);
	cout << "Now reading the data back into memory.\n";
	file.read(reinterpret_cast<char*>(numbers), sizeof(numbers));

	for (int count = 0; count < 10; count++)
		cout << numbers[count] << " ";
	cout << endl;

	file.close();

	return 0;
}