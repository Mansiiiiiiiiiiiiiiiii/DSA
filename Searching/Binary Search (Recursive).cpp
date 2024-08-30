#include <iostream>

using namespace std;

int bSearch(const int arr[], int low, int high, int x) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2; // Avoid potential overflow

    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return bSearch(arr, low, mid - 1, x);
    else
        return bSearch(arr, mid + 1, high, x);
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int x = 10;
    int result = bSearch(arr, 0, n - 1, x);

    if (result == -1)
        cout << "Element is not present in array" << endl;
    else
        cout << "Element is present in array at index " << result << endl;

    return 0;
}

