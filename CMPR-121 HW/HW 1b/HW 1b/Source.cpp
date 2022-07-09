//===============================================
//Attached: HW 1a, 1b
//===============================================
//HW 1b
//===============================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
//
//Description: This program gets the temperatures
// of three cities and displays the average
// temperature to the user.
//===============================================
#include <iostream>
#include <iomanip>
using namespace std;
void getTemps(double&, double&, double&);
double calcAvg(double, double, double);
void displayAvg(double);
//====start of main()============================
//
//===============================================
int main()
{
	double city1 = 0.0;
	double city2 = 0.0;
	double city3 = 0.0;
	double avgTemp = 0.0;
	getTemps(city1, city2, city3);
	avgTemp = calcAvg(city1, city2, city3);
	displayAvg(avgTemp);
	return 0;
}
//====end of main()==============================
//
//===============================================
//====start of getTemps()========================
//This void-returning function gets the 
// temperatures of three cities from the user 
// and passes the values back to main via pass 
// by reference.
// 
// Input:
// city1: A double value that is passed by
// reference.  Represents the temperature
// of the first city.
// 
// city2: A double value that is passed by
// reference.  Represents the temperature
// of the second city.
// 
// city3: A double value that is passed by
// reference.  Represents the temperature
// of the third city.
// Output:
// None
//===============================================
void getTemps(double& city1, double& city2, double& city3)
{
	cout << "Enter temperatures of 3 cities." << endl;
	cout << "#1:\t";
	cin >> city1;
	cout << "#2:\t";
	cin >> city2;
	cout << "#3:\t";
	cin >> city3;
}
//====end of getTemps()==========================
//
//===============================================
//====start of calcAvg()=========================
//This value-returning function of the double
// data type calculates the average temperature
// of the three cities' temperature from main and
// passes by value.
// 
// Input:
// city1: A double value that is passed by
// value.  Represents the temperature
// of the first city.
// 
// city2: A double value that is passed by
// value.  Represents the temperature
// of the second city.
// 
// city3: A double value that is passed by
// value.  Represents the temperature
// of the third city.
// 
// Output:
// A double value that represents the
// average temperature of the three cities.
//===============================================
double calcAvg(double city1, double city2, double city3)
{
	return (city1 + city2 + city3) / 3;
}
//====end of calcAvg()===========================
//
//===============================================
//====start of displayAvg()======================
//This void-returning function displays the
// average temperature of the three cities from
// main via pass by value.
// 
// Input: 
// avgTemp: A double value that is passed by
// value.  Represents the average temperature
// of the three cities.
// 
// Output:
// None
//===============================================
void displayAvg(double avgTemp)
{
	cout << fixed << showpoint << setprecision(1);
	cout << "\nThe average temperature is " << avgTemp << " degrees." << endl;
}
//====end of displayAvg()========================
//
//===============================================