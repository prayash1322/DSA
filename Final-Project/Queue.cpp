#include<iostream>
using namespace std;

int queue[100];
int front = -1;
int rear = -1;
int n = 100;

void enqueue(int val) {
    if(rear >= n-1) {
        cout << "Queue Overflow" << endl;
    }
    else {
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = val;
        cout << val << " enqueued into queue" << endl;
    }
}

void dequeue() {
    if(front == -1 || front > rear) {
        cout << "Queue Underflow" << endl;
    }
    else {
        cout << queue[front] << " dequeued from queue" << endl;
        front++;
        if(front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

void display() {
    if(front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Queue elements are: ";
        for(int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}

int main() {
    int ch, val;
    cout << "Queue Implementation using Array" << endl;
    
    do {
        cout << endl << "1. Enqueue" << endl << "2. Dequeue" << endl << "3. Display" << endl << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;
        
        switch(ch) {
            case 1:
                cout << "Enter value to be enqueued: ";
                cin >> val;
                enqueue(val);
                break;
            case 2:
                dequeue();
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
    } while(ch != 4);
    
    return 0;
}
