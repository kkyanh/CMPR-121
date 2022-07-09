//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	char first[20] = "Tom";
//	char last[20];
//	char fullName[40];
//
//	//last = "Lee"; error cuz assignment not possible after first instance of c-string
//	cout << "Enter your last name: ";
//	cin.getline(last, 20);               //getline(cin, last); error
//
//	//fullName = first + " " + last; error cuz c-string and concat doesnt work with them, only for strings
//	strcpy_s(fullName, first); //fullName = "Tom"
//	strcat_s(fullName, " "); //fullName = "Tom "
//	strcat_s(fullName, last); //fullName = "Tom Lee"
//	//use strcpy_s first bc that func deletes what was in there, then strcat_s to concat
//	cout << "Hi " << fullName << endl;
//
//	//------------------------------------
//
//	string first = "Tom";
//	string last;
//	string fullName;
//
//	cout << "Enter your last name: ";
//	getline(cin, last);
//
//	fullName = first + " " + last;
//
//	cout << "Hi " << fullName << endl;
//}