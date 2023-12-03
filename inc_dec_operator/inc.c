#include <stdio.h>

int main(){
    int i = 0;
    int b = (i++ + ++i )+ (i++ + ++i) + ++i;
    printf("%d", b);

    return 0 ;
}