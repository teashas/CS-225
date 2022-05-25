#include <iostream>
#include <iomanip>
#include "IntegerBuffer.h"
using namespace std;

IntegerBuffer::IntegerBuffer() {
    dataLength = 0;
}

void IntegerBuffer::print(int numberOfColumns, int columnWidth) const {
    int i = 0;
    for (i = 0; i < dataLength; i++) {
        if (i % numberOfColumns == 0 && i > 0)
            cout << '\n';
        cout << setw(columnWidth) << data[i];
    }
    cout << "\n";
}

int IntegerBuffer::copy(const IntegerBuffer* other) {
    if (this == other) {
        return dataLength;
    } else {
        clear();
        return add(other->data, other->dataLength);
    }
}

bool IntegerBuffer::compare(const IntegerBuffer* other) const {
    if (dataLength != other->dataLength)
        return false;
    else {
        for (int i = 0; i < dataLength; ++i)
            if (data[i] != other->data[i])
                return false;
        return true;
    }
}

void IntegerBuffer::clear() {
    dataLength = 0;
}

int IntegerBuffer::add(int value) {
    if (dataLength < dataCapacity) {
        data[dataLength] = value;
        ++dataLength;
        return 1;
    } else
        return 0;
}

int IntegerBuffer::add(const int array[], int arrayLength) {
    int count = 0;
    for (int i = 0; i < arrayLength; ++i)
        count += add(array[i]);
    return count;
}

int IntegerBuffer::index(int value) const {
    for (int i = 0; i < dataLength; ++i)
        if (data[i] == value)
            return i;
    return -1;
}

int IntegerBuffer::rindex(int value) const {
    for (int i = dataLength - 1; i >= 0; --i)
        if (data[i] == value)
            return i;
    return -1;
}

int IntegerBuffer::removeFast(int index) {
    if (index >= 0 && index < dataLength) {
        --dataLength;
        data[index] = data[dataLength];
        return 1;
    } else
        return 0;
}

int IntegerBuffer::removeStable(int index) {
    if (index >= 0 && index < dataLength) {
        --dataLength;
        for (int i = index; i < dataLength; i++)
            data[i] = data[i + 1];
        return 1;
    } else
        return 0;
}


