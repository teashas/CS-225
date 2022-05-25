#include <iostream>
#include "OrderedIntegerBuffer.h"
using std::cout;
using std::endl;

int OrderedIntegerBuffer::add(int value)
{
	int i = 0;
	int temp = 0;
	if(dataLength == 0) {
		dataLength++;
		data[0] = value;
		return 1;
	}
	for (i = 0; i < dataLength; i++) {
		if (value < data[i]) {
			temp = data[i];
			data[i] = value;
			value = temp;

		}
	}
	data[dataLength] = value;
	dataLength++;
	return 1;
}

int OrderedIntegerBuffer::add(const int array[], int arrayLength)
{
	if (dataLength < 32) {
		for (int i = 0; i < arrayLength; i++) {
			OrderedIntegerBuffer::add(array[i]);
		}
	}
	else {
		cout << "Maximum capacity reached." << endl;
	}
	return 0;
}

void OrderedIntegerBuffer::removeFast(int index)
{
	IntegerBuffer::removeStable(index);
}


void OrderedIntegerBuffer::copy(const IntegerBuffer * other)
{
	OrderedIntegerBuffer temp;
	this->clear();
	temp.IntegerBuffer::copy(other);
	OrderedIntegerBuffer::add(temp.data, temp.dataLength);
}

