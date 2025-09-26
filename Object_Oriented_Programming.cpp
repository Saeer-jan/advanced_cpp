/*Description

We will create a class Student that stores:

Name

Roll number

Marks in three subjects

Then, we will calculate:

Total marks

Average marks

Grade (A/B/C)

This will use class, object, data members, member functions and show the power of OOP with more code.*/

#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int roll;
    float marks[3];
    float total, average;
    char grade;

public:
    void input() {
        cout << "\nEnter Student Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter marks in 3 subjects: ";
        total = 0;
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
            total += marks[i];
        }
    }

    void calculate() {
        average = total / 3;
        if (average >= 80)
            grade = 'A';
        else if (average >= 60)
            grade = 'B';
        else
            grade = 'C';
    }

    void display() {
        cout << "\n--- Student Report ---";
        cout << "\nName: " << name;
        cout << "\nRoll: " << roll;
        cout << "\nTotal Marks: " << total;
        cout << "\nAverage: " << average;
        cout << "\nGrade: " << grade << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n]; // array of objects

    for (int i = 0; i < n; i++) {
        cout << "\nEnter data for student " << i + 1 << ":";
        s[i].input();
        s[i].calculate();
    }

    cout << "\n===== Student Records =====\n";
    for (int i = 0; i < n; i++) {
        s[i].display();
    }

    return 0;
}
/* Procedure

Open compiler/IDE and create lab2.cpp.

Write the program code below.

Compile and run.

Enter data for multiple students.

Check if program shows total, average, and grade correctly.*/