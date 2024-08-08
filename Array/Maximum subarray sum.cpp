#include <iostream>
#include <algorithm> // For std::max

using namespace std;

int maxSum(int arr[], int size) {
    int res = arr[0];
    int maxEnding = arr[0];
    
    for (int i = 1; i < size; i++) {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    
    return res;
}

int main() {
    // Example usage
    int arr[] = {1, -2, 3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Maximum sum of a contiguous subarray: " << maxSum(arr, size) << endl;
    
    return 0;
}

