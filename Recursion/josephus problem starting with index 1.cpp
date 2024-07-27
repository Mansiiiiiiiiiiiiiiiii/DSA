#include <iostream>
using namespace std;

// Function to compute the 0-based index of the last remaining person
int jos(int n, int k) {
    if (n == 1)
        return 0;
    else
        return (jos(n - 1, k) + k) % n;
}

// Function to compute the 1-based index of the last remaining person
int myJos(int n, int k) {
    return jos(n, k) + 1;
}

int main() {
    int n, k;
    cout << "Enter the number of people: ";
    cin >> n;
    cout << "Enter the step count (k): ";
    cin >> k;

    // Calculate the position of the last remaining person
    int position = myJos(n, k);

    // Output the result
    cout << "The position of the last remaining person is: " << position << endl;

    return 0;
}

