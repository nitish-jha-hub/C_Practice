#include <stdio.h>

int main() {
    int decimalNumber;

    // Input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Using %x format specifier to print hexadecimal equivalent
    printf("Hexadecimal equivalent: %x\n", decimalNumber);

    return 0;
}
