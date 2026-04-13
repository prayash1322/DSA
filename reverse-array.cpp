#include<iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    
    reverseArray(arr, size);
    
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
