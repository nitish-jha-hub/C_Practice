#include <stdio.h>

int main() {
    int decimalNumber;

    // Input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Using %o format specifier to print octal equivalent
    printf("Octal equivalent: %o\n", decimalNumber);

    return 0;
}
