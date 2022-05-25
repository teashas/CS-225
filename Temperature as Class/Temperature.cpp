#include <iostream>
#include <cstdlib>
#include "Temperature.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

Temperature::Temperature()
{
	temperatureInCelsius = 0.0;

}

void Temperature::setTemperatureAsFahrenheit(double amount)
{
	temperatureInCelsius = (amount - fahrenheitAdd) / fahrenheitMultiply;
}

void Temperature::setTemperatureAsKelvin(double amount)
{
	temperatureInCelsius = amount - kelvinAdd;
}

double Temperature::getInFahrenheit()
{

	return (temperatureInCelsius) * (fahrenheitMultiply) + fahrenheitAdd; 
}

double Temperature::getInKelvin()
{

	return temperatureInCelsius + kelvinAdd; 
}

void Temperature::getTemperatureFromUser()
{
	double amount = 0.0;
	char units;
	bool goodInput = false;

	cout << " I will ask you for a temperature and its units.\n";
	cout << " For example, your input might be \"98.6 F\".\n";

	cout << "Use C for Celsius, F for Fahrenheit, K for Kelvin.\n" << endl;
	do {
		cout << "Enter a temperature followed by the units: ";
		cin >> amount >> units;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "I'm sorry. Your input failed. Please try again." << endl;
			goodInput = false;
		}
		else
			goodInput = true;
		if (goodInput) {
			switch (units) {

			case 'C':
			case 'c':
				setTemperatureAsCelsius(amount);
				break;
			case 'F':
			case 'f':
				setTemperatureAsFahrenheit(amount);
				break;
			case 'K':
			case 'k':
				setTemperatureAsKelvin(amount);
				break;
			default:
				cout << "The type was not recognizable as C, F, or K." << endl;
				goodInput = false;
			}
		}
	} while (!goodInput);
}