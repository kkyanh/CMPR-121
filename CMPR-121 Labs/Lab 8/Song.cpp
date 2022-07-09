#include "Song.h"

//====start of Song()=================================
//The default constructor of the Song class.  It
// initializes the data members with empty strings.
// 
// Input:
//		None
// 
// Output:
//		title = "";
//		artist = "";
//====================================================
Song::Song()
{
	title = "";
	artist = "";
}
//====end of Song()===================================
//
//====================================================



//====start of Song(std::string, std::string)=========
//The overloaded constructor of the Song class.  It
// initializes the data members with the values passed
// from main.
// 
// Input:
//		std::string title, std::string artist
// 
// Output:
//		this->title = title;
//		this->artist = artist;
//====================================================
Song::Song(std::string title, std::string artist)
{
	this->title = title;
	this->artist = artist;
}
//====end of Song()===================================
//
//====================================================
 
 

//====start of ~Song()================================
//The destructor of the Song class.  Does nothing.
// 
// Input:
//		None
// 
// Output:
//		None
//====================================================
Song::~Song() {}
//====end of ~Song()==================================
//
//====================================================



//====start of setTitle()=============================
//A mutator function of the Song class.  It sets the
// title of a song to the Song class' data member, title
// using the this pointer.
// 
// Input:
//		std::string title
// 
// Output:
//		this->title = title;
//====================================================
void Song::setTitle(std::string title)
{
	this->title = title;
}
//====end of setTitle()===============================
//
//====================================================



//====start of setArtist()============================
//A mutator function of the Song class.  It sets the
// artist of a song to the Song class' data member, artist
// using the this pointer.
// 
// Input:
//		std::string artist
// 
// Output:
//		this->artist = artist;
//====================================================
void Song::setArtist(std::string artist)
{
	this->artist = artist;
}
//====end of setArtist()==============================
//
//====================================================



//====start of displaySong()==========================
//An accessor function of the Song class.  It displays
// to the user the title and artist of a Song instance
// in an organized manner.
// 
// Input:
//		None
// 
// Output:
//		See below
//====================================================
void Song::displaySong() const
{
	std::cout << "Title: " << title << std::endl;
	std::cout << "Artist: " << artist << std::endl << std::endl;
}
//====end of displaySong()============================
//
//====================================================