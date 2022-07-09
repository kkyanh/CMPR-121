#include "Stack.h"

int divide(int, int);

int main()
{
	int num = 0;
	int denom = 0;

	cout << "Enter the numerator: ";
	cin >> num;
	cout << "Enter the denominator: ";
	cin >> denom;

	try
	{
		cout << num << " / " << denom << " = " << divide(num, denom) << ".\n\n";
	}
	catch (int errorNum)
	{
		cout << "Error #2 - Cannot divide by zero.\n\n";
	}
	catch (string& message)
	{
		cout << message;
	}

	return 0;
}

int divide(int num, int denom)
{
	if (denom == 0)
	{
		throw 2;
	}
	else if (num > 1000000)
	{
		string message = "Error: Numerator is too large.\n\n";   //string literal
		throw message;
	}
	return num / denom;
}