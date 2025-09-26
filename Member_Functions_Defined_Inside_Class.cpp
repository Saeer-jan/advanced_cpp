/*Description

This program uses a class Circle with:

Data members: radius

Functions (inside class):

input() – take radius

area() – calculate area

circumference() – calculate circumference

display() – show results*/

#include <iostream>
using namespace std;

class Circle {
    float radius;

public:
    void input() { 
        cout << "Enter radius: ";
        cin >> radius;
    }

    float area() { 
        return 3.14159 * radius * radius;
    }

    float circumference() { 
        return 2 * 3.14159 * radius;
    }

    void display() {
        cout << "\nCircle Details:";
        cout << "\nRadius: " << radius;
        cout << "\nArea: " << area();
        cout << "\nCircumference: " << circumference() << endl;
    }
};

int main() {
    Circle c;
    c.input();
    c.display();
    return 0;
}
/*Procedure

Open your C++ compiler

Create lab3.cpp

Write the program given below

Compile and run

Enter radius and check area & circumference*/