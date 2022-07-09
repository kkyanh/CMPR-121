#include "Sculpture.h"

//====start of Sculpture()============================
// The overloaded constructor of the Sculpture class.
// It initializes all the data members that are passed
// by calling the base class' constructor as well.
// 
// Input:
//		std::string id, std::string title, std::string artist, std::string genre, int year, double price, std::string
//		material	  
// 
// Output:
//		this->material = material;
//		Art(id, title, artist, genre, year, price)
//====================================================
Sculpture::Sculpture(std::string id, std::string title, std::string artist, std::string genre, int year, double price, std::string material) : Art(id, title, artist, genre, year, price)
{
	this->material = material;
}
//====end of Sculpture()==============================
// 
//====================================================



//====start of ~Sculpture()===========================
// The destructor of the Sculpture class.  Does nothing.
// 
// Input:
//		None
// 
// Output:
//		None
//====================================================
Sculpture::~Sculpture() {}
//====end of ~Sculpture()===========================
// 
//====================================================



//====start of showArt()==============================
// A virtual accessor function of the Sculpture class.
// It displays to the user the information of the
// class instance in an organized manner.
// 
// Input:
//		None
// 
// Output:
//		See below
//====================================================
void Sculpture::showArt()
{
	std::cout << "ID: " << id << std::endl;
	std::cout << "Title: " << title << std::endl;
	std::cout << "Artist: " << artist << std::endl;
	std::cout << "Material: " << material << std::endl;
	std::cout << "Genre: " << genre << std::endl;
	std::cout << "Year: " << year << std::endl;
	std::cout << "Price: $" << price << std::endl << std::endl;
}
//====end of showArt()================================
// 
//====================================================