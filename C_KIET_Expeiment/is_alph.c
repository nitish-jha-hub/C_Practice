#include <stdio.h>
#include <ctype.h>

// Function to check if a character is an alphabet letter
int isAlphabet(char ch) {
    return isalpha(ch);
}

int main() {
    char character;

    // Input from the user
    printf("Enter a character: ");
    scanf(" %c", &character);

    // Check if the character is an alphabet letter and display the result
    if (isAlphabet(character)) {
        printf("%c is an alphabet letter.\n", character);
    } else {
        printf("%c is not an alphabet letter.\n", character);
    }

    return 0;
}
