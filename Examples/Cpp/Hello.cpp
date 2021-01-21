#include <iostream>

#include "Library.h"

using namespace std;

extern float Add(float Num1, float Num2);
extern float Divide(float Num1, float Num2);
extern float Multiply(float Num1, float Num2);
extern float Subtract(float Num1, float Num2);

int main()
{
    cout << "Rust Library" << "\n\n";

    int num1 = 1;
    int num2 = 2;

    cout << "Added: " << Library::Add(num1, num2) << "\n";
    cout << "Subtracted: " << Library::Subtract(num1, num2) << "\n";
    cout << "Multiplied: " << Library::Multiply(num1, num2) << "\n";
    cout << "Divided: " << Library::Divide(num1, num2) << "\n";

    cout << "\n";
}
