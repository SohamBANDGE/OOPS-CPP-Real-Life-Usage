#include <iostream>

using namespace std;

class Academic {
protected:
    int academicMarks;

public:
    Academic(int marks) {
        academicMarks = marks;
    }

    void showAcademic() {
        cout << "Academic Marks: " << academicMarks << endl;
    }
};

class Sports {
protected:
    int sportsMarks;

public:
    Sports(int marks) {
        sportsMarks = marks;
    }

    void showSports() {
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

class Student : public Academic, public Sports {
public:
    Student(int academic, int sports)
        : Academic(academic), Sports(sports) {
    }

    void showTotal() {
        cout << "Total Marks: "
             << academicMarks + sportsMarks << endl;
    }
};

int main() {

    Student student(80, 15);

    student.showAcademic();
    student.showSports();
    student.showTotal();

    return 0;
}
