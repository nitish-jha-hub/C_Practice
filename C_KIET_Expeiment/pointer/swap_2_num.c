#include "stdio.h"
void swap(int *pa, int *pb){
    int temp;
    temp = *pb;
    *pb = *pa;
    *pa = temp;
    printf("after swaping a = %d and b = %d" , *pa,*pb);

}

int main(){
    int a=10 , b=20;
    int *pa = &a;
    int *pb = &b;
    swap(pa,pb);
    return 0;
}