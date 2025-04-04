#include <iostream>
#include <monotonic stack.h>

using namespace std;

MonotonicStack::~MonotonicStack()
{
    while (!stack.empty())
    {
        stack.pop_back();
    }
}

void MonotonicStack::push(int newValue)
{

    while (!stack.empty() && stack.back() > newValue)
    {
        stack.pop_back();
    }

    stack.push_back(newValue);
}

void MonotonicStack::pop()
{
    if (stack.empty())
    {
        throw runtime_error("Cannot get top of an empty stack");
    }

    stack.pop_back();
}

void MonotonicStack::print()
{

    for (auto it = stack.rbegin(); it != stack.rend(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;
}

int MonotonicStack::getTop()
{
    if (stack.empty())
    {
        throw runtime_error("Cannot get top of an empty stack");
    }

    return stack.back();
}

int MonotonicStack::getSize()
{
    return stack.size();
}

bool MonotonicStack::isEmpty()
{
    return stack.size() == 0;
}