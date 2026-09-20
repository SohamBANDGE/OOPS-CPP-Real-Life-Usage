#include <iostream>

using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor" << endl;
    }

    ~Base() {
        cout << "Base destructor" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor" << endl;
    }

    ~Derived() {
        cout << "Derived destructor" << endl;
    }
};

int main() {
    Derived object;

    return 0;
}
