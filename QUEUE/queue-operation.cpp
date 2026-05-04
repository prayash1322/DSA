#include <iostream>
using namespace std;

class Queue
{
    int front, rear, size, *arr;

public:
    Queue()
    {
        cout << "Enter the size of Queue:- ";
        cin >> size;
        arr = new int[size];
        front = rear = -1;
    }
    ~Queue()
    {
        delete[] arr;
    }

    void enqueue(int ele)
    {
        if (rear == size - 1)
        {
            cout << "Queue is Full! Cannot insert into Queue\n";
            return;
        }
        if (front == -1)
            front++;
        arr[++rear] = ele;
        cout << "Element " << ele << " inserted successfully.\n";
    }

    void dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is Empty! Cannot remove the element!!\n";
            return;
        }
        cout << "Element " << arr[front] << " removed.\n";
        if (front == rear)
            front = rear = -1;
        else
            front++;
    }

    inline void getFront()
    {
        if (front == -1)
        {
            cout << "Queue is Empty! Cannot remove the element!!\n";
            return;
        }
        cout << "Front element is: " << arr[front] << endl;
    }

    void getRear()
    {
        if (front == -1)
        {
            cout << "Queue is Empty! Cannot remove the element!!" << endl;
            return;
        }
        cout << "Rear element: " << arr[rear] << " " <<endl;
    }

    void display()
    {
        if (front == -1)
        {
            cout << "Queue is Empty!\n";
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }

    void checkEmpty()
    {
        if (front == -1)
        {
            cout << "Queue is Empty\n";
        }
        else
        {
            cout << "Queue is not Empty\n";
        }
    }

    void checkFull()
    {
        if (rear == size - 1)
        {
            cout << "Queue is Full\n";
        }
        else
        {
            cout << "Queue is not Full\n";
        }
    }

    void getSize()
    {
        cout << "Size: " << (front == -1 ? 0 : rear - front + 1) << "\n";
    }
};

int main()
{
    int choice, ele;
    Queue q;

    do
    {
        cout << "\n=== Queue Operations ===\n";
        cout << "1. Add (enqueue) in the queue\n";
        cout << "2. Remove (dequeue) from the queue\n";
        cout << "3. Get front element\n";
        cout << "4. Get rear element\n";
        cout << "5. Display queue\n";
        cout << "6. Check if queue is empty\n";
        cout << "7. Check if queue is full\n";
        cout << "8. Get queue size\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element: ";
            cin >> ele;
            q.enqueue(ele);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.getFront();
            break;
        case 4:
            q.getRear();
            break;
        case 5:
            q.display();
            break;
        case 6:
            q.checkEmpty();
            break;
        case 7:
            q.checkFull();
            break;
        case 8:
            q.getSize();
            break;
        case 0:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}