#include "Stack.h"

int main()
{
	float value = 0;
	int number = 0;
	Stack<int> intStack;
	Stack<float> floatStack;
	Stack<string> stringStack;

	while (!floatStack.isFull())
	{
		cout << "Enter a number: ";
		cin >> value;
		floatStack.push(value);
	}
	cout << "Stack is full...Now popping.\n\n";

	while (!floatStack.isEmpty())
	{
		floatStack.pop(value);
		cout << value << endl;
	}
	cout << "\nStack is empty.\n\n";

	return 0;
}



/*
LIFO - Last In, First Out



5019 00000000
5018 00000000
5017 00000000
5016 00000111 [4]   00000000000000000000000000000111 (7)
5015 00000000
5014 00000000
5013 00000000
5012 00000110 [3]   00000000000000000000000000000110 (6)
5011 00000000
5010 00000000
5009 00000000
5008 00000101 [2]   00000000000000000000000000000101 (5)
5007 00000000
5006 00000000
5005 00000000
5004 00000100 [1]   00000000000000000000000000000100 (4)
5003 00000000
5002 00000000
5001 00000000
5000 00000011 [0]   00000000000000000000000000000011 (3)
*/