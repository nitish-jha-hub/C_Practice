#include <stdio.h>

int jumble(int x, int y){
    x=2*x+y;
    return x;
}
int main(){
    int x= 2,y=5;
    y=jumble(y,x);  //12
    x=jumble(y,x);  //26
    printf("%d",x);
    return 0;
}