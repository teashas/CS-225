#ifndef INTEGER_BUFFER_H
#define INTEGER_BUFFER_H

class IntegerBuffer {
protected:
    static const int dataCapacity = 32;
    int data[dataCapacity];
    int dataLength;
public:
    IntegerBuffer();
    void clear();
    virtual int add(int value);
    int add(const int array[], int arrayLength);
    int index(int value) const;
    int rindex(int value) const;
    int removeFast(int index);
    int removeStable(int index);
    void print(int numberOfColumns, int columnWidth) const;
    int copy(const IntegerBuffer* other);
    bool compare(const IntegerBuffer* other) const;
    int getCapacity() const { return dataCapacity; }
    int getLength() const { return dataLength; }
};

#endif
