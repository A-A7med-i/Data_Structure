# Dynamic Array (Vector) Implementation

This project implements a dynamic array data structure, also known as a vector, in C++. The implementation is generic, allowing it to store elements of any data type.

## Features

The `Vector` class provides the following operations:

- `push_back(const T& value)`: Adds a new element to the end of the array.
- `remove(int position)`: Removes the element at the specified position.
- `search(T element)`: Searches for the specified element and returns its index, or -1 if not found.
- `display()`: Prints all the elements in the array.
- `empty()`: Returns `true` if the array is empty, `false` otherwise.
- `getSize()`: Returns the current number of elements in the array.
- `resize(int newCapacity)`: Resizes the internal array to the specified capacity.

## Implementation Details

- The vector is implemented using a dynamic array that automatically resizes when necessary.
- The initial capacity is 0, and the array grows by doubling its capacity plus one when full.
- The implementation is templated, allowing it to work with any data type.

## Usage

To use the Vector class in your C++ project:

1. Include the "Vector.h" header file in your source code.
2. Create a Vector object with the desired data type.
3. Use the provided methods to manipulate the vector.

For usage examples, please refer to the `main.cpp` file in this project.

## Time Complexity

- Push back: O(1) amortized
- Remove: O(n)
- Search: O(n)
- Display: O(n)
- Empty check: O(1)
- Get size: O(1)

Where n is the number of elements in the vector.

## Memory Usage

The vector uses dynamic memory allocation to store its elements. The memory usage grows as elements are added, but the vector may have unused capacity to allow for efficient growth.

## Note

This implementation is for educational purposes and may not include all the optimizations and features found in standard library implementations like `std::vector`.