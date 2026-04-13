#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int size, target, choice;
    cout << "Enter size: ";
    cin >> size;
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    
    cout << "Enter element to search: ";
    cin >> target;
    
    cout << "1. Linear Search\n2. Binary Search (sorted array)\nChoice: ";
    cin >> choice;
    
    int result = (choice == 1) ? linearSearch(arr, size, target) : binarySearch(arr, size, target);
    
    if (result != -1) cout << "Found at index " << result << endl;
    else cout << "Not found" << endl;
    
    return 0;
}
