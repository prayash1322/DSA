#include<iostream>

using namespace std;

int main(){
    int size,postive = 0,negative = 0;
    cout << "Enter the size of array:- ";
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++) {
        cout << "Enter element [" << i << "] : ";
        cin >> arr[i];
    };

    for(int i=0; i<size; i++) {
        if (arr[i] >= 0)
        {
            postive++;
        }
        else{
            negative++;
        }
    };
    
    cout << "Positive numbers = " << postive << endl;
    cout << "Negative numbers = " << negative << endl;
    return 0;
}