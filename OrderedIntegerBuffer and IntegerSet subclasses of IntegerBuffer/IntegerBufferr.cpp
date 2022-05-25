#include <iostream>
#include <iomanip>
#include "IntegerBuffer.h"
using namespace std;

IntegerBuffer::IntegerBuffer()
{
	dataLength = 0;
}

void IntegerBuffer::clear()
{
	dataLength = 0;
}

int IntegerBuffer::add(int value)
{
	if ((dataLength >= dataCapacity)) {
		return 0;
	}
	else {
		data[dataLength] = value;
		dataLength++;
		return 1;
	}
}

int IntegerBuffer::add(const int array[], int arrayLength)
{
	int count = 0;
	for (int i = 0; i < arrayLength; i++) {
		if (add(array[i]) == 1) {
			 count++;
		}
	}
	return count;
}

int IntegerBuffer::removeFast(int index)
{
	int lastArray = 0;

	if ((index >= 0) && (index < dataLength)) {
		lastArray = data[dataLength--];
		data[index] = lastArray;
	}
	return 0;
}

int IntegerBuffer::removeStable(int index)
{
	int i = 0;
	if ((index >= 0) && (index < dataLength)) {
		dataLength--;
		for (i = index; i < dataLength; i++) {
			data[index] = data[index + 1];
		}
		return 1;
	}
	return 0;
}

int IntegerBuffer::index(int value) const
{
	for (int i = 0; i < dataLength; i++) {
		if (data[i] == value) {
			return i;
		}
	}
	return -1;
}

int IntegerBuffer::rindex(int value) const
{
	for (int i = dataLength - 1; i >= 0; i--) {
		if (data[i] == value) {
			return i;
		}
	}
	return -1;
}

void IntegerBuffer::print(int numberOfColumns, int columnWidth) const
{
	cout << fixed;
	for (int i = 0; i < dataLength; i++) {
		if ((i % numberOfColumns == 0) && (i > 0)) {
			cout << "\n";
		}
		cout << setw(columnWidth) << data[i];
	}
	cout << "\n";
}

void IntegerBuffer::copy(const IntegerBuffer *other)
{
	clear();
	add(other->data, other->dataLength);
	
}

bool IntegerBuffer::compare(const IntegerBuffer *other) const
{
	if ((other->dataLength == this->dataLength) && (other->data[dataCapacity] == this->data[dataCapacity])) {
		return true;
	}
	else {
		return false;
	}
}
