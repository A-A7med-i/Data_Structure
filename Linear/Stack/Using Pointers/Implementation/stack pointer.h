#include <iostream>

using namespace std;

template <typename T>
struct Node
{
    T value;
    Node<T> *next;
};

template <typename T>
class Stack
{
private:
    int size;
    Node<T> *Top;

public:
    Stack();
    ~Stack();
    void push(T newValue);
    T pop();
    T getTop();
    int getSize();
    bool isEmpty();
    void print();
};
