#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> numbers{ 1,2,3,4,5 };

	for (deque<int>::iterator iter = numbers.begin(); iter != numbers.end(); iter++)
		cout << *iter << endl;

	return 0;
}