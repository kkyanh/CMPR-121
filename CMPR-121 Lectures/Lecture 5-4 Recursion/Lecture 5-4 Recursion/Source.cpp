#include <iostream>
using namespace std;

void showNumbers(int number);

int main()
{
	int number = 0;

	showNumbers(number);

	return 0;
}

void showNumbers(int number)
{
	if (number == 6)
	{
		return;
	}
	cout << number << endl;
	showNumbers(number + 1);
	//cout << number << endl;	reverse order is put this after recursive call
}
/*
main stack frame:
return address
return value (0)
local variable (0 / number)
argument (0)	showNumbers(0)

showNumbers stack frame:
return address	showNumbers(0)
argument (0)
return address	showNumbers(1)
argument (1)
return address	showNumbers(2)
argument (2)
return address	showNumbers(3)
argument (3)
return address	showNumbers(4)
argument (4)
return address	showNumbers(5)
argument (5)
return address	showNumbers(6)
argument (6)
	then pops off 6, 5, 4, etc until it pops showNumbers off the stack
*/