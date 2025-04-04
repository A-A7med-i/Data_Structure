/**
 * @brief Implements a dynamic array data structure that can grow and shrink in size as needed.
 *
 * The `Vector` class provides a dynamic array implementation that can automatically resize itself
 * as elements are added or removed. It supports the following operations:
 *
 * - `resize(int newCapacity)`: Resizes the internal array to the specified capacity.
 * - `push_back(const T& value)`: Adds a new element to the end of the array.
 * - `remove(int position)`: Removes the element at the specified position.
 * - `search(T element)`: Searches for the specified element and returns its index, or -1 if not found.
 * - `display()`: Prints all the elements in the array.
 * - `empty()`: Returns `true` if the array is empty, `false` otherwise.
 * - `getSize()`: Returns the current size of the array.
 *
 * The `Vector` class is implemented as a template, allowing it to store elements of any type `T`.
 */
#include <iostream>
#include "Vector.h"

using namespace std;

template <class T>
void Vector<T>::resize(int newCapacity)
{
    T *newArray = new T[newCapacity];

    for (size_t i = 0; i < size; i++)
    {
        newArray[i] = array[i];
    }

    delete[] array;
    array = newArray;
    capacity = newCapacity;
}

template <class T>
Vector<T>::Vector() : size(0), array(nullptr), capacity(0)
{
}

template <class T>
Vector<T>::~Vector()
{
    delete[] array;
}

template <class T>
void Vector<T>::push_back(const T &value)
{
    if (size == capacity)
    {
        resize(capacity * 2 + 1);
    }

    array[size++] = value;
}

template <class T>
void Vector<T>::remove(int position)
{
    if (position < 0 || empty() || position > size)
        cout << "Invalid position" << endl;

    else
    {
        for (size_t i = position; i < size - 1; i++)
        {
            array[i] = array[i + 1];
        }

        size--;

        cout << "Element at postion " << position << " is removed" << endl;
    }
}

template <class T>
int Vector<T>::search(T element)
{

    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == element)
            return i;
    }

    return -1;
}

template <class T>
void Vector<T>::display()
{
    for (T *i = array; i != array + size; i++)
    {
        cout << *i << " " << endl;
    }
}

template <class T>
bool Vector<T>::empty()
{
    return size == 0;
}

template <class T>
int Vector<T>::getSize()
{
    return size;
}