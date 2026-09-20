#include <iostream>

using namespace std;

class Shape {
public:
    virtual double area() = 0;

    virtual ~Shape() {
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double givenLength, double givenWidth) {
        length = givenLength;
        width = givenWidth;
    }

    double area() override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double givenRadius) {
        radius = givenRadius;
    }

    double area() override {
        return 3.14159 * radius * radius;
    }
};

int main() {

    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.0);

    cout << "Rectangle Area: " << rectangle.area() << endl;
    cout << "Circle Area: " << circle.area() << endl;

    return 0;
}
