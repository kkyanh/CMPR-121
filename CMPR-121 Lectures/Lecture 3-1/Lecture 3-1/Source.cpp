#include <iostream>
using namespace std;

int main()
{
	/*
	int numbers[5] = { 1,2,3,4,5 };          //compile-time memory allocation
	int* ptr = new int(77);   //dynamic memory allocation - memory is created on the heap
	*/
	cout << *ptr << endl;
	
	int numbers[5] = { 1,2,3,4,5 };
	int* ptr = numbers;

	for (int index = 0; index < 5; index++)
	{
		cout << *(ptr + index) << endl;
		/*   OR using pointer arithmetic
		cout << *ptr << endl;
		ptr++;
		*/
	}

	return 0;
}