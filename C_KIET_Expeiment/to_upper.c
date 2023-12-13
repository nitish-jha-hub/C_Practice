#include <stdio.h>
#include <ctype.h>

// Function to convert a string to uppercase
void toUppercase(char *str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char inputString[100];

    // Input from the user
    printf("Enter a string: ");
    gets(inputString);

    // Convert the string to uppercase
    toUppercase(inputString);

    // Display the uppercase string
    printf("Uppercase string: %s\n", inputString);

    return 0;
}
