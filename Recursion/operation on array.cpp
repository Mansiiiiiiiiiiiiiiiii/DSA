#include <iostream>
using namespace std;

// Function to perform linear search
int search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i; // Element found at index i
    }
    return -1; // Element not found
}

int main() {
    int n, x;

    // Input the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int* arr = new int[n]; // Dynamically allocate an array of size n

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Input the element to search for
    cout << "Enter the element to search for: ";
    cin >> x;

    // Call the search function and get the result
    int result = search(arr, n, x);

    // Output the result
    if (result != -1) {
        cout << "Element " << x << " found at index " << result << "." << endl;
    } else {
        cout << "Element " << x << " not found in the array." << endl;
    }

    // Free the allocated memory
    delete[] arr;

    return 0;
}

