# include <stdio.h>

// create function to find factorial
int factorial(int num){
    if (num ==0 || num ==1)
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }    
}


int main(){
    int num;
// Take Input from user
    printf("Enter any Number to find factorial: ");
    scanf("%d",&num);
    printf("The factorial is %d",factorial(num));    
    return 0;
}