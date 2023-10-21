#include "stdio.h"
int main (){
    int a;
    printf("enter Year:");
    scanf("%d",&a);
    if(a%4==0){
        if (a%100==0 && a%400!=0)
        {
            
        }
        else
        {
            /* code */
        }
        
        printf("%d is a leap year",a);
    }
    else{
        printf("%d is not leap year",a);
    }

return 0;
}