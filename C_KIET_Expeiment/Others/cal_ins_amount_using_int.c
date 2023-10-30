#include "stdio.h"
int main()
{

    int age;
    int amount;
    int gender, smoker;

    printf("Enter Your Age: \n");
    scanf("%d", &age);

    printf("Are you female? 1 fo female: \n");
    scanf("%d", &gender);

    printf("Do you Smoke? if yes press 1  \n");
    scanf("%d", &smoker);

    if (age >= 21 && age <= 30)
    {
        amount = 10000;
    }
    else if (age >= 31 && age <= 40)
    {
        amount = 15000;
    }
    else if (age >= 41 && age <= 50)
    {
        amount = 20000;
    }
    else if (age >= 51 && age <= 60)
    {
        amount = 40000;
    }
    else
    {
        printf("insurance not possible");
    }

    if (gender == 1 && smoker == 1)
    {
        int female_amount = amount - (amount * 0.1);
        int f_smo_amo = female_amount + (amount * 0.1);
        printf("insuance amount is: %d ", f_smo_amo);
    }
    else if (gender == 1)
    {
        int female_amount = amount - (amount * 0.1);
        printf("insuance amount is: %d ", female_amount);
    }
    else if ( smoker == 1)
    {
        float smoker_amount = amount + (amount * 0.1);
        printf("insuance amount is: %d ", smoker_amount);
    }
    else
    {
        printf("insuance amount is: %d ", amount);
    }

    return 0;
}