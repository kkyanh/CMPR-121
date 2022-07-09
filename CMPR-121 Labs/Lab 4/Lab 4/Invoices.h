#pragma once

#include <iostream>
using namespace std;

//====start of struct Invoice=========================
//This structure contains 3 members: invoiceNum (an int),
// amt (a double), and paid (a bool).  invoiceNum 
// represents the invoice number, amt represents the
// invoice amount, and paid represents whether or not
// the invoice was paid for.
//====================================================
struct Invoice
{
	int invoiceNum;
	double amt;
	bool paid;
};