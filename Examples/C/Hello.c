// Copyright (c) TribuFu. All Rights Reserved

#include "stdio.h"

#include "Library.h"

extern float Add(float Num1, float Num2);
extern float Divide(float Num1, float Num2);
extern float Multiply(float Num1, float Num2);
extern float Subtract(float Num1, float Num2);

int main()
{
    printf("Rust Calculator\n");

    int num1 = 1;
    int num2 = 2;

    float added = Add(num1, num2);
    float subtracted = Subtract(num1, num2);
    float multiplied = Multiply(num1, num2);
    float divided = Divide(num1, num2);

    printf("\nAdded: %f", added);
    printf("\nSubtracted: %f", subtracted);
    printf("\nMultiplied: %f", multiplied);
    printf("\nDivided: %f", divided);

    while (1)
    {
    }

    system("PAUSE");
}
