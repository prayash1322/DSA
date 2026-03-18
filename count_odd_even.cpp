#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int arr[num];
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    int oddCount = 0, evenCount = 0;

    for (int i = 0; i < num; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;

    return 0;
}
