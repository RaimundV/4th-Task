#ifndef vector_h
#define vector_h

#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <exception>
#include <vector>
#include <chrono>

template <typename ValueType>
class Vector {

public:

    Vector();
    explicit Vector(int n, ValueType value = ValueType());

    virtual ~Vector();

    int size() const;

    void clear();

    void add(ValueType value);

    void insert(int index, ValueType value);
    void push_back(ValueType value);

    ValueType & operator[](int index);
    const ValueType & operator[](int index) const;

    Vector operator+(const Vector & v2) const;
    Vector & operator+=(const Vector & v2);
    Vector & operator+=(const ValueType & value);


private:

    ValueType *elements;        /* A dynamic array of the elements   */
    int capacity;               /* The allocated size of the array   */
    int count;                  /* The number of elements in use     */

    void expandCapacity();

    void deepCopy(const Vector & src);

public:

    Vector(const Vector & src);
    Vector & operator=(const Vector & src);

};
template <typename ValueType>
Vector<ValueType>::Vector() {
    count = capacity = 0;
    elements = NULL;
}

template <typename ValueType>
Vector<ValueType>::Vector(int n, ValueType value) {
    count = capacity = n;
    elements = (n == 0) ? NULL : new ValueType[n];
    for (int i = 0; i < n; i++) {
        elements[i] = value;
    }
}

template <typename ValueType>
Vector<ValueType>::~Vector() {
    if (elements != NULL) delete[] elements;
}

template <typename ValueType>
int Vector<ValueType>::size() const {
    return count;
}

template <typename ValueType>
void Vector<ValueType>::clear() {
    if (elements != NULL) delete[] elements;
    count = capacity = 0;
    elements = NULL;
}

template <typename ValueType>
void Vector<ValueType>::insert(int index, ValueType value) {
    if (count == capacity) expandCapacity();
    if (index < 0 || index > count) {
        throw("insert: index out of range");
    }
    for (int i = count; i > index; i--) {
        elements[i] = elements[i - 1];
    }
    elements[index] = value;
    count++;
}

template <typename ValueType>
void Vector<ValueType>::push_back(ValueType value) {
    insert(count, value);
}

template <typename ValueType>
ValueType & Vector<ValueType>::operator[](int index) {
    if (index < 0 || index >= count) throw("Selection index out of range");
    return elements[index];
}
template <typename ValueType>
const ValueType & Vector<ValueType>::operator[](int index) const {
    if (index < 0 || index >= count) throw("Selection index out of range");
    return elements[index];
}

template <typename ValueType>
Vector<ValueType> & Vector<ValueType>::operator+=(const ValueType & value) {
    this->add(value);
    return *this;
}

template <typename ValueType>
Vector<ValueType>::Vector(const Vector & src) {
    deepCopy(src);
}

template <typename ValueType>
Vector<ValueType> & Vector<ValueType>::operator=(const Vector & src) {
    if (this != &src) {
        if (elements != NULL) delete[] elements;
        deepCopy(src);
    }
    return *this;
}

template <typename ValueType>
void Vector<ValueType>::deepCopy(const Vector & src) {
    count = capacity = src.count;
    elements = (capacity == 0) ? NULL : new ValueType[capacity];
    for (int i = 0; i < count; i++) {
        elements[i] = src.elements[i];
    }
}

template <typename ValueType>
void Vector<ValueType>::add(ValueType value) {
    insert(count, value);
}

template <typename ValueType>
void Vector<ValueType>::expandCapacity() {
    capacity = __max(1, capacity * 2);
    ValueType *array = new ValueType[capacity];
    for (int i = 0; i < count; i++) {
        array[i] = elements[i];
    }
    if (elements != NULL) delete[] elements;
    elements = array;
}
void TimeCheck(size_t amount);
#endif