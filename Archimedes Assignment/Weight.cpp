#include "Weight.h"

Weight::Weight()
{
	grams = 0.0;
}

void Weight::setInPounds(double amount)
{
	grams = amount * 454;
}


