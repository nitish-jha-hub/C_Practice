#include "stdio.h"
#include "string.h"

char str1[] = "abcd";
char str2[] = "efgh";
void main()
{
    printf("%s", strcat(str1, str2));
}