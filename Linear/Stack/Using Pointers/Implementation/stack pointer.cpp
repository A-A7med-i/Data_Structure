#include <stack pointer.h>
#include <iostream>

using namespace std;

template <typename T>
Stack<T>::Stack()
{
    Top = nullptr;
    size = 0;
}

template <typename T>
Stack<T>::~Stack()
{
    while (!isEmpty())
    {
        pop();
    }
}

template <typename T>
void Stack<T>::push(T newValue)
{
    Node<T> *newItem = new Node<T>;
    newItem->value = newValue;
    newItem->next = Top;

    Top = newItem;

    size++;
}

template <typename T>
T Stack<T>::pop()
{
    if (isEmpty())
    {
        cout << "Cannot pop from an empty stack" << endl;
        return 0;
    }

    Node<T> *current = Top;

    T value_pop = current->value;

    Top = Top->next;

    delete current;

    size--;

    return value_pop;
}

template <typename T>
void Stack<T>::print()
{
    Node<T> *current = Top;

    while (current != nullptr)
    {
        cout << current->value << " ";
        current = current->next;
    }

    cout << endl;
}

template <typename T>
T Stack<T>::getTop()
{
    if (isEmpty())
    {
        throw runtime_error("Cannot get top of an empty stack");
    }

    return Top->value;
}

template <typename T>
int Stack<T>::getSize()
{
    return size;
}

template <typename T>
bool Stack<T>::isEmpty()
{
    return size == 0;
}