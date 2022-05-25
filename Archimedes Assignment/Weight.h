#pragma once

class Weight {
	double grams = 0.0;
public:
	Weight();
	double getInGrams() { return grams; }
	void setInPounds(double amount);

};