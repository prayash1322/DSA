#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n], unique[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i << " elements: ";
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < count; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            unique[count++] = arr[i];
        }
    }

    cout << "\nUnique elements: ";
    for (int i = 0; i < count; i++) {
        cout << unique[i] << " ";
    }
    cout << endl;

    return 0;
}
