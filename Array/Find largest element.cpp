#include <iostream>
using namespace std;

int getLargest(int arr[], int n) {
    int res = 0; // Assume the first element is the largest initially
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[res]) { // Compare with arr[res] instead of arr[j]
            res = i; // Update index of the largest element
        }
    }
    return res; // Return the index of the largest element
}

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Array size should be greater than 0." << endl;
        return 1; // Return with error code
    }
    
    int arr[n];
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int index = getLargest(arr, n);
    
    cout << "The largest element is at index " << index << " and its value is " << arr[index] << "." << endl;
    
    return 0;
}

