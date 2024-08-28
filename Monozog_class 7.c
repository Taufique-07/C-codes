#include <stdio.h>

int main() {
    int numbers[4];

    printf("Enter 4 integer numbers:\n");

    for (int i = 0; i < 4; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 4; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d is Even\n", numbers[i]);
        } else {
            printf("%d is Odd\n", numbers[i]);
        }
    }

    return 0;
}
