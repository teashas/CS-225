/*******************************************************************************
*  Saima Teasha
*  CS225
*  program HW1
*
*  In main, declare variables for two ints, called year and day, one double, 
*  called pi, and two strings, called month and name – of the new string type
*  in C++. Prompt for and read in today’s year and day of the month. 
*  Prompt for and read in a number of the user’s choice and as much of pi as 
*  they can remember. Prompt for and read in the name of this month, and the 
*  user’s full name. Print out the day in the format: “May 14, 2019”. 
*  Print out the value of pi to 3, 4, and 5 decimal places. 
*  Print out a welcome to the user: “Welcome to CS125, full name!”. 
*  Upgrade your program so it detects and reprompts for bad input for both 
*  ints and the double. 
*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	int day = 0;
	int year = 0;
	double pi = 3.14159;
	string month;
	string name;

	cout << "Enter the year: ";
	cin >> year;
	while (cin.fail() || year < 0) {
		cout << "Not a valid year, try again: " << endl;
		cin.clear();
		cin.ignore(999, '\n');
		cin >> year;
	}

	cout << "Enter the day of the month: ";
	cin >> day;
	while (cin.fail() || day < 0) {
		cout << "Not a valid day, try again: " << endl;
		cin.clear();
		cin.ignore(999, '\n');
		cin >> day;
	}

	cout << "Enter as much of pi as you can remember: ";
	cin >> pi;
	while (cin.fail()) {
		cout << "Not a valid, try again: " << endl;
		cin.clear();
		cin.ignore(999, '\n');
		cin >> pi;
	}

	cout << "Enter the month: ";
	cin >> month;
	while (cin.fail()) {
		cout << "Not a valid month, try again: " << endl;
		cin.clear();
		cin.ignore(999, '\n');
		cin >> month;
	}

	cout << "Enter your full name: ";
	cin.ignore(999, '\n');
	getline(cin, name);

	cout << month << " "
		<< day << ", "
		<< year << endl;
	cout << setprecision(4) << pi << endl;
	cout << setprecision(5) << pi << endl;
	cout << setprecision(6) << pi << endl;
	cout << "Welcome to CS225 " << name << "!" << endl;

	system("PAUSE");
	return EXIT_SUCCESS; 
}
