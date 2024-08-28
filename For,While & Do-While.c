#include <stdio.h>

int main() {
    int number;

    do {
        printf("Please enter a number between 5 and 12: ");
        scanf("%d", &number);

        if (number < 5 || number > 12) {
            printf("Invalid input. Please try again.\n");
        }
    } while (number < 5 || number > 12);

     int i;
    for (i = 1; i <= number; i++) {
        printf("%d\n", i * 2);
    }
    printf("\n");
    return 0;
}

