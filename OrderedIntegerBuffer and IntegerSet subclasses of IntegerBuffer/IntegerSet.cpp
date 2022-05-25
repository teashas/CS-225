#include "IntegerSet.h"

int IntegerSet::add(int value)
{
	if (index(value) == -1) {
		IntegerBuffer::add(value);
		return 1;

	} else {
		return 0;

	}
	
}

int IntegerSet::add(const int array[], int arrayLength)
{
	int count = 0;
	for (int i = 0; i < arrayLength; i++) {
		if (add(array[i]) == 1) {
			count++;
		}
	}
	return count;
}

void IntegerSet::copy(const IntegerBuffer *other)
{
	IntegerSet temp;
	this->clear();
	temp.IntegerBuffer::copy(other);
	IntegerSet::add(temp.data, temp.dataLength);
}
