# Stack

A Stack is a fundamental data structure that follows the Last-In-First-Out (LIFO) principle.

## Features

- Push: Add an element to the top of the stack
- Pop: Remove and return the top element from the stack
- getTop: View the top element without removing it
- isEmpty: Check if the stack is empty
- isFull: Check if the stack is at capacity
- getSize: Get the number of elements in the stack
- print: Display all elements in the stack

## Why Use a Stack

1. Simplicity: Easy to implement and understand
2. Efficiency: Provides O(1) time complexity for basic operations
3. Memory management: Useful for tracking function calls and local variables
4. Reverse order operations: Naturally handles last-in-first-out scenarios

## When to Use a Stack

1. Function call management (call stack)
2. Expression evaluation and parsing
3. Undo/Redo functionality
4. Depth-First Search (DFS) algorithms
5. Browser history management
6. Balanced parentheses checking
7. Backtracking problems
8. Syntax parsing in compilers
9. Memory allocation (e.g., stack-based memory allocation)
10. Implementing recursion iteratively

## Advantages

- Simple implementation
- Efficient for LIFO operations (O(1) time complexity)
- Memory efficient for certain algorithms
- Helps in managing program flow and state

## Limitations

- Limited access (only top element is directly accessible)
- Not suitable for random access of elements
- Can lead to stack overflow if not managed properly

## Implementation

This folder contains a basic implementation of a Stack in [cpp]. See the source files for details.

## Time Complexity

- Push: O(1) amortized, O(n) worst case when resizing
- Pop: O(1)
- getTop: O(1)
- isEmpty: O(1)
- isFull: O(1)
- getSize: O(1)
- print: O(n)

## Space Complexity

- O(n), where n is the current capacity of the stack
