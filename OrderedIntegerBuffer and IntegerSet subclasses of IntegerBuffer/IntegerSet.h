#pragma once
#include "IntegerBuffer.h"

class IntegerSet : public IntegerBuffer {
public: 
	int add(int value);
	int add(const int array[], int arrayLength);
	void copy(const IntegerBuffer *other);
};

