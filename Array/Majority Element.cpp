#include <iostream>
using namespace std;

int findMajority(int arr[], int n) {
    int res = 0, count = 1;

    // Phase 1: Find the candidate for the majority element
    for (int i = 1; i < n; i++) {
        if (arr[res] == arr[i])
            count++;
        else
            count--;
        
        if (count == 0) {
            res = i;
            count = 1;
        }
    }

    // Phase 2: Verify if the candidate is actually the majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[res] == arr[i])
            count++;
    }

    // Check if the count of the candidate is more than n/2
    if (count > n / 2)
        return arr[res];
    else
        return -1;
}

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int majorityElement = findMajority(arr, n);
    
    if (majorityElement != -1)
        cout << "The majority element is " << majorityElement << endl;
    else
        cout << "There is no majority element." << endl;
    
    return 0;
}

