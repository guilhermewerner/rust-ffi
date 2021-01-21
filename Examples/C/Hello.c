#include "stdio.h"

#include "Library.h"

extern float Add(float Num1, float Num2);
extern float Divide(float Num1, float Num2);
extern float Multiply(float Num1, float Num2);
extern float Subtract(float Num1, float Num2);

int main()
{
    printf("Rust Library\n");

    int num1 = 1;
    int num2 = 2;

    printf("\nAdded: %f", Add(num1, num2));
    printf("\nSubtracted: %f", Subtract(num1, num2));
    printf("\nMultiplied: %f", Multiply(num1, num2));
    printf("\nDivided: %f", Divide(num1, num2));

    printf("\n\n");
}
