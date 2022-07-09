//====================================================
//Attached: Lab 8
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program first creates 2 instances
// of a class named Song.  One uses the default constructor
// and has empty strings initialized while the other
// is initialized with a title and artist.  The program
// then displays both instances to the user and prompts
// the user to enter a song title and artist for the
// yourSong instance.  Once the user does, the program
// sets the information to the instance and displays
// to the user the information they entered to the
// instance.
//====================================================

#include "Song.h"

//====start of main()=================================
//
//====================================================
int main()
{
	//Song instances and variables
	Song yourSong;
	Song anotherSong("All of Me", "Billie Holliday");
	std::string title = "";
	std::string artist = "";

	//Display the Song instances information
	std::cout << "Here are the songs:\n\n";
	std::cout << "Your Song:\n";
	yourSong.displaySong();
	std::cout << "Another Song:\n";
	anotherSong.displaySong();

	//Get information about yourSong instance
	std::cout << "Enter information about your song:\n";
	std::cout << "Title: ";
	std::getline(std::cin, title);
	std::cout << "Artist: ";
	std::getline(std::cin, artist);

	//Set the title and artist the user enters to the yourSong instance's data members
	yourSong.setTitle(title);
	yourSong.setArtist(artist);

	//Display yourSong instance information
	std::cout << "\nHere is your song (after the set functions):\n";
	yourSong.displaySong();

	return 0;
}
//====end of main()===================================
//
//====================================================