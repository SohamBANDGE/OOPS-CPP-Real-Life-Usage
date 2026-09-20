#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int employeeId;
    string name;

public:
    Employee(int id, string employeeName) {
        employeeId = id;
        name = employeeName;
    }

    virtual double calculateSalary() = 0;

    void displayBasicDetails() {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
    }

    virtual ~Employee() {}
};

class PermanentEmployee : public Employee {
private:
    double basicSalary;
    double allowance;

public:
    PermanentEmployee(int id, string employeeName, double basic, double extra)
        : Employee(id, employeeName) {
        
        basicSalary = basic;
        allowance = extra;
    }

    double calculateSalary() override {
        return basicSalary + allowance;
    }
};

class ContractEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    ContractEmployee(int id, string employeeName, double rate, int hours)
        : Employee(id, employeeName) {
        
        hourlyRate = rate;
        hoursWorked = hours;
    }

    double calculateSalary() override {
        return hourlyRate * hoursWorked;
    }
};

void displayPaySlip(Employee& employee) {
    employee.displayBasicDetails();
    cout << "Salary: " << employee.calculateSalary() << endl << endl;
}

int main() {
    PermanentEmployee permanentEmployee(101, "Asha", 40000.0, 8000.0);

    ContractEmployee contractEmployee(102, "Vikas", 500.0, 80);

    displayPaySlip(permanentEmployee);
    displayPaySlip(contractEmployee);

    return 0;
}
