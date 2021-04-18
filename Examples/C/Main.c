#include "stdio.h"

#include "Library.h"

int main()
{
    int num1 = 1;
    int num2 = 2;

    printf("Added: %g\n", Add(num1, num2));
    printf("Subtracted: %g\n", Subtract(num1, num2));
    printf("Multiplied: %g\n", Multiply(num1, num2));
    printf("Divided: %g\n", Divide(num1, num2));
}
