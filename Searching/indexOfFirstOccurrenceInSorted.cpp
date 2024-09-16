#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else {
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1; // Return -1 if element is not found
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    int result = firstOcc(arr, n, x);
    if (result != -1)
        cout << "First occurrence of " << x << " is at index " << result << endl;
    else
        cout << x << " not found in the array" << endl;
    return 0;
}

