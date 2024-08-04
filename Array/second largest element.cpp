#include <iostream>
using namespace std;

// Function to find the index of the second largest element
int secondLargest(int arr[], int n){
    int res = -1, largest = 0;
    
    for (int i = 1; i < n; i++){
        if (arr[i] > arr[largest]){
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest]){
            if (res == -1 || arr[i] > arr[res])
                res = i;
        }
    }
    
    return res;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int secondLargestIndex = secondLargest(arr, n);
    
    if (secondLargestIndex == -1) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "Index of the second largest element: " << secondLargestIndex << endl;
    }
    
    return 0;
}

