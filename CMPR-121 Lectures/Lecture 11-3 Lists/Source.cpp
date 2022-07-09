#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> numbers{ 1,2,3,4,5 };

	cout << "Size: " << numbers.size() << endl;
	
	numbers.push_back(6);
	numbers.push_front(0);

	cout << "Size: " << numbers.size() << endl;
	cout << "Front: " << numbers.front() << endl
		<< "Back: " << numbers.back() << endl;

	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
		cout << *it << endl;

	for (auto it : numbers)
		cout << it << endl;

	return 0;
}