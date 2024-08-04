#include <iostream>
#include <vector>
using namespace std;

// Function that returns a pointer to an array of integers
int* allocateArray() {
    int* arr = new int[100]; // Allocate memory for 100 integers
    return arr;
}

// Function that returns a vector of integers
vector<int> createVector() {
    vector<int> v; // Create an empty vector
    return v;
}

int main() {
    // Call the function to allocate an array and use its result
    int* arr = allocateArray(); // Allocate memory for 100 integers

    // Example: Initialize and print first few elements of the array
    for (int i = 0; i < 10; ++i) {
        arr[i] = i * 10; // Initialize array elements
        cout << arr[i] << " "; // Print array elements
    }
    cout << endl;

    // Remember to free the allocated memory
    delete[] arr;

    // Call the function to create a vector and use its result
    vector<int> v = createVector(); // Create an empty vector

    // Example: Add some elements to the vector and print them
    for (int i = 0; i < 10; ++i) {
        v.push_back(i * 10); // Add elements to the vector
        cout << v[i] << " "; // Print vector elements
    }
    cout << endl;

    return 0;
}

