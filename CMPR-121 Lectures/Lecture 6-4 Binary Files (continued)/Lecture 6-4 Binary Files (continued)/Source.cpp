#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int numbers[5] = { 1,2,3,4,5 };
	int readNums[5] = { 0 };

	fstream file("numbers.bin", ios::binary | ios::out);

	file.write(reinterpret_cast<char*>(numbers), sizeof(numbers));

	file.close();

	fstream file2("numbers.bin", ios::binary | ios::in);

	file2.read(reinterpret_cast<char*>(readNums), sizeof(readNums));

	file2.close();

	cout << "Here are the values from the array.\n";
	for (int i = 0; i < 5; i++)
	{
		cout << readNums[i] << endl;
	}

	return 0;
}