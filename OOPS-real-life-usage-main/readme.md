# OOPs - Real Life Usage

This repository contains the C++ programs completed as part of the **Unit II C++ Programming / OOPs activity**.

The programs demonstrate the use of Object-Oriented Programming concepts such as classes, objects, inheritance, abstraction, polymorphism, virtual functions, and other C++ concepts through simple real-life examples.

## Student Details

| Details              | Information                          |
| -------------------- | ------------------------------------ |
| **Student Name**     | Abhishek Sapkale                     |
| **Roll no.**             | AD2152                              |
| **PRN**              | 125UAD1349                     |
| **Class / Division** | SY B.Tech AI & DS – Div A            |
| **Course Name**      | Object Oriented Programming with C++ |
| **Unit**             | Unit I, II, III                              |

---

## Unit I – Programs

### 1. Smart Farm Sensor Monitor

A farm monitoring program that stores soil moisture readings from multiple field sensors. Each sensor keeps its ID, moisture level, and recording time, and its reading can be updated when new data arrives.

**Concepts used:**

- Classes and Objects
- Encapsulation (private data members)
- Constructors
- Constant member functions
- STL Vector

### 2. Student Attendance Tracker

An attendance program that records whether a student was present in each class and calculates the attendance percentage from total and attended classes.

**Concepts used:**

- Classes and Objects
- Encapsulation
- Constructors
- Constant member functions
- Derived value calculation (attendance percentage)

### 3. Product Inventory Manager

An inventory program that stores product details such as ID, name, price, and stock, and keeps a live count of the total number of products.

**Concepts used:**

- Classes and Objects
- Constructors and Destructors
- Getter functions
- Static data members
- Static member functions
- Constant member functions

### MINI_PROJECT : Smart Home Manager

A menu-driven smart home manager that controls devices such as Smart Light, Thermostat, Security Camera, and Door Lock. The user can view a home dashboard, switch devices ON or OFF, and change a device's status using its device ID.

**Concepts used:**

- Inheritance
- Protected members
- Virtual functions
- Function overriding
- Runtime polymorphism
- Virtual destructor
- Dynamic memory allocation
- Menu-driven programming

---

## Unit II – Programs

### 1. Employee Payroll System

A payroll program with an abstract Employee base class and three employee types: Full-Time, Part-Time, and Intern. Each type calculates pay differently: fixed monthly salary, hourly rate multiplied by hours worked, or a monthly stipend.

**Concepts used:**

- Classes and Objects
- Inheritance
- Encapsulation
- Constructors with initializer lists
- Abstract classes
- Pure virtual functions
- Function overriding
- Salary calculation

### 2. Payment Gateway System

A payment system demonstrating an abstract base class and different payment methods such as Credit Card, UPI, and Net Banking, all managed through a vector of smart pointers.

**Concepts used:**

- Abstraction
- Abstract classes
- Pure virtual functions
- Inheritance
- Function overriding
- Runtime polymorphism
- Virtual destructor
- Smart pointers
- STL Vector

### 3. Vehicle Fleet Management

A fleet management program containing vehicles such as Truck, Delivery Van, and Delivery Bike. Each vehicle displays its own details through overridden functions, and the fleet is stored as a vector of smart pointers.

**Concepts used:**

- Inheritance
- Protected members
- Function overriding
- Virtual functions
- Runtime polymorphism
- Virtual destructor
- Smart pointers
- STL Vector

### MINI_PROJECT : Banking System

A menu-driven banking system with Savings, Current, and Fixed Deposit accounts. The user enters account details, selects an account type, and performs deposit, withdrawal, account information display, and interest calculation. Interest is 4% for savings, none for current, and 7% per year for fixed deposit.

**Concepts used:**

- Inheritance
- Abstraction
- Abstract classes
- Pure virtual functions
- Virtual functions
- Runtime polymorphism
- Virtual destructor
- Dynamic memory allocation
- Menu-driven programming

---

## Unit III – Programs

### 1. Shape Area System

A shape area calculator with an abstract Shape base class and derived shapes: Circle, Rectangle, and Triangle. Each shape reports its own details and calculates its area through runtime polymorphism.

**Concepts used:**

- Abstraction
- Abstract classes
- Pure virtual functions
- Inheritance
- Function overriding
- Runtime polymorphism
- Virtual destructor
- Smart pointers
- STL Vector

### 2. Complex Number Operations

A complex number program that overloads operators so complex numbers can be added, subtracted, multiplied, and compared using natural syntax such as `num1 + num2`.

**Concepts used:**

- Operator overloading (`+`, `-`, `*`, `==`)
- Constructors with default arguments
- Constant member functions
- Returning objects by value

### 3. Data Checker

A validation utility class that checks real-life input rules: marks between 0 and 100, transaction amounts within a valid range, and names containing only letters and spaces.

**Concepts used:**

- Classes and Objects
- Input validation
- String handling
- Character functions (`isalpha`)
- Range-based for loop
- Constant member functions

### MINI_PROJECT : Media Player

A media player simulation with Audio, Video, and Image types built on a common Media base class. Each type responds to play, pause, stop, and show-details operations in its own way.

**Concepts used:**

- Inheritance
- Protected members
- Virtual functions
- Function overriding
- Runtime polymorphism
- Virtual destructor
- Dynamic memory allocation
- STL Vector of base class pointers

---

## Concepts Covered

### Unit I

- Classes and Objects
- Encapsulation
- Constructors and Destructors
- Constant Member Functions
- Static Data Members and Static Member Functions
- Inheritance and Protected Members
- Virtual Functions and Function Overriding
- Dynamic Memory Allocation
- STL Vector

### Unit II

- Inheritance
- Abstraction
- Abstract Classes and Pure Virtual Functions
- Function Overriding
- Runtime Polymorphism
- Virtual Destructor
- Smart Pointers
- STL Vector
- Dynamic Memory Allocation

### Unit III

- Abstract Classes and Pure Virtual Functions
- Runtime Polymorphism
- Operator Overloading
- Default Arguments
- Input Validation and String Handling
- Smart Pointers
- Dynamic Memory Allocation
- Real-life application of OOP concepts
---

## Repository Structure

```text
OOPS-real-life-usage/
│
├── README.md
├── .gitignore
│
├── Unit_1/
│   │
│   ├── Program_01/
│   ├── Program_02/
│   ├── Program_03/
│   └── mini_project/
│
├── Unit_2/
│   │
│   ├── Program_01/
│   ├── Program_02/
│   ├── Program_03/
│   └── mini_project/
│
└── Unit_3/
    │
    ├── Program_01/
    ├── Program_02/
    ├── Program_03/
    └── mini_project/
```

Each program contains its corresponding C++ source code.

---

## How to Run

1. Clone or download this repository.
2. Open the required `.cpp` file.
3. Compile the program using a C++ compiler.
4. Run the generated executable.

Example:

```bash
g++ program.cpp -o program
./program
```

---

## Purpose

The purpose of this repository is to implement and understand **Object-Oriented Programming concepts in C++ using real-life examples** as part of the Unit II C++ programming activity.
