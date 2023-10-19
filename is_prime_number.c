#include "stdio.h"
int main(){
    int num;
    int i;
    int factor =0;
    printf("enter any positive number: ");
    scanf("%d",&num);

    for (i=2;i<num;i++){
        if (num%i ==0 ){
        factor++;
        }
    }
    
    if (factor ==0 && num!=0 && num!=1){
    printf("Number is Prime");
    }
    else{
        printf("number is not a prime Number");
    }
    
    
return 0;    
}