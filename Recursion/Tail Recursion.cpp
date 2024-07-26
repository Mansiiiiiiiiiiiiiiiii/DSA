#include<iostream>
using namespace std;

// Function definition for fun
void fun(int n) {
    start:
        if (n == 0)
            return;
        cout << n << " ";
        n = n - 1;
        goto start;
}

// Main function where program execution begins
int main() {
    int num;

    // Prompt user for input
    cout << "Enter a number: ";
    cin >> num;

    // Call fun with user-provided input
    fun(num);

    cout << endl; // Ensure newline after output for clarity

    return 0; // Return 0 to indicate successful execution
}

