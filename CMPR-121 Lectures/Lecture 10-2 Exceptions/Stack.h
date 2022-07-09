#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

template<class T>
class Stack
{
private:
	T items[SIZE];
	int top;
public:
	Stack()
	{
		top = -1;
	}
	//--------------
	~Stack() {}
	//--------------
	void push(T number)
	{
		top++;
		items[top] = number;
	}
	//--------------
	void pop(T& value)
	{
		value = items[top];
		top--;
	}
	//--------------
	bool isFull()
	{
		return top == SIZE - 1;
	}
	//--------------
	bool isEmpty()
	{
		return top == -1;
	}
	//--------------
	void makeEmpty()
	{
		top = -1;
	}
};
#endif