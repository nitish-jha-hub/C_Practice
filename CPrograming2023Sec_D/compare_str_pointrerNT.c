#include <stdio.h>
int main(){
    char str[20] = "Nitish";
    char str2[20] = "Nitish";
    char *p  = str;
    char *p1 = str2;
    int flag = 1;
    while (*p != '\0' && *p1 !='\0'){
        if (*p == *p1){
            flag = 0;
            break;
        }
    }
    if (flag = 0)
    {
        printf("same string");
    }
    else{
        printf("Not Same");
    }
    return 0;
}