/**
 * @brief A dynamic array implementation in C++.
 *
 * The `Vector` class provides a dynamic array data structure that can grow and shrink in size as needed. It supports common array operations such as adding, removing, and searching elements.
 *
 * @tparam T The type of elements stored in the vector.
 */

#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

using namespace std;

template <class T>
class Vector
{
private:
    int size;
    T *array;
    int capacity;
    void resize(int newCapacity);

public:
    Vector();
    int getSize();
    void push_back(const T &value);
    void remove(int position);
    int search(T element);
    void display();
    bool empty();
    ~Vector();
};
#endif