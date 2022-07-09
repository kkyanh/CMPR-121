//===============================================
//Attached: HW 1a, 1b
//===============================================
//HW 1a
//===============================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
//
//Description: This program gets the monthly sales 
// amount from the user and calculates the commission 
// payment and total pay based off the monthly sales.
//===============================================
#include <iostream>
#include <iomanip>
using namespace std;
double getSalesAmt();
double calcCommission(double);
double calcPay(double);
void displayPay(double, double, double);
//====start of main()============================
//
//===============================================
int main()
{
	double salesAmt = 0.0;
	double commission = 0.0;
	double pay = 0.0;
	char answer = ' ';
	do
	{
		salesAmt = getSalesAmt();
		commission = calcCommission(salesAmt);
		pay = calcPay(commission);
		displayPay(salesAmt, commission, pay);
		cout << "Do it again? (Y/N): ";
		cin >> answer;
		while ((answer != 'N' && answer != 'n') && (answer != 'Y' && answer != 'y'))
		{
			cout << "Please enter a valid option: ";
			cin >> answer;
		}
	} while (answer == 'Y' || answer == 'y');
	return 0;
}
//====end of main()==============================
//
//===============================================
//====start of getSalesAmt()=====================
//This value-returning function of data type double
// gets the monthly sales amount from the user
// and assigns it to the variable "salesAmt" in
// main.
// 
// Input:
// None
// Output:
// salesAmt: a double value that is passed by
// value to main.  Represents the monthly
// sales amount obtained from the user.
//===============================================
double getSalesAmt()
{
	double salesAmt = 0.0;
	cout << "Enter monthly sales amount: ";
	cin >> salesAmt;
	return salesAmt;
}
//====end of getSalesAmt()=======================
//
//===============================================
//====start of calcCommission()==================
//This value-returning function of data type double
// calculates the commission payment based off the
// monthly sales amount.  If the user makes more
// than $50,000, then they get a commission of 2%.
// If the user makes between $25,000 and $50,000,
// then they get a commission of 1.5%.  If the user
// makes less than $25,000, then they do not get
// a commission payment.
// 
// Input:
// salesAmt: a double value that is passed by
// value from main.  Represents the monthly 
// sales amount.
// 
// Output:
// A calculation of type double that represents
// the commission fee based off the monthly
// sales.
//===============================================
double calcCommission(double salesAmt)
{
	if (salesAmt > 50000)
		return salesAmt * 0.02;
	else if (salesAmt >= 25000 && salesAmt <= 50000)
		return salesAmt * 0.015;
	else
		return 0.0;
}
//====end of calcCommission()====================
//
//===============================================
//====start of calcPay()=========================
//This value-returning function of data type double
// calculates the total pay based off the base pay
// of $2,500 and the commission fee.
// 
// Input:
// commission: a double value that is passed
// by value from main.  It represents the
// commission fee for the user.
// 
// Output:
// A calculation of type double that represents
// the total pay for the user  based off the
// base pay plus the commission.
//===============================================
double calcPay(double commission)
{
	return 2500 + commission;
}
//====end of calcPay()===========================
//
//===============================================
//====start of displayPay()======================
//This void-returning function displays the
// monthly sales, commission, base pay, and total
// pay to the user.
// 
// Input:
// salesAmt: a double value that is passed by
// value from main.  It represents the 
// monthly sales amount
// 
// commission: a double value that is passed
// by value from main.  It represents the 
// commission fee.
// 
// pay: a double value that is passed by
// value from main.  It represents the total
// pay.
// 
// Output:
// None
//===============================================
void displayPay(double salesAmt, double commission, double pay)
{
	cout << fixed << showpoint << setprecision(2);
	cout << "Monthly Sales: $" << setw(10) << right << salesAmt << endl;
	cout << "Commission:    $" << setw(10) << right << commission << endl;
	cout << "Base Pay:      $" << setw(10) << right << pay - commission << endl;
	cout << "Total Pay :    $" << setw(10) << right << pay << endl;
}
//====end of displayPay()========================
//
//===============================================