#include <iostream>
using namespace std;

int stack[100];
int top = -1;
int n = 100;

void push(int val)
{
    if (top >= n - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = val;
        cout << val << " pushed into stack" << endl;
    }
}

void pop()
{
    if (top <= -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        cout << stack[top] << " popped from stack" << endl;
        top--;
    }
}

void display()
{
    if (top >= 0)
    {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
    else
    {
        cout << "Stack is empty" << endl;
    }
}

int main()
{
    int ch, val;
    cout << "Stack Implementation using Array" << endl;

    do
    {
        cout << endl
             << "1. Push" << endl
             << "2. Pop" << endl
             << "3. Display" << endl
             << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter value to be pushed: ";
            cin >> val;
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
        }
    } while (ch != 4);

    return 0;
}