#include "stdio.h"
int main(){    
    char cha ;
    printf("Enter any alphabet:");
    scanf("%c",&cha);
    
    if (cha == 'a'|| cha == 'e' || cha == 'i' || cha == 'o' || cha == 'u' || cha == 'A'|| cha == 'E' || cha == 'I' || cha == 'O' || cha == 'U')
    {
        printf("Entered Alphabet is vowels");
    }
    else
    {
        printf("Entered alphabet is Consonent");
    }
return 0;
}