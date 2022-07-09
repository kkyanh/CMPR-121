#include "Student.h"

//====start of Student()==============================
//The default constructor of the Student class.  It
// initializes the data members with 0 and empty string.
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
//The overloaded constructor of the Student class.  It
// initializes the data members with what it is
// initialized with from main.
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
//A mutator function of the Student class.  It sets the
// id of the student which is passed from main.
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



//====start of setName()==============================
//A mutator function of the Student class.  It sets the
// name of the student which is passed from main.
// 
// Input:
//		std::string name
// 
// Output:
//		this->name = name;
//====================================================
void Student::setName(std::string name)
{
	this->name = name;
}
//====end of setName()================================
//
//====================================================



//====start of setUnits()=============================
//A mutator function of the Student class.  It sets the
// units taken of the student which is passed from main.
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



//====start of displayRecord()========================
//An accessor function of the Student class.  It displays
// to the user the ID, name, and units taken of the
// student instance.
// 
// Input:
//		None
// 
// Output:
//		See below
//====================================================
void Student::displayRecord() const
{
	std::cout << "\tID:\t" << id << std::endl;
	std::cout << "\tName:\t" << name << std::endl;
	std::cout << "\tUnits:\t" << units << std::endl << std::endl;
}
//====end of displayRecord()==========================
//
//====================================================