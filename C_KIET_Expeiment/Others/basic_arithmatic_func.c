#include "stdio.h"
float a,b;

float add(float a, float b)
{
    return (a + b);
}

float subs(float a, float b)
{
    printf("The substraction of %f an %f is= %f \n", a, b, (a - b));
    return a-b;
}

float divide(float a, float b)
{
    printf("The quotient of %f an %f is= %f \n", a, b, (a / b));
}

float mul(float a, float b)
{
    printf("The multiplication of %f an %f is= %f \n", a, b, (a * b));
}

int main()
{
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    
    printf("the sum of a and b is= %f \n", add(a,b));
    printf("the substraction of a and b is= %f \n", subs(a,b));
    subs(a,b);
    divide(a,b);
    mul(a,b);
    return 0;
}
