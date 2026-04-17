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

    int positive = 0, negative = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        }
    }

    cout << endl << "Positive numbers: " << positive << endl;
    cout << "Negative numbers: " << negative << endl;

    return 0;
}
