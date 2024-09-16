#include <iostream>
using namespace std;

void findMaxTillPrevious(int arr[], int n) {
    int maxSoFar = arr[0];  

    // Loop starts from the second element
    for (int i = 1; i < n; i++) {
        cout << "Max till element " << i << ": " << maxSoFar << endl;
        
        // Update maxSoFar if current element is greater
        if (arr[i] > maxSoFar) {
            maxSoFar = arr[i];
        }
    }
}

int main() {
    int arr[] = {3, 5, 2, 8, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMaxTillPrevious(arr, n);

    return 0;
}

