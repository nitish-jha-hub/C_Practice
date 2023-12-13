#include <stdio.h>
#include <ctype.h>

// Function to check if a character is an uppercase letter
int isUpper(char ch) {
    return (ch >= 'A' && ch <= 'Z');
}

int main() {
    char character;

    // Input from the user
    printf("Enter a character: ");
    scanf(" %c", &character);

    // Check if the character is an uppercase letter and display the result
    if (isUpper(character)) {
        printf("%c is an uppercase letter.\n", character);
    } else {
        printf("%c is not an uppercase letter.\n", character);
    }

    return 0;
}
