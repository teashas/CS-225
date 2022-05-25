
#include <iostream>
#include <iomanip>
#include "IntegerBuffer.h"
using namespace std;

IntegerBuffer::IntegerBuffer(int arrayCapacity) 
{
	dataCapacity = arrayCapacity;
	dataLength = 0;
	data = new int[dataCapacity];
}

IntegerBuffer::IntegerBuffer(const IntegerBuffer & other)
{
	dataLength = other.dataLength;
	dataCapacity = other.dataCapacity;
	data = new int[dataCapacity];
	for (int i = 0; i < dataLength; i++) 
		data[i] = other.data[i];
}

IntegerBuffer::~IntegerBuffer()
{
    delete [] data;
	data = nullptr;
	dataLength = 0;
	dataCapacity = 0;

}

IntegerBuffer *IntegerBuffer::clone()
{
	IntegerBuffer* copy = new IntegerBuffer(dataCapacity);
	copy->dataLength = dataLength;
	for (int i = 0; i < dataLength; i++) 
		copy->data[i] = data[i];
	return copy;
}

void IntegerBuffer::clear()
{
	dataLength = 0;
}

int IntegerBuffer::add(int value)
{
	if (dataLength < dataCapacity) {
		data[dataLength] = value;
		dataLength++;
		return 1;
	} else {
		return 0;
	}
}

bool IntegerBuffer::compare(IntegerBuffer & other)
{
	if ((this->data == other.data) && (this->dataLength == other.dataLength))  {
		return true;
	}  else {
		return false;
	}
}