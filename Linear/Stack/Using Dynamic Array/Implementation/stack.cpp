/**
 * @brief Implements a Stack data structure using a dynamic array.
 *
 * The `Stack` class provides a Last-In-First-Out (LIFO) data structure
 * that can automatically resize itself as elements are added or removed.
 * It supports the following operations:
 *
 * - `push(T x)`: Adds an element to the top of the stack.
 * - `pop()`: Removes and returns the top element from the stack.
 * - `getTop()`: Returns the top element without removing it.
 * - `getSize()`: Returns the current number of elements in the stack.
 * - `isEmpty()`: Checks if the stack is empty.
 * - `isFull()`: Checks if the stack is at capacity.
 * - `print()`: Displays all elements in the stack.
 *
 * The `Stack` class is implemented as a template, allowing it to store elements of any type `T`.
 */

#include "stack.h"
#include <iostream>

using namespace std;

template <class T>
void Stack<T>::reSize(int newCapacity)
{
    T *newArray = new T[newCapacity];

    for (size_t i = 0; i < size; i++)
        newArray[i] = array[i];

    delete[] array;
    capacity = newCapacity;
    array = newArray;
}

template <class T>
Stack<T>::Stack() : size(0), capacity(0)
{
    top = -1;
    array = new T[capacity];
}

template <class T>
Stack<T>::~Stack()
{
    delete[] array;
}

template <class T>
void Stack<T>::push(T x)
{
    if (size == capacity)
        reSize(capacity * 2 + 1);

    array[++top] = x;
    size++;
}

template <class T>
T Stack<T>::pop()
{
    if (isEmpty())
        throw runtime_error("Stack is empty");

    size--;
    return array[top--];
}

template <class T>
T Stack<T>::getTop()
{
    if (isEmpty())
        throw runtime_error("Stack is empty");

    return array[top];
}

template <class T>
int Stack<T>::getSize()
{
    return size;
}

template <class T>
bool Stack<T>::isEmpty()
{
    return size == 0;
}

template <class T>
bool Stack<T>::isFull()
{
    return size == capacity;
}

template <class T>
void Stack<T>::print()
{
    for (size_t i = 0; i < size; i++)
        cout << array[i] << " ";

    cout << endl;
}
