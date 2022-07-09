#include <iostream>
#include <iomanip>
//using namespace std;

namespace first
{
	int number = 5;
}
namespace second
{
	float number = 77.78;
}

int main()
{
	int number = 3;

	std::cout << number << std::endl << std::setw(5) << number << std::endl;
	std::cin >> number;

	return 0;
}