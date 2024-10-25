# Stack Implementation Using Dynamic Array

This folder contains an implementation of a Stack data structure using a dynamic array in C++.

## Files

1. `stack.h`: Header file containing the Stack class declaration.
2. `stack.cpp`: Implementation file for the Stack class methods.
3. `main.cpp`: Example usage of the Stack class.

## Stack Class

The Stack class is implemented using a dynamic array, which allows for efficient resizing as elements are added or removed. The class provides the following operations:

- `push`: Add an element to the top of the stack.
- `pop`: Remove and return the top element from the stack.
- `top`: Return the top element without removing it.
- `isEmpty`: Check if the stack is empty.
- `size`: Get the current number of elements in the stack.

## Usage

To use the Stack class in your project:

1. Include the `stack.h` header file in your source code.
2. Compile your code along with `stack.cpp`.
3. Create a Stack object and use its methods as needed.

For usage examples, please refer to the `main.cpp` file in this folder.

## Implementation Details

The Stack class uses a dynamic array to store elements. When the array reaches its capacity, it is resized to accommodate more elements. This approach provides a good balance between memory usage and performance.

For more details on the implementation, please refer to the comments in the source code files.
