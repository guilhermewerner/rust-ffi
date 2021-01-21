// Copyright (c) TribuFu. All Rights Reserved

#include <iostream>

#include "Library.h"

using namespace std;

extern float Add(float Num1, float Num2);
extern float Divide(float Num1, float Num2);
extern float Multiply(float Num1, float Num2);
extern float Subtract(float Num1, float Num2);

int main()
{
    cout << "Rust Calculator" << "\n\n";

    int num1 = 1;
    int num2 = 2;

    float added = Library::Add(num1, num2);
    float subtracted = Library::Subtract(num1, num2);
    float multiplied = Library::Multiply(num1, num2);
    float divided = Library::Divide(num1, num2);

    cout << "Added: " << added << "\n";
    cout << "Subtracted: " << subtracted << "\n";
    cout << "Multiplied: " << multiplied << "\n";
    cout << "Divided: " << divided << "\n";

    system("PAUSE");
}
