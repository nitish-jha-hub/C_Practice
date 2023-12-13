#include <stdio.h>
#include <ctype.h>

// Function to convert a string to lowercase
void toLowercase(char *str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char inputString[100];

    // Input from the user
    printf("Enter a string: ");
    gets(inputString);

    // Convert the string to lowercase
    toLowercase(inputString);

    // Display the lowercase string
    printf("Lowercase string: %s\n", inputString);

    return 0;
}
