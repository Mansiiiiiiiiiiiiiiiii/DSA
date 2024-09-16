#include <bits/stdc++.h>
using namespace std;

bool checkDuplicates(vector<int> &arr) {
    for(int i = 0; i < arr.size(); i++)
        for(int j = i + 1; j < arr.size(); j++)
            if(arr[i] == arr[j]) return true;
    return false;
}

int main () {
    vector<int> arr({4, 5, 6, 4}); // Correctly initializing the vector using braces
    cout << (checkDuplicates(arr) ? "true" : "false") << endl;
    return 0;
}

