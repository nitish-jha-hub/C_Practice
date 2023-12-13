#include <stdio.h>

int factorial(int number){
    if (number ==0 || number == 1){
        return 1;
    }
    else{
        return number * factorial(number-1);
    }
}

int main(){
    int number;
    printf("Enter the number to find factorial \n");
    scanf("%d",&number);
    printf("factorial is %d",factorial(number));

    return 0;
}