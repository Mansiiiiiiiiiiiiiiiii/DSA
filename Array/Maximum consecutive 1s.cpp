#include <iostream>
#include <algorithm> // For std::max

using namespace std;

int maxConsecutiveOnes(int arr[], int n) {
    int res = 0;  // To store the maximum count of consecutive 1s
    int curr = 0; // To store the current count of consecutive 1s
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            curr = 0; // Reset the current count when a 0 is encountered
        } else {
            curr++; // Increment the count of consecutive 1s
            res = max(res, curr); // Update the result if the current count is higher
        }
    }
    
    return res; // Return the maximum count of consecutive 1s
}

int main() {
    // Example usage
    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Maximum consecutive 1s: " << maxConsecutiveOnes(arr, n) << endl;
    
    return 0;
}

