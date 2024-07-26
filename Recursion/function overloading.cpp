#include <iostream>
#include <cmath> // For M_PI constant if needed for circle area

using namespace std;

// Function to calculate area of a circle
void area(int r) {
    double circleArea = M_PI * r * r;
    cout << "Area of the circle: " << circleArea << endl;
}

// Function to calculate area of a rectangle
void area(int l, int b) {
    int rectangleArea = l * b;
    cout << "Area of the rectangle: " << rectangleArea << endl;
}

int main() {
    int r, l, b;
    int choice;

    cout << "Enter 1 for area of circle or 2 for area of rectangle: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the radius of the circle: ";
            cin >> r;
            area(r);
            break;
        case 2:
            cout << "Enter the length and breadth of the rectangle: ";
            cin >> l >> b;
            area(l, b);
            break;
        default:
            cout << "Please enter a valid choice (1 or 2)." << endl;
            break;
    }

    return 0;
}
