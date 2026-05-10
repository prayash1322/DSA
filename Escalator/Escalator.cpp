#include<iostream>
using namespace std;

class BaseStack {
protected:
    int capacity;
public:
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual ~BaseStack() {}
};

class Stack : public BaseStack {
private:
    int* arr;
    int topIndex;
public:
    Stack(int size = 10) {
        capacity = size;
        arr = new int[capacity];
        topIndex = -1;
    }
    
    ~Stack() {
        delete[] arr;
    }
    
    void push(int value) {
        if (isFull()) {
            cout << "Stack is full! Cannot push " << value << endl;
            return;
        }
        arr[++topIndex] = value;
        cout << "Pushed " << value << " to stack" << endl;
    }
    
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty! Cannot pop" << endl;
            return;
        }
        cout << "Popped " << arr[topIndex--] << " from stack" << endl;
    }
    
    int top() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[topIndex];
    }
    
    bool isEmpty() override {
        return topIndex == -1;
    }
    
    bool isFull() override {
        return topIndex == capacity - 1;
    }
};

int main() {
    int size, choice, value;
    
    cout << "Enter stack size: ";
    cin >> size;
    
    Stack stack(size);
    
    do {
        cout << "\n--- Stack Menu ---" << endl;
        cout << "1. Push an element" << endl;
        cout << "2. Pop an element" << endl;
        cout << "3. Display top element" << endl;
        cout << "4. Check if empty" << endl;
        cout << "5. Check if full" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                if (!stack.isEmpty())
                    cout << "Top element: " << stack.top() << endl;
                break;
            case 4:
                cout << (stack.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;
                break;
            case 5:
                cout << (stack.isFull() ? "Stack is full" : "Stack is not full") << endl;
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while(choice != 0);
    
    return 0;
}