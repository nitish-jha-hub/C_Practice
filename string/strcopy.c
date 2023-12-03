#include "stdio.h"
#include "string.h"

int main(){
    char str1[] = {"abcder"};
    char str2[] = "";
    printf("%s",strcpy(str2,str1));
    return 0;
}