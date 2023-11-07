#include <stdio.h>

int add(int, int); // we have to initialize with arguments data type, if function if we write function below where we call it
int subs(int, int);
int mul(int, int);
int div(int, int);
int mod(int, int);

int main()
{
    int a, b;
    char operation;
    printf("Enter first number: \n");
    scanf("%d", &a);
    printf("Enter Second number: \n");
    scanf("%d", &b);
    fflush(stdin);
    printf("Enter operation that have to perform +, -, *, /, %  \n");
    scanf("%c", &operation);

    switch (operation)
    {
    case '+':
    {
        printf("addition is %d", add(a, b));
    }
    break;
    case '-':
    {
        printf("substraction is %d", subs(a, b));
    }
    break;
    case '*':
    {
        printf("multliplication is %d", mul(a, b));
    }
    break;
    case '/':
    {
        printf("quotient is %d", div(a, b));
    }
    break;
    case '%':
    {
        printf("modulus is %d", mod(a, b));
    }
    break;

    default:
        printf("Not a valid choice");
        break;
    }

    // add(a,b);

    // printf("addition is %d",add(a,b));
    // printf("addition is %d",subs(a,b));
    // printf("multiplication is %d",mul(a,b));
    // printf("quotioent is %d",div(a,b));

    return 0;
}

int add(int a, int b)
{
    printf("add function is executing\n");
    return a + b;
};
int subs(int a, int b)
{
    printf("add function is executing\n");
    return a - b;
};
int mul(int a, int b)
{
    printf("add function is executing\n");
    return a * b;
};
int div(int a, int b)
{
    printf("add function is executing\n");
    return a / b;
};
int mod(int a, int b)
{
    printf("add function is executing\n");
    return a % b;
};