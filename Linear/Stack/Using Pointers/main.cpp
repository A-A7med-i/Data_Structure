#include <iostream>
#include <Implementation/stack pointer.h>

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

    cout << s.getSize() << endl; // 3

    s.print(); // 4 3 2 1

    return 0;
}