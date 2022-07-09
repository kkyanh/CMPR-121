//====================================================
//Attached: HW 7-2c, 7-2d
//====================================================
//HW 7-2d
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program prompts the user to enter
// the data of 3 cats of the Cat class.  Once the user
// enters the weight and color of the cats, the program
// displays to the user the cat's data and then the
// cat meowing.
//====================================================

#include "Cat.h"

//====start of main()=================================
//
//====================================================
int main()
{
	//Variables
	Cat Fluffy;
	Cat Tom;
	Cat Kitty;
	int weight;
	std::string color;

	std::cout << "So you have three cats...\n\n";
	
	//Describe Fluffy and sets user's weight and color to Fluffy instance
	std::cout << "Describe Fluffy.  What does she weigh? ";
	std::cin >> weight;
	std::cout << "What color is she? ";
	std::cin >> color;
	Fluffy.setWeight(weight);
	Fluffy.setColor(color);

	//Describe Fluffy and sets user's weight and color to Tom instance
	std::cout << "\nDescribe Tom.  What does he weigh? ";
	std::cin >> weight;
	std::cout << "What color is he? ";
	std::cin >> color;
	Tom.setWeight(weight);
	Tom.setColor(color);

	//Describe Fluffy and sets user's weight and color to Kitty instance
	std::cout << "\nDescribe Kitty.  What does she weigh? ";
	std::cin >> weight;
	std::cout << "What color is she? ";
	std::cin >> color;
	Kitty.setWeight(weight);
	Kitty.setColor(color);

	//Display to the user all 3 cat's data
	std::cout << "\nFluffy ";
	Fluffy.displayInfo();
	std::cout << "Tom ";
	Tom.displayInfo();
	std::cout << "Kitty ";
	Kitty.displayInfo();

	//Each cat says meow using the meow function
	std::cout << "\nFluffy says: ";
	Fluffy.meow();
	std::cout << "Tom says: ";
	Tom.meow();
	std::cout << "Kitty says: ";
	Kitty.meow();

	return 0;
}
//====end of main()===================================
//
//====================================================