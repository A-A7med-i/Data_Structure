/**
 * @brief A Stack data structure implementation using a dynamic array.
 *
 * The `Stack` class provides a Last-In-First-Out (LIFO) data structure
 * that can automatically resize itself as elements are added or removed.
 * It supports common stack operations such as push, pop, and peek.
 *
 * @tparam T The type of elements stored in the stack.
 */

#include <iostream>

using namespace std;

template <class T>
class Stack
{
private:
    int top;
    int size;
    int capacity;
    T *array;
    void reSize(int newCapacity);

public:
    Stack();
    ~Stack();
    void push(T x);
    T pop();
    T getTop();
    int getSize();
    bool isEmpty();
    bool isFull();
    void print();
};
