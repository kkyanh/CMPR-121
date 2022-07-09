#include "Painting.h"

//====start of Painting()=============================
//The overloaded constructor of the Painting class.
// It initializes all the data members that are passed
// by calling the base class' constructor as well.
// 
// Input:
//		std::string id, std::string title, std::string artist, std::string genre, int year, double price, std::string
//		paintMedium	  
// 
// Output:
//		this->paintMedium = paintMedium;
//		Art(id, title, artist, genre, year, price)
//====================================================
Painting::Painting(std::string id, std::string title, std::string artist, std::string genre, int year, double price, std::string paintMedium) : Art(id, title, artist, genre, year, price)
{
	this->paintMedium = paintMedium;
}
//====end of Painting()===============================
// 
//====================================================



//====start of ~Painting()============================
// The destructor of the Painting class.  Does nothing.
// 
// Input:
//		None
// 
// Output:
//		None
//====================================================
Painting::~Painting() {}
//====end of ~Painting()==============================
// 
//====================================================



//====start of showArt()==============================
// A virtual accessor function of the Painting class.
// It displays to the user the information of the
// class instance in an organized manner.
// 
// Input:
//		None
// 
// Output:
//		See below
//====================================================
void Painting::showArt()
{
	std::cout << "ID: " << id << std::endl;
	std::cout << "Title: " << title << std::endl;
	std::cout << "Artist: " << artist << std::endl;
	std::cout << "Paint Medium: " << paintMedium << std::endl;
	std::cout << "Genre: " << genre << std::endl;
	std::cout << "Year: " << year << std::endl;
	std::cout << "Price: $" << price << std::endl << std::endl;
}
//====end of showArt()================================
// 
//====================================================