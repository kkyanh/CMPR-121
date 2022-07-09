//====================================================
//Attached: HW 7-1a, 7-1b
//====================================================
//HW 7-1b
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program contains 3 instances of
// the ClockType class.  It begins by setting the times
// of myClock and yourClock and displaying the time on
// the 2 instances.  Afterwards, it checks to see if
// the 2 times are equal to each other and then displays
// whether or not it is true or not.  It then displays
// to the user the time on the 3rd instance, myOtherClock.
// After displaying, it calls the incrementSeconds and
// incrementMinutes functions to add 1 minute and 1
// second to the time.  It then displays to the user
// the final time on the 3rd instance.
//====================================================
#include "ClockType.h"

//====start of main()=================================
//
//====================================================
int main()
{
	//Variables
	ClockType myClock;
	ClockType yourClock;
	ClockType myOtherClock(0, 0, 0);

	//Set the times for myClock and yourClock instances
	myClock.setTime(23, 59, 59);
	yourClock.setTime(10, 0, 15);

	//Display to the user myClock's time
	std::cout << "The time on my clock is: ";
	myClock.printTime();

	//Display to the user yourClock's time
	std::cout << "The time on your clock is: ";
	yourClock.printTime();

	if (myClock.areTimesEqual(yourClock) == true)
		std::cout << "The times of my clock and your clock are equal.\n\n";
	else
		std::cout << "The times of my clock and your clock are not equal.\n\n";

	//Display to the user myOtherClock's time
	std::cout << "The time on my other clock is: ";
	myOtherClock.printTime();

	std::cout << "I am going to add 1 minute and 1 second to my other clock.\n\n";
	myOtherClock.incrementSeconds();
	myOtherClock.incrementMinutes();

	//Display to the user myOtherClock's new time
	std::cout << "The time on my other clock is: ";
	myOtherClock.printTime();

	return 0;
}