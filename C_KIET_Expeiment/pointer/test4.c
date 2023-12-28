#include "stdio.h"
    void mystery(int *pa,int *pb){
    printf("%p,%p\n",pa,pb);
    // printf("%p,%p\n",*pa,*pb);
        int *temp;
        temp = pb;
        pb = pa;
        pa = temp;
    printf("%p,%p\n",pa,pb);
    }
int main(){
    int a=2016, b=0, c=4, d=42;
    
    // printf("%p,%p\n",&a,&b);
    mystery(&a,&b);
    if(a<c){
        mystery(&c, &a);
    printf("%d,%p\n",a,&a);
    }
    mystery(&a,&d);
    // printf("%d,%p,\n",a,&a);
}