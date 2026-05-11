#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insertAtBeginning(int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    cout << val << " inserted at beginning" << endl;
}

void insertAtEnd(int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        cout << val << " inserted at end" << endl;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    cout << val << " inserted at end" << endl;
}

void deleteFromBeginning()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node *temp = head;
    head = head->next;
    cout << temp->data << " deleted from beginning" << endl;
    delete temp;
}

void display()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node *temp = head;
    cout << "Linked List: ";
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    int ch, val;
    cout << "Singly Linked List Implementation" << endl;

    do
    {
        cout << endl
             << "1. Insert at Beginning" << endl
             << "2. Insert at End" << endl
             << "3. Delete from Beginning" << endl
             << "4. Display" << endl
             << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            insertAtBeginning(val);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> val;
            insertAtEnd(val);
            break;
        case 3:
            deleteFromBeginning();
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
        }
    } while (ch != 5);

    return 0;
}