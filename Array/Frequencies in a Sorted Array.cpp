#include <iostream>
using namespace std;

void printFreq(int arr[], int n) {
    if (n == 0) 
	return;  // Handle edge case where array size is 0
    
    int freq = 1;
    int i = 1;
    
    while (i < n) {
        while (i < n && arr[i] == arr[i - 1]) {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << endl;
        freq = 1;
        i++;
    }
    
    if (n == 1 || arr[n - 1] != arr[n - 2]) {
        cout << arr[n - 1] << " " << 1 << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }

    int* arr = new int[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printFreq(arr, n);

    delete[] arr;  // Free the dynamically allocated memory
    return 0;
}

