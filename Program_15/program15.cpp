#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string registrationNumber;
    double ratePerDay;

public:
    Vehicle(string registration, double rate) {
        registrationNumber = registration;
        ratePerDay = rate;
    }

    virtual double calculateRent(int days) {
        return ratePerDay * days;
    }

    virtual void display() {
        cout << "Registration: " << registrationNumber << endl;
        cout << "Rate per day: " << ratePerDay << endl;
    }

    virtual ~Vehicle() {
    }
};

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car(string registration, double rate, int doors)
        : Vehicle(registration, rate) {
        numberOfDoors = doors;
    }

    void display() override {
        Vehicle::display();

        cout << "Doors: " << numberOfDoors << endl;
    }
};

class Bike : public Vehicle {
private:
    int engineCapacity;

public:
    Bike(string registration, double rate, int capacity)
        : Vehicle(registration, rate) {
        engineCapacity = capacity;
    }

    double calculateRent(int days) override {
        return ratePerDay * days * 0.9;
    }

    void display() override {
        Vehicle::display();

        cout << "Engine Capacity: "
             << engineCapacity << " cc" << endl;
    }
};

int main() {

    Car car("MH12AB1234", 2000.0, 5);

    Bike bike("MH12CD5678", 800.0, 150);

    cout << "Car Details" << endl;

    car.display();

    cout << "Rent for 3 days: "
         << car.calculateRent(3) << endl << endl;

    cout << "Bike Details" << endl;

    bike.display();

    cout << "Rent for 3 days: "
         << bike.calculateRent(3) << endl;

    return 0;
}
