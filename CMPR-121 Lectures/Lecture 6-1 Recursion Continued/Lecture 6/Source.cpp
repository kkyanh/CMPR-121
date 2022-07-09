#include <iostream>
#include <ctime>
using namespace std;

long long fib(int n);

int main()
{
	int n = 20;
	clock_t start;
	clock_t end;

	start = clock();
	cout << "Fib(" << n << ") = " << fib(n) << endl; //Fib(20) =
	end = clock();

	cout << "Time: " << (end - start) / CLK_TCK << " seconds\n\n";

	return 0;
}
//----------------------
long long fib(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}