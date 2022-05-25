#pragma once

class Volume {
	double cubicCentimeters = 0.0;
public:
	Volume();
	void setInGallons(double amount);
	double getInCubicCentimeters() { return cubicCentimeters; }
};