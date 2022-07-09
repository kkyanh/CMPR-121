#ifndef SONG_H
#define SONG_H
#include <iostream>
#include <string>

//====================================================
//This class has 2 private data members of the data
// type string.  They hold the information for a song's
// title and artist respectively.  The class contains
// 6 public data functions: a default constructor which
// initializes an instance with empty strings for the
// data members, an overloaded constructor to initialize
// an instance with the title and artist, a destructor
// that does nothing, 2 mutator functions that set the
// title and artist respectively, and 1 accessor function
// that displays the song information to the user.
//====================================================
class Song
{
private:
	std::string title;
	std::string artist;
public:
	Song();
	Song(std::string, std::string);
	~Song();
	void setTitle(std::string);
	void setArtist(std::string);
	void displaySong() const;
};
#endif