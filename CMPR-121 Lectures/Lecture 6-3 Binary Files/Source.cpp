#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	/*
	string city;
	ifstream file;

	file.open("Cities.txt");

	cout << "Here are the cities in the file:\n";

	while (!file.eof())
	{
		getline(file, city, ',');
		cout << city << endl;
	}

	file.close();
	*/
	char character = '\0';
	ifstream file;
	int count = 0;

	file.open("Message.txt");

	while (character != '\n')
	{
		if (tolower(character) == 'e')
			count++;
		file.get(character);
	}
	cout << "There are " << count << " e's in the message.\n\n";

	file.close();

	return 0;
}
//--------------
/*
CSV File (Comma Separated Values File)

Santa Ana,Venice,Paris
*/