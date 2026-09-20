#include <iostream>

using namespace std;

class Academic {
public:
    void display() {
        cout << "Academic information" << endl;
    }
};

class Sports {
public:
    void display() {
        cout << "Sports information" << endl;
    }
};

class Student : public Academic, public Sports {
public:
    void displayAll() {
        Academic::display();
        Sports::display();
    }
};

int main() {
    Student student;

    student.Academic::display();
    student.Sports::display();

    student.displayAll();

    return 0;
}
