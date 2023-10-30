#include "stdio.h"
int main(){

    int age;
    float amount;
    char gender;
    char smoker;

    printf("Enter Your Age: \n");
    scanf("%d",&age);
    fflush(stdin);
    printf("Gender?(f/m): \n");
    scanf("%c",&gender);
    fflush(stdin);
    printf("Do you Smoke?(y/n): \n");
    scanf("%c",&smoker);
    
    
    if (age>=21 && age<=30)
    {  
        amount = 10000.0f;        
    }
    else if (age>=31 && age<=40)
    { 
        amount = 15000.0f;
    }
    else if (age>=41 && age<=50)
    {   
        amount = 20000.0f;            
    }
    else if (age>=51 && age<=60)
    {   
        amount = 40000.0f;  
    }
    else
    {
        printf("insurance not possible");
    }

    // printf("%f",amount);

    if ((gender == 'f' || gender =='F') && (smoker == 'y' ||  smoker == 'Y'))
    {
        float female_amount = amount - (amount * 0.1);
        float f_smo_amo = female_amount + (amount * 0.1);
        printf("insuance amount is: %f ", f_smo_amo);
    }
    else if (gender == 'f' || gender == 'F')
    {
        float female_amount = amount - (amount * 0.1);
        printf("insuance amount is: %f: ", female_amount);
    }
    else if ( smoker == 'y' || smoker == 'Y')
    {
        float smoker_amount = amount + (amount * 0.1);
        printf("insuance amount is: %f: ", smoker_amount);
    }
    else
    {
        printf("insuance amount is: %f: ", amount);
    }

    
return 0;
}