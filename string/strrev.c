#include "stdio.h"

void revstr(char *data);
char string1[] = {"my name is Nitish"};

int main()
{
    revstr(string1);
    return 0;
}

void revstr(char *data)
{
    if (*data)
    {
        revstr(data + 1);
        printf("%c", *data);
    }
}

// reverse str using function recursion and pointer