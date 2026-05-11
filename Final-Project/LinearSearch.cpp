#include <iostream>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)

int linearSearch(int arr[], int n, int key, int &comparisons)
{
    comparisons = 0;
    for (int i = 0; i < n; i++)
    {
        comparisons++;
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, key, comparisons;
    cout << "Linear Search Implementation" << endl;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int position = linearSearch(arr, n, key, comparisons);

    if (position != -1)
    {
        cout << "Element " << key << " found at position " << position + 1 << endl;
    }
    else
    {
        cout << "Element " << key << " not found" << endl;
    }

    cout << "Number of comparisons made: " << comparisons << endl;

    return 0;
}
