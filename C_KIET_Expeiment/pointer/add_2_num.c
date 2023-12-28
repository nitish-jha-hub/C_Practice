#include "stdio.h"

int main(){
    int *p1,*p2;

    int a = 10;
    int b = 11;
    p1 = &a;
    p2 = &b;
    int sum = *p1 + *p2;
    printf("%d",sum);
    return 0;
}