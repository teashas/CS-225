/*******************************************************************************
*  Saima Teasha
*  CS225
*  program HW2
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
