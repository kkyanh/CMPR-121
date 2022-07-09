#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

//====================================================
//This is the Student class.  It contains 3 private
// data members: an int variable for the student's id,
// an int variable for the units the student has taken,
// and a string for the student's name.  It also
// contains 7 public member functions.  It has a default
// constructor that initializes the data members to 0
// and empty string, an overloaded constructor that
// initializes the data members with what the instance
// is initialized with in main, a destructor, 3 mutator
// functions: setID which sets the id, setName which
// sets the name, and setUnits which sets the units, as
// well as 1 accessor function: displayRecord which
// displays the student's information.
//====================================================
class Student
{
private:
	int id;
	int units;
	std::string name;
public:
	Student();
	Student(int, std::string, int);
	~Student();
	void setID(int);
	void setName(std::string);
	void setUnits(int);
	void displayRecord() const;
};
#endif