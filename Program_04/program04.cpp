#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;

public:
    Person(string personName) {
        name = personName;
    }

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;

public:
    Student(string studentName, int roll) : Person(studentName) {
        rollNumber = roll;
    }

    void displayStudent() {
        displayName();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student student("Amit", 101);

    student.displayStudent();

    return 0;
}
