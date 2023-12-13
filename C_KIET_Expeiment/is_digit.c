#include <stdio.h>
#include <ctype.h>

// Function to check if a character is a digit
int isDigit(char ch) {
    return isdigit(ch);
}

int main() {
    char character;

    // Input from the user
    printf("Enter a character: ");
    scanf(" %c", &character);

    // Check if the character is a digit and display the result
    if (isDigit(character)) {
        printf("%c is a digit.\n", character);
    } else {
        printf("%c is not a digit.\n", character);
    }

    return 0;
}
