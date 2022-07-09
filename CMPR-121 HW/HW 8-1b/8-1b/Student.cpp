#include "Student.h"

//====start of Student()==============================
//The default constuctor of the Student class.  It
// initializes the data members to 0 and empty string.
// 
// Input:
//		None
// 
// Output:
//		id = 0;
//		name = "";
//		units = 0;
//====================================================
Student::Student()
{
	id = 0;
	name = "";
	units = 0;
}
//====end of Student()================================
//
//====================================================



//====start of Student(int, std::string, int)=========
//The overloaded constuctor of the Student class.  It
// initializes the data members to the data passed
// from main.
// 
// Input:
//		int id, std::string name, int units
// 
// Output:
//		this->id = id;
//		this->name = name;
//		this->units = units;
//====================================================
Student::Student(int id, std::string name, int units)
{
	this->id = id;
	this->name = name;
	this->units = units;
}
//====end of Student(int, std::string, int)===========
//
//====================================================



//====start of ~Student()=============================
//The destructor of the Student class.  Does nothing.
// 
// Input:
//		None
// 
// Output:
//		None
//====================================================
Student::~Student() {}
//====end of ~Student()===============================
//
//====================================================



//====start of setID()================================
//A mutator function of the Student class.  Sets the
// id of the student to the argument that was passed.
// 
// Input:
//		int id
// 
// Output:
//		this->id = id;
//====================================================
void Student::setID(int id)
{
	this->id = id;
}
//====end of setID()==================================
//
//====================================================



//====start of getID()================================
//An accessor function of the Student class.  Returns
// the id of the student.
// 
// Input:
//		None
// 
// Output:
//		return id;
//====================================================
int Student::getID() const
{
	return id;
}
//====end of getID()==================================
//
//====================================================



//====start of setUnits()=============================
//A mutator function of the Student class.  Sets the
// units of the student to the argument that was passed.
// 
// Input:
//		int units
// 
// Output:
//		this->units = units;
//====================================================
void Student::setUnits(int units)
{
	this->units = units;
}
//====end of setUnits()===============================
//
//====================================================



//====start of getUnits()=============================
//An accessor function of the Student class.  Returns
// the units of the student.
// 
// Input:
//		None
// 
// Output:
//		return units;
//====================================================
int Student::getUnits() const
{
	return units;
}
//====end of getUnits()===============================
//
//====================================================