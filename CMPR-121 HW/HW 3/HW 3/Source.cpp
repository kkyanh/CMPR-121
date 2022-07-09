//====================================================
//Attached: HW 3
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program gets the user to input
// a time in military format.  If the time is invalid,
// the user will be prompted to enter the time once
// again, until a valid time has been inputted.  Once
// a valid time has been inputted, one second will be
// added, and checks will occur to make sure that the
// hours, minutes, and seconds do not go past the max
// limit for those variables.  The program will then
// display the new time to the user and ask the user
// if they would like to do this process again.
//====================================================

#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_HOURS = 23;
const int MAX_MINS = 59;
const int MAX_SECS = 59;

void getTime(Time&);
bool isTimeValid(Time&);
void addOneSecond(Time&);
void displayTime(Time&);

//====start of struct Time============================
//This structure represents time, with the following
// members: hours, minutes, and seconds.  The members
// are all int variables and help represent time.
//====================================================
struct Time
{
	int hours;
	int minutes;
	int seconds;
};
//====end of struct Time==============================
//
//====================================================



//====start of main()=================================
//
//====================================================
int main()
{
	Time time;
	char answer = 'Y';

	do
	{
		getTime(time);
		addOneSecond(time);
		displayTime(time);
		cout << "Do it again? (Y / N): ";
		cin >> answer;
		system("cls");
	} while (toupper(answer) == 'Y');

	return 0;
}
//====end of main()===================================
//
//====================================================



//====start of getTime()==============================
//This void-returning function prompts the user to enter
// a time in military format.  It then checks to see if
// the time inputted is valid by passing the time struct
// variable to another function.  If false, this process
// will repeat until the time inputted is valid and return
// to main.
// 
// Input:
//		time: a structure variable that is passed by
//		reference.  Represents a time.
// 
// Output:
//		None
//====================================================
void getTime(Time& time)
{
	bool validInput = false;

	do
	{
		cout << "Enter the time in \"military time\", (24 hour format),\n";
		cout << "in the following order: HH:MM:SS, (Hours, Minutes, Seconds).\n";

		cout << "Hours: ";
		cin >> time.hours;
		cout << "Minutes: ";
		cin >> time.minutes;
		cout << "Seconds: ";
		cin >> time.seconds;

		validInput = isTimeValid(time);
		if (validInput == false)
			cout << "Invalid time\n\n";
	} while (validInput != true);
}
//====end of getTime()================================
//
//====================================================



//====start of isTimeValid()==========================
//This value-returning function of data type bool is
// used to confirm if the time inputted previously is
// valid.  If it is valid, then the function returns
// true.  Otherwise, the function returns false.
// 
// Input:
//		time: a structure variable that is passed by
//		reference.  Represents a time.
// 
// Output:
//		None
//====================================================
bool isTimeValid(Time& time)
{
	if ((time.hours >= 0 && time.hours <= MAX_HOURS) &&
		(time.minutes >= 0 && time.minutes <= MAX_MINS) &&
		(time.seconds >= 0 && time.seconds <= MAX_SECS))
		return true;
	else
		return false;
}
//====end of isTimeValid()============================
//
//====================================================



//====start of addOneSecond()=========================
//This void-returning function adds one second to the 
// time the user inputted previously.  It also checks 
// if the time is within a range for the hours, 
// minutes, and seconds.  If it is greater than the
// range, then the structure variable's member will be
// reset to 0 and increment the next member and so on.
// 
// Input:
//		time: a structure variable that is passed by
//		reference.  Represents a time.
// 
// Output:
//		None
//====================================================
void addOneSecond(Time& time)
{
	time.seconds++;

	if (time.seconds > MAX_SECS)
	{
		time.seconds = 0;
		time.minutes++;
		if (time.minutes > MAX_MINS)
		{
			time.minutes = 0;
			time.hours++;
			if (time.hours > MAX_HOURS)
				time.hours = 0;
		}
	}
}
//====end of addOneSecond()===========================
//
//====================================================



//====start of displayTime()==========================
//This void-returning function displays the time in a
// formatted manner.  
// 
// Input:
//		time: a structure variable that is passed by
//		reference.  Represents a time.
// 
// Output:
//		None
//====================================================
void displayTime(Time& time)
{
	cout.fill('0');
	cout << "\nAfter adding one second, the time is ";
	cout << setw(2) << time.hours << ":";
	cout << setw(2) << time.minutes << ":";
	cout << setw(2) << time.seconds << ".\n\n";
}
//====end of displayTime()============================
//
//====================================================