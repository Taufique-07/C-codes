#include<stdio.h>

int main()
{
    int n;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter %d integers:\n", n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("Sum of the %d integers is: %d\n", n, sum);

    return 0;
}
