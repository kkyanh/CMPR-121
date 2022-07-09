#ifndef PRESIDENTS_H
#define PRESIDENTS_H
#include <iostream>
#include <string>

//====================================================
//This class has 3 private data members of 2 data types:
// int and string.  The int data member, number,
// represents the number of the president the user enters.
// The string data member, name, represents the 
// president's name.  The string data member, quote,
// represents the president's quote that the user
// enters.  In the class are 6 public data functions.
// There is the default constructor, the destructor, 
// setNumber (sets the president's number), setName
// (sets the president's name), setQuote (sets the
// president's quote), and displayPresidents (displays
// the details about the president).
//====================================================
class Presidents
{
private:
	int number;
	std::string name;
	std::string quote;
public:
	Presidents();
	~Presidents();
	void setNumber(int);
	void setName(std::string);
	void setQuote(std::string);
	void displayPresidents() const;
};
#endif