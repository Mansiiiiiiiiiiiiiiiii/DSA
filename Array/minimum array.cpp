#include <bits/stdc++.h>
using namespace std;

int findMinDifference(vector<int> &arr) {
    sort(arr.begin(), arr.end()); // Step 1: Sort the array
    int minDiff = INT_MAX; // Initialize with a large value

    // Step 2: Find the minimum difference between consecutive elements
    for (int i = 1; i < arr.size(); i++) {
        int diff = arr[i] - arr[i - 1];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    return minDiff;
}

int main() {
    vector<int> arr = {3, 8, 15, 2, 6, 9};
    cout << "Minimum difference: " << findMinDifference(arr) << endl;
    return 0;
}

