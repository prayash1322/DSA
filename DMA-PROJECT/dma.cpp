#include<iostream>

using namespace std;

// Node class represents individual elements in the linked list...
class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Base class for Dynamic Memory Allocation using Linked List...
class DynamicMemoryAllocation {
private:
    Node* head;
    
public:
    // Constructor: Initialize empty list...
    DynamicMemoryAllocation() {
        head = nullptr;
    }
    
    // Destructor: Free all dynamically allocated memory...
    ~DynamicMemoryAllocation() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
    
    // Append: Add new node at the end of the list...
    void append(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    
    // Insert at beginning: Add new node at the start...
    void insert_at_beginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    
    // Search: Find if a key exists in the list...
    bool Search(int key) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == key) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    
    // Delete node: Remove first occurrence of key...
    void Delete_node(int key) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        
        if (head->data == key) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Node with value " << key << " deleted." << endl;
            return;
        }
        
        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != key) {
            temp = temp->next;
        }
        
        if (temp->next == nullptr) {
            cout << "Node with value " << key << " not found." << endl;
            return;
        }
        
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
        cout << "Node with value " << key << " deleted." << endl;
    }
    
    // Reverse: Reverse the entire linked list...
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;
        
        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    
    // Display: Print all elements in the list...
    void display() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) {
                cout << " ";
            }
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DynamicMemoryAllocation list;
    int choice, value;
    
    while (true) {
        cout << endl << "--- Linked List Operations ---" << endl;
        cout << "1. Add to linked list" << endl;
        cout << "2. Insert at Beginning of the linked list" << endl;
        cout << "3. Search in the linked list" << endl;
        cout << "4. Delete Node from the linked list" << endl;
        cout << "5. Reverse the Linked List" << endl;
        cout << "6. Display all the elements in the Linked List" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                list.append(value);
                cout << "Added successfully!" << endl;
                break;
                
            case 2:
                cout << "Enter value: ";
                cin >> value;
                list.insert_at_beginning(value);
                cout << "Inserted at beginning!" << endl;
                break;
                
            case 3:
                cout << "Enter value: ";
                cin >> value;
                if (list.Search(value)) {
                    cout << value << " found!" << endl;
                } else {
                    cout << value << " not found!" << endl;
                }
                break;
                
            case 4:
                cout << "Enter value: ";
                cin >> value;
                list.Delete_node(value);
                break;
                
            case 5:
                list.reverse();
                cout << "List reversed!" << endl;
                break;
                
            case 6:
                cout << "List: ";
                list.display();
                break;
                
            case 0:
                cout << "Goodbye! Thank you for using our DMA linked list operation!!" << endl;
                return 0;
                
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    
    return 0;
}