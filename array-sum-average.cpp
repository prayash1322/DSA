#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0, average;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number of elements." << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    average = sum / n;

    cout << "\n--- Results ---" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
