#include <iostream>
#include <algorithm> // For std::max
using namespace std;

int normalMaxSum(int arr[], int n) {
    int res = arr[0], maxEnding = arr[0];
    for (int i = 1; i < n; i++) {
        maxEnding = max(arr[i], maxEnding + arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int overallMaxSum(int arr[], int n) {
    int max_normal = normalMaxSum(arr, n); // Normal Sum
    if (max_normal < 0)
        return max_normal;
    
    // Circular Sum
    int arr_sum = 0;
    for (int i = 0; i < n; i++) {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular = arr_sum + normalMaxSum(arr, n);
    return max(max_normal, max_circular);
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size should be positive." << endl;
        return 1;
    }

    int* arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = overallMaxSum(arr, n);
    cout << "Maximum sum of a circular subarray is: " << result << endl;

    delete[] arr; // Free allocated memory
    return 0;
}

