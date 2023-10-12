#include "stdio.h"
// #include <conio.h>

int main() {
    int num1, num2, sum;
    // clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum of %d and %d is %d", num1, num2, sum);
    // getch();
    return 0;
}
