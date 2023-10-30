#include<stdio.h>

int add(int,int);   // we have to initialize with arguments data type, if function if we write function below where we call it

int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter Second number: ");
    scanf("%d",&b);
    // add(a,b);

    printf("addition is %d",add(a,b));

return 0;
};

int add(int a, int b){
    printf("add function is executing\n");
    return a+b;
};