#include <stdio.h>

int factorial(int);
int main(){
    int number;
    printf("Enter number to find factorial: \n");
    scanf("%d",&number);    
   

return 0;   
}

int factorial(int number){
    if (number == 0 || number == 1)
    {
        return 1 ;
    }
    else {
        return number*factorial(number-1);
    }
    
}