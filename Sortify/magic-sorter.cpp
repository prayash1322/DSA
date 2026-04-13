#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right, bool asc) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    
    for (int i = 0; i < n1; i++) 
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) 
        R[i] = arr[mid + 1 + i];
    
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (asc) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }
        } else {
            if (L[i] >= R[j]) {
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right, bool asc) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid, asc);
        mergeSort(arr, mid + 1, right, asc);
        merge(arr, left, mid, right, asc);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i << " elements: ";
        cin >> arr[i];
    }

    int even[n], odd[n];
    int eCount = 0, oCount = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[eCount] = arr[i];
            eCount++;
        } else {
            odd[oCount] = arr[i];
            oCount++;
        }
    }

    mergeSort(even, 0, eCount - 1, true);
    mergeSort(odd, 0, oCount - 1, false);

    cout << "\nSorted Array: ";
    for (int i = 0; i < oCount; i++) {
        cout << odd[i] << " ";
    }
    for (int i = 0; i < eCount; i++) {
        cout << even[i] << " ";
    }
    cout << endl;

    return 0;
}
