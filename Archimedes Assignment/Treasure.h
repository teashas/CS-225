#include "Weight.h"
#include "Volume.h"
#pragma once


class Treasure {
	Weight itemWeight;
	Volume itemVolume;
	
public:
	void setWeight(Weight newItemWeight);
	void setVolume(Volume newItemVolume);
	bool isPure(double gold, double onePercent);
	static constexpr double GOLD = 19.3;
	static constexpr double SILVER = 10.5;
	static constexpr double ONE_PERCENT = 0.01;
	static constexpr double TENTH_PERCENT = 0.001;
};