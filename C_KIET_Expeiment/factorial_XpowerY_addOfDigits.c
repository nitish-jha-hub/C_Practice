#include <stdio.h>
#include <conio.h>
#include <math.h>

int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
};

int add_digit(int number)
{
    int add = 0;
    for (int i = 0; i < number;)
    {
        add += number % 10;
        number = number / 10;
    }
    return add;
};

void power()
{
    int x, y, result;

    printf("Enter base : \n");
    scanf("%d", &x);

    printf("Enter power : \n");
    scanf("%d", &y);
    result = pow(x, y);
    printf("%d", result);
};

int main()
{
    int num;
    printf("choose operation to perform: \n 1 for factorial \n 2 for sum of digit \n 3 for power");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
    {
        int number;
        printf("Enter number to find factorial : \n");
        scanf("%d", &number);

        printf("Factorial is %d", factorial(number));
    }
    break;
    case 2:{
        int number;
        printf("Enter number to find sum of digits : \n");
        scanf("%d", &number);
        printf("sum of digit is %d", add_digit(number));
    }
    break;
    case 3:
        power();
        break;

    default:
        printf("Invalid input");
        break;
    }
    return 0;
}