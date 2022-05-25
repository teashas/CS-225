#pragma once
using namespace std;

class Temperature {
	double temperatureInCelsius = 0.0;
	
	static constexpr double fahrenheitMultiply = 1.8;
	static constexpr double fahrenheitAdd = 32.0;
	static constexpr double kelvinAdd = 273.15;

public:
	Temperature();
	void setTemperatureAsCelsius(double amount) { temperatureInCelsius = amount; }
	void setTemperatureAsFahrenheit(double amount);
	void setTemperatureAsKelvin(double amount);
	double getInCelsius() { return temperatureInCelsius; }
	double getInFahrenheit();
	double getInKelvin(); 
	void getTemperatureFromUser();
};
