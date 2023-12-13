#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

void prime()
{
    int n;
    bool flag = true;
    printf("Enter the number: \n");
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false;
        };
    };
    if (flag)
    {
        printf("%d is a prime Number", n);
    }
    else
    {
        printf("%d is not a prime Number", n);
    };
};

void armstrong()
{
    int n;
    printf("Enter Number: \n");
    scanf("%d", &n);
    int digit = 0, lastdigit, result = 0;
    int dup1 = n;
    int dup2 = n;
    while (dup1 > 0)
    {
        dup1 = dup1 / 10;
        digit = digit + 1;
    }
    while (dup2 > 0)
    {
        lastdigit = dup2 % 10;
        result += pow(lastdigit, digit);
        dup2 = dup2 / 10;
    }
    if(result ==n){
        printf("%d is a armstrong number",n);
    }
    else{
        printf("%d is not a armstrong number",n);
    }
}

int main(){
    int num;
    printf("choose 1 for prime number: \n");
    printf("choose 2 for armstrong number: \n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        prime();
        break;
    case 2:
        armstrong();
        break;
    
    default:
        printf("Not a valid choice");
        break;
    }
    return 0 ;

}