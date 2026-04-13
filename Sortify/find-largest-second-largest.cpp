#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i << " elements: ";
        cin >> arr[i];
    }

    int largest = arr[0], secondLargest = arr[0];
    bool found = false;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
            found = true;
        } else if (arr[i] != largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
            found = true;
        }
    }

    cout << "\nLargest: " << largest << endl;
    if (found && secondLargest != largest) {
        cout << "Second Largest: " << secondLargest << endl;
    } else {
        cout << "Second Largest: Not found" << endl;
    }

    return 0;
}
