#include "UnderGrad.h"

//====start of UnderGrad()============================
//The constuctor of the UnderGrad class.  It
// initializes the data members to the data passed
// from main.  It also uses the Student class constructor
// to initialize data.
// 
// Input:
//		int id, std::string name, int units, std::string
//		level
// 
// Output:
//		this->level = level;
//		Student(id, name, units)
//====================================================
UnderGrad::UnderGrad(int id, std::string name, int units, std::string level)
	: Student(id, name, units)
{
	this->level = level;
}
//====end of UnderGrad()==============================
//
//====================================================



//====start of ~UnderGrad()===========================
//The destructor of the UnderGrad class.  Does nothing.
// 
// Input:
//		None
// 
// Output:
//		None
//====================================================
UnderGrad::~UnderGrad() {}
//====end of ~UnderGrad()=============================
//
//====================================================



//====start of displayRecord()========================
//An accessor function of the UnderGrad class.  It
// displays to the user the information in the
// UnderGrad class in a formatted manner.
// 
// Input:
//		None
// 
// Output:
//		See below
//====================================================
void UnderGrad::displayRecord() const
{
	std::cout << "ID:\t" << id << std::endl;
	std::cout << "Name:\t" << name << std::endl;
	std::cout << "Units:\t" << units << std::endl;
	std::cout << "Class:\t" << level << std::endl << std::endl;
}
//====end of displayRecord()==========================
//
//====================================================