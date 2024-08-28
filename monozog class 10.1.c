#include<stdio.h>

int main()
{
    int n;
    printf("Enter your array size : ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}

