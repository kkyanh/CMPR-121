#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>

//====================================================
//This class has 2 private data members: one int and
// one string.  The int data member, weight, holds
// the value for the cat's weight.  The string data
// member, color, holds the string for the cat's color.
// In the class are 6 public data functions: the default
// constructor, destructor, setWeight (sets the cat's
// weight), setColor (sets the cat's color), displayInfo
// (displays the cat's data), and meow (lets the cat meow)
//====================================================
class Cat
{
private:
	int weight;
	std::string color;
public:
	Cat();
	~Cat();
	void setWeight(int);
	void setColor(std::string);
	void displayInfo() const;
	void meow() const;
};
#endif