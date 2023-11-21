#include <stdio.h>

int factorial(int);
int XpowerY();

int main()
{
    int number;
    printf("Enter number to find factorial: \n");
    scanf("%d", &number);
    printf("the factorial is %d", factorial(number));
    printf("",XpowerY());


    return 0;
}

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
}

int XpowerY()
{
    int x, y;
    int o = 0;
    printf("Enter base: \n");
    scanf("%d", &x);
    printf("Enter power: \n");
    scanf("%d", &y);
    for(int i=1;i>=y;i++){
       y=y*x;
       printf("%d",o);
    }
    printf("%d to the power %d is =  %d",x,y,o);
}