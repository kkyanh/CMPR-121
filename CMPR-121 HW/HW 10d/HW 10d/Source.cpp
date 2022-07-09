//====================================================
//Attached: HW 10a, 10b, 10c, 10d
//====================================================
//HW 10d
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program checks to see if a word
// is a palindrome or not using a linked list of chars
// from the list header file.  The program also displays
// whether or not the word is a palindrome or not.
//====================================================

#include <iostream>
#include <list>
#include <string>
using namespace std;

//====start of main()=================================
//
//====================================================
int main()
{
	list<char> characters;
	string word;
	bool diff = false;

	cout << "Enter a word: ";
	getline(cin, word);

	for (int i = 0; word[i] != '\0'; i++)
		characters.push_back(word[i]);

	list<char>::iterator iter = characters.begin();
	list<char>::reverse_iterator rit = characters.rbegin();

	while (iter != characters.end())
	{
		if (*iter != *rit)
			diff = true;

		iter++;
		rit++;
	}
	if (diff)
		cout << word << " is not a palindrome.\n\n";
	else
		cout << word << " is a palindrome.\n\n";

	return 0;
}
//====end of main()===================================
//
//====================================================