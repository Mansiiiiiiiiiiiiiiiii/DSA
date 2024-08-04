#include <iostream>
using namespace std;

// Function to reverse the array
void reverse(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low < high) {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

int main() {
    // Define an array for testing
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reverse the array
    reverse(arr, n);

    // Display the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

