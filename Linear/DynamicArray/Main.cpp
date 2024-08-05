#include <iostream>
#include "Implementation\Vector.h"

using namespace std;

int main()

{

    // Create a Vector object of integers

    Vector<int> myVector;

    // Test push_back method

    myVector.push_back(10);

    myVector.push_back(20);

    myVector.push_back(30);

    // Display the vector

    cout << "Vector contents:" << endl;

    myVector.display();

    // Test getSize method

    cout << "Vector size: " << myVector.getSize() << endl;

    // Test search method

    int searchElement1 = 20;

    int searchResult1 = myVector.search(searchElement1);

    if (searchResult1 != -1)
    {
        cout << searchElement1 << " found at index " << searchResult1 << endl;
    }

    else
    {
        cout << searchElement1 << " not found in the vector" << endl;
    }

    int searchElement2 = 2000;

    int searchResult2 = myVector.search(searchElement2);

    if (searchResult2 != -1)
    {
        cout << searchElement2 << " found at index " << searchResult2 << endl;
    }

    else
    {
        cout << searchElement2 << " not found in the vector" << endl;
    }

    // Test remove method

    myVector.remove(1);

    myVector.remove(10);

    myVector.display();

    // Test empty method

    cout << "Is vector empty? " << (myVector.empty() ? "Yes" : "No") << endl;

    return 0;
}