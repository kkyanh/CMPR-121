#ifndef CLOCKTYPE_H
#define CLOCKTYPE_H
#include <iostream>
#include <iomanip>

//====================================================
//This class has 3 private data members of data type
// int: hrs, mins, and secs, which represent time on a
// clock.  In the class are also the default constructor,
// an overloaded constructor, and a destructor.  It
// has 4 mutator functions: setTime, getTime,
// incrementSeconds, incrementMinutes, and incrementHours.
// It also contains 2 accessor functions: printTime
// and areTimesEqual.
//====================================================
class ClockType
{
private:
	int hrs;
	int mins;
	int secs;
public:
	ClockType();
	ClockType(int, int, int);
	~ClockType();

	void setTime(int, int, int);
	void getTime(int&, int&, int&);
	void incrementSeconds();
	void incrementMinutes();
	void incrementHours();

	void printTime() const;
	bool areTimesEqual(ClockType);
};
#endif