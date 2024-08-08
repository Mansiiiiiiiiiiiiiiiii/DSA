#include <iostream>
#include <algorithm> // for max and min functions
using namespace std;

int getWater(int arr[], int n) {
    int res = 0;
    int lMax[n], rMax[n];

    lMax[0] = arr[0];
    for (int i = 1; i < n; i++)
        lMax[i] = max(arr[i], lMax[i - 1]);

    rMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        rMax[i] = max(arr[i], rMax[i + 1]);

    for (int i = 1; i < n - 1; i++)
        res += min(lMax[i], rMax[i]) - arr[i];

    return res;
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

    cout << "Enter the elevation map (space-separated integers): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = getWater(arr, n);
    cout << "Amount of water that can be trapped: " << result << " units." << endl;

    delete[] arr;  // Free the dynamically allocated memory
    return 0;
}

