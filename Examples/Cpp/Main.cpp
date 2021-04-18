#include <iostream>

#include "Library.h"

using namespace std;

int main()
{
    // Hello
    char *result = Library::Hello("C++");

    cout << result << "\n";

    Library::DeallocString(result);

    // Operations

    int num1 = 1;
    int num2 = 2;

    cout << "Added: " << Library::Add(num1, num2) << "\n";
    cout << "Subtracted: " << Library::Subtract(num1, num2) << "\n";
    cout << "Multiplied: " << Library::Multiply(num1, num2) << "\n";
    cout << "Divided: " << Library::Divide(num1, num2) << "\n";
}
