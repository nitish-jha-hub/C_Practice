#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[]="abcd";
    char str2[]="abcc";
    printf("%d",strcmp(str1,str2));
    return 0;
}