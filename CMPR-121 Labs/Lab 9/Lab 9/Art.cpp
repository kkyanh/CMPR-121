#include "Art.h"

//====start of Art()==================================
//The overloaded constructor of the Art class.  It
// initializes all the data members with what is passed
// to it.
// 
// Input:
//		std::string id, std::string title, std::string artist, std::string genre, int year, double price
// 
// Output:
// 		this->id = id;
//		this->title = title;
//		this->artist = artist;
//		this->genre = genre;
//		this->year = year;
//		this->price = price;
//====================================================
Art::Art(std::string id, std::string title, std::string artist, std::string genre, int year, double price)
{
	this->id = id;
	this->title = title;
	this->artist = artist;
	this->genre = genre;
	this->year = year;
	this->price = price;
}
//====end of Art()====================================
// 
//====================================================



//====start of ~Art()=================================
//The destructor of the Art class.  Does nothing.
// 
// Input:
//		None
// 
// Output:
//		None
//====================================================
Art::~Art() {}
//====end of ~Art()===================================
//
//====================================================