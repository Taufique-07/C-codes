#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
	        // Print spaces to center the asterisks
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Print the left half of the pyramid (asterisks with spaces in between)
        for (int j = 1; j <= i; j++) {
            if (j == i) {
                printf("*");
            } else {
                printf("* ");
            }
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}

