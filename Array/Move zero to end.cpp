#include <iostream>
using namespace std;

// Function to move all zeros in an array to the end
void moveZeros(int arr[], int n){
    int count = 0; // Count of non-zero elements
    
    // Traverse the array
    for(int i = 0; i < n; i++){
        // If the current element is non-zero, swap it with the element at index 'count'
        if(arr[i] != 0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main(){
    // Example usage
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the function to move zeros to the end
    moveZeros(arr, n);

    cout << "Modified Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

