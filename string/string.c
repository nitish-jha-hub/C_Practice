#include <stdio.h>
// #include <string.h>

int Strlen(char []);
void removewhitespace(char []);

char name[] = "Nitish";
char name3[] = "he is a good boy";

int main()
{
    char name1[11] = "123456";
    // printf("%s",name1);
    // printf("size of name is %d: ",sizeof(name1));    //print size + 1(for last '\o' null value) || size defined at aray
    // printf("strlength of name is %d: ",strlen(name1));  //print exact string length excluding null('\o') at last
    printf("string lenth using while loop is : %d", Strlen(name));
    removewhitespace(name3);

    return 0;
}

// now we are goting to find string length without string package. with the help of looping
int Strlen(char name[])
{
    // printf("%s",name);
    int i = 0;
    while (name[i] != '\0')
    {
        // printf("%c", name[i]);
        // printf("%d", i);
        i++;
    }
    return i;
}

// now remove whitespace from string through function
void removewhitespace(char name[])
{
    int i = 0;
    while (name[i] != '\0')
    {
        if (name[i] != ' ')
        {
            printf("%c", name[i]);
        }
        i++;
    }
}