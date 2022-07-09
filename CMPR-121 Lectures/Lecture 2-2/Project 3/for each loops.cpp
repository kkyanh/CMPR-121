#include <iostream>
#include <string>
using namespace std;

int main()
{
	float testScores[5] = { 92.5,77.0,88.0,93.5,81.0 };

	for (auto &score : testScores)
		cout << score << '\t';

	return 0;
}