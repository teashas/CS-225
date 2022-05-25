#include "Volume.h"

Volume::Volume()
{
	cubicCentimeters = 0.0;
}

void Volume::setInGallons(double amount)
{
	cubicCentimeters = amount * 3785.41;
}

