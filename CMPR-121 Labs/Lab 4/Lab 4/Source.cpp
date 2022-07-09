//====================================================
//Attached: Lab 4
//====================================================
//Lab 4
//====================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program gets input data from the
// user for two invoices.  It stores the data into two
// struct variables.  It then displays the two struct
// variables as invoice summaries.
//====================================================

#include "Invoices.h"
#include <iomanip>

void setInvoice(Invoice&);
void displayInvoice(Invoice&);

//====start of main()=================================
//
//====================================================
int main()
{
	Invoice inv_1{ 0,0.0,false };
	Invoice inv_2{ 0,0.0,false };

	setInvoice(inv_1);
	setInvoice(inv_2);

	system("cls");

	displayInvoice(inv_1);
	displayInvoice(inv_2);

	system("pause");

	return 0;
}
//====end of main()===================================
//
//====================================================



//====start of setInvoice()===========================
//This void-returning function takes in a variable,
// invoice, which is passed by reference.  It prompts
// the user to input the invoice number, amount, and
// if it was paid for.  By default, invoice.paid is
// set to false, however, if the user has paid for
// it, then it is set to true.
// 
// Input:
//		invoice: a struct variable that is passed by
//		reference.  Holds data for the struct members.
// 
// Output:
//		None
//====================================================
void setInvoice(Invoice& invoice)
{
	char paid = ' ';
	cout << "Enter the invoice:\n";
	cout << "Invoice #: ";
	cin >> invoice.invoiceNum;
	cout << "Amount: ";
	cin >> invoice.amt;
	cout << "PAID (y/n): ";
	cin >> paid;
	if (toupper(paid) == 'Y')
		invoice.paid = true;
}
//====end of setInvoice()=============================
//
//====================================================



//====start of displayInvoice()=======================
//This void-returning function displays the invoice
// data gathered by the user previously.  It is displayed
// as invoice summary and displays the invoice number,
// invoice amount, and whether it was paid for or not.
// 
// Input:
//		invoice: a struct variable that is passed by
//		reference.  Holds data for the struct members.
// 
// Output:
//		None
//====================================================
void displayInvoice(Invoice& invoice)
{
	cout << "---- Invoice Summary ----\n\n";
	cout << "INVOICE #: " << setw(7) << left << invoice.invoiceNum << endl;
	cout << "AMOUNT:    " << setw(7) << left << invoice.amt << endl;
	if (invoice.paid == true)
		cout << "PAID:	   " << setw(7) << left << "Paid\n\n";
	else
		cout << "PAID:	   " << setw(7) << left << "Not Paid\n\n";
}
//====end of displayInvoice()=========================
//
//====================================================