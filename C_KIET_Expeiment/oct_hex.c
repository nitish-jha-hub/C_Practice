#include <stdio.h>

int main() {
    int octalNumber;

    // Input from the user in octal
    printf("Enter an octal number: ");
    scanf("%o", &octalNumber);

    // Using %x format specifier to print hexadecimal equivalent
    printf("Hexadecimal equivalent: %x\n", octalNumber);

    return 0;
}
