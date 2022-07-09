#include <iostream>
using namespace std;

// #1 Function prototypes before main()
int getLuckyNum();
void showNumber(int luckyNum); // Formal parameter in a function prototype never becomes a variable

int main()
{
	int luckyNum = 0;

	// #2 Function calls in main()
	luckyNum = getLuckyNum();
	showNumber(luckyNum); // pass by value

	return 0;
}
//-------------------------------------
// #3 Function definitions after main()
int getLuckyNum()
{
	int number = 0; 
	// number is a local variable, which means it has local scope to this function

	cout << "What's your lucky number? ";
	cin >> number;

	return number;
}
//-------------------------------------
void showNumber(int luckyNum) // Formal parameter becomes a variable when the function is called
{
	cout << "So your lucky number is " << luckyNum << ".\n\n";
	// luckyNum here is not the same variable as luckyNum in the main function
}