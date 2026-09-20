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
};

class Student : public Person {
private:
    int rollNumber;

public:
    Student(string studentName, int roll) : Person(studentName) {
        rollNumber = roll;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {

    Student student("Kiran", 24);

    student.display();

    return 0;
}
