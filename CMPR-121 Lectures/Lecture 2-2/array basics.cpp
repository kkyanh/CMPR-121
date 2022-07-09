//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	const int SIZE = 5;
//	int numbers[SIZE] = { 1,2,3,4,5 };
//	char name[SIZE] = "Tom";
//
//	cout << name << endl << endl;
//	//character arrays output the "string" instead of the memory address when typed like this
//
//	cout << numbers << endl << endl;
//
//	return 0;
//}
/*
char name[SIZE] = "Tom";

6000 01010100 (84 = 'T') name[0]
6001 10101010 ('o')      name[1]
6002 10101010 ('m')      name[2]
6003 00000000 ('\0')     name[3]
6004 00000000 ('\0')     name[4]

int numbers[SIZE] = {1,2,3,4,5};

5000 00000001 numbers[0]  The base address is the memory address of the first byte of the array
5001 00000000
5002 00000000
5003 00000000

5004 00000010 numbers[1]  
5005 00000000
5006 00000000
5007 00000000

5008 00000011 numbers[2]
5009 00000000
5010 00000000
5011 00000000

5012 00000100 numbers[3]
5013 00000000
5014 00000000
5015 00000000

5016 00000101 numbers[4]
5017 00000000
5018 00000000
5019 00000000
*/