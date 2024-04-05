#include <stdio.h>
int main(){
    char str[21] = "ABCDE";
    char str2[21];
    char *p = str;
    char *p1 = str2;
    while (*p1 ='\0')
    {
        *p = *p1;
         p++;
        *p1++;
    }
    printf("%s", str2);
    return 0;
}