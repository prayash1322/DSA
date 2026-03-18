#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "==========================================" << endl;
    cout << "      ADVANCED ARRAY CONCEPTS IN DSA     " << endl;
    cout << "==========================================" << endl << endl;

    // ============================================================
    // 1. STATIC vs DYNAMIC ARRAYS
    // ============================================================
    cout << "1. STATIC vs DYNAMIC ARRAYS" << endl;
    cout << "---------------------------" << endl;
    cout << "Static Array: Fixed size, allocated on stack" << endl;
    cout << "Dynamic Array: Resizable, allocated on heap" << endl << endl;

    // Static array - size fixed at compile time
    int staticArr[5] = {1, 2, 3, 4, 5};
    cout << "Static Array: ";
    for (int i = 0; i < 5; i++) cout << staticArr[i] << " ";
    cout << endl;

    // Dynamic array using vector (C++ implementation of dynamic array)
    vector<int> dynamicArr = {1, 2, 3};
    cout << "Dynamic Array (initial): ";
    for (int x : dynamicArr) cout << x << " ";

    dynamicArr.push_back(4);  // Can grow
    dynamicArr.push_back(5);
    cout << "\nAfter adding elements: ";
    for (int x : dynamicArr) cout << x << " ";
    cout << endl << endl;

    // ============================================================
    // 2. MULTI-DIMENSIONAL ARRAYS
    // ============================================================
    cout << "2. MULTI-DENSIONAL ARRAYS" << endl;
    cout << "-------------------------" << endl;
    cout << "Arrays with more than one dimension (2D, 3D, etc.)" << endl;
    cout << "Memory layout: Row-major (C/C++) or Column-major" << endl << endl;

    // 2D Array (Matrix)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "2D Array (3x3 Matrix):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nAccess: matrix[1][2] = " << matrix[1][2] << endl;
    cout << "Memory address calculation: base + (i * cols + j) * size" << endl << endl;

    // ============================================================
    // 3. ARRAY TRAVERSAL TECHNIQUES
    // ============================================================
    cout << "3. ARRAY TRAVERSAL TECHNIQUES" << endl;
    cout << "-----------------------------" << endl;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Linear traversal
    cout << "Linear Traversal: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // Reverse traversal
    cout << "Reverse Traversal: ";
    for (int i = n - 1; i >= 0; i--) cout << arr[i] << " ";
    cout << endl;

    // Two-pointer technique
    cout << "Two-Pointer (swap): ";
    int left = 0, right = n - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for (int x : arr) cout << x << " ";
    cout << " (Array reversed!)" << endl << endl;

    // ============================================================
    // 4. SLIDING WINDOW TECHNIQUE
    // ============================================================
    cout << "4. SLIDING WINDOW TECHNIQUE" << endl;
    cout << "---------------------------" << endl;
    cout << "Efficient for subarray/substring problems" << endl << endl;

    int nums[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int size = sizeof(nums) / sizeof(nums[0]);
    int k = 4; // window size

    cout << "Array: ";
    for (int x : nums) cout << x << " ";
    cout << "\nWindow size: " << k << endl;

    // Find max sum of k consecutive elements
    int windowSum = 0;
    for (int i = 0; i < k; i++) windowSum += nums[i];

    int maxSum = windowSum;
    cout << "\nSliding window sums:" << endl;
    cout << "Window [0-" << k-1 << "]: " << windowSum << endl;

    for (int i = k; i < size; i++) {
        windowSum = windowSum - nums[i - k] + nums[i];
        cout << "Window [" << i-k+1 << "-" << i << "]: " << windowSum << endl;
        maxSum = max(maxSum, windowSum);
    }
    cout << "\nMaximum sum of " << k << " consecutive elements: " << maxSum << endl;
    cout << "Time Complexity: O(n) instead of O(n*k)" << endl << endl;

    // ============================================================
    // 5. PREFIX SUM ARRAY
    // ============================================================
    cout << "5. PREFIX SUM ARRAY" << endl;
    cout << "-------------------" << endl;
    cout << "Precompute cumulative sums for O(1) range queries" << endl << endl;

    int data[] = {2, 4, 6, 8, 10};
    int m = sizeof(data) / sizeof(data[0]);

    // Build prefix sum array
    int prefix[m];
    prefix[0] = data[0];
    for (int i = 1; i < m; i++) {
        prefix[i] = prefix[i - 1] + data[i];
    }

    cout << "Original: ";
    for (int x : data) cout << x << " ";
    cout << "\nPrefix:   ";
    for (int x : prefix) cout << x << " ";
    cout << endl;

    // Query sum from index 1 to 3
    int i = 1, j = 3;
    int rangeSum = prefix[j] - (i > 0 ? prefix[i - 1] : 0);
    cout << "\nSum of elements from index " << i << " to " << j << ": " << rangeSum;
    cout << " (Calculated in O(1) time!)" << endl << endl;

    // ============================================================
    // 6. TIME COMPLEXITY COMPARISON
    // ============================================================
    cout << "6. TIME COMPLEXITY SUMMARY" << endl;
    cout << "--------------------------" << endl;
    cout << "Operation          | Static Array | Dynamic Array |" << endl;
    cout << "-------------------|--------------|---------------|" << endl;
    cout << "Access (index)     | O(1)         | O(1)          |" << endl;
    cout << "Search             | O(n)         | O(n)          |" << endl;
    cout << "Insert (at end)    | N/A          | O(1)*         |" << endl;
    cout << "Insert (at middle) | N/A          | O(n)          |" << endl;
    cout << "Delete             | N/A          | O(n)          |" << endl;
    cout << "* Amortized - occasional resizing needed" << endl << endl;

    cout << "==========================================" << endl;
    cout << "Key Takeaways:" << endl;
    cout << "- Dynamic arrays provide flexibility over static arrays" << endl;
    cout << "- Multi-dimensional arrays are useful for grid/matrix problems" << endl;
    cout << "- Sliding window optimizes subarray problems" << endl;
    cout << "- Prefix sum enables fast range sum queries" << endl;
    cout << "==========================================" << endl;

    return 0;
}
