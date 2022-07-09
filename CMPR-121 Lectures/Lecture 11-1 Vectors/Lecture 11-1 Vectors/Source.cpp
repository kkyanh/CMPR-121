#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> numbers{ 1,2,3,4,5 };

	for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
		cout << *it << endl;

	return 0;
}

/*
	vector<int> numbers{ 1,2,3,4,5 };

	if (numbers.empty())
		cout << "The vector is empty.\n\n";
	else
		cout << "The vector is not empty.\n\n";

	numbers.clear();

	if (numbers.empty())
		cout << "The vector is empty.\n\n";
	else
		cout << "The vector is not empty.\n\n";
*/

//cout << "The maximum number of integers that could in the vector is " << numbers.max_size() << endl;

/*
vector<int> numbers{1};

numbers.push_back(2);
numbers.push_back(3);
numbers.push_back(4);
numbers.push_back(5);

numbers.insert(0);

Big O Notation expresses the worst case scenario
It is used to compare algorithms

push_back() = O(1) Constant Time - Not related to the number of values in the array
insert()    = O(n) As n grows, the time grows


00000001 [0]
00000000
00000000
00000000
00000010 [1]
00000000
00000000
00000000
00000011 [2]
00000000
00000000
00000000
00000100 [3]
00000000
00000000
00000000
00000101 [4]
00000000
00000000
00000000

*/

/*
	vector<int> numbers{ 1,2,3,4,5 };
	
	cout << "Size: " << numbers.size() << endl
		<< "Capacity: " << numbers.capacity() << endl << endl;

	numbers.resize(3);

	cout << "Size: " << numbers.size() << endl
		<< "Capacity: " << numbers.capacity() << endl << endl;

	numbers.shrink_to_fit();

	cout << "Size: " << numbers.size() << endl
		<< "Capacity: " << numbers.capacity() << endl << endl;
*/

/*
	vector<int> numbers{ 1,2,3,4,5 };  //size 5 initialized with {}
	vector<int> values(5, 3);          //size 5 initialized with 3
	vector<int> amounts(10);           //size 10 initialized with 0

	for (int i = 0; i < numbers.size(); i++)
		cout << numbers[i] << endl;
*/

/*
 Size grows linearly while capacity grows o^n(i think)
 
vector<int> numbers;

	numbers.push_back(3);

	cout << "Size: " << numbers.size() << endl
		<< "Capacity: " << numbers.capacity() << endl << endl;

	numbers.push_back(4);

	cout << "Size: " << numbers.size() << endl
		<< "Capacity: " << numbers.capacity() << endl << endl;

	numbers.push_back(5);

	cout << "Size: " << numbers.size() << endl
		<< "Capacity: " << numbers.capacity() << endl << endl;

	numbers.push_back(6);

	cout << "Size: " << numbers.size() << endl
		<< "Capacity: " << numbers.capacity() << endl << endl;

	numbers.push_back(7);

	cout << "Size: " << numbers.size() << endl
		<< "Capacity: " << numbers.capacity() << endl << endl;

	numbers.push_back(8);

	cout << "Size: " << numbers.size() << endl
		<< "Capacity: " << numbers.capacity() << endl << endl;

	numbers.push_back(9);

	cout << "Size: " << numbers.size() << endl
		<< "Capacity: " << numbers.capacity() << endl << endl;

	numbers.push_back(10);

	cout << "Size: " << numbers.size() << endl
		<< "Capacity: " << numbers.capacity() << endl << endl;

	numbers.push_back(11);

	cout << "Size: " << numbers.size() << endl
		<< "Capacity: " << numbers.capacity() << endl << endl;

	numbers.push_back(12);

	cout << "Size: " << numbers.size() << endl
		<< "Capacity: " << numbers.capacity() << endl << endl;


*/