#include<iostream>
using namespace std;

const int MAX_SIZE = 100;

void displayMenu() {
    cout << "\n===== CRUD Operations Menu =====" << endl;
    cout << "1. Create (Add element)" << endl;
    cout << "2. Read (Display all elements)" << endl;
    cout << "3. Update (Modify element)" << endl;
    cout << "4. Delete (Remove element)" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

void create(int arr[], int &size) {
    if (size >= MAX_SIZE) {
        cout << "Array is full! Cannot add more elements." << endl;
        return;
    }
    cout << "Enter element to add: ";
    cin >> arr[size];
    size++;
    cout << "Element added successfully!" << endl;
}

void read(const int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    cout << "\nArray elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void update(int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    int index;
    cout << "Enter index (0 to " << size - 1 << "): ";
    cin >> index;
    if (index < 0 || index >= size) {
        cout << "Invalid index!" << endl;
        return;
    }
    cout << "Current value at index " << index << " is: " << arr[index] << endl;
    cout << "Enter new value: ";
    cin >> arr[index];
    cout << "Element updated successfully!" << endl;
}

void deleteElement(int arr[], int &size) {
    if (size == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    int index;
    cout << "Enter index to delete (0 to " << size - 1 << "): ";
    cin >> index;
    if (index < 0 || index >= size) {
        cout << "Invalid index!" << endl;
        return;
    }
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Element deleted successfully!" << endl;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                create(arr, size);
                break;
            case 2:
                read(arr, size);
                break;
            case 3:
                update(arr, size);
                break;
            case 4:
                deleteElement(arr, size);
                break;
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
