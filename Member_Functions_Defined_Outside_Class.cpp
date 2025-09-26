/*Description

This program uses a class Rectangle with:

Data members: length, width

Functions (outside class):

input() – take length & width

area() – calculate area

perimeter() – calculate perimeter

display() – show result*/

#include <iostream>
using namespace std;

class Rectangle {
    float length, width;

public:
    void input();
    float area();
    float perimeter();
    void display();
};

// Function definitions outside the class using ::
void Rectangle::input() {
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
}

float Rectangle::area() {
    return length * width;
}

float Rectangle::perimeter() {
    return 2 * (length + width);
}

void Rectangle::display() {
    cout << "\nRectangle Details:";
    cout << "\nLength: " << length;
    cout << "\nWidth: " << width;
    cout << "\nArea: " << area();
    cout << "\nPerimeter: " << perimeter() << endl;
}

int main() {
    Rectangle r;
    r.input();
    r.display();
    return 0;
}
/*Procedure

Open compiler

Create lab4.cpp

Write program given below

Compile and run

Enter values and check output*/