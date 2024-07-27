#include <iostream>
using namespace std;

// Function to compute the position of the last remaining person
int jos(int n, int k) {
    if (n == 1)
        return 0;  // Base case: Only one person left, they are at index 0
    return (jos(n - 1, k) + k) % n;  // Recursive case
}

int main() {
    int n, k;
    cout << "Enter the number of people: ";
    cin >> n;
    cout << "Enter the step count (k): ";
    cin >> k;

    // Calculate the position of the last remaining person
    int position = jos(n, k);

    // Output the result, converting from 0-based index to 1-based index
    cout << "The position of the last remaining person is: " << (position + 1) << endl;

    return 0;
}

