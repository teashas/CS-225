#ifndef INTEGER_SET_H
#define INTEGER_SET_H
#include "IntegerBuffer.h"

class IntegerSet : public IntegerBuffer {
public:
    int add(int value) override;
    inline int add(const int array[], int arrayLength) {
        IntegerBuffer::add(array, arrayLength);
    }
};

#endif
