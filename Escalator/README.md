# Stack Implementation in C++

## Project: Escalator

### Overview
This project implements a Stack data structure in C++ using arrays, demonstrating core Object-Oriented Programming concepts.

### OOP Concepts Implemented
- ✅ **Class & Object**: Stack class with object instantiation
- ✅ **Inheritance**: Stack inherits from BaseStack
- ✅ **Polymorphism**: Virtual functions with override
- ✅ **Encapsulation**: Private data members with public methods

### Features
1. **Push an element** - Adds element to stack with overflow check
2. **Pop an element** - Removes top element with underflow check
3. **Display top element** - Shows top element without removing
4. **Check if empty** - Verifies if stack is empty
5. **Check if full** - Verifies if stack is full

### How to Compile and Run
```bash
g++ Escalator.cpp -o Escalator
./Escalator
```

### Sample Output

#### Screenshot 1: Stack Operations
```
Enter stack size: 5

--- Stack Menu ---
1. Push an element
2. Pop an element
3. Display top element
4. Check if empty
5. Check if full
0. Exit
Enter choice: 1
Enter value to push: 10
Pushed 10 to stack

--- Stack Menu ---
1. Push an element
2. Pop an element
3. Display top element
4. Check if empty
5. Check if full
0. Exit
Enter choice: 1
Enter value to push: 20
Pushed 20 to stack

--- Stack Menu ---
1. Push an element
2. Pop an element
3. Display top element
4. Check if empty
5. Check if full
0. Exit
Enter choice: 3
Top element: 20

--- Stack Menu ---
1. Push an element
2. Pop an element
3. Display top element
4. Check if empty
5. Check if full
0. Exit
Enter choice: 2
Popped 20 from stack

--- Stack Menu ---
1. Push an element
2. Pop an element
3. Display top element
4. Check if empty
5. Check if full
0. Exit
Enter choice: 4
Stack is not empty

--- Stack Menu ---
1. Push an element
2. Pop an element
3. Display top element
4. Check if empty
5. Check if full
0. Exit
Enter choice: 0
Exiting...
```

### Project Structure
```
Escalator/
├── Escalator.cpp    # Main implementation file
└── README.md        # Project documentation
```

### Class Structure

#### BaseStack (Abstract Base Class)
- Pure virtual functions for polymorphism
- Protected capacity member

#### Stack (Derived Class)
- Private members: arr[], topIndex
- Public methods: push(), pop(), top(), isEmpty(), isFull()
- Constructor with dynamic memory allocation
- Destructor for memory cleanup

### Time Complexity
- Push: O(1)
- Pop: O(1)
- Top: O(1)
- isEmpty: O(1)
- isFull: O(1)

### Space Complexity
O(n) where n is the stack size

---

**Note**: Add actual screenshots of your program output here before submission.
