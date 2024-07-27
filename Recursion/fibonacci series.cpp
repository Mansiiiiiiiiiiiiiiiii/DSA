#include <iostream>
using namespace std;

// Function to compute the nth Fibonacci number
int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;

    // Prompt the user to enter the Fibonacci number they want
    cout << "Enter the position (n) for the Fibonacci sequence: ";
    cin >> n;

    // Check for valid input
    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        // Call the Fibonacci function and display the result
        cout << "Fibonacci number at position " << n << " is " << fib(n) << endl;
    }

    return 0;
}

