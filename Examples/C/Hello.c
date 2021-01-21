#include "stdio.h"

#include "Library.h"

extern float Add(float Num1, float Num2);
extern float Divide(float Num1, float Num2);
extern float Multiply(float Num1, float Num2);
extern float Subtract(float Num1, float Num2);

int main()
{
    int num1 = 1;
    int num2 = 2;

    printf("Added: %f\n", Add(num1, num2));
    printf("Subtracted: %f\n", Subtract(num1, num2));
    printf("Multiplied: %f\n", Multiply(num1, num2));
    printf("Divided: %f\n", Divide(num1, num2));
}
