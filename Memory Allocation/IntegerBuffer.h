#include <iostream>
#include <iomanip>
#pragma once
using namespace std;
class IntegerBuffer
{
private:
	int* data;
	int dataLength;
	int dataCapacity;
public:
	IntegerBuffer(int capacity);
	~IntegerBuffer();
	IntegerBuffer(const IntegerBuffer &other);
	IntegerBuffer* clone();
	bool compare(IntegerBuffer &other);
	void clear();
	int add(int value);
	int add(const int array[], int arrayLength);
	int removeFast(int index);
	int removeStable(int index);
	int index(int value) const;
	int rindex(int value) const;
	void print(int numberOfColumns, int columnWidth) const;
	int getCapacity() const { return dataCapacity; }
	int getLength() const { return dataLength; }
};