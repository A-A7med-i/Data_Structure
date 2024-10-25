#include <iostream>
#include "Implementation\stack.h"

using namespace std;

int main()
{
    Stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << s.getTop() << endl; // 5

    s.pop();

    cout << s.getTop() << endl; // 4

    cout << s.getSize() << endl; // 4

    s.print(); // 1 2 3 4

    return 0;
}