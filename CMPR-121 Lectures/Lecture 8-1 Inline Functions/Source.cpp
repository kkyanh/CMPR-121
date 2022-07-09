#include <iostream>
#include <string>
using namespace std;

//when declared inline, the compiler doesnt create a real function
//copies the inline function code directly to the calling function
inline void showQuote();

int main()
{
	int count = 0;

	while (count < 50)
	{
		showQuote();
		count++;
	}

	return 0;
}

void showQuote()
{
	cout << "balls\n";
}