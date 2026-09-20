#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string registrationNumber;

public:
    Vehicle(string registration) {
        registrationNumber = registration;
    }

    void start() {
        cout << "Vehicle " << registrationNumber << " started" << endl;
    }
};

class Car : public Vehicle {
public:
    Car(string registration) : Vehicle(registration) {
    }

    void openBoot() {
        cout << "Car boot opened" << endl;
    }
};

class Bike : public Vehicle {
public:
    Bike(string registration) : Vehicle(registration) {
    }

    void helmetReminder() {
        cout << "Please wear a helmet" << endl;
    }
};

int main() {

    Car car("MH12AB1234");
    Bike bike("MH12CD5678");

    car.start();
    car.openBoot();

    bike.start();
    bike.helmetReminder();

    return 0;
}
