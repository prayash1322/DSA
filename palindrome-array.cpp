#include<iostream>
using namespace std;

bool isPalindrome(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter elements: " << i << " :";
        cin >> arr[i];
    }
    
    if (isPalindrome(arr, size)) {
        cout << "Array is palindrome" << endl;
    } else {
        cout << "Array is not palindrome" << endl;
    }
    
    return 0;
}
