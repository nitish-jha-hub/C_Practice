#include <stdio.h>

int main() {
    int numbers[15] = {1, 1, 2, 2, 2, 3, 4, 5, 6, 6, 7, 7, 7, 8, 9};
    int i, j, k;
    int duplicates[15] = {0};

    for (i = 0; i < 15; i++) {
        for (j = i + 1; j < 15; j++) {
            if (numbers[i] == numbers[j]) {
                for (k = 0; k < 15; k++) {
                    if (duplicates[k] == numbers[i]) {
                        break;
                    }
                    if (duplicates[k] == 0) {
                        duplicates[k] = numbers[i];
                        break;
                    }
                }
            }
        }
    }

    for (i = 0; i < 15; i++) {
        if (duplicates[i] != 0) {
            int count = 0;
            for (j = 0; j < 15; j++) {
                if (numbers[j] == duplicates[i]) {
                    count++;
                }
            }
            printf("Number %d appears %d times\n", duplicates[i], count);
        }
    }

    return 0;
}
