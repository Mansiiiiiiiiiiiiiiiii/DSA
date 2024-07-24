#include<iostream>
#include<cstring>
using namespace std;

class Employee{
    int age;
    char name[20];
    float salary;
public:
    // Constructor to initialize an Employee object
    Employee(int a, const char* p, float b) {
        age = a;
        salary = b;
        strcpy(name, p);
    }

    void show() {
        cout << age << "," << name << "," << salary << endl;
    }
};

int main() {
    // Creating objects M and N using constructor
    Employee M(21, "Mansi", 250000);
    M.show();

    Employee N(22, "Kumari", 230000);
    N.show();

    return 0;
}

