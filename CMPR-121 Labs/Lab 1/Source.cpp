//===============================================================
//Attached: Lab 1
//===============================================================
//Programmer: Ky-Anh Ho
//Class: CMPR-121
//Instructor: Dennis Rainey
// 
// Description: This program gets the current bank balance and
//		deposit amount from the user and displays the new
//		balance after calculating the sum of the two.
//===============================================================

#include <iostream>
using namespace std;

double getBalance();
double getDeposit();
double calcNewBalance(double, double);
void displayBalance(double);

//======start of main()==========================================
//
//===============================================================
int main()
{
	double bankBalance = 0.0;
	double bankDeposit = 0.0;
	double newBalance = 0.0;

	bankBalance = getBalance();
	bankDeposit = getDeposit();
	newBalance = calcNewBalance(bankBalance, bankDeposit);
	displayBalance(newBalance);

	return 0;
}
//======end of main()============================================
//
//===============================================================



//======start of getBalance()====================================
//This function gets the bank balance amount from the user and
//		returns the value to main.
// 
// Input: 
//		None
// 
// Output:
//		bankBalance: A double value that is equal to the
//		amount the user enters. Returned to main.
//===============================================================
double getBalance()
{
	double bankBalance = 0.0;

	cout << "Enter your bank balance: ";
	cin >> bankBalance;

	return bankBalance;
}
//======end of getBalance()======================================
//
//===============================================================



//======start of getDeposit()====================================
//This function gets the bank deposit amount from the user and
//		returns the value to main.
// 
// Input: 
//		None
// 
// Output:
//		bankDeposit: A double value that is equal to the
//		amount the user enters. Returned to main.
//===============================================================

double getDeposit()
{
	double bankDeposit = 0.0;

	cout << "Enter the deposit amount: ";
	cin >> bankDeposit;

	return bankDeposit;
}
//======end of getDeposit()======================================
//
//===============================================================



//======start of calcNewBalance()================================
//This function gets the bank balance and bank deposit amount
//		from main and adds the two together.  Once the 
//		addition has been done, it returns the value to main.
// 
// Input: 
//		bankBalance: A double value that represents the bank
//		balance the user entered from before and is passed to
//		the function.
// 
//		bankDeposit: A double value that represents the bank
//		deposit the user entered from before and is passed to
//		the function.
// 
// Output:
//		A double value that represents the sum of both the 
//		bank balance and bank deposit is calculated and returned.
//===============================================================

double calcNewBalance(double bankBalance, double bankDeposit)
{
	return bankBalance + bankDeposit;
}
//======end of calcNewBalance()==================================
//
//===============================================================



//======start of displayBalance()================================
//This function displays the new bank balance of the user.
// 
// Input: 
//		bankBalance: A double value that represents the newly
//		added bank balance from earlier with the bank deposit.
//		Passed from main.
// 
// Output:
//		None
//===============================================================
void displayBalance(double bankBalance)
{
	cout << "Your new balance is $" << bankBalance << ".\n";
}
//======end of displayBalance()==================================
//
//===============================================================