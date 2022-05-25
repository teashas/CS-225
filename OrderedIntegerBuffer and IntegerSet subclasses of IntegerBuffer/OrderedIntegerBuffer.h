#pragma once
#include "IntegerBuffer.h"
class OrderedIntegerBuffer : public IntegerBuffer {
public:
	int add(int value);
	int add(const int array[], int arrayLength);
	void removeFast(int index);
	void copy(const IntegerBuffer *other);
	
};

