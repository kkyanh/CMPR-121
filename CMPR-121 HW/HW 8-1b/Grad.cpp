#include "Grad.h"

//====start of Grad()=================================
// //The constuctor of the Grad class.  It initializes
// the data members to the data passed from main.  
// It also uses the Student class constructor to 
// initialize data.
// 
// Input:
//		int id, std::string name, int units, std::string
//		degree
// 
// Output:
//		this->degree = degree;
//		Student(id, name, units)
//====================================================
Grad::Grad(int id, std::string name, int units, std::string degree) 
	: Student(id, name, units)
{
	this->degree = degree;
}
//====end of Grad()===================================
//
//====================================================



//====start of ~Grad()================================
//The destructor of the Grad class.  Does nothing.
// 
// Input:
//		None
// 
// Output:
//		None
//====================================================
Grad::~Grad() {}
//====end of ~Grad()==================================
//
//====================================================



//====start of displayRecord()========================
//An accessor function of the Grad class.  It displays
// to the user the information in the Grad class in a
// formatted manner.
// 
// Input:
//		None
// 
// Output:
//		See below
//====================================================
void Grad::displayRecord() const
{
	std::cout << "ID:\t" << id << std::endl;
	std::cout << "Name:\t" << name << std::endl;
	std::cout << "Units:\t" << units << std::endl;
	std::cout << "Degree:\t" << degree << std::endl << std::endl;
}
//====end of displayRecord()==========================
//
//====================================================