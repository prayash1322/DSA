#include<iostream>

using namespace std;

// Traversing an array

int main(){
    int size;
    cout << "Enter the size of array:- ";
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++) {
        cout << "Enter element [" << i << "] : ";
        cin >> arr[i];
    };

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    };
    cout << endl;
    return 0;
}