#include <iostream>
#include <string>
using namespace std;

void permute(string s, int i=0) {
    // Base case: if i is at the end of the string, print the permutation
    if (i == s.length() - 1) {
        cout << s << endl;
    } else {
        for (int j = i; j < s.length(); ++j) {
            swap(s[i], s[j]); // Swap characters at index i and j
            permute(s, i + 1); // Recursively permute the remaining characters
            swap(s[i], s[j]); // Swap back to restore the original string
        }
    }
}

int main() {
    string s;

    // Input the string
    cout << "Enter a string: ";
    cin >> s;

    // Generate and print all permutations of the string
    cout << "Permutations of the string are:" << endl;
    permute(s);

    return 0;
}

