#include <iostream>
using namespace std;

// Function to check if the array is sorted
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Define arrays for testing
    int sortedArray[] = {1, 2, 3, 4, 5};
    int unsortedArray[] = {1, 3, 2, 4, 5};
    
    // Calculate the number of elements in each array
    int sortedSize = sizeof(sortedArray) / sizeof(sortedArray[0]);
    int unsortedSize = sizeof(unsortedArray) / sizeof(unsortedArray[0]);
    
    // Check if the arrays are sorted and print the results
    cout << "The sortedArray is " << (isSorted(sortedArray, sortedSize) ? "sorted" : "not sorted") << "." << endl;
    cout << "The unsortedArray is " << (isSorted(unsortedArray, unsortedSize) ? "sorted" : "not sorted") << "." << endl;
    
    return 0;
}

