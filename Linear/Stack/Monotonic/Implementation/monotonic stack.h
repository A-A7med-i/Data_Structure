#include <iostream>
#include <vector>

using namespace std;

class MonotonicStack
{
private:
    vector<int> stack;

public:
    ~MonotonicStack();
    void push(int newValue);
    void pop();
    int getTop();
    int getSize();
    bool isEmpty();
    void print();
};
