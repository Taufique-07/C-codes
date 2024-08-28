#include <stdio.h>

int main() {
    double A, B;

    scanf("%lf %lf", &A, &B);

    double increase = ((B - A) / A) * 100.0;

    printf("%.2lf%%\n", increase);

    return 0;
}

