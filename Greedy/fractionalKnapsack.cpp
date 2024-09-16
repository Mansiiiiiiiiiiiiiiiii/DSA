#include<iostream>
#include<algorithm>
using namespace std;

// Comparator function to sort items by value/weight ratio
bool myCmp(pair<int,int> a, pair<int,int> b){
    double r1 = (double)a.first / a.second;
    double r2 = (double)b.first / b.second;
    return r1 > r2;  // Sort in decreasing order of value per weight
}

double fknap(int w, pair<int,int> arr[], int n) {
    // Sort items by value/weight ratio
    sort(arr, arr+n, myCmp);
    
    double res = 0.0; // To store the final maximum value
    
    // Loop through all items
    for(int i = 0; i < n; i++) {
        // If the item can be fully taken
        if(arr[i].second <= w) {
            res += arr[i].first;  // Add full value of the item
            w -= arr[i].second;   // Subtract the weight
        }
        else {
            // Take the fraction of the remaining item
            res += arr[i].first * ((double)w / arr[i].second); 
            break;  // Knapsack is full
        }
    }
    
    return res;
}

int main() {
    int n = 3, w = 50;
    pair<int, int> arr[] = {{60, 10}, {100, 20}, {120, 30}};
    
    cout << "Maximum value in Knapsack: " << fknap(w, arr, n);
    return 0;
}

