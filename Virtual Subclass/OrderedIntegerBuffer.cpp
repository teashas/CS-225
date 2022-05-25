#include "OrderedIntegerBuffer.h"

#ifndef FASTER
#ifndef SLOWER

// This is the recommended solution
// It is broken into parts that are easy to understand
int OrderedIntegerBuffer::add(int value) {
    if (dataLength < dataCapacity) {
        int index = 0;
        // find the place where to insert value, can be either end, too
        for (index = 0; index < dataLength && data[index] < value; ++index);
        // shift any values needing to be shifted up by 1
        for (int i = dataLength; i > index; --i)
            data[i] = data[i - 1];
        // put the new value in the now freed up location
        data[index] = value;
        ++dataLength;
        return 1;
    } else
        return 0;
}

#endif
#endif


#ifdef FASTER
// Slightly more efficient is to do the moves while moves are needed
// and stop when we pass the insert point
int OrderedIntegerBuffer::add(int value) {
    if (dataLength < dataCapacity) {
        int i = 0;
        // shift any values needing to be shifted up by 1
        for (i = dataLength - 1; i >= 0 && data[i] > value; --i)
            data[i + 1] = data[i];
        // put the new value in the now freed up location
        data[i + 1] = value;
        ++dataLength;
        return 1;
    } else
        return 0;
}
#endif

#ifdef SLOWER
// For those who think that one loop is more efficient
// but make the loop go forward,
// which requires a "bubble" behavior starting with insert
// which makes it rather inefficient
int OrderedIntegerBuffer::add(int value) {
    if (dataLength < dataCapacity) {
        int temp = 0;
        // loop through the entire array
        for (int i = 0; i < dataLength; ++i) {
            // once reaching where value goes, bubble up
            if (data[i] > value) {
                temp = data[i];
                data[i] = value;
                value = temp;
            }
        }
        // finish bubbling at end (or assign if value goes there)
        data[dataLength] = value;
        ++dataLength;
        return 1;
    } else
        return 0;
}
#endif
