<h1>simple stack using dynamic array</h1>

it cover basic features of stack and minumin error cases

# Stack Data Structure

This repository contains a stack implementation in C++ using templates. The stack is a basic container that follows the **Last In, First Out (LIFO)** principle. It is implemented using a dynamic array to store the stack elements and automatically resizes the array when necessary.

## Files

- `stack.h` - The header file containing the stack class definition and its member functions.
- `main.cpp` - The main file that demonstrates how to use the `stack` class for different data types.

## Class: `stack<T>`

### Description:
The `stack` class is a generic template class that allows you to create a stack with elements of any data type. The class supports the basic stack operations such as `push`, `pop`, `peek`, and `print`. It dynamically resizes itself to accommodate more elements or reduce its capacity as needed.

### Member Variables:
- **T* arr**: A dynamic array to store stack elements.
- **size_t capacity**: The current capacity of the stack (number of elements the stack can hold before resizing).
- **int currtop**: The index of the current top element in the stack.

### Member Functions:

#### `stack(size_t cap = 2)`
- **Constructor**: Initializes a stack with a given capacity (default is 2). The stack starts as empty with `currtop` set to -1.

#### `void push(T val)`
- **Description**: Adds an element `val` to the top of the stack. If the stack reaches its full capacity, it will resize the array to double its current capacity.

#### `void pop()`
- **Description**: Removes the top element from the stack. If the stack's size drops below a quarter of its capacity, it will resize itself to half the current capacity.

#### `T peek()`
- **Description**: Returns the top element of the stack without removing it. If the stack is empty, it prints a message and returns -1.

#### `size_t getSize()`
- **Description**: Returns the current number of elements in the stack.

#### `size_t getCapacity()`
- **Description**: Returns the current capacity of the stack (i.e., the number of elements the stack can hold before resizing).

#### `void print()`
- **Description**: Prints all the elements in the stack from the bottom to the top.

#### `~stack()`
- **Destructor**: Frees the dynamically allocated memory when the stack object is destroyed.

### Private Functions:
- **isEmpty()**: Returns true if the stack is empty (i.e., `currtop == -1`).
- **resize(int newCap)**: Resizes the stack array to the new capacity (`newCap`). It copies the existing elements to the new array and frees the old one.

## Main File: `main.cpp`

The main file demonstrates how to use the `stack` class with different data types (`int`, `double`, and `string`). It performs several stack operations and prints the stack elements.

### Operations in the `main.cpp`:
1. A stack of integers (`stack<int> s`) is created.
2. The `push` function is used to add elements to the stack.
3. The `peek` function is used to view the top element of the stack.
4. The `pop` function is used to remove elements from the top of the stack.
5. The `getCapacity` and `getSize` functions are called to check the stack's capacity and current size.
6. The `print` function is used to display the current elements in the stack.

## Example Usage

```cpp
#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.peek();  // Outputs the top element: 40
    s.pop();   // Removes 40 from the stack
    s.pop();   // Removes 30 from the stack

    s.push(50);

    s.getCapacity();  // Outputs the current capacity of the stack
    s.getSize();      // Outputs the current size of the stack

    s.print();        // Prints the stack elements: 10, 20, 50
    return 0;
}

