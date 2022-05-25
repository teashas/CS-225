/*
* NAME:     Saima Teasha
* DATE:     Last edited 10/19/2020 at 12:20 PM
* FILE:     CS225 Homework 6
* FUNCTION: write a program that will report whether each item is pure gold or not. 
*           The density of pure gold is 19.32 grams per cubic centimeter (as 
*    		measured on earth). 
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Treasure.h"
#include "Volume.h"
#include "Weight.h"
using std::cout;
using std::endl;
using std::cin;

bool testTreasure();

int main() {
	Treasure t1;

	testTreasure();
	return EXIT_SUCCESS;
}

bool testTreasure()
{
	Weight localItemWeight;
	Volume localItemVolume;
	Treasure t1;
	double weight = 0.0;
	double volume = 0.0;
	bool goodInput = false;

	do {
		cout << "Enter weight (in lbs) and the volume (in gallons)"
			 << "of the object separated by a space:  ";
		cin >> weight >> volume;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(999, '\n');
			cout << "I'm sorry. Your input failed. Please try again." << endl;
			goodInput = false;
		}
		else
		{
			goodInput = true;

		}
		if (goodInput) {
			localItemWeight.setInPounds(weight);
			localItemVolume.setInGallons(volume);	
		}
		else
		{
			cout << "ERROR" << endl;
			goodInput = false;
		}
	} while (!goodInput);

	t1.setWeight(localItemWeight);
	t1.setVolume(localItemVolume);

	if (t1.isPure(t1.GOLD, t1.ONE_PERCENT)) {
		cout << "Treasure is pure.\n" << endl;
		return true;
	}
	else {
		cout << "Item is not pure.\n" << endl;
		return false;
	}
}