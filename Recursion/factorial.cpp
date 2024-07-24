#include<iostream>
using namespace std;

class Facto {
    int x, n;
public:
    void init();
    void getInput();
    void calculate();
    void show();
};

void Facto::init() {
    n = 1;
}

void Facto::getInput() {
    cout << "Please enter the number to calculate factorial: ";
    cin >> x;
}

void Facto::calculate() {
    for (int i = 1; i <= x; ++i) {
        n = n * i;
    }
}

void Facto::show() {
    cout << "The factorial of " << x << " is " << n << endl;
}

int main() {
    Facto f;
    f.init();
    f.getInput();
    f.calculate();
    f.show();

    return 0;
}

