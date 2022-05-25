#include <iostream>
#include "Weight.h"
#include "Treasure.h"
#include "Volume.h"
using namespace std;

void Treasure::setWeight(Weight newItemWeight)
{
	itemWeight = newItemWeight;
}

void Treasure::setVolume(Volume newItemVolume)
{
	itemVolume = newItemVolume;
}

bool Treasure::isPure(double gold, double onePercent)
{
	double density = itemWeight.getInGrams() / itemVolume.getInCubicCentimeters();

	if((density < (gold * (1 + onePercent))) && (density > (gold * (1 - onePercent))))  {
		return true;
	}
	else
	{
		return false;
	}
	
}


