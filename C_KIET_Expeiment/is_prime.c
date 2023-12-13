#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false; // 0 and 1 are not prime numbers
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false; // If the number is divisible by any i, it's not prime
        }
    }

    return true; // If no divisors are found, the number is prime
}

int main() {
    int num;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime and display the result
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
