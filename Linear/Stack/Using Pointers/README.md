# Stack Implementation Using Pointers

This folder contains a C++ implementation of a Stack data structure using pointers. The stack is implemented as a template class, allowing it to work with various data types.

## Files

1. `Implementation/stack pointer.h`: Header file containing the Stack class declaration.
2. `Implementation/stack pointer.cpp`: Source file containing the Stack class implementation.
3. `main.cpp`: Example usage of the Stack class.

## Stack Class

The Stack class is implemented with the following features:

- Template-based implementation for type flexibility
- Linked list structure using nodes
- Basic stack operations: push, pop, top
- Additional utility functions: size, isEmpty, print

### Public Methods

- `push(T newValue)`: Add a new element to the top of the stack
- `pop()`: Remove and return the top element from the stack
- `getTop()`: Return the top element without removing it
- `getSize()`: Return the current size of the stack
- `isEmpty()`: Check if the stack is empty
- `print()`: Display all elements in the stack

## Usage

To use the Stack class in your project:

1. Include the header file:
   ```cpp
   #include <Implementation/stack pointer.h>
   ```

2. Create a Stack object with the desired data type:
   ```cpp
   Stack<int> s;
   ```

3. Use the available methods to manipulate the stack:
   ```cpp
   s.push(5);
   int top = s.getTop();
   s.pop();
   s.print();
   ```

For a complete example, refer to the `main.cpp` file in this folder.

## Example

Here's a brief example of how to use the Stack class:

```cpp
#include <Implementation/stack pointer.h>

int main() {
    Stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    int top = s.getTop();
    std::cout << "Top element: " << top << std::endl;

    s.pop();
    s.print();

    return 0;
}
```

This example demonstrates creating a stack, pushing elements, accessing the top element, popping an element, and printing the stack contents.

## Notes

- The implementation uses dynamic memory allocation, so proper memory management is handled in the destructor.
- Error handling is implemented for operations on an empty stack.
- The stack grows dynamically as elements are added, limited only by available memory.
