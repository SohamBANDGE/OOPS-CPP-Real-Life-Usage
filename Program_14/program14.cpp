#include <iostream>
#include <string>

using namespace std;

class University {
public:

    class Department {
    private:
        string name;

    public:
        Department(string departmentName) {
            name = departmentName;
        }

        void display() {
            cout << "Department: " << name << endl;
        }
    };
};

int main() {

    University::Department department(
        "Artificial Intelligence and Data Science"
    );

    department.display();

    return 0;
}
