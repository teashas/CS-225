#ifndef ORDERED_INTEGER_BUFFER_H
#define ORDERED_INTEGER_BUFFER_H
#include "IntegerBuffer.h"

class OrderedIntegerBuffer : public IntegerBuffer {
public:
    int add(int value) override;
    inline int add(const int array[], int arrayLength) {
        IntegerBuffer::add(array, arrayLength);
    }
    inline int removeFast(int index) { return removeStable(index); }
};

#endif
