#include <iostream>
using namespace std;

int countSubSets(int arr[], int n, int sum) {
    if (n == 0)
        return (sum == 0) ? 1 : 0;
    return countSubSets(arr, n - 1, sum) + countSubSets(arr, n - 1, sum - arr[n - 1]);
}

int main() {
    int n, sum;

    // Input the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    
    // Input the array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Input the target sum
    cout << "Enter the target sum: ";
    cin >> sum;

    // Calculate the number of subsets with the given sum
    int result = countSubSets(arr, n, sum);

    // Output the result
    cout << "The number of subsets with sum " << sum << " is: " << result << endl;

    return 0;
}

