#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>

//====================================================
//This class represents a Dog.  It contains 3 private
// data members: 1 string, 1 float, and 1 int.  It also
// contains 8 member functions: 1 default constructor,
// 1 overloaded constructor, 1 destructor, 1 accessor
// function, and 4 overloaded operator functions.
//====================================================
class Dog
{
private:
	std::string name;
	float weight;
	int age;
public:
	//====start of Dog()==================================
	//This is the default constructor of the Dog class.
	// It initializes the data members to empty string and
	// 0.
	// 
	// Input:
	//		None
	// 
	// Output:
	//		name = "";
	//		weight = 0.0;
	//		age = 0;
	//====================================================
	Dog()
	{
		name = "";
		weight = 0.0;
		age = 0;
	}
	//====end of Dog()====================================
	//
	//====================================================

	//====start of Dog()==================================
	//This is the overloaded constructor of the Dog class.
	// It initializes the data members to what is passed
	// to it from where it is instantiated.
	// 
	// Input:
	//		std::string name, float weight, int age
	// 
	// Output:
	//		this->name = name;
	//		this->weight = weight;
	//		this->age = age;
	//====================================================
	Dog(std::string name, float weight, int age)
	{
		this->name = name;
		this->weight = weight;
		this->age = age;
	}
	//====end of Dog()====================================
	//
	//====================================================

	//====start of ~Dog()=================================
	//This is the destructor of the Dog class.  It does
	// nothing.
	// 
	// Input:
	//		None
	// 
	// Output:
	//		None
	//====================================================
	~Dog() {}
	//====end of ~Dog()===================================
	//
	//====================================================

	//====start of displayDog()===========================
	//This is an accessor function of the Dog class.  It
	// displays to the user the information of the instance
	// that calls it.
	// 
	// Input:
	//		None
	// 
	// Output:
	//		See below
	//====================================================
	void displayDog() const
	{
		std::cout << "NAME: " << name << std::endl;
		std::cout << "WEIGHT: " << weight << std::endl;
		std::cout << "AGE: " << age << std::endl << std::endl;
	}
	//====end of displayDog()=============================
	//
	//====================================================

	//====start of operator>=()===========================
	//This is an overloaded operator function of the Dog
	// class.  It returns whether the calling instance's
	// age is greater than or equal to the age parameter
	// that is passed to it.
	// 
	// Input:
	//		int age
	// 
	// Output:
	//		return this->age >= age;
	//====================================================
	bool operator>=(int age)
	{
		return this->age >= age;
	}
	//====end of operator>=()=============================
	//
	//====================================================

	//====start of operator<()============================
	//This is an overloaded operator function of the Dog
	// class.  It returns whether the calling instance's
	// weight is less than the parameter's dog instance's
	// weight that is passed to it.
	// 
	// Input:
	//		Dog& dog
	// 
	// Output:
	//		return weight < dog.weight;
	//====================================================
	bool operator<(Dog& dog)
	{
		return weight < dog.weight;
	}
	//====end of operator<()==============================
	//
	//====================================================

	//====start of operator==()===========================
	//This is an overloaded operator function of the Dog
	// class.  It returns whether the calling instance's
	// name is equal to the parameter's dog instance's
	// name that is passed to it.
	// 
	// Input:
	//		Dog& dog
	// 
	// Output:
	//		return name == dog.name;
	//====================================================
	bool operator==(Dog& dog)
	{
		return name == dog.name;
	}
	//====end of operator==()=============================
	//
	//====================================================

	//====start of operator<<()===========================
	//This is an overloaded operator friend function of 
	// the Dog class.  It displays information about the
	// Dog class in a formatted manner to the user and
	// returns stream.
	// 
	// Input:
	//		std::ostream& stream, Dog& dog
	// 
	// Output:
	//		See below
	//====================================================
	friend std::ostream& operator<<(std::ostream& stream, Dog& dog)
	{
		stream << "NAME: " << dog.name << std::endl
			<< "WEIGHT: " << dog.weight << " pounds.\n"
			<< "AGE: " << dog.age << " years old.\n";

		return stream;
	}
	//====start of operator<<()===========================
	//
	//====================================================
};
#endif