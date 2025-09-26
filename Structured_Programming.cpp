/* In this program, we will write a small program using structured programming.
We will take two numbers from the user, find their sum, and check if the sum is even or odd.
This will use input/output, selection, and sequence. */

#include <iostream>
using namespace std;

int main() {
    int a, b, sum;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    sum = a + b;
    cout << "Sum = " << sum << endl;

    if (sum % 2 == 0)
        cout << "The sum is Even." << endl;
    else
        cout << "The sum is Odd." << endl;

    return 0;
}
