# include<iostream>
using namespace std;
void fun(int n) {
	if (n==0)
	return;
	fun(n-1);
	cout<<n;
}
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
