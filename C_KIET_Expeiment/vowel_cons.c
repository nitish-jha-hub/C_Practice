#include "stdio.h"
int main(){    
    char cha ;
    printf("Enter any Albhabet:");
    scanf("%c",&cha);
    
    if (cha == 'a'|| cha == 'e' || cha == 'i' || cha == 'o' || cha == 'u' || cha == 'A'|| cha == 'E' || cha == 'I' || cha == 'O' || cha == 'U')
    {
        printf("number is vowels");
    }
    else
    {
        printf("Number is Consonent");
    }
}