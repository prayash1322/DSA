#include <iostream>
using namespace std;

class Queue
{
    int front, rear, size, *arr , count = 0;

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
            cout << "Queue is Full! Cannot insert into Queue" << endl;
            return;
        }
        if (front == -1)
            front++;
            arr[++rear] = ele;
            cout << "Element " << ele << " inserted successfully." << endl;
            count++;
    }

    void dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is Empty! Cannot remove the element!!" << endl;
            return;
        }
        cout << "Element " << arr[front] << " removed." << endl;
        if (front == rear)
            front = rear = -1;
        else
            front++;
            count--;
    }

    inline void getFront()
    {
        if (front == -1)
        {
            cout << "Queue is Empty! Cannot remove the element!!" << endl;
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
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    void checkEmpty()
    {
        if (front == -1)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            cout << "Queue is not Empty" << endl;
        }
    }

    void checkFull()
    {
        if (rear == size - 1)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            cout << "Queue is not Full" << endl;
        }
    }

    void getSize()
    {
        cout << "Size of the queue is: " << count << endl;
    }
};

int main()
{
    int choice, ele;
    Queue q;

    do
    {
        cout << endl << "=== Queue Operations ===" << endl;
        cout << "1. Add (enqueue) in the queue" << endl;
        cout << "2. Remove (dequeue) from the queue" << endl;
        cout << "3. Get front element" << endl;
        cout << "4. Get rear element" << endl;
        cout << "5. Display queue" << endl;
        cout << "6. Check if queue is empty" << endl;
        cout << "7. Check if queue is full" << endl;
        cout << "8. Get queue size" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element to insert in to queue: ";
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
            cout << "Exiting the program thank you for using!!..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 0);

    return 0;
}