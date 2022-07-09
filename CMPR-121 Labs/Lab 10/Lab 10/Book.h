#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>

//====================================================
//This class represents a book.  It contains 4 private
// data members: 1 string, 1 int, 1 double, and 1
// static int.  It also contains 12 member functions:
// 1 default constructor, 1 overloaded constructor,
// 1 destructor, 2 accessor functions, and 7 overloaded
// operator functions.
//====================================================
class Book
{
private:
	std::string isbn;
	int year;
	double price;
	static int bookCount;
public:
	Book();
	Book(std::string isbn, int year, double price);
	~Book();
	void displayBook() const;
	int getCount();
	bool operator>(Book& book);
	bool operator==(Book& book);
	bool operator>(double price);
	double operator+(Book& book);
	bool operator<(int year);
	friend std::ostream& operator<<(std::ostream& stream, Book& book);
	friend std::istream& operator>>(std::istream& stream, Book& book);
};
#endif