#include "Book.h"

//====start of static int var=========================
//This is the definition of a static int variable of
// the Book class.
//====================================================
int Book::bookCount = 0;
//====end of static int var===========================
//
//====================================================



//====start of Book()=================================
//The default constructor of the Book class.  It
// initializes the data members to empty string, 0,
// 0.0, and increments the bookCount variable.
// 
// Input:
//		None
// 
// Output:
//		isbn = "";
//		year = 0;
//		price = 0.0;
//		bookCount++;
//====================================================
Book::Book()
{
	isbn = "";
	year = 0;
	price = 0.0;
	bookCount++;
}
//====end of Book()===================================
//
//====================================================



//====start of Book()=================================
//The overloaded constructor of the Book class.
// It initializes the data members to what is passed
// into it from when it is called and increments the
// bookCount variable.
// 
// Input:
//		std::string isbn, int year, double price
// 
// Output:
//		this->isbn = isbn;
//		this->year = year;
//		this->price = price;
//		bookCount++;
//====================================================
Book::Book(std::string isbn, int year, double price)
{
	this->isbn = isbn;
	this->year = year;
	this->price = price;
	bookCount++;
}
//====end of Book()===================================
//
//====================================================



//====start of ~Book()================================
//The destructor of the Book class.  It decrements the
// bookCount variable.
// 
// Input:
//		None
// 
// Output:
//		bookCount--;
//====================================================
Book::~Book()
{
	bookCount--;
}
//====end of ~Book()==================================
//
//====================================================



//====start of displayBook()==========================
//An accessor function of the Book class.  It displays
// to the user the information of the Book instance.
// 
// Input:
//		None
// 
// Output:
//		See Below
//====================================================
void Book::displayBook() const
{
	std::cout << "ISBN: " << isbn << std::endl;
	std::cout << "Year: " << year << std::endl;
	std::cout << "Price: $" << price << std::endl << std::endl;
}
//====end of displayBook()============================
//
//====================================================



//====start of getCount()=============================
//An accessor function of the Book class.  It returns
// the bookCount when called.
// 
// Input:
//		None
// 
// Output:
//		return bookCount;
//====================================================
int Book::getCount()
{
	return bookCount;
}
//====end of getCount()===============================
//
//====================================================



//====start of operator>()============================
//An overloaded operator function of the Book class.
// It returns true or false of the calling Book instance's
// price compared to the book instance that is passed
// by reference's price.
// 
// Input:
//		Book& book
// 
// Output:
//		return price > book.price;
//====================================================
bool Book::operator>(Book& book)
{
	return price > book.price;
}
//====end of operator>()==============================
//
//====================================================



//====start of operator==()===========================
//An overloaded operator function of the Book class.
// It returns true or false of the calling Book instance's
// price compared to the book instance that is passed
// by reference's price.
// 
// Input:
//		Book& book
// 
// Output:
//		return price == book.price;
//====================================================
bool Book::operator==(Book& book)
{
	return price == book.price;
}
//====end of operator==()=============================
//
//====================================================



//====start of operator>()============================
//An overloaded operator function of the Book class.
// It returns true or false of the calling Book instance's
// price compared to a double value that is passed by
// value.
// 
// Input:
//		double price
// 
// Output:
//		return this->price > price;
//====================================================
bool Book::operator>(double price)
{
	return this->price > price;
}
//====end of operator>()==============================
//
//====================================================



//====start of operator+()============================
//An overloaded operator function of the Book class.
// It returns the calling Book instance's price plus
// the book instance that is passed by reference's price.
// 
// Input:
//		Book& book
// 
// Output:
//		return price + book.price;
//====================================================
double Book::operator+(Book& book)
{
	return price + book.price;
}
//====end of operator+()==============================
//
//====================================================



//====start of operator<()============================
//An overloaded operator function of the Book class.
// It returns true or false of the calling Book instance's
// price compared to an int value that is passed by
// value.
// 
// Input:
//		int year
// 
// Output:
//		return this->year < year;
//====================================================
bool Book::operator<(int year)
{
	return this->year < year;
}
//====end of operator<()==============================
//
//====================================================



//====start of operator<<()===========================
//An overloaded operator function that is a friend
// to the Book class.  It allows the class to be
// displayed by a stream object.
// 
// Input:
//		std::ostream& stream, Book& book
// 
// Output:
//		See below
//====================================================
std::ostream& operator<<(std::ostream& stream, Book& book)
{
	stream << "ISBN: " << book.isbn << std::endl
		<< "Year: " << book.year << std::endl
		<< "Price: $" << book.price << std::endl;

	return stream;
}
//====end of operator<<()=============================
//
//====================================================



//====start of operator>>()===========================
//An overloaded operator function that is a friend
// to the Book class.  It allows the class to get input
// through a stream object without requiring mutator
// functions.
// 
// Input:
//		std::istream& stream, Book& book
// 
// Output:
//		See below
//====================================================
friend std::istream& operator>>(std::istream& stream, Book& book)
{
	std::cout << "ISBN: ";
	stream >> book.isbn;
	std::cout << "Year: ";
	stream >> book.year;
	std::cout << "Price: $";
	stream >> book.price;

	return stream;
}
//====end of operator>>()=============================
//
//====================================================