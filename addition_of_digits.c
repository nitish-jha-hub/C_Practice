#include "stdio.h"
int main(){
    int num;
    int sum = 0;
    int m;
    printf("Enter any numer:");
    scanf("%d",&num);
    while (num>0)
    {
        m=num%10;
        sum = sum+m;
        num=num/10;
        // printf("%d\n",num);
        // printf("%d\n",m);

    }
    printf("sum is = %d",sum);
    
return 0;
}