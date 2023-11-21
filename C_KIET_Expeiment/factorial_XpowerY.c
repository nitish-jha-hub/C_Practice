#include <stdio.h>
int factorial(int);

int main()
{
    int num;
    printf("Ente any number to find factoial \n");
    scanf("%d", &num);
    printf("factorial is %d", factorial(num));
}

int factorial(int num)
{
    if (num == 0 || num == 1)
    {
       return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}