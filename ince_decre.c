#include "stdio.h"
int main(){
    int a = 1;
    int b; 

        // b=++a;
        // b=a++;        
        // b=++a + ++a;
        // b=a++;
        // b=(++a + a++);
        // printf("%d\n%d",a,b);
        
       
    int i = 5;
    float f = 3.14;
    char c = 'a';

    printf("Size of i: %lu\n", sizeof(i));
    printf("Size of f: %lu\n", sizeof(f));
    printf("Size of c: %lu\n", sizeof(c));

    // printf("Type of i: %s\n", Type(i));  //type of data not working
    // printf("Type of f: %s\n", Type(f));
    // printf("Type of c: %s\n", Type(c));

return 0;
}