#include "stdio.h"
int main(){

    int age;
    int amount=10000;
    char gender;
    char smoker;

    printf("Enter Your Age: \n");
    scanf("%d",&age);
    fflush(stdin);
    printf("Are you female(y/n): \n");
    scanf("%c",&gender);
    printf("Do you Smoke(y/n): \n");
    scanf("%c",&smoker);

    int gender_benifit=amount+(amount*0.1);
    int smoker_loss_female= gender_benifit-(gender_benifit*0.1);
    int smoker_loss_male = amount - (amount*0.1);
    
    
    if (age>=21 && age<=30)
    {        
        if (gender =='y' && smoker =='y')
        {            
            printf("amount is %d",smoker_loss_female);
        }
        else if (gender =='y')
        {
            printf("amount is %d",gender_benifit);
        }
        else
        {
            printf("amount is %d",amount);
        }        
        
    }
    else if (age>=31 && age<=40)
    {
        if (gender =='y' && smoker =='y')
        {            
            printf("amount is %d",smoker_loss_female);
        }
        else if (gender =='y')
        {
            printf("amount is %d",gender_benifit);
        }
        else
        {
            printf("amount is %d",amount);
        }        
        
    }
    else if (age>=41 && age<=50)
    {
        if (gender =='y' && smoker =='y')
        {            
            printf("amount is %d",smoker_loss_female);
        }
        else if (gender =='y')
        {
            printf("amount is %d",gender_benifit);
        }
        else
        {
            printf("amount is %d",amount);
        }        
        
    }
    else if (age>=51 && age<=60)
    {
        if (gender =='y' && smoker =='y')
        {            
            printf("amount is %d",smoker_loss_female);
        }
        else if (gender =='y')
        {
            printf("amount is %d",gender_benifit);
        }
        else
        {
            printf("amount is %d",amount);
        }        
        
    }
    else
    {
        printf("insurance not possible");
    }
return 0;
}