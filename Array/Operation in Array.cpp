#include <iostream>
using namespace std;

// Function to insert an element into an array
int insert(int arr[], int n, int x, int cap, int pos) {
    // Check if the array is at full capacity
    if (n == cap) {
        return n; // No insertion possible, return current size
    }

    int idx = pos - 1; // Convert position to 0-based index

    // Shift elements to the right to make space for the new element
    for (int i = n - 1; i >= idx; i--) {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x; // Insert the new element

    return (n + 1); // Return the new size of the array
}

int main() {
    int n, cap, x, pos;

    // Input the initial number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input the capacity of the array
    cout << "Enter the capacity of the array: ";
    cin >> cap;

    // Check if the capacity is greater than or equal to the number of elements
    if (cap < n) {
        cout << "Capacity should be greater than or equal to the number of elements." << endl;
        return 1; // Exit with error code
    }

    int* arr = new int[cap]; // Dynamically allocate an array of size 'cap'

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Input the element to insert and its position
    cout << "Enter the element to insert: ";
    cin >> x;
    cout << "Enter the position to insert the element (1-based index): ";
    cin >> pos;

    // Check if the position is valid
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position. Position should be between 1 and " << (n + 1) << "." << endl;
        delete[] arr;
        return 1; // Exit with error code
    }

    // Call the insert function and get the new size
    n = insert(arr, n, x, cap, pos);

    // Output the updated array
    cout << "Updated array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] arr;

    return 0;
}

