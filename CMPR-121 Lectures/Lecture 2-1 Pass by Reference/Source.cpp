#include <iostream>
using namespace std;

void getNumbers(int& val1, int& val2);
void showNumbers(int num1, int num2);

int main()
{
	int num1 = 0;             // 3
	int num2 = 0;             // 4
	//pass the memory addresses of num1 and num2 (pass by reference)
	//getNumbers(5000, 5004); 5000 and 5004 are the memory addresses
	getNumbers(num1, num2);

	return 0;
}
//------------------------------------
//Formal parameters becomes variables when the function is called
//getNumbers(    5000,     5004)
void getNumbers(int& val1, int& val2)
{
	cout << "Enter the first number: ";
	cin >> val1;            // 3
	cout << "Enter the second number: ";
	cin >> val2;            // 4
}
//------------------------------------
//showNumbers(       3,        4)
void showNumbers(int num1, int num2)
{
	cout << "The numbers are " << num1 << " and " << num2 << ".\n\n";
}
/*
address in ram of these variables
only needs the memory address of the first byte, will know the rest based off data type

5000 00000000  int num1 = 0;
5001 00000000
5002 00000000
5003 00000000
5004 00000000  int num2 = 0;
5005 00000000
5006 00000000
5007 00000000
*/