#include <iostream>

using namespace std;

class Vehicle {
public:
    virtual void move() {
        cout << "Vehicle is moving" << endl;
    }

    virtual ~Vehicle() {
    }
};

class Car : public Vehicle {
public:
    void move() override {
        cout << "Car moves on roads" << endl;
    }
};

class Boat : public Vehicle {
public:
    void move() override {
        cout << "Boat moves on water" << endl;
    }
};

int main() {

    Car car;
    Boat boat;

    car.move();
    boat.move();

    return 0;
}
