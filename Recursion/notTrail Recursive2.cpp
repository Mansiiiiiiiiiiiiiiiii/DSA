#include <iostream>
using namespace std;

// Function prototype
int fact(int n);

int main() {
    int n;
    cout << "Enter a non-negative integer to calculate its factorial: ";
    cin >> n;

    // Input validation
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate factorial using the fact function
        int factorial = fact(n);
        cout << "Factorial of " << n << " is: " << factorial << endl;
    }

    return 0;
}

// Recursive function to calculate factorial
int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

