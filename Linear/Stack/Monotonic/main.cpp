#include <iostream>
#include "Implementation/monotonic stack.h"

using namespace std;

int main()
{
    MonotonicStack ms;

    ms.push(3);
    ms.push(1);
    ms.push(3);
    ms.push(4);

    ms.print(); // 4 3 1

    cout << "Size: " << ms.getSize() << endl; // Output: Size: 3

    cout << "Top: " << ms.getTop() << endl; // Output: Top: 4

    ms.pop();

    cout << "Top: " << ms.getTop() << endl; // Output: Top: 2

    cout << "Is empty: " << (ms.isEmpty() ? "Yes" : "No") << endl; // Output: Is empty: No

    return 0;
}