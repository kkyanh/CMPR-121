#ifndef ART_H
#define ART_H
#include <iostream>
#include <string>

//====================================================
//This class is the base class of this program.  It has
// 6 protected data members: 4 of which are strings and
// 1 int and 1 double.  It also contains 3 member
// functions: 1 overloaded constructor, 1 destructor,
// and 1 pure virtual function.
//====================================================
class Art
{
protected:
	std::string id;
	std::string title;
	std::string artist;
	std::string genre;
	int year;
	double price;
public:
	Art(std::string, std::string, std::string, std::string, int, double);
	~Art();
	virtual void showArt() = 0;
};
#endif