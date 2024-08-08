#include<iostream>
using namespace std;

// Function to calculate maximum difference
int maxDiff(int arr[], int n) {
    if (n < 2) {
        return 0; // Not enough elements to find a difference
    }

    int res = arr[1] - arr[0];
    int minVal = arr[0];
    
    for(int j = 1; j < n; j++) {
        res = max(res, arr[j] - minVal);
        minVal = min(minVal, arr[j]);
    }
    
    return res;
}

int main() {
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Maximum difference is " << maxDiff(arr, n) << endl;
    
    return 0;
}

