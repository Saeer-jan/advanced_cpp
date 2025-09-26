/*Theory

In C++, constructors are special functions that are automatically called when an object is created.
Destructor is called automatically when the object is destroyed.

Types of constructors:

Default Constructor – No arguments, initializes data with default values.

Parameterized Constructor – Takes arguments and initializes data.

Copy Constructor – Makes a copy of an object.

Destructor:

Begins with ~ClassName().

Cleans up when object is no longer needed.*/

#include <iostream>
using namespace std;

class Box {
    float length, width, height;

public:
    // 1. Default Constructor
    Box() {
        length = width = height = 0;
        cout << "Default Constructor called!" << endl;
    }

    // 2. Parameterized Constructor
    Box(float l, float w, float h) {
        length = l;
        width = w;
        height = h;
        cout << "Parameterized Constructor called!" << endl;
    }

    // 3. Copy Constructor
    Box(const Box &b) {
        length = b.length;
        width = b.width;
        height = b.height;
        cout << "Copy Constructor called!" << endl;
    }

    void display() {
        cout << "Length: " << length
             << ", Width: " << width
             << ", Height: " << height
             << ", Volume: " << length * width * height << endl;
    }

    // 4. Destructor
    ~Box() {
        cout << "Destructor called for Box!" << endl;
    }
};

int main() {
    cout << "\nCreating object b1 using Default Constructor:\n";
    Box b1;
    b1.display();

    cout << "\nCreating object b2 using Parameterized Constructor:\n";
    Box b2(3, 4, 5);
    b2.display();

    cout << "\nCreating object b3 using Copy Constructor (copy of b2):\n";
    Box b3(b2);
    b3.display();

    cout << "\nEnd of program - destructors will now be called automatically.\n";
    return 0;
}
/*Procedure

Open C++ compiler/IDE

Create file lab5.cpp

Write program given below

Compile and run

Observe how constructors & destructor are called*/