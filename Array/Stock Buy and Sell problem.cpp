#include <iostream>
using namespace std;

int maxProfit(int price[], int n) {
    int profit = 0;
    for (int i = 1; i < n; i++) {
        if (price[i] > price[i - 1]) {
            profit += (price[i] - price[i - 1]);
        }
    }
    return profit;
}

int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of days must be greater than 0." << endl;
        return 1;
    }

    int* price = new int[n];

    cout << "Enter the stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    int result = maxProfit(price, n);
    cout << "Maximum profit: " << result << endl;

    delete[] price;  // Free the dynamically allocated memory
    return 0;
}

