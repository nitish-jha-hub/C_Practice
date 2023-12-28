#include <stdio.h>

int factoria(int n)
{
    if (n = 1)
    {
        return 1;
    }
    return factoria(n - 1) * n;
}

int fib(int n)
{
    if (n = 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
void printfib(int n)
{
    for (int i = 0; i < n; i++)
    {
        // printf("%d ", printfib(i));
    }
    printf("\n");
}

int ackermann(int m,int n){
    if (m == 0){
        return n+1;
    }
    else if (n==0){
        return ackermann(m-1, 1);
    }
    else {
        return ackermann (m-1,ackermann(m,n-1));
    }
}
int main(){
    int num;
    printf("Enter a positive number: ");
    scanf("%d",&num);
    printf("factoria is %d \n",factoria(num));
    printf("fibonacci sequence up to %d ",num);
    printfib(num);
    int result = ackermann(0,num);
    

}
