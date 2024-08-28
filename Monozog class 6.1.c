#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) { //line

        for (int k = 1; k <= n - i; k++) {//1
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("1 ");
        }

        printf("\n");
    }

    return 0;
}

