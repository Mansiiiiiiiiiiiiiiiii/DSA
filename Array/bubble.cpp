#include <iostream>
using namespace std;

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    // Traverse through all elements of the array
    for (int i = 0; i < n-1; i++) {
        // Last i elements are already in place, so ignore them
        for (int j = 0; j < n-i-1; j++) {
            // Swap if the current element is greater than the next one
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the bubble sort function
    bubbleSort(arr, n);

    // Print the sorted array
    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}

