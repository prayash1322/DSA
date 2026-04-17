#include<iostream>

using namespace std;
void bubblesort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                swap(arr[j], arr[j+1]);
            }
            
        }
        
    }
    cout << "Sorted array is : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    cout << "Enter elements in array : " << endl;
    int arr[size];
    for(int i = 0; i < size; i++){
        cout << "Enter element no " << i << " : ";
        cin >> arr[i];
    }
    bubblesort(arr, size);
    return 0;
}