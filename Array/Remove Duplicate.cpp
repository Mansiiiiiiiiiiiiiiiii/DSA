#include <iostream>
using namespace std;

// Function to remove duplicates from a sorted array and return the new size
int remDups(int arr[], int n) {
    if (n == 0) 
	return 0; // Handle empty array case

    int res = 1; // The first element is always unique
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[res - 1]) {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main() {
    // Define a sorted array with duplicates for testing
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Remove duplicates
    int newSize = remDups(arr, n);

    // Display the array after removing duplicates
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

