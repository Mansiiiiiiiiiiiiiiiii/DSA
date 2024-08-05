#include<iostream>
using namespace std;

// Function prototypes
void leftRotate(int arr[], int n, int d);
void reverse(int arr[], int low, int high);

// Main function
int main() {
    int n, d;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    cout << "Enter the number of positions to left rotate: ";
    cin >> d;
    
    // Rotate the array
    leftRotate(arr, n, d);
    
    // Print the rotated array
    cout << "Rotated array:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

// Function to perform left rotation of array
void leftRotate(int arr[], int n, int d){
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}

// Function to reverse subarray arr[low..high]
void reverse(int arr[], int low, int high){
    while(low < high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

