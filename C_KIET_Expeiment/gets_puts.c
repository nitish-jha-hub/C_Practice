#include <stdio.h>

int main() {
    char inputString[101];

    // Input from the user using gets
    printf("Enter a string: ");
    gets(inputString);

    // Display the input string using puts
    printf("You entered: ");
    puts(inputString);

    return 0;
}
