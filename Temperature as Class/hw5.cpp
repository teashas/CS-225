/*
* NAME:     Saima Teasha
* DATE:     Last edited 9/29/2020 at 11:15 AM
* FILE:     CS225 Homework 4
* FUNCTION: An application that prompts the user to enter a temperature and the
*           type of units of that temperature. It then reports back the temperature
*           in 3 different units (Kelvin, Celsius, and Fahrenheit).
*/

#include <iostream>
#include <cstdlib>
#include "Temperature.h"
using std::cout;
using std::cin;
using std::endl;

int main() {
	Temperature t1;
	double fahrenheit = 0.0;
	double celsius = 0.0;
	double kelvin = 0.0;
	double amount = 0.0;
	char unit;

	t1.getTemperatureFromUser();
	

	if (unit = 'c') {
		fahrenheit = t1.getInFahrenheit();
		cout << "That temperature in fahrenheit is: " << fahrenheit << " F" << endl;
		kelvin = t1.getInKelvin();
		cout << "That temperature in kelvin is: " << kelvin << " K" << endl;
		celsius = t1.getInCelsius();
		cout << "That temperature in celsius is: " << celsius << " C" << endl;
	}
	else if (unit = 'k') {
		fahrenheit = t1.getInFahrenheit();
		cout << "That temperature in fahrenheit is: " << fahrenheit << " F" << endl;
		kelvin = t1.getInKelvin();
		cout << "That temperature in kelvin is: " << kelvin << " K" << endl;
		celsius = t1.getInCelsius();
		cout << "That temperature in celsius is: " << celsius << " C" << endl;
		
	}
	else {
		fahrenheit = t1.getInFahrenheit();
		cout << "That temperature in fahrenheit is: " << fahrenheit << " F" << endl;
		kelvin = t1.getInKelvin();
		cout << "That temperature in kelvin is: " << kelvin << " K" << endl;
		celsius = t1.getInCelsius();
		cout << "That temperature in celsius is: " << celsius << " C" << endl;
	}
	

	return EXIT_SUCCESS;
}